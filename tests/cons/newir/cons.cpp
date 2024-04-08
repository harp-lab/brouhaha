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

relation* rel__do__free__app__2__2 = new relation(1, false, 2, get_tag_for_rel("do-free-app","2"), std::to_string(get_tag_for_rel("do-free-app","2")) + ".do-free-app.2.table",   FULL);
relation* rel___dollorlst__split__input__1__0 = new relation(1, false, 1, get_tag_for_rel("$lst-split-input","0"), std::to_string(get_tag_for_rel("$lst-split-input","0")) + ".$lst-split-input.1.table",   FULL);
relation* rel___dollorhead__stratified67__2__2 = new relation(1, false, 2, get_tag_for_rel("$head-stratified67","2"), std::to_string(get_tag_for_rel("$head-stratified67","2")) + ".$head-stratified67.2.table",   FULL);
relation* rel___dollorhead__stratified54__3__3__1 = new relation(2, false, 3, get_tag_for_rel("$head-stratified54","3__1"), std::to_string(get_tag_for_rel("$head-stratified54","3__1")) + ".$head-stratified54.3.table",   FULL);
relation* rel__ret__2__1 = new relation(1, false, 2, get_tag_for_rel("ret","1"), std::to_string(get_tag_for_rel("ret","1")) + ".ret.2.table",   FULL);
relation* rel___dollorrule77__inter__body5__3__3__1 = new relation(2, false, 3, get_tag_for_rel("$rule77-inter-body5","3__1"), std::to_string(get_tag_for_rel("$rule77-inter-body5","3__1")) + ".$rule77-inter-body5.3.table",   FULL);
relation* rel___dollorbir__sub19__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$bir-sub19","1__2__3"), std::to_string(get_tag_for_rel("$bir-sub19","1__2__3")) + ".$bir-sub19.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub19","1__2__3")) + ".$bir-sub19.3.table", FULL);
relation* rel___dollorrule46__inter__body1__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule46-inter-body1","1__2__3"), std::to_string(get_tag_for_rel("$rule46-inter-body1","1__2__3")) + ".$rule46-inter-body1.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule46-inter-body1","1__2__3")) + ".$rule46-inter-body1.3.table", FULL);
relation* rel___dollorrule55__inter__body9__9__1__2__3__4__5__6__7__8__9 = new relation(9, true, 9, get_tag_for_rel("$rule55-inter-body9","1__2__3__4__5__6__7__8__9"), std::to_string(get_tag_for_rel("$rule55-inter-body9","1__2__3__4__5__6__7__8__9")) + ".$rule55-inter-body9.9.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule55-inter-body9","1__2__3__4__5__6__7__8__9")) + ".$rule55-inter-body9.9.table", FULL);
relation* rel___dollorrule78__inter__body7__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule78-inter-body7","1__2"), std::to_string(get_tag_for_rel("$rule78-inter-body7","1__2")) + ".$rule78-inter-body7.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule78-inter-body7","1__2")) + ".$rule78-inter-body7.2.table", FULL);
relation* rel__varparam__1__0 = new relation(1, false, 1, get_tag_for_rel("varparam","0"), std::to_string(get_tag_for_rel("varparam","0")) + ".varparam.1.table",   FULL);
relation* rel___dollorinter__head63__5__2__3__1__4 = new relation(4, false, 5, get_tag_for_rel("$inter-head63","2__3__1__4"), std::to_string(get_tag_for_rel("$inter-head63","2__3__1__4")) + ".$inter-head63.5.table",   FULL);
relation* rel__split__at__input__2__1__2 = new relation(2, true, 2, get_tag_for_rel("split-at-input","1__2"), std::to_string(get_tag_for_rel("split-at-input","1__2")) + ".split-at-input.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("split-at-input","1__2")) + ".split-at-input.2.table", FULL);
relation* rel___dollorrule8__inter__body__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule8-inter-body","1"), std::to_string(get_tag_for_rel("$rule8-inter-body","1")) + ".$rule8-inter-body.2.table",   FULL);
relation* rel___dollorhead__stratified1__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$head-stratified1","1__2"), std::to_string(get_tag_for_rel("$head-stratified1","1__2")) + ".$head-stratified1.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified1","1__2")) + ".$head-stratified1.2.table", FULL);
relation* rel___dollorrule76__inter__body5__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule76-inter-body5","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule76-inter-body5","1__2__3__4__5")) + ".$rule76-inter-body5.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule76-inter-body5","1__2__3__4__5")) + ".$rule76-inter-body5.5.table", FULL);
relation* rel___dollorbir__sub9__6__1 = new relation(1, false, 6, get_tag_for_rel("$bir-sub9","1"), std::to_string(get_tag_for_rel("$bir-sub9","1")) + ".$bir-sub9.6.table",   FULL);
relation* rel___dollorrule7__inter__body7__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$rule7-inter-body7","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$rule7-inter-body7","1__2__3__4__5__6__7")) + ".$rule7-inter-body7.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule7-inter-body7","1__2__3__4__5__6__7")) + ".$rule7-inter-body7.7.table", FULL);
relation* rel___dollorrule67__inter__body5__3__1 = new relation(1, false, 3, get_tag_for_rel("$rule67-inter-body5","1"), std::to_string(get_tag_for_rel("$rule67-inter-body5","1")) + ".$rule67-inter-body5.3.table",   FULL);
relation* rel___dollorinter__head18__2__2 = new relation(1, false, 2, get_tag_for_rel("$inter-head18","2"), std::to_string(get_tag_for_rel("$inter-head18","2")) + ".$inter-head18.2.table",   FULL);
relation* rel___dollorinter__head16__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$inter-head16","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$inter-head16","1__2__3__4__5__6__7")) + ".$inter-head16.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head16","1__2__3__4__5__6__7")) + ".$inter-head16.7.table", FULL);
relation* rel___dollorrule59__inter__body5__2__2 = new relation(1, false, 2, get_tag_for_rel("$rule59-inter-body5","2"), std::to_string(get_tag_for_rel("$rule59-inter-body5","2")) + ".$rule59-inter-body5.2.table",   FULL);
relation* rel___dollorbir__sub6__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$bir-sub6","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$bir-sub6","1__2__3__4__5__6__7")) + ".$bir-sub6.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub6","1__2__3__4__5__6__7")) + ".$bir-sub6.7.table", FULL);
relation* rel___dollorrule9__inter__body4__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule9-inter-body4","1__2"), std::to_string(get_tag_for_rel("$rule9-inter-body4","1__2")) + ".$rule9-inter-body4.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule9-inter-body4","1__2")) + ".$rule9-inter-body4.2.table", FULL);
relation* rel___dollorrule55__inter__body8__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule55-inter-body8","3"), std::to_string(get_tag_for_rel("$rule55-inter-body8","3")) + ".$rule55-inter-body8.3.table",   FULL);
relation* rel___dollorinter__head44__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$inter-head44","1__2"), std::to_string(get_tag_for_rel("$inter-head44","1__2")) + ".$inter-head44.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head44","1__2")) + ".$inter-head44.2.table", FULL);
relation* rel___dollorhead__stratified10__8__1__2__3__4__5__6__7__8 = new relation(8, true, 8, get_tag_for_rel("$head-stratified10","1__2__3__4__5__6__7__8"), std::to_string(get_tag_for_rel("$head-stratified10","1__2__3__4__5__6__7__8")) + ".$head-stratified10.8.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified10","1__2__3__4__5__6__7__8")) + ".$head-stratified10.8.table", FULL);
relation* rel___dollorrule62__inter__body1__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule62-inter-body1","1__2__3__4"), std::to_string(get_tag_for_rel("$rule62-inter-body1","1__2__3__4")) + ".$rule62-inter-body1.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule62-inter-body1","1__2__3__4")) + ".$rule62-inter-body1.4.table", FULL);
relation* rel___dollorinter__head12__2__2 = new relation(1, false, 2, get_tag_for_rel("$inter-head12","2"), std::to_string(get_tag_for_rel("$inter-head12","2")) + ".$inter-head12.2.table",   FULL);
relation* rel___dollorrule51__inter__body__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule51-inter-body","1__2"), std::to_string(get_tag_for_rel("$rule51-inter-body","1__2")) + ".$rule51-inter-body.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule51-inter-body","1__2")) + ".$rule51-inter-body.2.table", FULL);
relation* rel___dollorrule29__inter__body__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule29-inter-body","1"), std::to_string(get_tag_for_rel("$rule29-inter-body","1")) + ".$rule29-inter-body.2.table",   FULL);
relation* rel___dollorrule69__inter__body1__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule69-inter-body1","1__2__3"), std::to_string(get_tag_for_rel("$rule69-inter-body1","1__2__3")) + ".$rule69-inter-body1.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule69-inter-body1","1__2__3")) + ".$rule69-inter-body1.3.table", FULL);
relation* rel___dollorinter__head27__7__6 = new relation(1, false, 7, get_tag_for_rel("$inter-head27","6"), std::to_string(get_tag_for_rel("$inter-head27","6")) + ".$inter-head27.7.table",   FULL);
relation* rel__define__prim__2__1 = new relation(1, false, 2, get_tag_for_rel("define-prim","1"), std::to_string(get_tag_for_rel("define-prim","1")) + ".define-prim.2.table",   FULL);
relation* rel___dollorinter__head44__2__1 = new relation(1, false, 2, get_tag_for_rel("$inter-head44","1"), std::to_string(get_tag_for_rel("$inter-head44","1")) + ".$inter-head44.2.table",   FULL);
relation* rel___dollorrule51__inter__body__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule51-inter-body","1"), std::to_string(get_tag_for_rel("$rule51-inter-body","1")) + ".$rule51-inter-body.2.table",   FULL);
relation* rel___dollorrule29__inter__body__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule29-inter-body","1__2"), std::to_string(get_tag_for_rel("$rule29-inter-body","1__2")) + ".$rule29-inter-body.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule29-inter-body","1__2")) + ".$rule29-inter-body.2.table", FULL);
relation* rel___dollorrule7__inter__body3__7__1 = new relation(1, false, 7, get_tag_for_rel("$rule7-inter-body3","1"), std::to_string(get_tag_for_rel("$rule7-inter-body3","1")) + ".$rule7-inter-body3.7.table",   FULL);
relation* rel___dollorrule46__inter__body4__8__1__2__3__4__5__6__7__8 = new relation(8, true, 8, get_tag_for_rel("$rule46-inter-body4","1__2__3__4__5__6__7__8"), std::to_string(get_tag_for_rel("$rule46-inter-body4","1__2__3__4__5__6__7__8")) + ".$rule46-inter-body4.8.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule46-inter-body4","1__2__3__4__5__6__7__8")) + ".$rule46-inter-body4.8.table", FULL);
relation* rel___dollorrule67__inter__body2__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule67-inter-body2","1__2__3"), std::to_string(get_tag_for_rel("$rule67-inter-body2","1__2__3")) + ".$rule67-inter-body2.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule67-inter-body2","1__2__3")) + ".$rule67-inter-body2.3.table", FULL);
relation* rel___dollorunit__1__1 = new relation(1, true, 1, get_tag_for_rel("$unit","1"), std::to_string(get_tag_for_rel("$unit","1")) + ".$unit.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$unit","1")) + ".$unit.1.table", FULL);
relation* rel__do__fixed__prop__all__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("do-fixed-prop-all","1__2__3"), std::to_string(get_tag_for_rel("do-fixed-prop-all","1__2__3")) + ".do-fixed-prop-all.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("do-fixed-prop-all","1__2__3")) + ".do-fixed-prop-all.3.table", FULL);
relation* rel___dollorbir__sub18__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$bir-sub18","1__2"), std::to_string(get_tag_for_rel("$bir-sub18","1__2")) + ".$bir-sub18.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub18","1__2")) + ".$bir-sub18.2.table", FULL);
relation* rel___dollorrule59__inter__body6__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule59-inter-body6","1"), std::to_string(get_tag_for_rel("$rule59-inter-body6","1")) + ".$rule59-inter-body6.2.table",   FULL);
relation* rel___dollorrule66__inter__body3__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule66-inter-body3","1"), std::to_string(get_tag_for_rel("$rule66-inter-body3","1")) + ".$rule66-inter-body3.2.table",   FULL);
relation* rel__list__of__1__1 = new relation(1, true, 1, get_tag_for_rel("list-of","1"), std::to_string(get_tag_for_rel("list-of","1")) + ".list-of.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("list-of","1")) + ".list-of.1.table", FULL);
relation* rel__appk__5__2__3 = new relation(2, false, 5, get_tag_for_rel("appk","2__3"), std::to_string(get_tag_for_rel("appk","2__3")) + ".appk.5.table",   FULL);
relation* rel___dollorrule47__inter__body4__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$rule47-inter-body4","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$rule47-inter-body4","1__2__3__4__5__6")) + ".$rule47-inter-body4.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule47-inter-body4","1__2__3__4__5__6")) + ".$rule47-inter-body4.6.table", FULL);
relation* rel__applfk__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("applfk","1__2__3__4"), std::to_string(get_tag_for_rel("applfk","1__2__3__4")) + ".applfk.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("applfk","1__2__3__4")) + ".applfk.4.table", FULL);
relation* rel___dollorrule73__inter__body__3__1 = new relation(1, false, 3, get_tag_for_rel("$rule73-inter-body","1"), std::to_string(get_tag_for_rel("$rule73-inter-body","1")) + ".$rule73-inter-body.3.table",   FULL);
relation* rel___dollorrule80__inter__body__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule80-inter-body","1__2__3"), std::to_string(get_tag_for_rel("$rule80-inter-body","1__2__3")) + ".$rule80-inter-body.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule80-inter-body","1__2__3")) + ".$rule80-inter-body.3.table", FULL);
relation* rel___dollorhead__stratified8__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$head-stratified8","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$head-stratified8","1__2__3__4__5__6__7")) + ".$head-stratified8.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified8","1__2__3__4__5__6__7")) + ".$head-stratified8.7.table", FULL);
relation* rel___dollorinter__head28__7__7__1 = new relation(2, false, 7, get_tag_for_rel("$inter-head28","7__1"), std::to_string(get_tag_for_rel("$inter-head28","7__1")) + ".$inter-head28.7.table",   FULL);
relation* rel___dollorinter__head66__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head66","1__2__3"), std::to_string(get_tag_for_rel("$inter-head66","1__2__3")) + ".$inter-head66.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head66","1__2__3")) + ".$inter-head66.3.table", FULL);
relation* rel___dollorinter__head26__8__1__2__3__4__5__6__7__8 = new relation(8, true, 8, get_tag_for_rel("$inter-head26","1__2__3__4__5__6__7__8"), std::to_string(get_tag_for_rel("$inter-head26","1__2__3__4__5__6__7__8")) + ".$inter-head26.8.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head26","1__2__3__4__5__6__7__8")) + ".$inter-head26.8.table", FULL);
relation* rel___dollorrule61__inter__body5__3__ = new relation(0, false, 3, get_tag_for_rel("$rule61-inter-body5",""), std::to_string(get_tag_for_rel("$rule61-inter-body5","")) + ".$rule61-inter-body5.3.table",   FULL);
relation* rel___dollorhead__splice4__6__ = new relation(0, false, 6, get_tag_for_rel("$head-splice4",""), std::to_string(get_tag_for_rel("$head-splice4","")) + ".$head-splice4.6.table",   FULL);
relation* rel___dollorinter__head23__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$inter-head23","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$inter-head23","1__2__3__4__5__6")) + ".$inter-head23.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head23","1__2__3__4__5__6")) + ".$inter-head23.6.table", FULL);
relation* rel___dollorrule71__inter__body3__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule71-inter-body3","1__2__3"), std::to_string(get_tag_for_rel("$rule71-inter-body3","1__2__3")) + ".$rule71-inter-body3.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule71-inter-body3","1__2__3")) + ".$rule71-inter-body3.3.table", FULL);
relation* rel___dollorinter__head69__1__1 = new relation(1, true, 1, get_tag_for_rel("$inter-head69","1"), std::to_string(get_tag_for_rel("$inter-head69","1")) + ".$inter-head69.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head69","1")) + ".$inter-head69.1.table", FULL);
relation* rel___dollorrule40__inter__body__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule40-inter-body","1__2__3"), std::to_string(get_tag_for_rel("$rule40-inter-body","1__2__3")) + ".$rule40-inter-body.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule40-inter-body","1__2__3")) + ".$rule40-inter-body.3.table", FULL);
relation* rel___dollorrule9__inter__body2__4__1 = new relation(1, false, 4, get_tag_for_rel("$rule9-inter-body2","1"), std::to_string(get_tag_for_rel("$rule9-inter-body2","1")) + ".$rule9-inter-body2.4.table",   FULL);
relation* rel___dollorrule85__inter__body__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule85-inter-body","1__2"), std::to_string(get_tag_for_rel("$rule85-inter-body","1__2")) + ".$rule85-inter-body.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule85-inter-body","1__2")) + ".$rule85-inter-body.2.table", FULL);
relation* rel___dollorbir__sub19__3__1 = new relation(1, false, 3, get_tag_for_rel("$bir-sub19","1"), std::to_string(get_tag_for_rel("$bir-sub19","1")) + ".$bir-sub19.3.table",   FULL);
relation* rel___dollorrule53__inter__body1__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule53-inter-body1","1__2__3__4"), std::to_string(get_tag_for_rel("$rule53-inter-body1","1__2__3__4")) + ".$rule53-inter-body1.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule53-inter-body1","1__2__3__4")) + ".$rule53-inter-body1.4.table", FULL);
relation* rel___dollorhead__stratified15__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$head-stratified15","1__2__3__4"), std::to_string(get_tag_for_rel("$head-stratified15","1__2__3__4")) + ".$head-stratified15.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified15","1__2__3__4")) + ".$head-stratified15.4.table", FULL);
relation* rel__state__1__1 = new relation(1, true, 1, get_tag_for_rel("state","1"), std::to_string(get_tag_for_rel("state","1")) + ".state.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("state","1")) + ".state.1.table", FULL);
relation* rel___dollorrule5__inter__body1__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule5-inter-body1","1"), std::to_string(get_tag_for_rel("$rule5-inter-body1","1")) + ".$rule5-inter-body1.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule5-inter-body1","1")) + ".$rule5-inter-body1.1.table", FULL);
relation* rel__do__var__prop__all__h__4__3 = new relation(1, false, 4, get_tag_for_rel("do-var-prop-all-h","3"), std::to_string(get_tag_for_rel("do-var-prop-all-h","3")) + ".do-var-prop-all-h.4.table",   FULL);
relation* rel___dollorrule71__inter__body6__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule71-inter-body6","1__2"), std::to_string(get_tag_for_rel("$rule71-inter-body6","1__2")) + ".$rule71-inter-body6.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule71-inter-body6","1__2")) + ".$rule71-inter-body6.2.table", FULL);
relation* rel___dollorrule6__inter__body1__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule6-inter-body1","1__2"), std::to_string(get_tag_for_rel("$rule6-inter-body1","1__2")) + ".$rule6-inter-body1.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule6-inter-body1","1__2")) + ".$rule6-inter-body1.2.table", FULL);
relation* rel___dollorhead__stratified20__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$head-stratified20","1__2__3__4"), std::to_string(get_tag_for_rel("$head-stratified20","1__2__3__4")) + ".$head-stratified20.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified20","1__2__3__4")) + ".$head-stratified20.4.table", FULL);
relation* rel___dollorrule34__inter__body__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule34-inter-body","1__2__3"), std::to_string(get_tag_for_rel("$rule34-inter-body","1__2__3")) + ".$rule34-inter-body.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule34-inter-body","1__2__3")) + ".$rule34-inter-body.3.table", FULL);
relation* rel___dollorhead__stratified42__4__4__2 = new relation(2, false, 4, get_tag_for_rel("$head-stratified42","4__2"), std::to_string(get_tag_for_rel("$head-stratified42","4__2")) + ".$head-stratified42.4.table",   FULL);
relation* rel___dollorrule50__inter__body__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule50-inter-body","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule50-inter-body","1__2__3__4__5")) + ".$rule50-inter-body.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule50-inter-body","1__2__3__4__5")) + ".$rule50-inter-body.5.table", FULL);
relation* rel___dollorinter__head36__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$inter-head36","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$inter-head36","1__2__3__4__5__6__7")) + ".$inter-head36.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head36","1__2__3__4__5__6__7")) + ".$inter-head36.7.table", FULL);
relation* rel___dollorhead__stratified27__3__2__3 = new relation(2, false, 3, get_tag_for_rel("$head-stratified27","2__3"), std::to_string(get_tag_for_rel("$head-stratified27","2__3")) + ".$head-stratified27.3.table",   FULL);
relation* rel__define__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("define","1__2__3"), std::to_string(get_tag_for_rel("define","1__2__3")) + ".define.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("define","1__2__3")) + ".define.3.table", FULL);
relation* rel___dollorrule47__inter__body6__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule47-inter-body6","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule47-inter-body6","1__2__3__4__5")) + ".$rule47-inter-body6.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule47-inter-body6","1__2__3__4__5")) + ".$rule47-inter-body6.5.table", FULL);
relation* rel___dollorrule36__inter__body1__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule36-inter-body1","1"), std::to_string(get_tag_for_rel("$rule36-inter-body1","1")) + ".$rule36-inter-body1.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule36-inter-body1","1")) + ".$rule36-inter-body1.1.table", FULL);
relation* rel___dollorhead__stratified32__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$head-stratified32","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$head-stratified32","1__2__3__4__5__6")) + ".$head-stratified32.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified32","1__2__3__4__5__6")) + ".$head-stratified32.6.table", FULL);
relation* rel___dollorinter__head41__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head41","1__2__3"), std::to_string(get_tag_for_rel("$inter-head41","1__2__3")) + ".$inter-head41.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head41","1__2__3")) + ".$inter-head41.3.table", FULL);
relation* rel__quote__1__1 = new relation(1, true, 1, get_tag_for_rel("quote","1"), std::to_string(get_tag_for_rel("quote","1")) + ".quote.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("quote","1")) + ".quote.1.table", FULL);
relation* rel___dollorrule67__inter__body4__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule67-inter-body4","1__2"), std::to_string(get_tag_for_rel("$rule67-inter-body4","1__2")) + ".$rule67-inter-body4.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule67-inter-body4","1__2")) + ".$rule67-inter-body4.2.table", FULL);
relation* rel___dollorrule47__inter__body5__6__5 = new relation(1, false, 6, get_tag_for_rel("$rule47-inter-body5","5"), std::to_string(get_tag_for_rel("$rule47-inter-body5","5")) + ".$rule47-inter-body5.6.table",   FULL);
relation* rel___dollorrule63__inter__body__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule63-inter-body","1"), std::to_string(get_tag_for_rel("$rule63-inter-body","1")) + ".$rule63-inter-body.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule63-inter-body","1")) + ".$rule63-inter-body.1.table", FULL);
relation* rel___dollorinter__head11__4__4__2 = new relation(2, false, 4, get_tag_for_rel("$inter-head11","4__2"), std::to_string(get_tag_for_rel("$inter-head11","4__2")) + ".$inter-head11.4.table",   FULL);
relation* rel___dollorrule78__inter__body6__7__4 = new relation(1, false, 7, get_tag_for_rel("$rule78-inter-body6","4"), std::to_string(get_tag_for_rel("$rule78-inter-body6","4")) + ".$rule78-inter-body6.7.table",   FULL);
relation* rel___dollorrule55__inter__body13__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule55-inter-body13","1"), std::to_string(get_tag_for_rel("$rule55-inter-body13","1")) + ".$rule55-inter-body13.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule55-inter-body13","1")) + ".$rule55-inter-body13.1.table", FULL);
relation* rel___dollorrule67__inter__body2__3__2 = new relation(1, false, 3, get_tag_for_rel("$rule67-inter-body2","2"), std::to_string(get_tag_for_rel("$rule67-inter-body2","2")) + ".$rule67-inter-body2.3.table",   FULL);
relation* rel__split__at__3__1 = new relation(1, false, 3, get_tag_for_rel("split-at","1"), std::to_string(get_tag_for_rel("split-at","1")) + ".split-at.3.table",   FULL);
relation* rel___dollorinter__head60__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head60","1__2__3"), std::to_string(get_tag_for_rel("$inter-head60","1__2__3")) + ".$inter-head60.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head60","1__2__3")) + ".$inter-head60.3.table", FULL);
relation* rel___dollorrule82__inter__body__4__2 = new relation(1, false, 4, get_tag_for_rel("$rule82-inter-body","2"), std::to_string(get_tag_for_rel("$rule82-inter-body","2")) + ".$rule82-inter-body.4.table",   FULL);
relation* rel___dollorrule7__inter__body5__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$rule7-inter-body5","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$rule7-inter-body5","1__2__3__4__5__6__7")) + ".$rule7-inter-body5.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule7-inter-body5","1__2__3__4__5__6__7")) + ".$rule7-inter-body5.7.table", FULL);
relation* rel___dollorhead__stratified43__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$head-stratified43","1__2__3__4"), std::to_string(get_tag_for_rel("$head-stratified43","1__2__3__4")) + ".$head-stratified43.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified43","1__2__3__4")) + ".$head-stratified43.4.table", FULL);
relation* rel___dollorrule48__inter__body2__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule48-inter-body2","1__2"), std::to_string(get_tag_for_rel("$rule48-inter-body2","1__2")) + ".$rule48-inter-body2.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule48-inter-body2","1__2")) + ".$rule48-inter-body2.2.table", FULL);
relation* rel__clo__2__1__2 = new relation(2, true, 2, get_tag_for_rel("clo","1__2"), std::to_string(get_tag_for_rel("clo","1__2")) + ".clo.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("clo","1__2")) + ".clo.2.table", FULL);
relation* rel___dollorinter__head37__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$inter-head37","1__2__3__4__5"), std::to_string(get_tag_for_rel("$inter-head37","1__2__3__4__5")) + ".$inter-head37.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head37","1__2__3__4__5")) + ".$inter-head37.5.table", FULL);
relation* rel___dollorrule60__inter__body1__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule60-inter-body1","1"), std::to_string(get_tag_for_rel("$rule60-inter-body1","1")) + ".$rule60-inter-body1.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule60-inter-body1","1")) + ".$rule60-inter-body1.1.table", FULL);
relation* rel___dollorhead__stratified55__3__2__3 = new relation(2, false, 3, get_tag_for_rel("$head-stratified55","2__3"), std::to_string(get_tag_for_rel("$head-stratified55","2__3")) + ".$head-stratified55.3.table",   FULL);
relation* rel___dollorbir__sub7__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$bir-sub7","1__2__3__4__5"), std::to_string(get_tag_for_rel("$bir-sub7","1__2__3__4__5")) + ".$bir-sub7.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub7","1__2__3__4__5")) + ".$bir-sub7.5.table", FULL);
relation* rel___dollorrule67__inter__body8__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule67-inter-body8","1__2"), std::to_string(get_tag_for_rel("$rule67-inter-body8","1__2")) + ".$rule67-inter-body8.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule67-inter-body8","1__2")) + ".$rule67-inter-body8.2.table", FULL);
relation* rel___dollorinter__head10__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head10","1__2__3"), std::to_string(get_tag_for_rel("$inter-head10","1__2__3")) + ".$inter-head10.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head10","1__2__3")) + ".$inter-head10.3.table", FULL);
relation* rel___dollorrule67__inter__body8__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule67-inter-body8","1"), std::to_string(get_tag_for_rel("$rule67-inter-body8","1")) + ".$rule67-inter-body8.2.table",   FULL);
relation* rel___dollorrule55__inter__body7__8__1__2__3__4__5__6__7__8 = new relation(8, true, 8, get_tag_for_rel("$rule55-inter-body7","1__2__3__4__5__6__7__8"), std::to_string(get_tag_for_rel("$rule55-inter-body7","1__2__3__4__5__6__7__8")) + ".$rule55-inter-body7.8.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule55-inter-body7","1__2__3__4__5__6__7__8")) + ".$rule55-inter-body7.8.table", FULL);
relation* rel___dollorrule47__inter__body7__6__4 = new relation(1, false, 6, get_tag_for_rel("$rule47-inter-body7","4"), std::to_string(get_tag_for_rel("$rule47-inter-body7","4")) + ".$rule47-inter-body7.6.table",   FULL);
relation* rel___dollorrule66__inter__body6__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule66-inter-body6","1"), std::to_string(get_tag_for_rel("$rule66-inter-body6","1")) + ".$rule66-inter-body6.2.table",   FULL);
relation* rel___dollorrule6__inter__body4__5__ = new relation(0, false, 5, get_tag_for_rel("$rule6-inter-body4",""), std::to_string(get_tag_for_rel("$rule6-inter-body4","")) + ".$rule6-inter-body4.5.table",   FULL);
relation* rel___dollorrule6__inter__body2__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule6-inter-body2","1__2__3"), std::to_string(get_tag_for_rel("$rule6-inter-body2","1__2__3")) + ".$rule6-inter-body2.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule6-inter-body2","1__2__3")) + ".$rule6-inter-body2.3.table", FULL);
relation* rel__bool__1__0 = new relation(1, false, 1, get_tag_for_rel("bool","0"), std::to_string(get_tag_for_rel("bool","0")) + ".bool.1.table",   FULL);
relation* rel___dollorinter__head37__5__3__1__2 = new relation(3, false, 5, get_tag_for_rel("$inter-head37","3__1__2"), std::to_string(get_tag_for_rel("$inter-head37","3__1__2")) + ".$inter-head37.5.table",   FULL);
relation* rel___dollorhead__stratified65__3__1__3 = new relation(2, false, 3, get_tag_for_rel("$head-stratified65","1__3"), std::to_string(get_tag_for_rel("$head-stratified65","1__3")) + ".$head-stratified65.3.table",   FULL);
relation* rel___dollorrule56__inter__body1__6__ = new relation(0, false, 6, get_tag_for_rel("$rule56-inter-body1",""), std::to_string(get_tag_for_rel("$rule56-inter-body1","")) + ".$rule56-inter-body1.6.table",   FULL);
relation* rel___dollorrule6__inter__body__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule6-inter-body","1"), std::to_string(get_tag_for_rel("$rule6-inter-body","1")) + ".$rule6-inter-body.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule6-inter-body","1")) + ".$rule6-inter-body.1.table", FULL);
relation* rel__applak__4__0 = new relation(1, false, 4, get_tag_for_rel("applak","0"), std::to_string(get_tag_for_rel("applak","0")) + ".applak.4.table",   FULL);
relation* rel___dollorrule1__inter__body1__1__ = new relation(0, false, 1, get_tag_for_rel("$rule1-inter-body1",""), std::to_string(get_tag_for_rel("$rule1-inter-body1","")) + ".$rule1-inter-body1.1.table",   FULL);
relation* rel__length__2__1 = new relation(1, false, 2, get_tag_for_rel("length","1"), std::to_string(get_tag_for_rel("length","1")) + ".length.2.table",   FULL);
relation* rel___dollorhead__stratified49__3__2__1 = new relation(2, false, 3, get_tag_for_rel("$head-stratified49","2__1"), std::to_string(get_tag_for_rel("$head-stratified49","2__1")) + ".$head-stratified49.3.table",   FULL);
relation* rel___dollorinter__head62__4__1__3 = new relation(2, false, 4, get_tag_for_rel("$inter-head62","1__3"), std::to_string(get_tag_for_rel("$inter-head62","1__3")) + ".$inter-head62.4.table",   FULL);
relation* rel__do__free__app__2__1__2 = new relation(2, true, 2, get_tag_for_rel("do-free-app","1__2"), std::to_string(get_tag_for_rel("do-free-app","1__2")) + ".do-free-app.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("do-free-app","1__2")) + ".do-free-app.2.table", FULL);
relation* rel___dollorrule78__inter__body1__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule78-inter-body1","1__2__3__4"), std::to_string(get_tag_for_rel("$rule78-inter-body1","1__2__3__4")) + ".$rule78-inter-body1.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule78-inter-body1","1__2__3__4")) + ".$rule78-inter-body1.4.table", FULL);
relation* rel__do__var__prop__all__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("do-var-prop-all","1__2__3"), std::to_string(get_tag_for_rel("do-var-prop-all","1__2__3")) + ".do-var-prop-all.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("do-var-prop-all","1__2__3")) + ".do-var-prop-all.3.table", FULL);
relation* rel___dollorrule76__inter__body__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule76-inter-body","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule76-inter-body","1__2__3__4__5")) + ".$rule76-inter-body.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule76-inter-body","1__2__3__4__5")) + ".$rule76-inter-body.5.table", FULL);
relation* rel___dollorinter__head73__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$inter-head73","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$inter-head73","1__2__3__4__5__6__7")) + ".$inter-head73.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head73","1__2__3__4__5__6__7")) + ".$inter-head73.7.table", FULL);
relation* rel___dollorrule7__inter__body9__2__ = new relation(0, false, 2, get_tag_for_rel("$rule7-inter-body9",""), std::to_string(get_tag_for_rel("$rule7-inter-body9","")) + ".$rule7-inter-body9.2.table",   FULL);
relation* rel__do__free__lam__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("do-free-lam","1__2__3"), std::to_string(get_tag_for_rel("do-free-lam","1__2__3")) + ".do-free-lam.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("do-free-lam","1__2__3")) + ".do-free-lam.3.table", FULL);
relation* rel___dollorrule53__inter__body2__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule53-inter-body2","1"), std::to_string(get_tag_for_rel("$rule53-inter-body2","1")) + ".$rule53-inter-body2.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule53-inter-body2","1")) + ".$rule53-inter-body2.1.table", FULL);
relation* rel___dollorrule32__inter__body__2__2 = new relation(1, false, 2, get_tag_for_rel("$rule32-inter-body","2"), std::to_string(get_tag_for_rel("$rule32-inter-body","2")) + ".$rule32-inter-body.2.table",   FULL);
relation* rel___dollorrule71__inter__body2__2__2 = new relation(1, false, 2, get_tag_for_rel("$rule71-inter-body2","2"), std::to_string(get_tag_for_rel("$rule71-inter-body2","2")) + ".$rule71-inter-body2.2.table",   FULL);
relation* rel__halt__0__0 = new relation(1, false, 0, get_tag_for_rel("halt","0"), std::to_string(get_tag_for_rel("halt","0")) + ".halt.0.table",   FULL);
relation* rel___dollorrule23__inter__body__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule23-inter-body","1__2__3"), std::to_string(get_tag_for_rel("$rule23-inter-body","1__2__3")) + ".$rule23-inter-body.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule23-inter-body","1__2__3")) + ".$rule23-inter-body.3.table", FULL);
relation* rel___dollorrule76__inter__body3__6__3__2 = new relation(2, false, 6, get_tag_for_rel("$rule76-inter-body3","3__2"), std::to_string(get_tag_for_rel("$rule76-inter-body3","3__2")) + ".$rule76-inter-body3.6.table",   FULL);
relation* rel__app__2__1__2 = new relation(2, true, 2, get_tag_for_rel("app","1__2"), std::to_string(get_tag_for_rel("app","1__2")) + ".app.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("app","1__2")) + ".app.2.table", FULL);
relation* rel___dollorrule67__inter__body5__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule67-inter-body5","1__2__3"), std::to_string(get_tag_for_rel("$rule67-inter-body5","1__2__3")) + ".$rule67-inter-body5.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule67-inter-body5","1__2__3")) + ".$rule67-inter-body5.3.table", FULL);
relation* rel___dollorinter__head4__6__3 = new relation(1, false, 6, get_tag_for_rel("$inter-head4","3"), std::to_string(get_tag_for_rel("$inter-head4","3")) + ".$inter-head4.6.table",   FULL);
relation* rel__app__2__0 = new relation(1, false, 2, get_tag_for_rel("app","0"), std::to_string(get_tag_for_rel("app","0")) + ".app.2.table",   FULL);
relation* rel__tick__2__1 = new relation(1, false, 2, get_tag_for_rel("tick","1"), std::to_string(get_tag_for_rel("tick","1")) + ".tick.2.table",   FULL);
relation* rel___dollorrule7__inter__body9__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule7-inter-body9","1__2"), std::to_string(get_tag_for_rel("$rule7-inter-body9","1__2")) + ".$rule7-inter-body9.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule7-inter-body9","1__2")) + ".$rule7-inter-body9.2.table", FULL);
relation* rel__clo__2__1 = new relation(1, false, 2, get_tag_for_rel("clo","1"), std::to_string(get_tag_for_rel("clo","1")) + ".clo.2.table",   FULL);
relation* rel___dollorsplice__4__1 = new relation(1, false, 4, get_tag_for_rel("$splice","1"), std::to_string(get_tag_for_rel("$splice","1")) + ".$splice.4.table",   FULL);
relation* rel__prim__count__2__1__2 = new relation(2, true, 2, get_tag_for_rel("prim-count","1__2"), std::to_string(get_tag_for_rel("prim-count","1__2")) + ".prim-count.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("prim-count","1__2")) + ".prim-count.2.table", FULL);
relation* rel___dollorinter__head40__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$inter-head40","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$inter-head40","1__2__3__4__5__6")) + ".$inter-head40.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head40","1__2__3__4__5__6")) + ".$inter-head40.6.table", FULL);
relation* rel___dollorbir__sub3__6__1 = new relation(1, false, 6, get_tag_for_rel("$bir-sub3","1"), std::to_string(get_tag_for_rel("$bir-sub3","1")) + ".$bir-sub3.6.table",   FULL);
relation* rel___dollorrule21__inter__body__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule21-inter-body","1__2__3"), std::to_string(get_tag_for_rel("$rule21-inter-body","1__2__3")) + ".$rule21-inter-body.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule21-inter-body","1__2__3")) + ".$rule21-inter-body.3.table", FULL);
relation* rel___dollorrule76__inter__body__5__4 = new relation(1, false, 5, get_tag_for_rel("$rule76-inter-body","4"), std::to_string(get_tag_for_rel("$rule76-inter-body","4")) + ".$rule76-inter-body.5.table",   FULL);
relation* rel___dollorrule77__inter__body5__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule77-inter-body5","1__2__3"), std::to_string(get_tag_for_rel("$rule77-inter-body5","1__2__3")) + ".$rule77-inter-body5.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule77-inter-body5","1__2__3")) + ".$rule77-inter-body5.3.table", FULL);
relation* rel__lambda__2__1__2 = new relation(2, true, 2, get_tag_for_rel("lambda","1__2"), std::to_string(get_tag_for_rel("lambda","1__2")) + ".lambda.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("lambda","1__2")) + ".lambda.2.table", FULL);
relation* rel___dollorrule82__inter__body1__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule82-inter-body1","1__2__3__4"), std::to_string(get_tag_for_rel("$rule82-inter-body1","1__2__3__4")) + ".$rule82-inter-body1.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule82-inter-body1","1__2__3__4")) + ".$rule82-inter-body1.4.table", FULL);
relation* rel__store__2__1 = new relation(1, false, 2, get_tag_for_rel("store","1"), std::to_string(get_tag_for_rel("store","1")) + ".store.2.table",   FULL);
relation* rel___dollorrule55__inter__body2__8__1__2__3__4__5__6__7__8 = new relation(8, true, 8, get_tag_for_rel("$rule55-inter-body2","1__2__3__4__5__6__7__8"), std::to_string(get_tag_for_rel("$rule55-inter-body2","1__2__3__4__5__6__7__8")) + ".$rule55-inter-body2.8.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule55-inter-body2","1__2__3__4__5__6__7__8")) + ".$rule55-inter-body2.8.table", FULL);
relation* rel___dollorinter__head45__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head45","1__2__3"), std::to_string(get_tag_for_rel("$inter-head45","1__2__3")) + ".$inter-head45.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head45","1__2__3")) + ".$inter-head45.3.table", FULL);
relation* rel___dollorinter__head30__7__3__1 = new relation(2, false, 7, get_tag_for_rel("$inter-head30","3__1"), std::to_string(get_tag_for_rel("$inter-head30","3__1")) + ".$inter-head30.7.table",   FULL);
relation* rel__fixedparam__1__1 = new relation(1, true, 1, get_tag_for_rel("fixedparam","1"), std::to_string(get_tag_for_rel("fixedparam","1")) + ".fixedparam.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("fixedparam","1")) + ".fixedparam.1.table", FULL);
relation* rel___dollorhead__stratified27__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified27","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified27","1__2__3")) + ".$head-stratified27.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified27","1__2__3")) + ".$head-stratified27.3.table", FULL);
relation* rel___dollorhead__stratified26__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified26","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified26","1__2__3")) + ".$head-stratified26.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified26","1__2__3")) + ".$head-stratified26.3.table", FULL);
relation* rel__do__free__let__lhs__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("do-free-let-lhs","1__2__3"), std::to_string(get_tag_for_rel("do-free-let-lhs","1__2__3")) + ".do-free-let-lhs.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("do-free-let-lhs","1__2__3")) + ".do-free-let-lhs.3.table", FULL);
relation* rel___dollorrule78__inter__body6__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$rule78-inter-body6","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$rule78-inter-body6","1__2__3__4__5__6__7")) + ".$rule78-inter-body6.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule78-inter-body6","1__2__3__4__5__6__7")) + ".$rule78-inter-body6.7.table", FULL);
relation* rel___dollorrule78__inter__body2__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule78-inter-body2","1__2__3"), std::to_string(get_tag_for_rel("$rule78-inter-body2","1__2__3")) + ".$rule78-inter-body2.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule78-inter-body2","1__2__3")) + ".$rule78-inter-body2.3.table", FULL);
relation* rel___dollorhir__sub__3__1 = new relation(1, false, 3, get_tag_for_rel("$hir-sub","1"), std::to_string(get_tag_for_rel("$hir-sub","1")) + ".$hir-sub.3.table",   FULL);
relation* rel___dollorhead__stratified35__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified35","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified35","1__2__3")) + ".$head-stratified35.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified35","1__2__3")) + ".$head-stratified35.3.table", FULL);
relation* rel__fixedparam__1__0 = new relation(1, false, 1, get_tag_for_rel("fixedparam","0"), std::to_string(get_tag_for_rel("fixedparam","0")) + ".fixedparam.1.table",   FULL);
relation* rel___dollorinter__head15__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$inter-head15","1__2__3__4__5"), std::to_string(get_tag_for_rel("$inter-head15","1__2__3__4__5")) + ".$inter-head15.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head15","1__2__3__4__5")) + ".$inter-head15.5.table", FULL);
relation* rel___dollorinter__head57__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$inter-head57","1__2__3__4"), std::to_string(get_tag_for_rel("$inter-head57","1__2__3__4")) + ".$inter-head57.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head57","1__2__3__4")) + ".$inter-head57.4.table", FULL);
relation* rel___dollorrule71__inter__body4__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule71-inter-body4","1__2__3"), std::to_string(get_tag_for_rel("$rule71-inter-body4","1__2__3")) + ".$rule71-inter-body4.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule71-inter-body4","1__2__3")) + ".$rule71-inter-body4.3.table", FULL);
relation* rel___dollorinter__head5__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head5","1__2__3"), std::to_string(get_tag_for_rel("$inter-head5","1__2__3")) + ".$inter-head5.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head5","1__2__3")) + ".$inter-head5.3.table", FULL);
relation* rel___dollorinter__head68__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$inter-head68","1__2"), std::to_string(get_tag_for_rel("$inter-head68","1__2")) + ".$inter-head68.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head68","1__2")) + ".$inter-head68.2.table", FULL);
relation* rel___dollorunit__1__ = new relation(0, false, 1, get_tag_for_rel("$unit",""), std::to_string(get_tag_for_rel("$unit","")) + ".$unit.1.table",   FULL);
relation* rel___dollorinter__head20__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head20","1__2__3"), std::to_string(get_tag_for_rel("$inter-head20","1__2__3")) + ".$inter-head20.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head20","1__2__3")) + ".$inter-head20.3.table", FULL);
relation* rel___dollorhead__stratified29__4__3__4 = new relation(2, false, 4, get_tag_for_rel("$head-stratified29","3__4"), std::to_string(get_tag_for_rel("$head-stratified29","3__4")) + ".$head-stratified29.4.table",   FULL);
relation* rel__app__2__1 = new relation(1, false, 2, get_tag_for_rel("app","1"), std::to_string(get_tag_for_rel("app","1")) + ".app.2.table",   FULL);
relation* rel__if__3__1 = new relation(1, false, 3, get_tag_for_rel("if","1"), std::to_string(get_tag_for_rel("if","1")) + ".if.3.table",   FULL);
relation* rel__let__2__1__2 = new relation(2, true, 2, get_tag_for_rel("let","1__2"), std::to_string(get_tag_for_rel("let","1__2")) + ".let.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("let","1__2")) + ".let.2.table", FULL);
relation* rel___dollorinter__head39__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$inter-head39","1__2__3__4"), std::to_string(get_tag_for_rel("$inter-head39","1__2__3__4")) + ".$inter-head39.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head39","1__2__3__4")) + ".$inter-head39.4.table", FULL);
relation* rel___dollorinter__head14__2__2 = new relation(1, false, 2, get_tag_for_rel("$inter-head14","2"), std::to_string(get_tag_for_rel("$inter-head14","2")) + ".$inter-head14.2.table",   FULL);
relation* rel___dollorrule63__inter__body2__4__ = new relation(0, false, 4, get_tag_for_rel("$rule63-inter-body2",""), std::to_string(get_tag_for_rel("$rule63-inter-body2","")) + ".$rule63-inter-body2.4.table",   FULL);
relation* rel___dollorrule74__inter__body1__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule74-inter-body1","1__2__3__4"), std::to_string(get_tag_for_rel("$rule74-inter-body1","1__2__3__4")) + ".$rule74-inter-body1.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule74-inter-body1","1__2__3__4")) + ".$rule74-inter-body1.4.table", FULL);
relation* rel___dollorrule76__inter__body2__7__4 = new relation(1, false, 7, get_tag_for_rel("$rule76-inter-body2","4"), std::to_string(get_tag_for_rel("$rule76-inter-body2","4")) + ".$rule76-inter-body2.7.table",   FULL);
relation* rel___dollorbir__sub20__3__1 = new relation(1, false, 3, get_tag_for_rel("$bir-sub20","1"), std::to_string(get_tag_for_rel("$bir-sub20","1")) + ".$bir-sub20.3.table",   FULL);
relation* rel___dollorlst__append__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$lst-append","1__2"), std::to_string(get_tag_for_rel("$lst-append","1__2")) + ".$lst-append.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$lst-append","1__2")) + ".$lst-append.2.table", FULL);
relation* rel___dollorrule3__inter__body__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule3-inter-body","1"), std::to_string(get_tag_for_rel("$rule3-inter-body","1")) + ".$rule3-inter-body.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule3-inter-body","1")) + ".$rule3-inter-body.1.table", FULL);
relation* rel__kaddr__1__1 = new relation(1, true, 1, get_tag_for_rel("kaddr","1"), std::to_string(get_tag_for_rel("kaddr","1")) + ".kaddr.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("kaddr","1")) + ".kaddr.1.table", FULL);
relation* rel___dollorrule47__inter__body8__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule47-inter-body8","1__2__3"), std::to_string(get_tag_for_rel("$rule47-inter-body8","1__2__3")) + ".$rule47-inter-body8.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule47-inter-body8","1__2__3")) + ".$rule47-inter-body8.3.table", FULL);
relation* rel___dollorinter__head65__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head65","1__2__3"), std::to_string(get_tag_for_rel("$inter-head65","1__2__3")) + ".$inter-head65.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head65","1__2__3")) + ".$inter-head65.3.table", FULL);
relation* rel__store__flow__2__1 = new relation(1, false, 2, get_tag_for_rel("store-flow","1"), std::to_string(get_tag_for_rel("store-flow","1")) + ".store-flow.2.table",   FULL);
relation* rel___dollorhead__stratified46__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$head-stratified46","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$head-stratified46","1__2__3__4__5__6")) + ".$head-stratified46.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified46","1__2__3__4__5__6")) + ".$head-stratified46.6.table", FULL);
relation* rel__define__3__1 = new relation(1, false, 3, get_tag_for_rel("define","1"), std::to_string(get_tag_for_rel("define","1")) + ".define.3.table",   FULL);
relation* rel__split__at__input__2__1 = new relation(1, false, 2, get_tag_for_rel("split-at-input","1"), std::to_string(get_tag_for_rel("split-at-input","1")) + ".split-at-input.2.table",   FULL);
relation* rel___dollorinter__head18__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$inter-head18","1__2"), std::to_string(get_tag_for_rel("$inter-head18","1__2")) + ".$inter-head18.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head18","1__2")) + ".$inter-head18.2.table", FULL);
relation* rel___dollorrule7__inter__body13__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule7-inter-body13","3"), std::to_string(get_tag_for_rel("$rule7-inter-body13","3")) + ".$rule7-inter-body13.3.table",   FULL);
relation* rel___dollorrule69__inter__body4__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule69-inter-body4","3"), std::to_string(get_tag_for_rel("$rule69-inter-body4","3")) + ".$rule69-inter-body4.3.table",   FULL);
relation* rel___dollorrule81__inter__body__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule81-inter-body","1__2__3"), std::to_string(get_tag_for_rel("$rule81-inter-body","1__2__3")) + ".$rule81-inter-body.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule81-inter-body","1__2__3")) + ".$rule81-inter-body.3.table", FULL);
relation* rel___dollorrule20__inter__body__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule20-inter-body","1__2__3"), std::to_string(get_tag_for_rel("$rule20-inter-body","1__2__3")) + ".$rule20-inter-body.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule20-inter-body","1__2__3")) + ".$rule20-inter-body.3.table", FULL);
relation* rel___dollorrule47__inter__body1__7__3__7 = new relation(2, false, 7, get_tag_for_rel("$rule47-inter-body1","3__7"), std::to_string(get_tag_for_rel("$rule47-inter-body1","3__7")) + ".$rule47-inter-body1.7.table",   FULL);
relation* rel___dollorrule69__inter__body9__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule69-inter-body9","1__2__3__4"), std::to_string(get_tag_for_rel("$rule69-inter-body9","1__2__3__4")) + ".$rule69-inter-body9.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule69-inter-body9","1__2__3__4")) + ".$rule69-inter-body9.4.table", FULL);
relation* rel___dollorinter__head46__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$inter-head46","1__2__3__4"), std::to_string(get_tag_for_rel("$inter-head46","1__2__3__4")) + ".$inter-head46.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head46","1__2__3__4")) + ".$inter-head46.4.table", FULL);
relation* rel___dollorrule56__inter__body1__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$rule56-inter-body1","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$rule56-inter-body1","1__2__3__4__5__6")) + ".$rule56-inter-body1.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule56-inter-body1","1__2__3__4__5__6")) + ".$rule56-inter-body1.6.table", FULL);
relation* rel___dollorinter__head45__3__3 = new relation(1, false, 3, get_tag_for_rel("$inter-head45","3"), std::to_string(get_tag_for_rel("$inter-head45","3")) + ".$inter-head45.3.table",   FULL);
relation* rel___dollorrule9__inter__body3__1__ = new relation(0, false, 1, get_tag_for_rel("$rule9-inter-body3",""), std::to_string(get_tag_for_rel("$rule9-inter-body3","")) + ".$rule9-inter-body3.1.table",   FULL);
relation* rel___dollorrule4__inter__body__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule4-inter-body","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule4-inter-body","1__2__3__4__5")) + ".$rule4-inter-body.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule4-inter-body","1__2__3__4__5")) + ".$rule4-inter-body.5.table", FULL);
relation* rel___dollorrule55__inter__body2__8__6 = new relation(1, false, 8, get_tag_for_rel("$rule55-inter-body2","6"), std::to_string(get_tag_for_rel("$rule55-inter-body2","6")) + ".$rule55-inter-body2.8.table",   FULL);
relation* rel___dollorrule47__inter__body4__6__4 = new relation(1, false, 6, get_tag_for_rel("$rule47-inter-body4","4"), std::to_string(get_tag_for_rel("$rule47-inter-body4","4")) + ".$rule47-inter-body4.6.table",   FULL);
relation* rel___dollorrule5__inter__body__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule5-inter-body","1__2"), std::to_string(get_tag_for_rel("$rule5-inter-body","1__2")) + ".$rule5-inter-body.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule5-inter-body","1__2")) + ".$rule5-inter-body.2.table", FULL);
relation* rel__split__at__end__input__2__2 = new relation(1, false, 2, get_tag_for_rel("split-at-end-input","2"), std::to_string(get_tag_for_rel("split-at-end-input","2")) + ".split-at-end-input.2.table",   FULL);
relation* rel___dollorlst__append__2__1 = new relation(1, false, 2, get_tag_for_rel("$lst-append","1"), std::to_string(get_tag_for_rel("$lst-append","1")) + ".$lst-append.2.table",   FULL);
relation* rel___dollorrule82__inter__body1__4__4 = new relation(1, false, 4, get_tag_for_rel("$rule82-inter-body1","4"), std::to_string(get_tag_for_rel("$rule82-inter-body1","4")) + ".$rule82-inter-body1.4.table",   FULL);
relation* rel___dollorlst__split__3__3 = new relation(1, false, 3, get_tag_for_rel("$lst-split","3"), std::to_string(get_tag_for_rel("$lst-split","3")) + ".$lst-split.3.table",   FULL);
relation* rel___dollorrule6__inter__body4__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule6-inter-body4","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule6-inter-body4","1__2__3__4__5")) + ".$rule6-inter-body4.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule6-inter-body4","1__2__3__4__5")) + ".$rule6-inter-body4.5.table", FULL);
relation* rel___dollorinter__head52__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head52","1__2__3"), std::to_string(get_tag_for_rel("$inter-head52","1__2__3")) + ".$inter-head52.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head52","1__2__3")) + ".$inter-head52.3.table", FULL);
relation* rel___dollorhead__splice1__9__6__9 = new relation(2, false, 9, get_tag_for_rel("$head-splice1","6__9"), std::to_string(get_tag_for_rel("$head-splice1","6__9")) + ".$head-splice1.9.table",   FULL);
relation* rel___dollorrule41__inter__body__3__2 = new relation(1, false, 3, get_tag_for_rel("$rule41-inter-body","2"), std::to_string(get_tag_for_rel("$rule41-inter-body","2")) + ".$rule41-inter-body.3.table",   FULL);
relation* rel___dollorrule7__inter__body1__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$rule7-inter-body1","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$rule7-inter-body1","1__2__3__4__5__6__7")) + ".$rule7-inter-body1.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule7-inter-body1","1__2__3__4__5__6__7")) + ".$rule7-inter-body1.7.table", FULL);
relation* rel___dollorrule9__inter__body__4__3 = new relation(1, false, 4, get_tag_for_rel("$rule9-inter-body","3"), std::to_string(get_tag_for_rel("$rule9-inter-body","3")) + ".$rule9-inter-body.4.table",   FULL);
relation* rel__binding__2__1__2 = new relation(2, true, 2, get_tag_for_rel("binding","1__2"), std::to_string(get_tag_for_rel("binding","1__2")) + ".binding.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("binding","1__2")) + ".binding.2.table", FULL);
relation* rel___dollorrule47__inter__body1__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$rule47-inter-body1","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$rule47-inter-body1","1__2__3__4__5__6__7")) + ".$rule47-inter-body1.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule47-inter-body1","1__2__3__4__5__6__7")) + ".$rule47-inter-body1.7.table", FULL);
relation* rel___dollorhead__stratified55__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified55","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified55","1__2__3")) + ".$head-stratified55.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified55","1__2__3")) + ".$head-stratified55.3.table", FULL);
relation* rel___dollorinter__head10__3__1__2 = new relation(2, false, 3, get_tag_for_rel("$inter-head10","1__2"), std::to_string(get_tag_for_rel("$inter-head10","1__2")) + ".$inter-head10.3.table",   FULL);
relation* rel___dollorinter__head34__3__2 = new relation(1, false, 3, get_tag_for_rel("$inter-head34","2"), std::to_string(get_tag_for_rel("$inter-head34","2")) + ".$inter-head34.3.table",   FULL);
relation* rel___dollorrule3__inter__body__1__ = new relation(0, false, 1, get_tag_for_rel("$rule3-inter-body",""), std::to_string(get_tag_for_rel("$rule3-inter-body","")) + ".$rule3-inter-body.1.table",   FULL);
relation* rel___dollorrule74__inter__body2__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule74-inter-body2","1__2"), std::to_string(get_tag_for_rel("$rule74-inter-body2","1__2")) + ".$rule74-inter-body2.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule74-inter-body2","1__2")) + ".$rule74-inter-body2.2.table", FULL);
relation* rel___dollorrule75__inter__body1__3__1 = new relation(1, false, 3, get_tag_for_rel("$rule75-inter-body1","1"), std::to_string(get_tag_for_rel("$rule75-inter-body1","1")) + ".$rule75-inter-body1.3.table",   FULL);
relation* rel__appl__2__1__2 = new relation(2, true, 2, get_tag_for_rel("appl","1__2"), std::to_string(get_tag_for_rel("appl","1__2")) + ".appl.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("appl","1__2")) + ".appl.2.table", FULL);
relation* rel___dollorrule55__inter__body7__8__ = new relation(0, false, 8, get_tag_for_rel("$rule55-inter-body7",""), std::to_string(get_tag_for_rel("$rule55-inter-body7","")) + ".$rule55-inter-body7.8.table",   FULL);
relation* rel___dollorrule67__inter__body6__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule67-inter-body6","1"), std::to_string(get_tag_for_rel("$rule67-inter-body6","1")) + ".$rule67-inter-body6.2.table",   FULL);
relation* rel___dollorrule4__inter__body1__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule4-inter-body1","1__2"), std::to_string(get_tag_for_rel("$rule4-inter-body1","1__2")) + ".$rule4-inter-body1.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule4-inter-body1","1__2")) + ".$rule4-inter-body1.2.table", FULL);
relation* rel___dollorrule20__inter__body__3__2 = new relation(1, false, 3, get_tag_for_rel("$rule20-inter-body","2"), std::to_string(get_tag_for_rel("$rule20-inter-body","2")) + ".$rule20-inter-body.3.table",   FULL);
relation* rel___dollorrule78__inter__body4__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule78-inter-body4","1__2__3__4"), std::to_string(get_tag_for_rel("$rule78-inter-body4","1__2__3__4")) + ".$rule78-inter-body4.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule78-inter-body4","1__2__3__4")) + ".$rule78-inter-body4.4.table", FULL);
relation* rel___dollorlst__append__input__2__0 = new relation(1, false, 2, get_tag_for_rel("$lst-append-input","0"), std::to_string(get_tag_for_rel("$lst-append-input","0")) + ".$lst-append-input.2.table",   FULL);
relation* rel__quote__1__0 = new relation(1, false, 1, get_tag_for_rel("quote","0"), std::to_string(get_tag_for_rel("quote","0")) + ".quote.1.table",   FULL);
relation* rel___dollorhead__splice3__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$head-splice3","1__2__3__4__5"), std::to_string(get_tag_for_rel("$head-splice3","1__2__3__4__5")) + ".$head-splice3.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-splice3","1__2__3__4__5")) + ".$head-splice3.5.table", FULL);
relation* rel___dollorrule59__inter__body3__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule59-inter-body3","1__2"), std::to_string(get_tag_for_rel("$rule59-inter-body3","1__2")) + ".$rule59-inter-body3.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule59-inter-body3","1__2")) + ".$rule59-inter-body3.2.table", FULL);
relation* rel___dollorrule59__inter__body8__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule59-inter-body8","1__2__3"), std::to_string(get_tag_for_rel("$rule59-inter-body8","1__2__3")) + ".$rule59-inter-body8.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule59-inter-body8","1__2__3")) + ".$rule59-inter-body8.3.table", FULL);
relation* rel___dollorrule59__inter__body9__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule59-inter-body9","1__2__3__4"), std::to_string(get_tag_for_rel("$rule59-inter-body9","1__2__3__4")) + ".$rule59-inter-body9.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule59-inter-body9","1__2__3__4")) + ".$rule59-inter-body9.4.table", FULL);
relation* rel___dollorrule61__inter__body__4__4 = new relation(1, false, 4, get_tag_for_rel("$rule61-inter-body","4"), std::to_string(get_tag_for_rel("$rule61-inter-body","4")) + ".$rule61-inter-body.4.table",   FULL);
relation* rel___dollorhead__stratified19__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$head-stratified19","1__2__3__4__5"), std::to_string(get_tag_for_rel("$head-stratified19","1__2__3__4__5")) + ".$head-stratified19.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified19","1__2__3__4__5")) + ".$head-stratified19.5.table", FULL);
relation* rel___dollorinter__head33__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$inter-head33","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$inter-head33","1__2__3__4__5__6")) + ".$inter-head33.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head33","1__2__3__4__5__6")) + ".$inter-head33.6.table", FULL);
relation* rel___dollorrule71__inter__body5__2__2 = new relation(1, false, 2, get_tag_for_rel("$rule71-inter-body5","2"), std::to_string(get_tag_for_rel("$rule71-inter-body5","2")) + ".$rule71-inter-body5.2.table",   FULL);
relation* rel___dollorrule78__inter__body5__2__2 = new relation(1, false, 2, get_tag_for_rel("$rule78-inter-body5","2"), std::to_string(get_tag_for_rel("$rule78-inter-body5","2")) + ".$rule78-inter-body5.2.table",   FULL);
relation* rel___dollorrule2__inter__body1__1__ = new relation(0, false, 1, get_tag_for_rel("$rule2-inter-body1",""), std::to_string(get_tag_for_rel("$rule2-inter-body1","")) + ".$rule2-inter-body1.1.table",   FULL);
relation* rel___dollorinter__head67__7__2__7__1__3__4__5 = new relation(6, false, 7, get_tag_for_rel("$inter-head67","2__7__1__3__4__5"), std::to_string(get_tag_for_rel("$inter-head67","2__7__1__3__4__5")) + ".$inter-head67.7.table",   FULL);
relation* rel___dollorinter__head67__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$inter-head67","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$inter-head67","1__2__3__4__5__6__7")) + ".$inter-head67.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head67","1__2__3__4__5__6__7")) + ".$inter-head67.7.table", FULL);
relation* rel___dollorrule46__inter__body__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$rule46-inter-body","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$rule46-inter-body","1__2__3__4__5__6")) + ".$rule46-inter-body.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule46-inter-body","1__2__3__4__5__6")) + ".$rule46-inter-body.6.table", FULL);
relation* rel___dollorrule78__inter__body__3__3__1 = new relation(2, false, 3, get_tag_for_rel("$rule78-inter-body","3__1"), std::to_string(get_tag_for_rel("$rule78-inter-body","3__1")) + ".$rule78-inter-body.3.table",   FULL);
relation* rel___dollorrule84__inter__body__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule84-inter-body","1"), std::to_string(get_tag_for_rel("$rule84-inter-body","1")) + ".$rule84-inter-body.2.table",   FULL);
relation* rel___dollorrule4__inter__body2__1__ = new relation(0, false, 1, get_tag_for_rel("$rule4-inter-body2",""), std::to_string(get_tag_for_rel("$rule4-inter-body2","")) + ".$rule4-inter-body2.1.table",   FULL);
relation* rel___dollorrule45__inter__body2__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$rule45-inter-body2","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$rule45-inter-body2","1__2__3__4__5__6")) + ".$rule45-inter-body2.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule45-inter-body2","1__2__3__4__5__6")) + ".$rule45-inter-body2.6.table", FULL);
relation* rel___dollorinter__head48__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$inter-head48","1__2"), std::to_string(get_tag_for_rel("$inter-head48","1__2")) + ".$inter-head48.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head48","1__2")) + ".$inter-head48.2.table", FULL);
relation* rel___dollorrule73__inter__body1__4__1 = new relation(1, false, 4, get_tag_for_rel("$rule73-inter-body1","1"), std::to_string(get_tag_for_rel("$rule73-inter-body1","1")) + ".$rule73-inter-body1.4.table",   FULL);
relation* rel___dollorhead__stratified38__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$head-stratified38","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$head-stratified38","1__2__3__4__5__6")) + ".$head-stratified38.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified38","1__2__3__4__5__6")) + ".$head-stratified38.6.table", FULL);
relation* rel___dollorrule77__inter__body3__4__1 = new relation(1, false, 4, get_tag_for_rel("$rule77-inter-body3","1"), std::to_string(get_tag_for_rel("$rule77-inter-body3","1")) + ".$rule77-inter-body3.4.table",   FULL);
relation* rel___dollorrule59__inter__body4__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule59-inter-body4","1__2__3__4"), std::to_string(get_tag_for_rel("$rule59-inter-body4","1__2__3__4")) + ".$rule59-inter-body4.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule59-inter-body4","1__2__3__4")) + ".$rule59-inter-body4.4.table", FULL);
relation* rel___dollorrule36__inter__body2__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule36-inter-body2","1"), std::to_string(get_tag_for_rel("$rule36-inter-body2","1")) + ".$rule36-inter-body2.2.table",   FULL);
relation* rel___dollorhir__sub1__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$hir-sub1","1__2__3"), std::to_string(get_tag_for_rel("$hir-sub1","1__2__3")) + ".$hir-sub1.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$hir-sub1","1__2__3")) + ".$hir-sub1.3.table", FULL);
relation* rel___dollorinter__head51__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$inter-head51","1__2__3__4"), std::to_string(get_tag_for_rel("$inter-head51","1__2__3__4")) + ".$inter-head51.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head51","1__2__3__4")) + ".$inter-head51.4.table", FULL);
relation* rel___dollorinter__head25__7__2__1 = new relation(2, false, 7, get_tag_for_rel("$inter-head25","2__1"), std::to_string(get_tag_for_rel("$inter-head25","2__1")) + ".$inter-head25.7.table",   FULL);
relation* rel___dollorrule69__inter__body9__4__3 = new relation(1, false, 4, get_tag_for_rel("$rule69-inter-body9","3"), std::to_string(get_tag_for_rel("$rule69-inter-body9","3")) + ".$rule69-inter-body9.4.table",   FULL);
relation* rel___dollorhead__stratified26__3__1__2 = new relation(2, false, 3, get_tag_for_rel("$head-stratified26","1__2"), std::to_string(get_tag_for_rel("$head-stratified26","1__2")) + ".$head-stratified26.3.table",   FULL);
relation* rel___dollorbir__sub10__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$bir-sub10","1__2__3"), std::to_string(get_tag_for_rel("$bir-sub10","1__2__3")) + ".$bir-sub10.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub10","1__2__3")) + ".$bir-sub10.3.table", FULL);
relation* rel___dollorrule66__inter__body__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule66-inter-body","1__2"), std::to_string(get_tag_for_rel("$rule66-inter-body","1__2")) + ".$rule66-inter-body.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule66-inter-body","1__2")) + ".$rule66-inter-body.2.table", FULL);
relation* rel__apply__5__3 = new relation(1, false, 5, get_tag_for_rel("apply","3"), std::to_string(get_tag_for_rel("apply","3")) + ".apply.5.table",   FULL);
relation* rel___dollorrule76__inter__body5__5__1 = new relation(1, false, 5, get_tag_for_rel("$rule76-inter-body5","1"), std::to_string(get_tag_for_rel("$rule76-inter-body5","1")) + ".$rule76-inter-body5.5.table",   FULL);
relation* rel___dollorrule46__inter__body__6__3 = new relation(1, false, 6, get_tag_for_rel("$rule46-inter-body","3"), std::to_string(get_tag_for_rel("$rule46-inter-body","3")) + ".$rule46-inter-body.6.table",   FULL);
relation* rel__lambda__2__2 = new relation(1, false, 2, get_tag_for_rel("lambda","2"), std::to_string(get_tag_for_rel("lambda","2")) + ".lambda.2.table",   FULL);
relation* rel__saddr__1__1 = new relation(1, true, 1, get_tag_for_rel("saddr","1"), std::to_string(get_tag_for_rel("saddr","1")) + ".saddr.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("saddr","1")) + ".saddr.1.table", FULL);
relation* rel___dollorbir__sub4__6__1 = new relation(1, false, 6, get_tag_for_rel("$bir-sub4","1"), std::to_string(get_tag_for_rel("$bir-sub4","1")) + ".$bir-sub4.6.table",   FULL);
relation* rel___dollorrule55__inter__body9__9__ = new relation(0, false, 9, get_tag_for_rel("$rule55-inter-body9",""), std::to_string(get_tag_for_rel("$rule55-inter-body9","")) + ".$rule55-inter-body9.9.table",   FULL);
relation* rel___dollorinter__head24__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$inter-head24","1__2"), std::to_string(get_tag_for_rel("$inter-head24","1__2")) + ".$inter-head24.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head24","1__2")) + ".$inter-head24.2.table", FULL);
relation* rel___dollorrule61__inter__body__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule61-inter-body","1__2__3__4"), std::to_string(get_tag_for_rel("$rule61-inter-body","1__2__3__4")) + ".$rule61-inter-body.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule61-inter-body","1__2__3__4")) + ".$rule61-inter-body.4.table", FULL);
relation* rel___dollorrule41__inter__body__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule41-inter-body","1__2__3"), std::to_string(get_tag_for_rel("$rule41-inter-body","1__2__3")) + ".$rule41-inter-body.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule41-inter-body","1__2__3")) + ".$rule41-inter-body.3.table", FULL);
relation* rel___dollorrule81__inter__body__3__2__1 = new relation(2, false, 3, get_tag_for_rel("$rule81-inter-body","2__1"), std::to_string(get_tag_for_rel("$rule81-inter-body","2__1")) + ".$rule81-inter-body.3.table",   FULL);
relation* rel___dollorrule10__inter__body1__1__ = new relation(0, false, 1, get_tag_for_rel("$rule10-inter-body1",""), std::to_string(get_tag_for_rel("$rule10-inter-body1","")) + ".$rule10-inter-body1.1.table",   FULL);
relation* rel___dollorbir__sub14__4__1 = new relation(1, false, 4, get_tag_for_rel("$bir-sub14","1"), std::to_string(get_tag_for_rel("$bir-sub14","1")) + ".$bir-sub14.4.table",   FULL);
relation* rel___dollorinter__head36__7__3__1 = new relation(2, false, 7, get_tag_for_rel("$inter-head36","3__1"), std::to_string(get_tag_for_rel("$inter-head36","3__1")) + ".$inter-head36.7.table",   FULL);
relation* rel___dollorrule76__inter__body2__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$rule76-inter-body2","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$rule76-inter-body2","1__2__3__4__5__6__7")) + ".$rule76-inter-body2.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule76-inter-body2","1__2__3__4__5__6__7")) + ".$rule76-inter-body2.7.table", FULL);
relation* rel___dollorrule55__inter__body4__7__7 = new relation(1, false, 7, get_tag_for_rel("$rule55-inter-body4","7"), std::to_string(get_tag_for_rel("$rule55-inter-body4","7")) + ".$rule55-inter-body4.7.table",   FULL);
relation* rel___dollorhead__stratified60__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$head-stratified60","1__2"), std::to_string(get_tag_for_rel("$head-stratified60","1__2")) + ".$head-stratified60.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified60","1__2")) + ".$head-stratified60.2.table", FULL);
relation* rel___dollorrule69__inter__body6__4__1 = new relation(1, false, 4, get_tag_for_rel("$rule69-inter-body6","1"), std::to_string(get_tag_for_rel("$rule69-inter-body6","1")) + ".$rule69-inter-body6.4.table",   FULL);
relation* rel___dollorrule57__inter__body1__3__1 = new relation(1, false, 3, get_tag_for_rel("$rule57-inter-body1","1"), std::to_string(get_tag_for_rel("$rule57-inter-body1","1")) + ".$rule57-inter-body1.3.table",   FULL);
relation* rel___dollorrule67__inter__body4__2__2 = new relation(1, false, 2, get_tag_for_rel("$rule67-inter-body4","2"), std::to_string(get_tag_for_rel("$rule67-inter-body4","2")) + ".$rule67-inter-body4.2.table",   FULL);
relation* rel___dollorrule60__inter__body2__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule60-inter-body2","1__2__3"), std::to_string(get_tag_for_rel("$rule60-inter-body2","1__2__3")) + ".$rule60-inter-body2.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule60-inter-body2","1__2__3")) + ".$rule60-inter-body2.3.table", FULL);
relation* rel___dollorhead__stratified29__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$head-stratified29","1__2__3__4"), std::to_string(get_tag_for_rel("$head-stratified29","1__2__3__4")) + ".$head-stratified29.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified29","1__2__3__4")) + ".$head-stratified29.4.table", FULL);
relation* rel__applak__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("applak","1__2__3__4"), std::to_string(get_tag_for_rel("applak","1__2__3__4")) + ".applak.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("applak","1__2__3__4")) + ".applak.4.table", FULL);
relation* rel___dollorbir__sub20__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$bir-sub20","1__2__3"), std::to_string(get_tag_for_rel("$bir-sub20","1__2__3")) + ".$bir-sub20.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub20","1__2__3")) + ".$bir-sub20.3.table", FULL);
relation* rel___dollorrule81__inter__body1__5__4 = new relation(1, false, 5, get_tag_for_rel("$rule81-inter-body1","4"), std::to_string(get_tag_for_rel("$rule81-inter-body1","4")) + ".$rule81-inter-body1.5.table",   FULL);
relation* rel___dollorrule69__inter__body8__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule69-inter-body8","1__2__3__4"), std::to_string(get_tag_for_rel("$rule69-inter-body8","1__2__3__4")) + ".$rule69-inter-body8.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule69-inter-body8","1__2__3__4")) + ".$rule69-inter-body8.4.table", FULL);
relation* rel___dollorbir__sub2__9__1__2 = new relation(2, false, 9, get_tag_for_rel("$bir-sub2","1__2"), std::to_string(get_tag_for_rel("$bir-sub2","1__2")) + ".$bir-sub2.9.table",   FULL);
relation* rel___dollorinter__head4__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$inter-head4","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$inter-head4","1__2__3__4__5__6")) + ".$inter-head4.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head4","1__2__3__4__5__6")) + ".$inter-head4.6.table", FULL);
relation* rel___dollorbir__sub5__6__1 = new relation(1, false, 6, get_tag_for_rel("$bir-sub5","1"), std::to_string(get_tag_for_rel("$bir-sub5","1")) + ".$bir-sub5.6.table",   FULL);
relation* rel___dollorbir__sub11__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$bir-sub11","1__2__3__4"), std::to_string(get_tag_for_rel("$bir-sub11","1__2__3__4")) + ".$bir-sub11.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub11","1__2__3__4")) + ".$bir-sub11.4.table", FULL);
relation* rel___dollorrule7__inter__body12__5__ = new relation(0, false, 5, get_tag_for_rel("$rule7-inter-body12",""), std::to_string(get_tag_for_rel("$rule7-inter-body12","")) + ".$rule7-inter-body12.5.table",   FULL);
relation* rel___dollorhead__stratified11__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$head-stratified11","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$head-stratified11","1__2__3__4__5__6__7")) + ".$head-stratified11.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified11","1__2__3__4__5__6__7")) + ".$head-stratified11.7.table", FULL);
relation* rel__addr__1__1 = new relation(1, true, 1, get_tag_for_rel("addr","1"), std::to_string(get_tag_for_rel("addr","1")) + ".addr.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("addr","1")) + ".addr.1.table", FULL);
relation* rel___dollorrule56__inter__body__6__5 = new relation(1, false, 6, get_tag_for_rel("$rule56-inter-body","5"), std::to_string(get_tag_for_rel("$rule56-inter-body","5")) + ".$rule56-inter-body.6.table",   FULL);
relation* rel___dollorrule7__inter__body3__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$rule7-inter-body3","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$rule7-inter-body3","1__2__3__4__5__6__7")) + ".$rule7-inter-body3.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule7-inter-body3","1__2__3__4__5__6__7")) + ".$rule7-inter-body3.7.table", FULL);
relation* rel___dollorrule79__inter__body1__4__4 = new relation(1, false, 4, get_tag_for_rel("$rule79-inter-body1","4"), std::to_string(get_tag_for_rel("$rule79-inter-body1","4")) + ".$rule79-inter-body1.4.table",   FULL);
relation* rel___dollorhead__stratified10__8__6__8 = new relation(2, false, 8, get_tag_for_rel("$head-stratified10","6__8"), std::to_string(get_tag_for_rel("$head-stratified10","6__8")) + ".$head-stratified10.8.table",   FULL);
relation* rel___dollorinter__head29__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$inter-head29","1__2"), std::to_string(get_tag_for_rel("$inter-head29","1__2")) + ".$inter-head29.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head29","1__2")) + ".$inter-head29.2.table", FULL);
relation* rel___dollorrule75__inter__body3__3__2 = new relation(1, false, 3, get_tag_for_rel("$rule75-inter-body3","2"), std::to_string(get_tag_for_rel("$rule75-inter-body3","2")) + ".$rule75-inter-body3.3.table",   FULL);
relation* rel___dollorrule67__inter__body1__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule67-inter-body1","3"), std::to_string(get_tag_for_rel("$rule67-inter-body1","3")) + ".$rule67-inter-body1.3.table",   FULL);
relation* rel___dollorinter__head66__3__1 = new relation(1, false, 3, get_tag_for_rel("$inter-head66","1"), std::to_string(get_tag_for_rel("$inter-head66","1")) + ".$inter-head66.3.table",   FULL);
relation* rel___dollorrule32__inter__body1__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule32-inter-body1","1__2"), std::to_string(get_tag_for_rel("$rule32-inter-body1","1__2")) + ".$rule32-inter-body1.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule32-inter-body1","1__2")) + ".$rule32-inter-body1.2.table", FULL);
relation* rel__specialized__prim__1__1 = new relation(1, true, 1, get_tag_for_rel("specialized-prim","1"), std::to_string(get_tag_for_rel("specialized-prim","1")) + ".specialized-prim.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("specialized-prim","1")) + ".specialized-prim.1.table", FULL);
relation* rel___dollorinter__head__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$inter-head","1__2__3__4"), std::to_string(get_tag_for_rel("$inter-head","1__2__3__4")) + ".$inter-head.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head","1__2__3__4")) + ".$inter-head.4.table", FULL);
relation* rel___dollorinter__head39__4__2__3 = new relation(2, false, 4, get_tag_for_rel("$inter-head39","2__3"), std::to_string(get_tag_for_rel("$inter-head39","2__3")) + ".$inter-head39.4.table",   FULL);
relation* rel___dollorrule66__inter__body2__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule66-inter-body2","1__2__3"), std::to_string(get_tag_for_rel("$rule66-inter-body2","1__2__3")) + ".$rule66-inter-body2.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule66-inter-body2","1__2__3")) + ".$rule66-inter-body2.3.table", FULL);
relation* rel___dollorrule7__inter__body6__7__7 = new relation(1, false, 7, get_tag_for_rel("$rule7-inter-body6","7"), std::to_string(get_tag_for_rel("$rule7-inter-body6","7")) + ".$rule7-inter-body6.7.table",   FULL);
relation* rel___dollorhead__stratified__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified","1__2__3")) + ".$head-stratified.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified","1__2__3")) + ".$head-stratified.3.table", FULL);
relation* rel___dollorrule60__inter__body4__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule60-inter-body4","1"), std::to_string(get_tag_for_rel("$rule60-inter-body4","1")) + ".$rule60-inter-body4.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule60-inter-body4","1")) + ".$rule60-inter-body4.1.table", FULL);
relation* rel___dollorinter__head16__7__7__3__6__4__2__5 = new relation(6, false, 7, get_tag_for_rel("$inter-head16","7__3__6__4__2__5"), std::to_string(get_tag_for_rel("$inter-head16","7__3__6__4__2__5")) + ".$inter-head16.7.table",   FULL);
relation* rel___dollorrule34__inter__body__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule34-inter-body","3"), std::to_string(get_tag_for_rel("$rule34-inter-body","3")) + ".$rule34-inter-body.3.table",   FULL);
relation* rel___dollorrule10__inter__body__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule10-inter-body","1"), std::to_string(get_tag_for_rel("$rule10-inter-body","1")) + ".$rule10-inter-body.2.table",   FULL);
relation* rel___dollorbir__sub18__2__2 = new relation(1, false, 2, get_tag_for_rel("$bir-sub18","2"), std::to_string(get_tag_for_rel("$bir-sub18","2")) + ".$bir-sub18.2.table",   FULL);
relation* rel___dollorrule5__inter__body1__1__ = new relation(0, false, 1, get_tag_for_rel("$rule5-inter-body1",""), std::to_string(get_tag_for_rel("$rule5-inter-body1","")) + ".$rule5-inter-body1.1.table",   FULL);
relation* rel___dollorrule46__inter__body6__6__4 = new relation(1, false, 6, get_tag_for_rel("$rule46-inter-body6","4"), std::to_string(get_tag_for_rel("$rule46-inter-body6","4")) + ".$rule46-inter-body6.6.table",   FULL);
relation* rel__halt__0__ = new relation(0, true, 0, get_tag_for_rel("halt",""), std::to_string(get_tag_for_rel("halt","")) + ".halt.0.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("halt","")) + ".halt.0.table", FULL);
relation* rel___dollorrule22__inter__body__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule22-inter-body","1__2__3__4"), std::to_string(get_tag_for_rel("$rule22-inter-body","1__2__3__4")) + ".$rule22-inter-body.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule22-inter-body","1__2__3__4")) + ".$rule22-inter-body.4.table", FULL);
relation* rel___dollorinter__head13__5__5 = new relation(1, false, 5, get_tag_for_rel("$inter-head13","5"), std::to_string(get_tag_for_rel("$inter-head13","5")) + ".$inter-head13.5.table",   FULL);
relation* rel___dollorrule73__inter__body__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule73-inter-body","1__2__3"), std::to_string(get_tag_for_rel("$rule73-inter-body","1__2__3")) + ".$rule73-inter-body.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule73-inter-body","1__2__3")) + ".$rule73-inter-body.3.table", FULL);
relation* rel___dollorrule55__inter__body1__9__9__3 = new relation(2, false, 9, get_tag_for_rel("$rule55-inter-body1","9__3"), std::to_string(get_tag_for_rel("$rule55-inter-body1","9__3")) + ".$rule55-inter-body1.9.table",   FULL);
relation* rel___dollorrule59__inter__body7__4__1 = new relation(1, false, 4, get_tag_for_rel("$rule59-inter-body7","1"), std::to_string(get_tag_for_rel("$rule59-inter-body7","1")) + ".$rule59-inter-body7.4.table",   FULL);
relation* rel___dollorrule78__inter__body__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule78-inter-body","1__2__3"), std::to_string(get_tag_for_rel("$rule78-inter-body","1__2__3")) + ".$rule78-inter-body.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule78-inter-body","1__2__3")) + ".$rule78-inter-body.3.table", FULL);
relation* rel___dollorinter__head71__3__3 = new relation(1, false, 3, get_tag_for_rel("$inter-head71","3"), std::to_string(get_tag_for_rel("$inter-head71","3")) + ".$inter-head71.3.table",   FULL);
relation* rel___dollorrule59__inter__body5__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule59-inter-body5","1__2"), std::to_string(get_tag_for_rel("$rule59-inter-body5","1__2")) + ".$rule59-inter-body5.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule59-inter-body5","1__2")) + ".$rule59-inter-body5.2.table", FULL);
relation* rel___dollorbir__sub7__5__1__2 = new relation(2, false, 5, get_tag_for_rel("$bir-sub7","1__2"), std::to_string(get_tag_for_rel("$bir-sub7","1__2")) + ".$bir-sub7.5.table",   FULL);
relation* rel___dollorrule60__inter__body2__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule60-inter-body2","3"), std::to_string(get_tag_for_rel("$rule60-inter-body2","3")) + ".$rule60-inter-body2.3.table",   FULL);
relation* rel___dollorhead__stratified2__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified2","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified2","1__2__3")) + ".$head-stratified2.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified2","1__2__3")) + ".$head-stratified2.3.table", FULL);
relation* rel___dollorinter__head20__3__2 = new relation(1, false, 3, get_tag_for_rel("$inter-head20","2"), std::to_string(get_tag_for_rel("$inter-head20","2")) + ".$inter-head20.3.table",   FULL);
relation* rel___dollorhead__stratified14__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$head-stratified14","1__2__3__4__5"), std::to_string(get_tag_for_rel("$head-stratified14","1__2__3__4__5")) + ".$head-stratified14.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified14","1__2__3__4__5")) + ".$head-stratified14.5.table", FULL);
relation* rel___dollorinter__head43__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$inter-head43","1__2"), std::to_string(get_tag_for_rel("$inter-head43","1__2")) + ".$inter-head43.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head43","1__2")) + ".$inter-head43.2.table", FULL);
relation* rel___dollorrule8__inter__body1__1__ = new relation(0, false, 1, get_tag_for_rel("$rule8-inter-body1",""), std::to_string(get_tag_for_rel("$rule8-inter-body1","")) + ".$rule8-inter-body1.1.table",   FULL);
relation* rel___dollorrule47__inter__body2__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$rule47-inter-body2","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$rule47-inter-body2","1__2__3__4__5__6")) + ".$rule47-inter-body2.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule47-inter-body2","1__2__3__4__5__6")) + ".$rule47-inter-body2.6.table", FULL);
relation* rel___dollorrule59__inter__body6__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule59-inter-body6","1__2"), std::to_string(get_tag_for_rel("$rule59-inter-body6","1__2")) + ".$rule59-inter-body6.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule59-inter-body6","1__2")) + ".$rule59-inter-body6.2.table", FULL);
relation* rel___dollorrule78__inter__body5__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule78-inter-body5","1__2"), std::to_string(get_tag_for_rel("$rule78-inter-body5","1__2")) + ".$rule78-inter-body5.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule78-inter-body5","1__2")) + ".$rule78-inter-body5.2.table", FULL);
relation* rel___dollorrule7__inter__body12__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule7-inter-body12","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule7-inter-body12","1__2__3__4__5")) + ".$rule7-inter-body12.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule7-inter-body12","1__2__3__4__5")) + ".$rule7-inter-body12.5.table", FULL);
relation* rel___dollorrule7__inter__body5__7__6 = new relation(1, false, 7, get_tag_for_rel("$rule7-inter-body5","6"), std::to_string(get_tag_for_rel("$rule7-inter-body5","6")) + ".$rule7-inter-body5.7.table",   FULL);
relation* rel___dollorrule47__inter__body8__3__2 = new relation(1, false, 3, get_tag_for_rel("$rule47-inter-body8","2"), std::to_string(get_tag_for_rel("$rule47-inter-body8","2")) + ".$rule47-inter-body8.3.table",   FULL);
relation* rel___dollorrule66__inter__body__2__2 = new relation(1, false, 2, get_tag_for_rel("$rule66-inter-body","2"), std::to_string(get_tag_for_rel("$rule66-inter-body","2")) + ".$rule66-inter-body.2.table",   FULL);
relation* rel___dollorrule36__inter__body__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule36-inter-body","1__2"), std::to_string(get_tag_for_rel("$rule36-inter-body","1__2")) + ".$rule36-inter-body.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule36-inter-body","1__2")) + ".$rule36-inter-body.2.table", FULL);
relation* rel___dollorhead__stratified67__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$head-stratified67","1__2"), std::to_string(get_tag_for_rel("$head-stratified67","1__2")) + ".$head-stratified67.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified67","1__2")) + ".$head-stratified67.2.table", FULL);
relation* rel___dollorrule71__inter__body1__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule71-inter-body1","1"), std::to_string(get_tag_for_rel("$rule71-inter-body1","1")) + ".$rule71-inter-body1.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule71-inter-body1","1")) + ".$rule71-inter-body1.1.table", FULL);
relation* rel___dollorrule7__inter__body__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$rule7-inter-body","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$rule7-inter-body","1__2__3__4__5__6__7")) + ".$rule7-inter-body.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule7-inter-body","1__2__3__4__5__6__7")) + ".$rule7-inter-body.7.table", FULL);
relation* rel___dollorinter__head53__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head53","1__2__3"), std::to_string(get_tag_for_rel("$inter-head53","1__2__3")) + ".$inter-head53.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head53","1__2__3")) + ".$inter-head53.3.table", FULL);
relation* rel___dollorrule40__inter__body1__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule40-inter-body1","1__2"), std::to_string(get_tag_for_rel("$rule40-inter-body1","1__2")) + ".$rule40-inter-body1.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule40-inter-body1","1__2")) + ".$rule40-inter-body1.2.table", FULL);
relation* rel__binding__2__2 = new relation(1, false, 2, get_tag_for_rel("binding","2"), std::to_string(get_tag_for_rel("binding","2")) + ".binding.2.table",   FULL);
relation* rel__varparam__1__1 = new relation(1, true, 1, get_tag_for_rel("varparam","1"), std::to_string(get_tag_for_rel("varparam","1")) + ".varparam.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("varparam","1")) + ".varparam.1.table", FULL);
relation* rel___dollorinter__head33__6__3__1__2 = new relation(3, false, 6, get_tag_for_rel("$inter-head33","3__1__2"), std::to_string(get_tag_for_rel("$inter-head33","3__1__2")) + ".$inter-head33.6.table",   FULL);
relation* rel___dollorinter__head47__9__3__5__6__7__4__2__8__1 = new relation(8, false, 9, get_tag_for_rel("$inter-head47","3__5__6__7__4__2__8__1"), std::to_string(get_tag_for_rel("$inter-head47","3__5__6__7__4__2__8__1")) + ".$inter-head47.9.table",   FULL);
relation* rel___dollorrule52__inter__body2__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule52-inter-body2","1__2__3__4"), std::to_string(get_tag_for_rel("$rule52-inter-body2","1__2__3__4")) + ".$rule52-inter-body2.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule52-inter-body2","1__2__3__4")) + ".$rule52-inter-body2.4.table", FULL);
relation* rel___dollorrule47__inter__body2__6__2 = new relation(1, false, 6, get_tag_for_rel("$rule47-inter-body2","2"), std::to_string(get_tag_for_rel("$rule47-inter-body2","2")) + ".$rule47-inter-body2.6.table",   FULL);
relation* rel___dollorinter__head17__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head17","1__2__3"), std::to_string(get_tag_for_rel("$inter-head17","1__2__3")) + ".$inter-head17.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head17","1__2__3")) + ".$inter-head17.3.table", FULL);
relation* rel___dollorbir__sub17__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$bir-sub17","1__2"), std::to_string(get_tag_for_rel("$bir-sub17","1__2")) + ".$bir-sub17.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub17","1__2")) + ".$bir-sub17.2.table", FULL);
relation* rel___dollorrule63__inter__body1__4__4 = new relation(1, false, 4, get_tag_for_rel("$rule63-inter-body1","4"), std::to_string(get_tag_for_rel("$rule63-inter-body1","4")) + ".$rule63-inter-body1.4.table",   FULL);
relation* rel___dollorrule40__inter__body__3__1__2 = new relation(2, false, 3, get_tag_for_rel("$rule40-inter-body","1__2"), std::to_string(get_tag_for_rel("$rule40-inter-body","1__2")) + ".$rule40-inter-body.3.table",   FULL);
relation* rel___dollorrule55__inter__body3__8__1__2__3__4__5__6__7__8 = new relation(8, true, 8, get_tag_for_rel("$rule55-inter-body3","1__2__3__4__5__6__7__8"), std::to_string(get_tag_for_rel("$rule55-inter-body3","1__2__3__4__5__6__7__8")) + ".$rule55-inter-body3.8.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule55-inter-body3","1__2__3__4__5__6__7__8")) + ".$rule55-inter-body3.8.table", FULL);
relation* rel__letk__6__0 = new relation(1, false, 6, get_tag_for_rel("letk","0"), std::to_string(get_tag_for_rel("letk","0")) + ".letk.6.table",   FULL);
relation* rel___dollorrule34__inter__body1__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule34-inter-body1","1__2__3__4"), std::to_string(get_tag_for_rel("$rule34-inter-body1","1__2__3__4")) + ".$rule34-inter-body1.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule34-inter-body1","1__2__3__4")) + ".$rule34-inter-body1.4.table", FULL);
relation* rel___dollorrule62__inter__body__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule62-inter-body","1__2__3__4"), std::to_string(get_tag_for_rel("$rule62-inter-body","1__2__3__4")) + ".$rule62-inter-body.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule62-inter-body","1__2__3__4")) + ".$rule62-inter-body.4.table", FULL);
relation* rel___dollorrule61__inter__body3__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule61-inter-body3","1__2__3"), std::to_string(get_tag_for_rel("$rule61-inter-body3","1__2__3")) + ".$rule61-inter-body3.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule61-inter-body3","1__2__3")) + ".$rule61-inter-body3.3.table", FULL);
relation* rel___dollorinter__head11__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$inter-head11","1__2__3__4"), std::to_string(get_tag_for_rel("$inter-head11","1__2__3__4")) + ".$inter-head11.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head11","1__2__3__4")) + ".$inter-head11.4.table", FULL);
relation* rel___dollorinter__head27__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$inter-head27","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$inter-head27","1__2__3__4__5__6__7")) + ".$inter-head27.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head27","1__2__3__4__5__6__7")) + ".$inter-head27.7.table", FULL);
relation* rel___dollorlst__2__2 = new relation(1, false, 2, get_tag_for_rel("$lst","2"), std::to_string(get_tag_for_rel("$lst","2")) + ".$lst.2.table",   FULL);
relation* rel___dollorinter__head30__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$inter-head30","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$inter-head30","1__2__3__4__5__6__7")) + ".$inter-head30.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head30","1__2__3__4__5__6__7")) + ".$inter-head30.7.table", FULL);
relation* rel___dollorinter__head9__6__3 = new relation(1, false, 6, get_tag_for_rel("$inter-head9","3"), std::to_string(get_tag_for_rel("$inter-head9","3")) + ".$inter-head9.6.table",   FULL);
relation* rel___dollorrule69__inter__body1__3__1 = new relation(1, false, 3, get_tag_for_rel("$rule69-inter-body1","1"), std::to_string(get_tag_for_rel("$rule69-inter-body1","1")) + ".$rule69-inter-body1.3.table",   FULL);
relation* rel___dollorhead__splice4__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$head-splice4","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$head-splice4","1__2__3__4__5__6")) + ".$head-splice4.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-splice4","1__2__3__4__5__6")) + ".$head-splice4.6.table", FULL);
relation* rel___dollorbir__sub12__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$bir-sub12","1__2__3"), std::to_string(get_tag_for_rel("$bir-sub12","1__2__3")) + ".$bir-sub12.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub12","1__2__3")) + ".$bir-sub12.3.table", FULL);
relation* rel___dollorrule63__inter__body2__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule63-inter-body2","1__2__3__4"), std::to_string(get_tag_for_rel("$rule63-inter-body2","1__2__3__4")) + ".$rule63-inter-body2.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule63-inter-body2","1__2__3__4")) + ".$rule63-inter-body2.4.table", FULL);
relation* rel__if__3__3 = new relation(1, false, 3, get_tag_for_rel("if","3"), std::to_string(get_tag_for_rel("if","3")) + ".if.3.table",   FULL);
relation* rel___dollorrule5__inter__body__2__2 = new relation(1, false, 2, get_tag_for_rel("$rule5-inter-body","2"), std::to_string(get_tag_for_rel("$rule5-inter-body","2")) + ".$rule5-inter-body.2.table",   FULL);
relation* rel___dollorrule66__inter__body2__3__1 = new relation(1, false, 3, get_tag_for_rel("$rule66-inter-body2","1"), std::to_string(get_tag_for_rel("$rule66-inter-body2","1")) + ".$rule66-inter-body2.3.table",   FULL);
relation* rel___dollorinter__head32__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head32","1__2__3"), std::to_string(get_tag_for_rel("$inter-head32","1__2__3")) + ".$inter-head32.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head32","1__2__3")) + ".$inter-head32.3.table", FULL);
relation* rel___dollorbir__sub5__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$bir-sub5","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$bir-sub5","1__2__3__4__5__6")) + ".$bir-sub5.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub5","1__2__3__4__5__6")) + ".$bir-sub5.6.table", FULL);
relation* rel___dollorrule52__inter__body1__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule52-inter-body1","1"), std::to_string(get_tag_for_rel("$rule52-inter-body1","1")) + ".$rule52-inter-body1.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule52-inter-body1","1")) + ".$rule52-inter-body1.1.table", FULL);
relation* rel___dollorrule55__inter__body12__9__1__2__3__4__5__6__7__8__9 = new relation(9, true, 9, get_tag_for_rel("$rule55-inter-body12","1__2__3__4__5__6__7__8__9"), std::to_string(get_tag_for_rel("$rule55-inter-body12","1__2__3__4__5__6__7__8__9")) + ".$rule55-inter-body12.9.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule55-inter-body12","1__2__3__4__5__6__7__8__9")) + ".$rule55-inter-body12.9.table", FULL);
relation* rel___dollorrule69__inter__body4__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule69-inter-body4","1__2__3"), std::to_string(get_tag_for_rel("$rule69-inter-body4","1__2__3")) + ".$rule69-inter-body4.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule69-inter-body4","1__2__3")) + ".$rule69-inter-body4.3.table", FULL);
relation* rel__if__k__4__0 = new relation(1, false, 4, get_tag_for_rel("if-k","0"), std::to_string(get_tag_for_rel("if-k","0")) + ".if-k.4.table",   FULL);
relation* rel___dollorrule78__inter__body3__4__3 = new relation(1, false, 4, get_tag_for_rel("$rule78-inter-body3","3"), std::to_string(get_tag_for_rel("$rule78-inter-body3","3")) + ".$rule78-inter-body3.4.table",   FULL);
relation* rel___dollorrule61__inter__body3__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule61-inter-body3","3"), std::to_string(get_tag_for_rel("$rule61-inter-body3","3")) + ".$rule61-inter-body3.3.table",   FULL);
relation* rel___dollorhead__stratified36__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$head-stratified36","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$head-stratified36","1__2__3__4__5__6__7")) + ".$head-stratified36.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified36","1__2__3__4__5__6__7")) + ".$head-stratified36.7.table", FULL);
relation* rel___dollorbir__sub15__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$bir-sub15","1__2__3__4"), std::to_string(get_tag_for_rel("$bir-sub15","1__2__3__4")) + ".$bir-sub15.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub15","1__2__3__4")) + ".$bir-sub15.4.table", FULL);
relation* rel___dollorhead__stratified17__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$head-stratified17","1__2"), std::to_string(get_tag_for_rel("$head-stratified17","1__2")) + ".$head-stratified17.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified17","1__2")) + ".$head-stratified17.2.table", FULL);
relation* rel___dollorinter__head61__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head61","1__2__3"), std::to_string(get_tag_for_rel("$inter-head61","1__2__3")) + ".$inter-head61.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head61","1__2__3")) + ".$inter-head61.3.table", FULL);
relation* rel___dollorinter__head19__2__ = new relation(0, false, 2, get_tag_for_rel("$inter-head19",""), std::to_string(get_tag_for_rel("$inter-head19","")) + ".$inter-head19.2.table",   FULL);
relation* rel___dollorrule74__inter__body__2__2 = new relation(1, false, 2, get_tag_for_rel("$rule74-inter-body","2"), std::to_string(get_tag_for_rel("$rule74-inter-body","2")) + ".$rule74-inter-body.2.table",   FULL);
relation* rel___dollorbir__sub11__4__2__4 = new relation(2, false, 4, get_tag_for_rel("$bir-sub11","2__4"), std::to_string(get_tag_for_rel("$bir-sub11","2__4")) + ".$bir-sub11.4.table",   FULL);
relation* rel___dollorrule7__inter__body8__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule7-inter-body8","1"), std::to_string(get_tag_for_rel("$rule7-inter-body8","1")) + ".$rule7-inter-body8.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule7-inter-body8","1")) + ".$rule7-inter-body8.1.table", FULL);
relation* rel___dollorrule79__inter__body__3__1__2 = new relation(2, false, 3, get_tag_for_rel("$rule79-inter-body","1__2"), std::to_string(get_tag_for_rel("$rule79-inter-body","1__2")) + ".$rule79-inter-body.3.table",   FULL);
relation* rel__split__at__end__3__1 = new relation(1, false, 3, get_tag_for_rel("split-at-end","1"), std::to_string(get_tag_for_rel("split-at-end","1")) + ".split-at-end.3.table",   FULL);
relation* rel___dollorrule57__inter__body1__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule57-inter-body1","1__2__3"), std::to_string(get_tag_for_rel("$rule57-inter-body1","1__2__3")) + ".$rule57-inter-body1.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule57-inter-body1","1__2__3")) + ".$rule57-inter-body1.3.table", FULL);
relation* rel___dollorhead__stratified40__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$head-stratified40","1__2__3__4"), std::to_string(get_tag_for_rel("$head-stratified40","1__2__3__4")) + ".$head-stratified40.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified40","1__2__3__4")) + ".$head-stratified40.4.table", FULL);
relation* rel__breaks__into__input__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("breaks-into-input","1__2__3"), std::to_string(get_tag_for_rel("breaks-into-input","1__2__3")) + ".breaks-into-input.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("breaks-into-input","1__2__3")) + ".breaks-into-input.3.table", FULL);
relation* rel___dollorrule59__inter__body__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule59-inter-body","1__2"), std::to_string(get_tag_for_rel("$rule59-inter-body","1__2")) + ".$rule59-inter-body.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule59-inter-body","1__2")) + ".$rule59-inter-body.2.table", FULL);
relation* rel___dollorrule54__inter__body__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule54-inter-body","1"), std::to_string(get_tag_for_rel("$rule54-inter-body","1")) + ".$rule54-inter-body.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule54-inter-body","1")) + ".$rule54-inter-body.1.table", FULL);
relation* rel___dollorrule7__inter__body7__7__2 = new relation(1, false, 7, get_tag_for_rel("$rule7-inter-body7","2"), std::to_string(get_tag_for_rel("$rule7-inter-body7","2")) + ".$rule7-inter-body7.7.table",   FULL);
relation* rel___dollorrule60__inter__body8__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule60-inter-body8","1__2__3__4"), std::to_string(get_tag_for_rel("$rule60-inter-body8","1__2__3__4")) + ".$rule60-inter-body8.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule60-inter-body8","1__2__3__4")) + ".$rule60-inter-body8.4.table", FULL);
relation* rel___dollorrule59__inter__body2__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule59-inter-body2","1"), std::to_string(get_tag_for_rel("$rule59-inter-body2","1")) + ".$rule59-inter-body2.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule59-inter-body2","1")) + ".$rule59-inter-body2.1.table", FULL);
relation* rel___dollorrule75__inter__body4__4__2 = new relation(1, false, 4, get_tag_for_rel("$rule75-inter-body4","2"), std::to_string(get_tag_for_rel("$rule75-inter-body4","2")) + ".$rule75-inter-body4.4.table",   FULL);
relation* rel___dollorrule62__inter__body1__4__4 = new relation(1, false, 4, get_tag_for_rel("$rule62-inter-body1","4"), std::to_string(get_tag_for_rel("$rule62-inter-body1","4")) + ".$rule62-inter-body1.4.table",   FULL);
relation* rel___dollorrule7__inter__body2__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$rule7-inter-body2","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$rule7-inter-body2","1__2__3__4__5__6__7")) + ".$rule7-inter-body2.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule7-inter-body2","1__2__3__4__5__6__7")) + ".$rule7-inter-body2.7.table", FULL);
relation* rel___dollorhead__stratified12__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$head-stratified12","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$head-stratified12","1__2__3__4__5__6__7")) + ".$head-stratified12.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified12","1__2__3__4__5__6__7")) + ".$head-stratified12.7.table", FULL);
relation* rel___dollorinter__head55__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$inter-head55","1__2"), std::to_string(get_tag_for_rel("$inter-head55","1__2")) + ".$inter-head55.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head55","1__2")) + ".$inter-head55.2.table", FULL);
relation* rel___dollorrule66__inter__body3__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule66-inter-body3","1__2"), std::to_string(get_tag_for_rel("$rule66-inter-body3","1__2")) + ".$rule66-inter-body3.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule66-inter-body3","1__2")) + ".$rule66-inter-body3.2.table", FULL);
relation* rel__if__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("if","1__2__3"), std::to_string(get_tag_for_rel("if","1__2__3")) + ".if.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("if","1__2__3")) + ".if.3.table", FULL);
relation* rel___dollorrule66__inter__body1__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule66-inter-body1","1"), std::to_string(get_tag_for_rel("$rule66-inter-body1","1")) + ".$rule66-inter-body1.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule66-inter-body1","1")) + ".$rule66-inter-body1.1.table", FULL);
relation* rel___dollorrule22__inter__body__4__2__3 = new relation(2, false, 4, get_tag_for_rel("$rule22-inter-body","2__3"), std::to_string(get_tag_for_rel("$rule22-inter-body","2__3")) + ".$rule22-inter-body.4.table",   FULL);
relation* rel___dollorinter__head41__3__1__2 = new relation(2, false, 3, get_tag_for_rel("$inter-head41","1__2"), std::to_string(get_tag_for_rel("$inter-head41","1__2")) + ".$inter-head41.3.table",   FULL);
relation* rel___dollorrule50__inter__body__5__3 = new relation(1, false, 5, get_tag_for_rel("$rule50-inter-body","3"), std::to_string(get_tag_for_rel("$rule50-inter-body","3")) + ".$rule50-inter-body.5.table",   FULL);
relation* rel___dollorrule84__inter__body1__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule84-inter-body1","1"), std::to_string(get_tag_for_rel("$rule84-inter-body1","1")) + ".$rule84-inter-body1.2.table",   FULL);
relation* rel___dollorrule84__inter__body1__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule84-inter-body1","1__2"), std::to_string(get_tag_for_rel("$rule84-inter-body1","1__2")) + ".$rule84-inter-body1.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule84-inter-body1","1__2")) + ".$rule84-inter-body1.2.table", FULL);
relation* rel___dollorrule79__inter__body__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule79-inter-body","1__2__3"), std::to_string(get_tag_for_rel("$rule79-inter-body","1__2__3")) + ".$rule79-inter-body.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule79-inter-body","1__2__3")) + ".$rule79-inter-body.3.table", FULL);
relation* rel___dollorhir__sub1__3__1 = new relation(1, false, 3, get_tag_for_rel("$hir-sub1","1"), std::to_string(get_tag_for_rel("$hir-sub1","1")) + ".$hir-sub1.3.table",   FULL);
relation* rel___dollorrule62__inter__body2__2__2 = new relation(1, false, 2, get_tag_for_rel("$rule62-inter-body2","2"), std::to_string(get_tag_for_rel("$rule62-inter-body2","2")) + ".$rule62-inter-body2.2.table",   FULL);
relation* rel__if__3__0 = new relation(1, false, 3, get_tag_for_rel("if","0"), std::to_string(get_tag_for_rel("if","0")) + ".if.3.table",   FULL);
relation* rel___dollorrule47__inter__body__3__2 = new relation(1, false, 3, get_tag_for_rel("$rule47-inter-body","2"), std::to_string(get_tag_for_rel("$rule47-inter-body","2")) + ".$rule47-inter-body.3.table",   FULL);
relation* rel___dollorrule61__inter__body4__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule61-inter-body4","3"), std::to_string(get_tag_for_rel("$rule61-inter-body4","3")) + ".$rule61-inter-body4.3.table",   FULL);
relation* rel___dollorrule60__inter__body6__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule60-inter-body6","1"), std::to_string(get_tag_for_rel("$rule60-inter-body6","1")) + ".$rule60-inter-body6.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule60-inter-body6","1")) + ".$rule60-inter-body6.1.table", FULL);
relation* rel___dollorrule77__inter__body1__5__2 = new relation(1, false, 5, get_tag_for_rel("$rule77-inter-body1","2"), std::to_string(get_tag_for_rel("$rule77-inter-body1","2")) + ".$rule77-inter-body1.5.table",   FULL);
relation* rel___dollorrule45__inter__body2__6__ = new relation(0, false, 6, get_tag_for_rel("$rule45-inter-body2",""), std::to_string(get_tag_for_rel("$rule45-inter-body2","")) + ".$rule45-inter-body2.6.table",   FULL);
relation* rel___dollorrule7__inter__body13__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule7-inter-body13","1__2__3"), std::to_string(get_tag_for_rel("$rule7-inter-body13","1__2__3")) + ".$rule7-inter-body13.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule7-inter-body13","1__2__3")) + ".$rule7-inter-body13.3.table", FULL);
relation* rel___dollorinter__head8__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$inter-head8","1__2"), std::to_string(get_tag_for_rel("$inter-head8","1__2")) + ".$inter-head8.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head8","1__2")) + ".$inter-head8.2.table", FULL);
relation* rel___dollorrule6__inter__body__1__ = new relation(0, false, 1, get_tag_for_rel("$rule6-inter-body",""), std::to_string(get_tag_for_rel("$rule6-inter-body","")) + ".$rule6-inter-body.1.table",   FULL);
relation* rel___dollorrule67__inter__body11__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule67-inter-body11","1__2"), std::to_string(get_tag_for_rel("$rule67-inter-body11","1__2")) + ".$rule67-inter-body11.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule67-inter-body11","1__2")) + ".$rule67-inter-body11.2.table", FULL);
relation* rel__define__prim__2__1__2 = new relation(2, true, 2, get_tag_for_rel("define-prim","1__2"), std::to_string(get_tag_for_rel("define-prim","1__2")) + ".define-prim.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("define-prim","1__2")) + ".define-prim.2.table", FULL);
relation* rel___dollorrule77__inter__body2__3__1 = new relation(1, false, 3, get_tag_for_rel("$rule77-inter-body2","1"), std::to_string(get_tag_for_rel("$rule77-inter-body2","1")) + ".$rule77-inter-body2.3.table",   FULL);
relation* rel___dollorinter__head14__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$inter-head14","1__2"), std::to_string(get_tag_for_rel("$inter-head14","1__2")) + ".$inter-head14.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head14","1__2")) + ".$inter-head14.2.table", FULL);
relation* rel___dollorinter__head58__3__2 = new relation(1, false, 3, get_tag_for_rel("$inter-head58","2"), std::to_string(get_tag_for_rel("$inter-head58","2")) + ".$inter-head58.3.table",   FULL);
relation* rel___dollorinter__head3__4__3 = new relation(1, false, 4, get_tag_for_rel("$inter-head3","3"), std::to_string(get_tag_for_rel("$inter-head3","3")) + ".$inter-head3.4.table",   FULL);
relation* rel___dollorinter__head55__2__1 = new relation(1, false, 2, get_tag_for_rel("$inter-head55","1"), std::to_string(get_tag_for_rel("$inter-head55","1")) + ".$inter-head55.2.table",   FULL);
relation* rel___dollorrule46__inter__body2__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$rule46-inter-body2","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$rule46-inter-body2","1__2__3__4__5__6__7")) + ".$rule46-inter-body2.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule46-inter-body2","1__2__3__4__5__6__7")) + ".$rule46-inter-body2.7.table", FULL);
relation* rel__apply__5__4 = new relation(1, false, 5, get_tag_for_rel("apply","4"), std::to_string(get_tag_for_rel("apply","4")) + ".apply.5.table",   FULL);
relation* rel__clo__2__0 = new relation(1, false, 2, get_tag_for_rel("clo","0"), std::to_string(get_tag_for_rel("clo","0")) + ".clo.2.table",   FULL);
relation* rel___dollorrule55__inter__body5__8__1__2__3__4__5__6__7__8 = new relation(8, true, 8, get_tag_for_rel("$rule55-inter-body5","1__2__3__4__5__6__7__8"), std::to_string(get_tag_for_rel("$rule55-inter-body5","1__2__3__4__5__6__7__8")) + ".$rule55-inter-body5.8.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule55-inter-body5","1__2__3__4__5__6__7__8")) + ".$rule55-inter-body5.8.table", FULL);
relation* rel___dollorhead__stratified__3__2__1 = new relation(2, false, 3, get_tag_for_rel("$head-stratified","2__1"), std::to_string(get_tag_for_rel("$head-stratified","2__1")) + ".$head-stratified.3.table",   FULL);
relation* rel__vararg__1__0 = new relation(1, false, 1, get_tag_for_rel("vararg","0"), std::to_string(get_tag_for_rel("vararg","0")) + ".vararg.1.table",   FULL);
relation* rel___dollorhead__stratified38__6__5__6 = new relation(2, false, 6, get_tag_for_rel("$head-stratified38","5__6"), std::to_string(get_tag_for_rel("$head-stratified38","5__6")) + ".$head-stratified38.6.table",   FULL);
relation* rel___dollornil__1__1 = new relation(1, true, 1, get_tag_for_rel("$nil","1"), std::to_string(get_tag_for_rel("$nil","1")) + ".$nil.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$nil","1")) + ".$nil.1.table", FULL);
relation* rel___dollorinter__head7__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$inter-head7","1__2__3__4__5"), std::to_string(get_tag_for_rel("$inter-head7","1__2__3__4__5")) + ".$inter-head7.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head7","1__2__3__4__5")) + ".$inter-head7.5.table", FULL);
relation* rel___dollorbir__sub3__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$bir-sub3","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$bir-sub3","1__2__3__4__5__6")) + ".$bir-sub3.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub3","1__2__3__4__5__6")) + ".$bir-sub3.6.table", FULL);
relation* rel___dollorhir__sub3__3__1 = new relation(1, false, 3, get_tag_for_rel("$hir-sub3","1"), std::to_string(get_tag_for_rel("$hir-sub3","1")) + ".$hir-sub3.3.table",   FULL);
relation* rel__ret__2__1__2 = new relation(2, true, 2, get_tag_for_rel("ret","1__2"), std::to_string(get_tag_for_rel("ret","1__2")) + ".ret.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("ret","1__2")) + ".ret.2.table", FULL);
relation* rel___dollorrule1__inter__body__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule1-inter-body","1__2"), std::to_string(get_tag_for_rel("$rule1-inter-body","1__2")) + ".$rule1-inter-body.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule1-inter-body","1__2")) + ".$rule1-inter-body.2.table", FULL);
relation* rel___dollorhead__splice2__8__5__8 = new relation(2, false, 8, get_tag_for_rel("$head-splice2","5__8"), std::to_string(get_tag_for_rel("$head-splice2","5__8")) + ".$head-splice2.8.table",   FULL);
relation* rel___dollorbir__sub10__3__1 = new relation(1, false, 3, get_tag_for_rel("$bir-sub10","1"), std::to_string(get_tag_for_rel("$bir-sub10","1")) + ".$bir-sub10.3.table",   FULL);
relation* rel__split__at__end__input__2__1__2 = new relation(2, true, 2, get_tag_for_rel("split-at-end-input","1__2"), std::to_string(get_tag_for_rel("split-at-end-input","1__2")) + ".split-at-end-input.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("split-at-end-input","1__2")) + ".split-at-end-input.2.table", FULL);
relation* rel___dollorrule77__inter__body4__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$rule77-inter-body4","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$rule77-inter-body4","1__2__3__4__5__6__7")) + ".$rule77-inter-body4.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule77-inter-body4","1__2__3__4__5__6__7")) + ".$rule77-inter-body4.7.table", FULL);
relation* rel___dollorhead__stratified62__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified62","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified62","1__2__3")) + ".$head-stratified62.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified62","1__2__3")) + ".$head-stratified62.3.table", FULL);
relation* rel___dollorhead__stratified45__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$head-stratified45","1__2"), std::to_string(get_tag_for_rel("$head-stratified45","1__2")) + ".$head-stratified45.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified45","1__2")) + ".$head-stratified45.2.table", FULL);
relation* rel___dollorrule67__inter__body9__2__2 = new relation(1, false, 2, get_tag_for_rel("$rule67-inter-body9","2"), std::to_string(get_tag_for_rel("$rule67-inter-body9","2")) + ".$rule67-inter-body9.2.table",   FULL);
relation* rel___dollorrule77__inter__body__6__2__1 = new relation(2, false, 6, get_tag_for_rel("$rule77-inter-body","2__1"), std::to_string(get_tag_for_rel("$rule77-inter-body","2__1")) + ".$rule77-inter-body.6.table",   FULL);
relation* rel___dollorrule71__inter__body2__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule71-inter-body2","1__2"), std::to_string(get_tag_for_rel("$rule71-inter-body2","1__2")) + ".$rule71-inter-body2.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule71-inter-body2","1__2")) + ".$rule71-inter-body2.2.table", FULL);
relation* rel___dollorhead__stratified56__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$head-stratified56","1__2"), std::to_string(get_tag_for_rel("$head-stratified56","1__2")) + ".$head-stratified56.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified56","1__2")) + ".$head-stratified56.2.table", FULL);
relation* rel___dollorrule59__inter__body9__4__2 = new relation(1, false, 4, get_tag_for_rel("$rule59-inter-body9","2"), std::to_string(get_tag_for_rel("$rule59-inter-body9","2")) + ".$rule59-inter-body9.4.table",   FULL);
relation* rel___dollorinter__head13__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$inter-head13","1__2__3__4__5"), std::to_string(get_tag_for_rel("$inter-head13","1__2__3__4__5")) + ".$inter-head13.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head13","1__2__3__4__5")) + ".$inter-head13.5.table", FULL);
relation* rel___dollorrule71__inter__body6__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule71-inter-body6","1"), std::to_string(get_tag_for_rel("$rule71-inter-body6","1")) + ".$rule71-inter-body6.2.table",   FULL);
relation* rel___dollorrule55__inter__body8__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule55-inter-body8","1__2__3"), std::to_string(get_tag_for_rel("$rule55-inter-body8","1__2__3")) + ".$rule55-inter-body8.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule55-inter-body8","1__2__3")) + ".$rule55-inter-body8.3.table", FULL);
relation* rel___dollorhead__stratified13__6__4__6 = new relation(2, false, 6, get_tag_for_rel("$head-stratified13","4__6"), std::to_string(get_tag_for_rel("$head-stratified13","4__6")) + ".$head-stratified13.6.table",   FULL);
relation* rel___dollorrule48__inter__body3__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule48-inter-body3","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule48-inter-body3","1__2__3__4__5")) + ".$rule48-inter-body3.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule48-inter-body3","1__2__3__4__5")) + ".$rule48-inter-body3.5.table", FULL);
relation* rel___dollorinter__head7__5__2 = new relation(1, false, 5, get_tag_for_rel("$inter-head7","2"), std::to_string(get_tag_for_rel("$inter-head7","2")) + ".$inter-head7.5.table",   FULL);
relation* rel__list__of__1__0__1 = new relation(2, false, 1, get_tag_for_rel("list-of","0__1"), std::to_string(get_tag_for_rel("list-of","0__1")) + ".list-of.1.table",   FULL);
relation* rel___dollorrule48__inter__body1__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule48-inter-body1","1"), std::to_string(get_tag_for_rel("$rule48-inter-body1","1")) + ".$rule48-inter-body1.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule48-inter-body1","1")) + ".$rule48-inter-body1.1.table", FULL);
relation* rel__do__free__let__rhs__2__1__2 = new relation(2, true, 2, get_tag_for_rel("do-free-let-rhs","1__2"), std::to_string(get_tag_for_rel("do-free-let-rhs","1__2")) + ".do-free-let-rhs.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("do-free-let-rhs","1__2")) + ".do-free-let-rhs.2.table", FULL);
relation* rel___dollorrule1__inter__body__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule1-inter-body","1"), std::to_string(get_tag_for_rel("$rule1-inter-body","1")) + ".$rule1-inter-body.2.table",   FULL);
relation* rel___dollorrule84__inter__body__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule84-inter-body","1__2"), std::to_string(get_tag_for_rel("$rule84-inter-body","1__2")) + ".$rule84-inter-body.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule84-inter-body","1__2")) + ".$rule84-inter-body.2.table", FULL);
relation* rel___dollorrule8__inter__body__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule8-inter-body","1__2"), std::to_string(get_tag_for_rel("$rule8-inter-body","1__2")) + ".$rule8-inter-body.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule8-inter-body","1__2")) + ".$rule8-inter-body.2.table", FULL);
relation* rel___dollorhead__stratified50__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified50","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified50","1__2__3")) + ".$head-stratified50.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified50","1__2__3")) + ".$head-stratified50.3.table", FULL);
relation* rel___dollorrule61__inter__body2__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule61-inter-body2","1__2"), std::to_string(get_tag_for_rel("$rule61-inter-body2","1__2")) + ".$rule61-inter-body2.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule61-inter-body2","1__2")) + ".$rule61-inter-body2.2.table", FULL);
relation* rel___dollorrule85__inter__body1__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule85-inter-body1","3"), std::to_string(get_tag_for_rel("$rule85-inter-body1","3")) + ".$rule85-inter-body1.3.table",   FULL);
relation* rel___dollorhead__stratified13__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$head-stratified13","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$head-stratified13","1__2__3__4__5__6")) + ".$head-stratified13.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified13","1__2__3__4__5__6")) + ".$head-stratified13.6.table", FULL);
relation* rel___dollorrule46__inter__body2__7__ = new relation(0, false, 7, get_tag_for_rel("$rule46-inter-body2",""), std::to_string(get_tag_for_rel("$rule46-inter-body2","")) + ".$rule46-inter-body2.7.table",   FULL);
relation* rel___dollorinter__head54__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head54","1__2__3"), std::to_string(get_tag_for_rel("$inter-head54","1__2__3")) + ".$inter-head54.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head54","1__2__3")) + ".$inter-head54.3.table", FULL);
relation* rel___dollorinter__head22__6__3__1__2 = new relation(3, false, 6, get_tag_for_rel("$inter-head22","3__1__2"), std::to_string(get_tag_for_rel("$inter-head22","3__1__2")) + ".$inter-head22.6.table",   FULL);
relation* rel___dollorrule67__inter__body__3__1 = new relation(1, false, 3, get_tag_for_rel("$rule67-inter-body","1"), std::to_string(get_tag_for_rel("$rule67-inter-body","1")) + ".$rule67-inter-body.3.table",   FULL);
relation* rel___dollorhead__stratified43__4__1__3__4 = new relation(3, false, 4, get_tag_for_rel("$head-stratified43","1__3__4"), std::to_string(get_tag_for_rel("$head-stratified43","1__3__4")) + ".$head-stratified43.4.table",   FULL);
relation* rel___dollorrule67__inter__body7__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule67-inter-body7","1__2__3"), std::to_string(get_tag_for_rel("$rule67-inter-body7","1__2__3")) + ".$rule67-inter-body7.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule67-inter-body7","1__2__3")) + ".$rule67-inter-body7.3.table", FULL);
relation* rel___dollorrule47__inter__body5__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$rule47-inter-body5","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$rule47-inter-body5","1__2__3__4__5__6")) + ".$rule47-inter-body5.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule47-inter-body5","1__2__3__4__5__6")) + ".$rule47-inter-body5.6.table", FULL);
relation* rel___dollorhead__stratified6__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$head-stratified6","1__2__3__4"), std::to_string(get_tag_for_rel("$head-stratified6","1__2__3__4")) + ".$head-stratified6.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified6","1__2__3__4")) + ".$head-stratified6.4.table", FULL);
relation* rel___dollorrule55__inter__body10__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule55-inter-body10","1__2__3"), std::to_string(get_tag_for_rel("$rule55-inter-body10","1__2__3")) + ".$rule55-inter-body10.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule55-inter-body10","1__2__3")) + ".$rule55-inter-body10.3.table", FULL);
relation* rel___dollorrule69__inter__body7__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule69-inter-body7","1__2__3__4"), std::to_string(get_tag_for_rel("$rule69-inter-body7","1__2__3__4")) + ".$rule69-inter-body7.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule69-inter-body7","1__2__3__4")) + ".$rule69-inter-body7.4.table", FULL);
relation* rel__do__fixed__prop__all__3__2 = new relation(1, false, 3, get_tag_for_rel("do-fixed-prop-all","2"), std::to_string(get_tag_for_rel("do-fixed-prop-all","2")) + ".do-fixed-prop-all.3.table",   FULL);
relation* rel___dollorrule6__inter__body1__2__ = new relation(0, false, 2, get_tag_for_rel("$rule6-inter-body1",""), std::to_string(get_tag_for_rel("$rule6-inter-body1","")) + ".$rule6-inter-body1.2.table",   FULL);
relation* rel___dollornil__1__0 = new relation(1, false, 1, get_tag_for_rel("$nil","0"), std::to_string(get_tag_for_rel("$nil","0")) + ".$nil.1.table",   FULL);
relation* rel___dollorrule78__inter__body1__4__2__4__1 = new relation(3, false, 4, get_tag_for_rel("$rule78-inter-body1","2__4__1"), std::to_string(get_tag_for_rel("$rule78-inter-body1","2__4__1")) + ".$rule78-inter-body1.4.table",   FULL);
relation* rel__binding__2__0 = new relation(1, false, 2, get_tag_for_rel("binding","0"), std::to_string(get_tag_for_rel("binding","0")) + ".binding.2.table",   FULL);
relation* rel___dollorinter__head6__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head6","1__2__3"), std::to_string(get_tag_for_rel("$inter-head6","1__2__3")) + ".$inter-head6.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head6","1__2__3")) + ".$inter-head6.3.table", FULL);
relation* rel___dollorrule7__inter__body10__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule7-inter-body10","1__2__3"), std::to_string(get_tag_for_rel("$rule7-inter-body10","1__2__3")) + ".$rule7-inter-body10.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule7-inter-body10","1__2__3")) + ".$rule7-inter-body10.3.table", FULL);
relation* rel___dollorrule52__inter__body__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule52-inter-body","1"), std::to_string(get_tag_for_rel("$rule52-inter-body","1")) + ".$rule52-inter-body.2.table",   FULL);
relation* rel___dollorinter__head35__6__6 = new relation(1, false, 6, get_tag_for_rel("$inter-head35","6"), std::to_string(get_tag_for_rel("$inter-head35","6")) + ".$inter-head35.6.table",   FULL);
relation* rel___dollorrule59__inter__body8__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule59-inter-body8","3"), std::to_string(get_tag_for_rel("$rule59-inter-body8","3")) + ".$rule59-inter-body8.3.table",   FULL);
relation* rel___dollorinter__head61__3__3__2 = new relation(2, false, 3, get_tag_for_rel("$inter-head61","3__2"), std::to_string(get_tag_for_rel("$inter-head61","3__2")) + ".$inter-head61.3.table",   FULL);
relation* rel___dollorrule55__inter__body6__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule55-inter-body6","1__2__3"), std::to_string(get_tag_for_rel("$rule55-inter-body6","1__2__3")) + ".$rule55-inter-body6.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule55-inter-body6","1__2__3")) + ".$rule55-inter-body6.3.table", FULL);
relation* rel__do__tick__2__1__2 = new relation(2, true, 2, get_tag_for_rel("do-tick","1__2"), std::to_string(get_tag_for_rel("do-tick","1__2")) + ".do-tick.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("do-tick","1__2")) + ".do-tick.2.table", FULL);
relation* rel___dollorhead__stratified22__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$head-stratified22","1__2"), std::to_string(get_tag_for_rel("$head-stratified22","1__2")) + ".$head-stratified22.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified22","1__2")) + ".$head-stratified22.2.table", FULL);
relation* rel___dollorrule52__inter__body__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule52-inter-body","1__2"), std::to_string(get_tag_for_rel("$rule52-inter-body","1__2")) + ".$rule52-inter-body.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule52-inter-body","1__2")) + ".$rule52-inter-body.2.table", FULL);
relation* rel___dollorrule53__inter__body1__4__3 = new relation(1, false, 4, get_tag_for_rel("$rule53-inter-body1","3"), std::to_string(get_tag_for_rel("$rule53-inter-body1","3")) + ".$rule53-inter-body1.4.table",   FULL);
relation* rel___dollorinter__head34__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head34","1__2__3"), std::to_string(get_tag_for_rel("$inter-head34","1__2__3")) + ".$inter-head34.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head34","1__2__3")) + ".$inter-head34.3.table", FULL);
relation* rel___dollorinter__head24__2__2 = new relation(1, false, 2, get_tag_for_rel("$inter-head24","2"), std::to_string(get_tag_for_rel("$inter-head24","2")) + ".$inter-head24.2.table",   FULL);
relation* rel___dollorrule69__inter__body2__3__1 = new relation(1, false, 3, get_tag_for_rel("$rule69-inter-body2","1"), std::to_string(get_tag_for_rel("$rule69-inter-body2","1")) + ".$rule69-inter-body2.3.table",   FULL);
relation* rel___dollorrule60__inter__body5__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule60-inter-body5","1__2"), std::to_string(get_tag_for_rel("$rule60-inter-body5","1__2")) + ".$rule60-inter-body5.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule60-inter-body5","1__2")) + ".$rule60-inter-body5.2.table", FULL);
relation* rel___dollorhead__stratified44__6__3__6__1__2__4 = new relation(5, false, 6, get_tag_for_rel("$head-stratified44","3__6__1__2__4"), std::to_string(get_tag_for_rel("$head-stratified44","3__6__1__2__4")) + ".$head-stratified44.6.table",   FULL);
relation* rel___dollorhead__stratified23__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified23","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified23","1__2__3")) + ".$head-stratified23.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified23","1__2__3")) + ".$head-stratified23.3.table", FULL);
relation* rel___dollorrule63__inter__body1__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule63-inter-body1","1__2__3__4"), std::to_string(get_tag_for_rel("$rule63-inter-body1","1__2__3__4")) + ".$rule63-inter-body1.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule63-inter-body1","1__2__3__4")) + ".$rule63-inter-body1.4.table", FULL);
relation* rel___dollorinter__head31__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head31","1__2__3"), std::to_string(get_tag_for_rel("$inter-head31","1__2__3")) + ".$inter-head31.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head31","1__2__3")) + ".$inter-head31.3.table", FULL);
relation* rel___dollorrule75__inter__body__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule75-inter-body","1__2__3__4"), std::to_string(get_tag_for_rel("$rule75-inter-body","1__2__3__4")) + ".$rule75-inter-body.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule75-inter-body","1__2__3__4")) + ".$rule75-inter-body.4.table", FULL);
relation* rel___dollorrule48__inter__body3__5__5 = new relation(1, false, 5, get_tag_for_rel("$rule48-inter-body3","5"), std::to_string(get_tag_for_rel("$rule48-inter-body3","5")) + ".$rule48-inter-body3.5.table",   FULL);
relation* rel___dollorrule60__inter__body5__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule60-inter-body5","1"), std::to_string(get_tag_for_rel("$rule60-inter-body5","1")) + ".$rule60-inter-body5.2.table",   FULL);
relation* rel__ret__2__2 = new relation(1, false, 2, get_tag_for_rel("ret","2"), std::to_string(get_tag_for_rel("ret","2")) + ".ret.2.table",   FULL);
relation* rel___dollorbir__sub15__4__3__4 = new relation(2, false, 4, get_tag_for_rel("$bir-sub15","3__4"), std::to_string(get_tag_for_rel("$bir-sub15","3__4")) + ".$bir-sub15.4.table",   FULL);
relation* rel___dollorrule59__inter__body4__4__2 = new relation(1, false, 4, get_tag_for_rel("$rule59-inter-body4","2"), std::to_string(get_tag_for_rel("$rule59-inter-body4","2")) + ".$rule59-inter-body4.4.table",   FULL);
relation* rel___dollorhead__stratified8__7__7__6 = new relation(2, false, 7, get_tag_for_rel("$head-stratified8","7__6"), std::to_string(get_tag_for_rel("$head-stratified8","7__6")) + ".$head-stratified8.7.table",   FULL);
relation* rel___dollorrule71__inter__body4__3__1 = new relation(1, false, 3, get_tag_for_rel("$rule71-inter-body4","1"), std::to_string(get_tag_for_rel("$rule71-inter-body4","1")) + ".$rule71-inter-body4.3.table",   FULL);
relation* rel__split__at__end__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("split-at-end","1__2__3"), std::to_string(get_tag_for_rel("split-at-end","1__2__3")) + ".split-at-end.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("split-at-end","1__2__3")) + ".split-at-end.3.table", FULL);
relation* rel___dollorhead__stratified36__7__5__7 = new relation(2, false, 7, get_tag_for_rel("$head-stratified36","5__7"), std::to_string(get_tag_for_rel("$head-stratified36","5__7")) + ".$head-stratified36.7.table",   FULL);
relation* rel___dollorinter__head72__6__2__5__3__4 = new relation(4, false, 6, get_tag_for_rel("$inter-head72","2__5__3__4"), std::to_string(get_tag_for_rel("$inter-head72","2__5__3__4")) + ".$inter-head72.6.table",   FULL);
relation* rel___dollorbir__sub12__3__1 = new relation(1, false, 3, get_tag_for_rel("$bir-sub12","1"), std::to_string(get_tag_for_rel("$bir-sub12","1")) + ".$bir-sub12.3.table",   FULL);
relation* rel___dollorrule9__inter__body4__2__ = new relation(0, false, 2, get_tag_for_rel("$rule9-inter-body4",""), std::to_string(get_tag_for_rel("$rule9-inter-body4","")) + ".$rule9-inter-body4.2.table",   FULL);
relation* rel___dollorrule60__inter__body__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule60-inter-body","3"), std::to_string(get_tag_for_rel("$rule60-inter-body","3")) + ".$rule60-inter-body.3.table",   FULL);
relation* rel___dollorinter__head54__3__2__3 = new relation(2, false, 3, get_tag_for_rel("$inter-head54","2__3"), std::to_string(get_tag_for_rel("$inter-head54","2__3")) + ".$inter-head54.3.table",   FULL);
relation* rel___dollorinter__head19__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$inter-head19","1__2"), std::to_string(get_tag_for_rel("$inter-head19","1__2")) + ".$inter-head19.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head19","1__2")) + ".$inter-head19.2.table", FULL);
relation* rel___dollorrule74__inter__body1__4__1 = new relation(1, false, 4, get_tag_for_rel("$rule74-inter-body1","1"), std::to_string(get_tag_for_rel("$rule74-inter-body1","1")) + ".$rule74-inter-body1.4.table",   FULL);
relation* rel___dollorbir__sub1__8__1__2__3__4__5__6__7__8 = new relation(8, true, 8, get_tag_for_rel("$bir-sub1","1__2__3__4__5__6__7__8"), std::to_string(get_tag_for_rel("$bir-sub1","1__2__3__4__5__6__7__8")) + ".$bir-sub1.8.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub1","1__2__3__4__5__6__7__8")) + ".$bir-sub1.8.table", FULL);
relation* rel___dollorrule59__inter__body1__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule59-inter-body1","1__2__3"), std::to_string(get_tag_for_rel("$rule59-inter-body1","1__2__3")) + ".$rule59-inter-body1.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule59-inter-body1","1__2__3")) + ".$rule59-inter-body1.3.table", FULL);
relation* rel___dollorrule59__inter__body1__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule59-inter-body1","3"), std::to_string(get_tag_for_rel("$rule59-inter-body1","3")) + ".$rule59-inter-body1.3.table",   FULL);
relation* rel___dollorrule78__inter__body2__3__1 = new relation(1, false, 3, get_tag_for_rel("$rule78-inter-body2","1"), std::to_string(get_tag_for_rel("$rule78-inter-body2","1")) + ".$rule78-inter-body2.3.table",   FULL);
relation* rel__non__list__value__1__1 = new relation(1, true, 1, get_tag_for_rel("non-list-value","1"), std::to_string(get_tag_for_rel("non-list-value","1")) + ".non-list-value.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("non-list-value","1")) + ".non-list-value.1.table", FULL);
relation* rel___dollorinter__head5__3__2 = new relation(1, false, 3, get_tag_for_rel("$inter-head5","2"), std::to_string(get_tag_for_rel("$inter-head5","2")) + ".$inter-head5.3.table",   FULL);
relation* rel___dollorinter__head26__8__2__8__1__4__3__5__6 = new relation(7, false, 8, get_tag_for_rel("$inter-head26","2__8__1__4__3__5__6"), std::to_string(get_tag_for_rel("$inter-head26","2__8__1__4__3__5__6")) + ".$inter-head26.8.table",   FULL);
relation* rel___dollorrule47__inter__body3__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule47-inter-body3","1"), std::to_string(get_tag_for_rel("$rule47-inter-body3","1")) + ".$rule47-inter-body3.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule47-inter-body3","1")) + ".$rule47-inter-body3.1.table", FULL);
relation* rel__appk__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("appk","1__2__3__4__5"), std::to_string(get_tag_for_rel("appk","1__2__3__4__5")) + ".appk.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("appk","1__2__3__4__5")) + ".appk.5.table", FULL);
relation* rel__define__prim__2__0 = new relation(1, false, 2, get_tag_for_rel("define-prim","0"), std::to_string(get_tag_for_rel("define-prim","0")) + ".define-prim.2.table",   FULL);
relation* rel___dollorrule23__inter__body__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule23-inter-body","3"), std::to_string(get_tag_for_rel("$rule23-inter-body","3")) + ".$rule23-inter-body.3.table",   FULL);
relation* rel___dollorbir__sub1__8__1 = new relation(1, false, 8, get_tag_for_rel("$bir-sub1","1"), std::to_string(get_tag_for_rel("$bir-sub1","1")) + ".$bir-sub1.8.table",   FULL);
relation* rel___dollorrule55__inter__body4__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$rule55-inter-body4","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$rule55-inter-body4","1__2__3__4__5__6__7")) + ".$rule55-inter-body4.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule55-inter-body4","1__2__3__4__5__6__7")) + ".$rule55-inter-body4.7.table", FULL);
relation* rel___dollorrule55__inter__body5__8__2 = new relation(1, false, 8, get_tag_for_rel("$rule55-inter-body5","2"), std::to_string(get_tag_for_rel("$rule55-inter-body5","2")) + ".$rule55-inter-body5.8.table",   FULL);
relation* rel__tick__2__1__2 = new relation(2, true, 2, get_tag_for_rel("tick","1__2"), std::to_string(get_tag_for_rel("tick","1__2")) + ".tick.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("tick","1__2")) + ".tick.2.table", FULL);
relation* rel___dollorrule4__inter__body1__2__2 = new relation(1, false, 2, get_tag_for_rel("$rule4-inter-body1","2"), std::to_string(get_tag_for_rel("$rule4-inter-body1","2")) + ".$rule4-inter-body1.2.table",   FULL);
relation* rel___dollorrule53__inter__body__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule53-inter-body","1__2"), std::to_string(get_tag_for_rel("$rule53-inter-body","1__2")) + ".$rule53-inter-body.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule53-inter-body","1__2")) + ".$rule53-inter-body.2.table", FULL);
relation* rel___dollorrule75__inter__body1__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule75-inter-body1","1__2__3"), std::to_string(get_tag_for_rel("$rule75-inter-body1","1__2__3")) + ".$rule75-inter-body1.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule75-inter-body1","1__2__3")) + ".$rule75-inter-body1.3.table", FULL);
relation* rel__do__store__addr__union__3__2 = new relation(1, false, 3, get_tag_for_rel("do-store-addr-union","2"), std::to_string(get_tag_for_rel("do-store-addr-union","2")) + ".do-store-addr-union.3.table",   FULL);
relation* rel___dollorinter__head63__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$inter-head63","1__2__3__4__5"), std::to_string(get_tag_for_rel("$inter-head63","1__2__3__4__5")) + ".$inter-head63.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head63","1__2__3__4__5")) + ".$inter-head63.5.table", FULL);
relation* rel__free__2__2 = new relation(1, false, 2, get_tag_for_rel("free","2"), std::to_string(get_tag_for_rel("free","2")) + ".free.2.table",   FULL);
relation* rel___dollorrule67__inter__body11__2__ = new relation(0, false, 2, get_tag_for_rel("$rule67-inter-body11",""), std::to_string(get_tag_for_rel("$rule67-inter-body11","")) + ".$rule67-inter-body11.2.table",   FULL);
relation* rel___dollorrule7__inter__body4__7__5 = new relation(1, false, 7, get_tag_for_rel("$rule7-inter-body4","5"), std::to_string(get_tag_for_rel("$rule7-inter-body4","5")) + ".$rule7-inter-body4.7.table",   FULL);
relation* rel___dollorhead__stratified42__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$head-stratified42","1__2__3__4"), std::to_string(get_tag_for_rel("$head-stratified42","1__2__3__4")) + ".$head-stratified42.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified42","1__2__3__4")) + ".$head-stratified42.4.table", FULL);
relation* rel___dollorhir__sub3__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$hir-sub3","1__2__3"), std::to_string(get_tag_for_rel("$hir-sub3","1__2__3")) + ".$hir-sub3.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$hir-sub3","1__2__3")) + ".$hir-sub3.3.table", FULL);
relation* rel___dollorrule76__inter__body3__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$rule76-inter-body3","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$rule76-inter-body3","1__2__3__4__5__6")) + ".$rule76-inter-body3.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule76-inter-body3","1__2__3__4__5__6")) + ".$rule76-inter-body3.6.table", FULL);
relation* rel___dollorlst__2__1 = new relation(1, false, 2, get_tag_for_rel("$lst","1"), std::to_string(get_tag_for_rel("$lst","1")) + ".$lst.2.table",   FULL);
relation* rel___dollorrule57__inter__body__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule57-inter-body","1__2__3"), std::to_string(get_tag_for_rel("$rule57-inter-body","1__2__3")) + ".$rule57-inter-body.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule57-inter-body","1__2__3")) + ".$rule57-inter-body.3.table", FULL);
relation* rel___dollorrule69__inter__body8__4__2 = new relation(1, false, 4, get_tag_for_rel("$rule69-inter-body8","2"), std::to_string(get_tag_for_rel("$rule69-inter-body8","2")) + ".$rule69-inter-body8.4.table",   FULL);
relation* rel___dollorrule48__inter__body__5__5 = new relation(1, false, 5, get_tag_for_rel("$rule48-inter-body","5"), std::to_string(get_tag_for_rel("$rule48-inter-body","5")) + ".$rule48-inter-body.5.table",   FULL);
relation* rel___dollorrule76__inter__body6__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule76-inter-body6","1__2__3"), std::to_string(get_tag_for_rel("$rule76-inter-body6","1__2__3")) + ".$rule76-inter-body6.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule76-inter-body6","1__2__3")) + ".$rule76-inter-body6.3.table", FULL);
relation* rel___dollorrule80__inter__body__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule80-inter-body","3"), std::to_string(get_tag_for_rel("$rule80-inter-body","3")) + ".$rule80-inter-body.3.table",   FULL);
relation* rel___dollorhead__stratified30__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$head-stratified30","1__2__3__4"), std::to_string(get_tag_for_rel("$head-stratified30","1__2__3__4")) + ".$head-stratified30.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified30","1__2__3__4")) + ".$head-stratified30.4.table", FULL);
relation* rel___dollorrule59__inter__body3__2__2 = new relation(1, false, 2, get_tag_for_rel("$rule59-inter-body3","2"), std::to_string(get_tag_for_rel("$rule59-inter-body3","2")) + ".$rule59-inter-body3.2.table",   FULL);
relation* rel___dollorinter__head53__3__3__2 = new relation(2, false, 3, get_tag_for_rel("$inter-head53","3__2"), std::to_string(get_tag_for_rel("$inter-head53","3__2")) + ".$inter-head53.3.table",   FULL);
relation* rel___dollorrule64__inter__body__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule64-inter-body","1"), std::to_string(get_tag_for_rel("$rule64-inter-body","1")) + ".$rule64-inter-body.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule64-inter-body","1")) + ".$rule64-inter-body.1.table", FULL);
relation* rel___dollorrule75__inter__body3__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule75-inter-body3","1__2__3"), std::to_string(get_tag_for_rel("$rule75-inter-body3","1__2__3")) + ".$rule75-inter-body3.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule75-inter-body3","1__2__3")) + ".$rule75-inter-body3.3.table", FULL);
relation* rel__do__free__let__lhs__3__2 = new relation(1, false, 3, get_tag_for_rel("do-free-let-lhs","2"), std::to_string(get_tag_for_rel("do-free-let-lhs","2")) + ".do-free-let-lhs.3.table",   FULL);
relation* rel__string__1__1 = new relation(1, true, 1, get_tag_for_rel("string","1"), std::to_string(get_tag_for_rel("string","1")) + ".string.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("string","1")) + ".string.1.table", FULL);
relation* rel___dollorrule77__inter__body__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$rule77-inter-body","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$rule77-inter-body","1__2__3__4__5__6")) + ".$rule77-inter-body.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule77-inter-body","1__2__3__4__5__6")) + ".$rule77-inter-body.6.table", FULL);
relation* rel___dollorinter__head3__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$inter-head3","1__2__3__4"), std::to_string(get_tag_for_rel("$inter-head3","1__2__3__4")) + ".$inter-head3.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head3","1__2__3__4")) + ".$inter-head3.4.table", FULL);
relation* rel___dollorhead__stratified28__5__1__5 = new relation(2, false, 5, get_tag_for_rel("$head-stratified28","1__5"), std::to_string(get_tag_for_rel("$head-stratified28","1__5")) + ".$head-stratified28.5.table",   FULL);
relation* rel__do__var__prop__all__3__3 = new relation(1, false, 3, get_tag_for_rel("do-var-prop-all","3"), std::to_string(get_tag_for_rel("do-var-prop-all","3")) + ".do-var-prop-all.3.table",   FULL);
relation* rel__let__2__0 = new relation(1, false, 2, get_tag_for_rel("let","0"), std::to_string(get_tag_for_rel("let","0")) + ".let.2.table",   FULL);
relation* rel___dollorbir__sub16__2__1 = new relation(1, false, 2, get_tag_for_rel("$bir-sub16","1"), std::to_string(get_tag_for_rel("$bir-sub16","1")) + ".$bir-sub16.2.table",   FULL);
relation* rel__lambda__2__1 = new relation(1, false, 2, get_tag_for_rel("lambda","1"), std::to_string(get_tag_for_rel("lambda","1")) + ".lambda.2.table",   FULL);
relation* rel___dollorhead__splice__10__7__10 = new relation(2, false, 10, get_tag_for_rel("$head-splice","7__10"), std::to_string(get_tag_for_rel("$head-splice","7__10")) + ".$head-splice.10.table",   FULL);
relation* rel___dollorrule66__inter__body5__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule66-inter-body5","1__2__3"), std::to_string(get_tag_for_rel("$rule66-inter-body5","1__2__3")) + ".$rule66-inter-body5.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule66-inter-body5","1__2__3")) + ".$rule66-inter-body5.3.table", FULL);
relation* rel___dollorrule67__inter__body3__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule67-inter-body3","1__2"), std::to_string(get_tag_for_rel("$rule67-inter-body3","1__2")) + ".$rule67-inter-body3.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule67-inter-body3","1__2")) + ".$rule67-inter-body3.2.table", FULL);
relation* rel___dollorhead__stratified34__3__2__1 = new relation(2, false, 3, get_tag_for_rel("$head-stratified34","2__1"), std::to_string(get_tag_for_rel("$head-stratified34","2__1")) + ".$head-stratified34.3.table",   FULL);
relation* rel___dollorinter__head47__9__1__2__3__4__5__6__7__8__9 = new relation(9, true, 9, get_tag_for_rel("$inter-head47","1__2__3__4__5__6__7__8__9"), std::to_string(get_tag_for_rel("$inter-head47","1__2__3__4__5__6__7__8__9")) + ".$inter-head47.9.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head47","1__2__3__4__5__6__7__8__9")) + ".$inter-head47.9.table", FULL);
relation* rel___dollorrule7__inter__body4__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$rule7-inter-body4","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$rule7-inter-body4","1__2__3__4__5__6__7")) + ".$rule7-inter-body4.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule7-inter-body4","1__2__3__4__5__6__7")) + ".$rule7-inter-body4.7.table", FULL);
relation* rel___dollorinter__head15__5__3__5__2__4 = new relation(4, false, 5, get_tag_for_rel("$inter-head15","3__5__2__4"), std::to_string(get_tag_for_rel("$inter-head15","3__5__2__4")) + ".$inter-head15.5.table",   FULL);
relation* rel___dollorrule69__inter__body5__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule69-inter-body5","3"), std::to_string(get_tag_for_rel("$rule69-inter-body5","3")) + ".$rule69-inter-body5.3.table",   FULL);
relation* rel___dollorhead__stratified12__7__7__4 = new relation(2, false, 7, get_tag_for_rel("$head-stratified12","7__4"), std::to_string(get_tag_for_rel("$head-stratified12","7__4")) + ".$head-stratified12.7.table",   FULL);
relation* rel___dollorrule7__inter__body2__7__4 = new relation(1, false, 7, get_tag_for_rel("$rule7-inter-body2","4"), std::to_string(get_tag_for_rel("$rule7-inter-body2","4")) + ".$rule7-inter-body2.7.table",   FULL);
relation* rel___dollorrule74__inter__body__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule74-inter-body","1__2"), std::to_string(get_tag_for_rel("$rule74-inter-body","1__2")) + ".$rule74-inter-body.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule74-inter-body","1__2")) + ".$rule74-inter-body.2.table", FULL);
relation* rel___dollorrule6__inter__body2__3__ = new relation(0, false, 3, get_tag_for_rel("$rule6-inter-body2",""), std::to_string(get_tag_for_rel("$rule6-inter-body2","")) + ".$rule6-inter-body2.3.table",   FULL);
relation* rel__lambda__2__0 = new relation(1, false, 2, get_tag_for_rel("lambda","0"), std::to_string(get_tag_for_rel("lambda","0")) + ".lambda.2.table",   FULL);
relation* rel___dollorinter__head72__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$inter-head72","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$inter-head72","1__2__3__4__5__6")) + ".$inter-head72.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head72","1__2__3__4__5__6")) + ".$inter-head72.6.table", FULL);
relation* rel___dollorrule42__inter__body__5__ = new relation(0, false, 5, get_tag_for_rel("$rule42-inter-body",""), std::to_string(get_tag_for_rel("$rule42-inter-body","")) + ".$rule42-inter-body.5.table",   FULL);
relation* rel___dollorrule74__inter__body3__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule74-inter-body3","1__2__3__4"), std::to_string(get_tag_for_rel("$rule74-inter-body3","1__2__3__4")) + ".$rule74-inter-body3.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule74-inter-body3","1__2__3__4")) + ".$rule74-inter-body3.4.table", FULL);
relation* rel___dollorhead__stratified54__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified54","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified54","1__2__3")) + ".$head-stratified54.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified54","1__2__3")) + ".$head-stratified54.3.table", FULL);
relation* rel___dollorinter__head23__6__3__6__2 = new relation(3, false, 6, get_tag_for_rel("$inter-head23","3__6__2"), std::to_string(get_tag_for_rel("$inter-head23","3__6__2")) + ".$inter-head23.6.table",   FULL);
relation* rel___dollorrule32__inter__body1__2__2 = new relation(1, false, 2, get_tag_for_rel("$rule32-inter-body1","2"), std::to_string(get_tag_for_rel("$rule32-inter-body1","2")) + ".$rule32-inter-body1.2.table",   FULL);
relation* rel___dollorrule36__inter__body__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule36-inter-body","1"), std::to_string(get_tag_for_rel("$rule36-inter-body","1")) + ".$rule36-inter-body.2.table",   FULL);
relation* rel__store__flow__2__1__2 = new relation(2, true, 2, get_tag_for_rel("store-flow","1__2"), std::to_string(get_tag_for_rel("store-flow","1__2")) + ".store-flow.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("store-flow","1__2")) + ".store-flow.2.table", FULL);
relation* rel___dollorinter__head25__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$inter-head25","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$inter-head25","1__2__3__4__5__6__7")) + ".$inter-head25.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head25","1__2__3__4__5__6__7")) + ".$inter-head25.7.table", FULL);
relation* rel__define__3__0 = new relation(1, false, 3, get_tag_for_rel("define","0"), std::to_string(get_tag_for_rel("define","0")) + ".define.3.table",   FULL);
relation* rel___dollorrule74__inter__body2__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule74-inter-body2","1"), std::to_string(get_tag_for_rel("$rule74-inter-body2","1")) + ".$rule74-inter-body2.2.table",   FULL);
relation* rel___dollorlst__append__input__2__1 = new relation(1, false, 2, get_tag_for_rel("$lst-append-input","1"), std::to_string(get_tag_for_rel("$lst-append-input","1")) + ".$lst-append-input.2.table",   FULL);
relation* rel___dollorrule59__inter__body__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule59-inter-body","1"), std::to_string(get_tag_for_rel("$rule59-inter-body","1")) + ".$rule59-inter-body.2.table",   FULL);
relation* rel___dollorinter__head42__3__3 = new relation(1, false, 3, get_tag_for_rel("$inter-head42","3"), std::to_string(get_tag_for_rel("$inter-head42","3")) + ".$inter-head42.3.table",   FULL);
relation* rel___dollorrule67__inter__body7__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule67-inter-body7","3"), std::to_string(get_tag_for_rel("$rule67-inter-body7","3")) + ".$rule67-inter-body7.3.table",   FULL);
relation* rel___dollorinter__head49__10__1__2__3__4__5__6__7__8__9__10 = new relation(10, true, 10, get_tag_for_rel("$inter-head49","1__2__3__4__5__6__7__8__9__10"), std::to_string(get_tag_for_rel("$inter-head49","1__2__3__4__5__6__7__8__9__10")) + ".$inter-head49.10.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head49","1__2__3__4__5__6__7__8__9__10")) + ".$inter-head49.10.table", FULL);
relation* rel__breaks__into__input__3__1__3 = new relation(2, false, 3, get_tag_for_rel("breaks-into-input","1__3"), std::to_string(get_tag_for_rel("breaks-into-input","1__3")) + ".breaks-into-input.3.table",   FULL);
relation* rel___dollorhead__stratified35__3__2__3 = new relation(2, false, 3, get_tag_for_rel("$head-stratified35","2__3"), std::to_string(get_tag_for_rel("$head-stratified35","2__3")) + ".$head-stratified35.3.table",   FULL);
relation* rel___dollorlst__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$lst","1__2"), std::to_string(get_tag_for_rel("$lst","1__2")) + ".$lst.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$lst","1__2")) + ".$lst.2.table", FULL);
relation* rel___dollorrule69__inter__body2__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule69-inter-body2","1__2__3"), std::to_string(get_tag_for_rel("$rule69-inter-body2","1__2__3")) + ".$rule69-inter-body2.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule69-inter-body2","1__2__3")) + ".$rule69-inter-body2.3.table", FULL);
relation* rel___dollorinter__head52__3__3 = new relation(1, false, 3, get_tag_for_rel("$inter-head52","3"), std::to_string(get_tag_for_rel("$inter-head52","3")) + ".$inter-head52.3.table",   FULL);
relation* rel___dollorrule76__inter__body4__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule76-inter-body4","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule76-inter-body4","1__2__3__4__5")) + ".$rule76-inter-body4.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule76-inter-body4","1__2__3__4__5")) + ".$rule76-inter-body4.5.table", FULL);
relation* rel__kaddr__1__0 = new relation(1, false, 1, get_tag_for_rel("kaddr","0"), std::to_string(get_tag_for_rel("kaddr","0")) + ".kaddr.1.table",   FULL);
relation* rel___dollorrule77__inter__body1__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule77-inter-body1","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule77-inter-body1","1__2__3__4__5")) + ".$rule77-inter-body1.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule77-inter-body1","1__2__3__4__5")) + ".$rule77-inter-body1.5.table", FULL);
relation* rel___dollorhead__splice2__8__1__2__3__4__5__6__7__8 = new relation(8, true, 8, get_tag_for_rel("$head-splice2","1__2__3__4__5__6__7__8"), std::to_string(get_tag_for_rel("$head-splice2","1__2__3__4__5__6__7__8")) + ".$head-splice2.8.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-splice2","1__2__3__4__5__6__7__8")) + ".$head-splice2.8.table", FULL);
relation* rel___dollorrule2__inter__body__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule2-inter-body","1__2"), std::to_string(get_tag_for_rel("$rule2-inter-body","1__2")) + ".$rule2-inter-body.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule2-inter-body","1__2")) + ".$rule2-inter-body.2.table", FULL);
relation* rel___dollorrule69__inter__body__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule69-inter-body","1__2__3"), std::to_string(get_tag_for_rel("$rule69-inter-body","1__2__3")) + ".$rule69-inter-body.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule69-inter-body","1__2__3")) + ".$rule69-inter-body.3.table", FULL);
relation* rel__fixedarg__1__0 = new relation(1, false, 1, get_tag_for_rel("fixedarg","0"), std::to_string(get_tag_for_rel("fixedarg","0")) + ".fixedarg.1.table",   FULL);
relation* rel___dollorinter__head64__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head64","1__2__3"), std::to_string(get_tag_for_rel("$inter-head64","1__2__3")) + ".$inter-head64.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head64","1__2__3")) + ".$inter-head64.3.table", FULL);
relation* rel___dollorrule9__inter__body1__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule9-inter-body1","1__2__3__4"), std::to_string(get_tag_for_rel("$rule9-inter-body1","1__2__3__4")) + ".$rule9-inter-body1.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule9-inter-body1","1__2__3__4")) + ".$rule9-inter-body1.4.table", FULL);
relation* rel___dollorrule8__inter__body1__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule8-inter-body1","1"), std::to_string(get_tag_for_rel("$rule8-inter-body1","1")) + ".$rule8-inter-body1.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule8-inter-body1","1")) + ".$rule8-inter-body1.1.table", FULL);
relation* rel__answer__2__1__2 = new relation(2, true, 2, get_tag_for_rel("answer","1__2"), std::to_string(get_tag_for_rel("answer","1__2")) + ".answer.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("answer","1__2")) + ".answer.2.table", FULL);
relation* rel___dollorrule6__inter__body3__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule6-inter-body3","1__2__3__4"), std::to_string(get_tag_for_rel("$rule6-inter-body3","1__2__3__4")) + ".$rule6-inter-body3.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule6-inter-body3","1__2__3__4")) + ".$rule6-inter-body3.4.table", FULL);
relation* rel___dollorrule9__inter__body2__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule9-inter-body2","1__2__3__4"), std::to_string(get_tag_for_rel("$rule9-inter-body2","1__2__3__4")) + ".$rule9-inter-body2.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule9-inter-body2","1__2__3__4")) + ".$rule9-inter-body2.4.table", FULL);
relation* rel___dollorrule78__inter__body3__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule78-inter-body3","1__2__3__4"), std::to_string(get_tag_for_rel("$rule78-inter-body3","1__2__3__4")) + ".$rule78-inter-body3.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule78-inter-body3","1__2__3__4")) + ".$rule78-inter-body3.4.table", FULL);
relation* rel___dollorrule3__inter__body1__2__ = new relation(0, false, 2, get_tag_for_rel("$rule3-inter-body1",""), std::to_string(get_tag_for_rel("$rule3-inter-body1","")) + ".$rule3-inter-body1.2.table",   FULL);
relation* rel___dollorhead__stratified44__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$head-stratified44","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$head-stratified44","1__2__3__4__5__6")) + ".$head-stratified44.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified44","1__2__3__4__5__6")) + ".$head-stratified44.6.table", FULL);
relation* rel___dollorrule45__inter__body1__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule45-inter-body1","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule45-inter-body1","1__2__3__4__5")) + ".$rule45-inter-body1.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule45-inter-body1","1__2__3__4__5")) + ".$rule45-inter-body1.5.table", FULL);
relation* rel___dollorrule66__inter__body5__3__1__2 = new relation(2, false, 3, get_tag_for_rel("$rule66-inter-body5","1__2"), std::to_string(get_tag_for_rel("$rule66-inter-body5","1__2")) + ".$rule66-inter-body5.3.table",   FULL);
relation* rel___dollorrule78__inter__body4__4__2 = new relation(1, false, 4, get_tag_for_rel("$rule78-inter-body4","2"), std::to_string(get_tag_for_rel("$rule78-inter-body4","2")) + ".$rule78-inter-body4.4.table",   FULL);
relation* rel___dollorrule48__inter__body__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule48-inter-body","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule48-inter-body","1__2__3__4__5")) + ".$rule48-inter-body.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule48-inter-body","1__2__3__4__5")) + ".$rule48-inter-body.5.table", FULL);
relation* rel___dollorrule76__inter__body4__5__1 = new relation(1, false, 5, get_tag_for_rel("$rule76-inter-body4","1"), std::to_string(get_tag_for_rel("$rule76-inter-body4","1")) + ".$rule76-inter-body4.5.table",   FULL);
relation* rel___dollorrule61__inter__body1__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule61-inter-body1","1"), std::to_string(get_tag_for_rel("$rule61-inter-body1","1")) + ".$rule61-inter-body1.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule61-inter-body1","1")) + ".$rule61-inter-body1.1.table", FULL);
relation* rel___dollorrule59__inter__body7__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule59-inter-body7","1__2__3__4"), std::to_string(get_tag_for_rel("$rule59-inter-body7","1__2__3__4")) + ".$rule59-inter-body7.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule59-inter-body7","1__2__3__4")) + ".$rule59-inter-body7.4.table", FULL);
relation* rel___dollorhead__stratified49__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified49","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified49","1__2__3")) + ".$head-stratified49.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified49","1__2__3")) + ".$head-stratified49.3.table", FULL);
relation* rel___dollorhead__splice1__9__1__2__3__4__5__6__7__8__9 = new relation(9, true, 9, get_tag_for_rel("$head-splice1","1__2__3__4__5__6__7__8__9"), std::to_string(get_tag_for_rel("$head-splice1","1__2__3__4__5__6__7__8__9")) + ".$head-splice1.9.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-splice1","1__2__3__4__5__6__7__8__9")) + ".$head-splice1.9.table", FULL);
relation* rel___dollorinter__head68__2__1 = new relation(1, false, 2, get_tag_for_rel("$inter-head68","1"), std::to_string(get_tag_for_rel("$inter-head68","1")) + ".$inter-head68.2.table",   FULL);
relation* rel___dollorrule2__inter__body__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule2-inter-body","1"), std::to_string(get_tag_for_rel("$rule2-inter-body","1")) + ".$rule2-inter-body.2.table",   FULL);
relation* rel___dollorrule82__inter__body__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule82-inter-body","1__2__3__4"), std::to_string(get_tag_for_rel("$rule82-inter-body","1__2__3__4")) + ".$rule82-inter-body.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule82-inter-body","1__2__3__4")) + ".$rule82-inter-body.4.table", FULL);
relation* rel___dollorinter__head60__3__1__2 = new relation(2, false, 3, get_tag_for_rel("$inter-head60","1__2"), std::to_string(get_tag_for_rel("$inter-head60","1__2")) + ".$inter-head60.3.table",   FULL);
relation* rel___dollorrule67__inter__body10__1__ = new relation(0, false, 1, get_tag_for_rel("$rule67-inter-body10",""), std::to_string(get_tag_for_rel("$rule67-inter-body10","")) + ".$rule67-inter-body10.1.table",   FULL);
relation* rel___dollorrule21__inter__body__3__1 = new relation(1, false, 3, get_tag_for_rel("$rule21-inter-body","1"), std::to_string(get_tag_for_rel("$rule21-inter-body","1")) + ".$rule21-inter-body.3.table",   FULL);
relation* rel___dollorlst__split__input__1__ = new relation(0, false, 1, get_tag_for_rel("$lst-split-input",""), std::to_string(get_tag_for_rel("$lst-split-input","")) + ".$lst-split-input.1.table",   FULL);
relation* rel___dollorrule61__inter__body4__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule61-inter-body4","1__2__3"), std::to_string(get_tag_for_rel("$rule61-inter-body4","1__2__3")) + ".$rule61-inter-body4.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule61-inter-body4","1__2__3")) + ".$rule61-inter-body4.3.table", FULL);
relation* rel___dollorrule46__inter__body5__7__2 = new relation(1, false, 7, get_tag_for_rel("$rule46-inter-body5","2"), std::to_string(get_tag_for_rel("$rule46-inter-body5","2")) + ".$rule46-inter-body5.7.table",   FULL);
relation* rel___dollorrule75__inter__body5__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$rule75-inter-body5","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$rule75-inter-body5","1__2__3__4__5__6__7")) + ".$rule75-inter-body5.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule75-inter-body5","1__2__3__4__5__6__7")) + ".$rule75-inter-body5.7.table", FULL);
relation* rel___dollorhead__stratified25__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified25","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified25","1__2__3")) + ".$head-stratified25.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified25","1__2__3")) + ".$head-stratified25.3.table", FULL);
relation* rel___dollorinter__head49__10__7__9__6__3__5__4__2__8__1 = new relation(9, false, 10, get_tag_for_rel("$inter-head49","7__9__6__3__5__4__2__8__1"), std::to_string(get_tag_for_rel("$inter-head49","7__9__6__3__5__4__2__8__1")) + ".$inter-head49.10.table",   FULL);
relation* rel__store__2__2 = new relation(1, false, 2, get_tag_for_rel("store","2"), std::to_string(get_tag_for_rel("store","2")) + ".store.2.table",   FULL);
relation* rel___dollorinter__head1__3__3 = new relation(1, false, 3, get_tag_for_rel("$inter-head1","3"), std::to_string(get_tag_for_rel("$inter-head1","3")) + ".$inter-head1.3.table",   FULL);
relation* rel___dollorrule7__inter__body11__4__ = new relation(0, false, 4, get_tag_for_rel("$rule7-inter-body11",""), std::to_string(get_tag_for_rel("$rule7-inter-body11","")) + ".$rule7-inter-body11.4.table",   FULL);
relation* rel___dollorrule55__inter__body1__9__1__2__3__4__5__6__7__8__9 = new relation(9, true, 9, get_tag_for_rel("$rule55-inter-body1","1__2__3__4__5__6__7__8__9"), std::to_string(get_tag_for_rel("$rule55-inter-body1","1__2__3__4__5__6__7__8__9")) + ".$rule55-inter-body1.9.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule55-inter-body1","1__2__3__4__5__6__7__8__9")) + ".$rule55-inter-body1.9.table", FULL);
relation* rel___dollorlst__2__0 = new relation(1, false, 2, get_tag_for_rel("$lst","0"), std::to_string(get_tag_for_rel("$lst","0")) + ".$lst.2.table",   FULL);
relation* rel__vararg__1__1 = new relation(1, true, 1, get_tag_for_rel("vararg","1"), std::to_string(get_tag_for_rel("vararg","1")) + ".vararg.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("vararg","1")) + ".vararg.1.table", FULL);
relation* rel__string__1__0 = new relation(1, false, 1, get_tag_for_rel("string","0"), std::to_string(get_tag_for_rel("string","0")) + ".string.1.table",   FULL);
relation* rel__ref__1__1 = new relation(1, true, 1, get_tag_for_rel("ref","1"), std::to_string(get_tag_for_rel("ref","1")) + ".ref.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("ref","1")) + ".ref.1.table", FULL);
relation* rel__appl__2__1 = new relation(1, false, 2, get_tag_for_rel("appl","1"), std::to_string(get_tag_for_rel("appl","1")) + ".appl.2.table",   FULL);
relation* rel___dollorrule7__inter__body__7__4 = new relation(1, false, 7, get_tag_for_rel("$rule7-inter-body","4"), std::to_string(get_tag_for_rel("$rule7-inter-body","4")) + ".$rule7-inter-body.7.table",   FULL);
relation* rel___dollorlst__append__input__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$lst-append-input","1__2"), std::to_string(get_tag_for_rel("$lst-append-input","1__2")) + ".$lst-append-input.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$lst-append-input","1__2")) + ".$lst-append-input.2.table", FULL);
relation* rel___dollorinter__head70__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$inter-head70","1__2__3__4__5"), std::to_string(get_tag_for_rel("$inter-head70","1__2__3__4__5")) + ".$inter-head70.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head70","1__2__3__4__5")) + ".$inter-head70.5.table", FULL);
relation* rel___dollorrule46__inter__body6__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$rule46-inter-body6","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$rule46-inter-body6","1__2__3__4__5__6")) + ".$rule46-inter-body6.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule46-inter-body6","1__2__3__4__5__6")) + ".$rule46-inter-body6.6.table", FULL);
relation* rel___dollorrule85__inter__body__2__2 = new relation(1, false, 2, get_tag_for_rel("$rule85-inter-body","2"), std::to_string(get_tag_for_rel("$rule85-inter-body","2")) + ".$rule85-inter-body.2.table",   FULL);
relation* rel___dollorrule66__inter__body8__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule66-inter-body8","1"), std::to_string(get_tag_for_rel("$rule66-inter-body8","1")) + ".$rule66-inter-body8.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule66-inter-body8","1")) + ".$rule66-inter-body8.1.table", FULL);
relation* rel___dollorhead__stratified37__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$head-stratified37","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$head-stratified37","1__2__3__4__5__6__7")) + ".$head-stratified37.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified37","1__2__3__4__5__6__7")) + ".$head-stratified37.7.table", FULL);
relation* rel___dollorrule67__inter__body6__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule67-inter-body6","1__2"), std::to_string(get_tag_for_rel("$rule67-inter-body6","1__2")) + ".$rule67-inter-body6.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule67-inter-body6","1__2")) + ".$rule67-inter-body6.2.table", FULL);
relation* rel___dollorhead__stratified65__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified65","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified65","1__2__3")) + ".$head-stratified65.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified65","1__2__3")) + ".$head-stratified65.3.table", FULL);
relation* rel___dollorinter__head28__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$inter-head28","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$inter-head28","1__2__3__4__5__6__7")) + ".$inter-head28.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head28","1__2__3__4__5__6__7")) + ".$inter-head28.7.table", FULL);
relation* rel___dollorrule71__inter__body3__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule71-inter-body3","3"), std::to_string(get_tag_for_rel("$rule71-inter-body3","3")) + ".$rule71-inter-body3.3.table",   FULL);
relation* rel___dollorrule46__inter__body4__8__1__8 = new relation(2, false, 8, get_tag_for_rel("$rule46-inter-body4","1__8"), std::to_string(get_tag_for_rel("$rule46-inter-body4","1__8")) + ".$rule46-inter-body4.8.table",   FULL);
relation* rel___dollorrule66__inter__body4__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule66-inter-body4","1__2__3"), std::to_string(get_tag_for_rel("$rule66-inter-body4","1__2__3")) + ".$rule66-inter-body4.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule66-inter-body4","1__2__3")) + ".$rule66-inter-body4.3.table", FULL);
relation* rel___dollorrule37__inter__body__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule37-inter-body","1"), std::to_string(get_tag_for_rel("$rule37-inter-body","1")) + ".$rule37-inter-body.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule37-inter-body","1")) + ".$rule37-inter-body.1.table", FULL);
relation* rel___dollorhead__stratified68__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$head-stratified68","1__2"), std::to_string(get_tag_for_rel("$head-stratified68","1__2")) + ".$head-stratified68.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified68","1__2")) + ".$head-stratified68.2.table", FULL);
relation* rel___dollorrule32__inter__body__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule32-inter-body","1__2"), std::to_string(get_tag_for_rel("$rule32-inter-body","1__2")) + ".$rule32-inter-body.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule32-inter-body","1__2")) + ".$rule32-inter-body.2.table", FULL);
relation* rel___dollorrule7__inter__body6__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$rule7-inter-body6","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$rule7-inter-body6","1__2__3__4__5__6__7")) + ".$rule7-inter-body6.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule7-inter-body6","1__2__3__4__5__6__7")) + ".$rule7-inter-body6.7.table", FULL);
relation* rel__faddr__2__1__2 = new relation(2, true, 2, get_tag_for_rel("faddr","1__2"), std::to_string(get_tag_for_rel("faddr","1__2")) + ".faddr.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("faddr","1__2")) + ".faddr.2.table", FULL);
relation* rel___dollorrule2__inter__body3__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule2-inter-body3","1__2__3__4"), std::to_string(get_tag_for_rel("$rule2-inter-body3","1__2__3__4")) + ".$rule2-inter-body3.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule2-inter-body3","1__2__3__4")) + ".$rule2-inter-body3.4.table", FULL);
relation* rel___dollorrule76__inter__body1__6__4 = new relation(1, false, 6, get_tag_for_rel("$rule76-inter-body1","4"), std::to_string(get_tag_for_rel("$rule76-inter-body1","4")) + ".$rule76-inter-body1.6.table",   FULL);
relation* rel___dollorrule55__inter__body10__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule55-inter-body10","3"), std::to_string(get_tag_for_rel("$rule55-inter-body10","3")) + ".$rule55-inter-body10.3.table",   FULL);
relation* rel___dollorhir__sub2__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$hir-sub2","1__2__3"), std::to_string(get_tag_for_rel("$hir-sub2","1__2__3")) + ".$hir-sub2.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$hir-sub2","1__2__3")) + ".$hir-sub2.3.table", FULL);
relation* rel___dollorinter__head64__3__2 = new relation(1, false, 3, get_tag_for_rel("$inter-head64","2"), std::to_string(get_tag_for_rel("$inter-head64","2")) + ".$inter-head64.3.table",   FULL);
relation* rel___dollorrule4__inter__body__5__1__4 = new relation(2, false, 5, get_tag_for_rel("$rule4-inter-body","1__4"), std::to_string(get_tag_for_rel("$rule4-inter-body","1__4")) + ".$rule4-inter-body.5.table",   FULL);
relation* rel___dollorrule60__inter__body3__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule60-inter-body3","1"), std::to_string(get_tag_for_rel("$rule60-inter-body3","1")) + ".$rule60-inter-body3.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule60-inter-body3","1")) + ".$rule60-inter-body3.1.table", FULL);
relation* rel___dollorrule73__inter__body2__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule73-inter-body2","3"), std::to_string(get_tag_for_rel("$rule73-inter-body2","3")) + ".$rule73-inter-body2.3.table",   FULL);
relation* rel___dollorhead__stratified48__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$head-stratified48","1__2"), std::to_string(get_tag_for_rel("$head-stratified48","1__2")) + ".$head-stratified48.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified48","1__2")) + ".$head-stratified48.2.table", FULL);
relation* rel__eval__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("eval","1__2__3"), std::to_string(get_tag_for_rel("eval","1__2__3")) + ".eval.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("eval","1__2__3")) + ".eval.3.table", FULL);
relation* rel___dollorrule69__inter__body6__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule69-inter-body6","1__2__3__4"), std::to_string(get_tag_for_rel("$rule69-inter-body6","1__2__3__4")) + ".$rule69-inter-body6.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule69-inter-body6","1__2__3__4")) + ".$rule69-inter-body6.4.table", FULL);
relation* rel___dollorinter__head58__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head58","1__2__3"), std::to_string(get_tag_for_rel("$inter-head58","1__2__3")) + ".$inter-head58.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head58","1__2__3")) + ".$inter-head58.3.table", FULL);
relation* rel___dollorrule71__inter__body__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule71-inter-body","1"), std::to_string(get_tag_for_rel("$rule71-inter-body","1")) + ".$rule71-inter-body.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule71-inter-body","1")) + ".$rule71-inter-body.1.table", FULL);
relation* rel___dollorrule73__inter__body1__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule73-inter-body1","1__2__3__4"), std::to_string(get_tag_for_rel("$rule73-inter-body1","1__2__3__4")) + ".$rule73-inter-body1.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule73-inter-body1","1__2__3__4")) + ".$rule73-inter-body1.4.table", FULL);
relation* rel___dollorinter__head__4__1__2 = new relation(2, false, 4, get_tag_for_rel("$inter-head","1__2"), std::to_string(get_tag_for_rel("$inter-head","1__2")) + ".$inter-head.4.table",   FULL);
relation* rel___dollorinter__head71__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head71","1__2__3"), std::to_string(get_tag_for_rel("$inter-head71","1__2__3")) + ".$inter-head71.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head71","1__2__3")) + ".$inter-head71.3.table", FULL);
relation* rel___dollorrule10__inter__body__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule10-inter-body","1__2"), std::to_string(get_tag_for_rel("$rule10-inter-body","1__2")) + ".$rule10-inter-body.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule10-inter-body","1__2")) + ".$rule10-inter-body.2.table", FULL);
relation* rel___dollorrule34__inter__body1__4__2__4 = new relation(2, false, 4, get_tag_for_rel("$rule34-inter-body1","2__4"), std::to_string(get_tag_for_rel("$rule34-inter-body1","2__4")) + ".$rule34-inter-body1.4.table",   FULL);
relation* rel___dollorbir__sub13__3__1 = new relation(1, false, 3, get_tag_for_rel("$bir-sub13","1"), std::to_string(get_tag_for_rel("$bir-sub13","1")) + ".$bir-sub13.3.table",   FULL);
relation* rel___dollorbir__sub8__6__1 = new relation(1, false, 6, get_tag_for_rel("$bir-sub8","1"), std::to_string(get_tag_for_rel("$bir-sub8","1")) + ".$bir-sub8.6.table",   FULL);
relation* rel___dollorinter__head22__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$inter-head22","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$inter-head22","1__2__3__4__5__6")) + ".$inter-head22.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head22","1__2__3__4__5__6")) + ".$inter-head22.6.table", FULL);
relation* rel___dollorlst__split__3__1 = new relation(1, false, 3, get_tag_for_rel("$lst-split","1"), std::to_string(get_tag_for_rel("$lst-split","1")) + ".$lst-split.3.table",   FULL);
relation* rel___dollorrule66__inter__body7__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule66-inter-body7","1"), std::to_string(get_tag_for_rel("$rule66-inter-body7","1")) + ".$rule66-inter-body7.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule66-inter-body7","1")) + ".$rule66-inter-body7.1.table", FULL);
relation* rel___dollorrule75__inter__body2__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule75-inter-body2","1__2__3"), std::to_string(get_tag_for_rel("$rule75-inter-body2","1__2__3")) + ".$rule75-inter-body2.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule75-inter-body2","1__2__3")) + ".$rule75-inter-body2.3.table", FULL);
relation* rel___dollorbir__sub17__2__1 = new relation(1, false, 2, get_tag_for_rel("$bir-sub17","1"), std::to_string(get_tag_for_rel("$bir-sub17","1")) + ".$bir-sub17.2.table",   FULL);
relation* rel___dollorrule10__inter__body1__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule10-inter-body1","1"), std::to_string(get_tag_for_rel("$rule10-inter-body1","1")) + ".$rule10-inter-body1.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule10-inter-body1","1")) + ".$rule10-inter-body1.1.table", FULL);
relation* rel___dollorrule85__inter__body1__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule85-inter-body1","1__2__3"), std::to_string(get_tag_for_rel("$rule85-inter-body1","1__2__3")) + ".$rule85-inter-body1.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule85-inter-body1","1__2__3")) + ".$rule85-inter-body1.3.table", FULL);
relation* rel___dollorinter__head57__4__4__1 = new relation(2, false, 4, get_tag_for_rel("$inter-head57","4__1"), std::to_string(get_tag_for_rel("$inter-head57","4__1")) + ".$inter-head57.4.table",   FULL);
relation* rel___dollorrule36__inter__body2__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule36-inter-body2","1__2"), std::to_string(get_tag_for_rel("$rule36-inter-body2","1__2")) + ".$rule36-inter-body2.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule36-inter-body2","1__2")) + ".$rule36-inter-body2.2.table", FULL);
relation* rel___dollorrule77__inter__body4__7__5 = new relation(1, false, 7, get_tag_for_rel("$rule77-inter-body4","5"), std::to_string(get_tag_for_rel("$rule77-inter-body4","5")) + ".$rule77-inter-body4.7.table",   FULL);
relation* rel___dollorrule47__inter__body__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule47-inter-body","1__2__3"), std::to_string(get_tag_for_rel("$rule47-inter-body","1__2__3")) + ".$rule47-inter-body.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule47-inter-body","1__2__3")) + ".$rule47-inter-body.3.table", FULL);
relation* rel___dollorrule69__inter__body__3__2 = new relation(1, false, 3, get_tag_for_rel("$rule69-inter-body","2"), std::to_string(get_tag_for_rel("$rule69-inter-body","2")) + ".$rule69-inter-body.3.table",   FULL);
relation* rel___dollorinter__head42__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head42","1__2__3"), std::to_string(get_tag_for_rel("$inter-head42","1__2__3")) + ".$inter-head42.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head42","1__2__3")) + ".$inter-head42.3.table", FULL);
relation* rel___dollorrule45__inter__body1__5__3 = new relation(1, false, 5, get_tag_for_rel("$rule45-inter-body1","3"), std::to_string(get_tag_for_rel("$rule45-inter-body1","3")) + ".$rule45-inter-body1.5.table",   FULL);
relation* rel___dollorinter__head2__3__3__1 = new relation(2, false, 3, get_tag_for_rel("$inter-head2","3__1"), std::to_string(get_tag_for_rel("$inter-head2","3__1")) + ".$inter-head2.3.table",   FULL);
relation* rel___dollorinter__head21__5__4 = new relation(1, false, 5, get_tag_for_rel("$inter-head21","4"), std::to_string(get_tag_for_rel("$inter-head21","4")) + ".$inter-head21.5.table",   FULL);
relation* rel__do__store__addr__union__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("do-store-addr-union","1__2__3"), std::to_string(get_tag_for_rel("do-store-addr-union","1__2__3")) + ".do-store-addr-union.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("do-store-addr-union","1__2__3")) + ".do-store-addr-union.3.table", FULL);
relation* rel__length__input__1__1 = new relation(1, true, 1, get_tag_for_rel("length-input","1"), std::to_string(get_tag_for_rel("length-input","1")) + ".length-input.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("length-input","1")) + ".length-input.1.table", FULL);
relation* rel___dollorhead__stratified18__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$head-stratified18","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$head-stratified18","1__2__3__4__5__6")) + ".$head-stratified18.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified18","1__2__3__4__5__6")) + ".$head-stratified18.6.table", FULL);
relation* rel___dollorrule77__inter__body3__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule77-inter-body3","1__2__3__4"), std::to_string(get_tag_for_rel("$rule77-inter-body3","1__2__3__4")) + ".$rule77-inter-body3.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule77-inter-body3","1__2__3__4")) + ".$rule77-inter-body3.4.table", FULL);
relation* rel___dollorrule48__inter__body2__2__2 = new relation(1, false, 2, get_tag_for_rel("$rule48-inter-body2","2"), std::to_string(get_tag_for_rel("$rule48-inter-body2","2")) + ".$rule48-inter-body2.2.table",   FULL);
relation* rel___dollorrule67__inter__body__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule67-inter-body","1__2__3"), std::to_string(get_tag_for_rel("$rule67-inter-body","1__2__3")) + ".$rule67-inter-body.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule67-inter-body","1__2__3")) + ".$rule67-inter-body.3.table", FULL);
relation* rel___dollorrule9__inter__body1__4__3 = new relation(1, false, 4, get_tag_for_rel("$rule9-inter-body1","3"), std::to_string(get_tag_for_rel("$rule9-inter-body1","3")) + ".$rule9-inter-body1.4.table",   FULL);
relation* rel___dollorrule60__inter__body7__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule60-inter-body7","1__2__3"), std::to_string(get_tag_for_rel("$rule60-inter-body7","1__2__3")) + ".$rule60-inter-body7.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule60-inter-body7","1__2__3")) + ".$rule60-inter-body7.3.table", FULL);
relation* rel___dollorhead__stratified34__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified34","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified34","1__2__3")) + ".$head-stratified34.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified34","1__2__3")) + ".$head-stratified34.3.table", FULL);
relation* rel___dollorrule46__inter__body1__3__2 = new relation(1, false, 3, get_tag_for_rel("$rule46-inter-body1","2"), std::to_string(get_tag_for_rel("$rule46-inter-body1","2")) + ".$rule46-inter-body1.3.table",   FULL);
relation* rel___dollorrule40__inter__body1__2__2 = new relation(1, false, 2, get_tag_for_rel("$rule40-inter-body1","2"), std::to_string(get_tag_for_rel("$rule40-inter-body1","2")) + ".$rule40-inter-body1.2.table",   FULL);
relation* rel___dollorrule75__inter__body__4__2__4__1 = new relation(3, false, 4, get_tag_for_rel("$rule75-inter-body","2__4__1"), std::to_string(get_tag_for_rel("$rule75-inter-body","2__4__1")) + ".$rule75-inter-body.4.table",   FULL);
relation* rel___dollorrule46__inter__body3__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule46-inter-body3","1"), std::to_string(get_tag_for_rel("$rule46-inter-body3","1")) + ".$rule46-inter-body3.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule46-inter-body3","1")) + ".$rule46-inter-body3.1.table", FULL);
relation* rel___dollorinter__head21__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$inter-head21","1__2__3__4__5"), std::to_string(get_tag_for_rel("$inter-head21","1__2__3__4__5")) + ".$inter-head21.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head21","1__2__3__4__5")) + ".$inter-head21.5.table", FULL);
relation* rel___dollorrule4__inter__body2__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule4-inter-body2","1"), std::to_string(get_tag_for_rel("$rule4-inter-body2","1")) + ".$rule4-inter-body2.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule4-inter-body2","1")) + ".$rule4-inter-body2.1.table", FULL);
relation* rel___dollorhead__stratified18__6__1__6 = new relation(2, false, 6, get_tag_for_rel("$head-stratified18","1__6"), std::to_string(get_tag_for_rel("$head-stratified18","1__6")) + ".$head-stratified18.6.table",   FULL);
relation* rel___dollorrule55__inter__body11__4__1__4 = new relation(2, false, 4, get_tag_for_rel("$rule55-inter-body11","1__4"), std::to_string(get_tag_for_rel("$rule55-inter-body11","1__4")) + ".$rule55-inter-body11.4.table",   FULL);
relation* rel___dollorrule42__inter__body__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule42-inter-body","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule42-inter-body","1__2__3__4__5")) + ".$rule42-inter-body.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule42-inter-body","1__2__3__4__5")) + ".$rule42-inter-body.5.table", FULL);
relation* rel__int__1__1 = new relation(1, true, 1, get_tag_for_rel("int","1"), std::to_string(get_tag_for_rel("int","1")) + ".int.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("int","1")) + ".int.1.table", FULL);
relation* rel__ref__1__0 = new relation(1, false, 1, get_tag_for_rel("ref","0"), std::to_string(get_tag_for_rel("ref","0")) + ".ref.1.table",   FULL);
relation* rel___dollorrule7__inter__body11__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule7-inter-body11","1__2__3__4"), std::to_string(get_tag_for_rel("$rule7-inter-body11","1__2__3__4")) + ".$rule7-inter-body11.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule7-inter-body11","1__2__3__4")) + ".$rule7-inter-body11.4.table", FULL);
relation* rel___dollorrule69__inter__body5__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule69-inter-body5","1__2__3"), std::to_string(get_tag_for_rel("$rule69-inter-body5","1__2__3")) + ".$rule69-inter-body5.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule69-inter-body5","1__2__3")) + ".$rule69-inter-body5.3.table", FULL);
relation* rel___dollorrule2__inter__body2__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule2-inter-body2","1__2__3__4"), std::to_string(get_tag_for_rel("$rule2-inter-body2","1__2__3__4")) + ".$rule2-inter-body2.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule2-inter-body2","1__2__3__4")) + ".$rule2-inter-body2.4.table", FULL);
relation* rel___dollorrule75__inter__body5__7__4 = new relation(1, false, 7, get_tag_for_rel("$rule75-inter-body5","4"), std::to_string(get_tag_for_rel("$rule75-inter-body5","4")) + ".$rule75-inter-body5.7.table",   FULL);
relation* rel___dollorinter__head48__2__1 = new relation(1, false, 2, get_tag_for_rel("$inter-head48","1"), std::to_string(get_tag_for_rel("$inter-head48","1")) + ".$inter-head48.2.table",   FULL);
relation* rel___dollorrule78__inter__body7__2__2 = new relation(1, false, 2, get_tag_for_rel("$rule78-inter-body7","2"), std::to_string(get_tag_for_rel("$rule78-inter-body7","2")) + ".$rule78-inter-body7.2.table",   FULL);
relation* rel__appk__5__0 = new relation(1, false, 5, get_tag_for_rel("appk","0"), std::to_string(get_tag_for_rel("appk","0")) + ".appk.5.table",   FULL);
relation* rel___dollorrule45__inter__body__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule45-inter-body","1__2__3__4"), std::to_string(get_tag_for_rel("$rule45-inter-body","1__2__3__4")) + ".$rule45-inter-body.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule45-inter-body","1__2__3__4")) + ".$rule45-inter-body.4.table", FULL);
relation* rel___dollorrule61__inter__body2__2__2 = new relation(1, false, 2, get_tag_for_rel("$rule61-inter-body2","2"), std::to_string(get_tag_for_rel("$rule61-inter-body2","2")) + ".$rule61-inter-body2.2.table",   FULL);
relation* rel___dollorhead__stratified11__7__2__7 = new relation(2, false, 7, get_tag_for_rel("$head-stratified11","2__7"), std::to_string(get_tag_for_rel("$head-stratified11","2__7")) + ".$head-stratified11.7.table",   FULL);
relation* rel___dollorrule67__inter__body10__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule67-inter-body10","1"), std::to_string(get_tag_for_rel("$rule67-inter-body10","1")) + ".$rule67-inter-body10.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule67-inter-body10","1")) + ".$rule67-inter-body10.1.table", FULL);
relation* rel___dollorrule62__inter__body__4__1 = new relation(1, false, 4, get_tag_for_rel("$rule62-inter-body","1"), std::to_string(get_tag_for_rel("$rule62-inter-body","1")) + ".$rule62-inter-body.4.table",   FULL);
relation* rel___dollorrule77__inter__body2__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule77-inter-body2","1__2__3"), std::to_string(get_tag_for_rel("$rule77-inter-body2","1__2__3")) + ".$rule77-inter-body2.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule77-inter-body2","1__2__3")) + ".$rule77-inter-body2.3.table", FULL);
relation* rel___dollorrule20__inter__body1__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule20-inter-body1","1__2__3"), std::to_string(get_tag_for_rel("$rule20-inter-body1","1__2__3")) + ".$rule20-inter-body1.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule20-inter-body1","1__2__3")) + ".$rule20-inter-body1.3.table", FULL);
relation* rel___dollorbir__sub4__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$bir-sub4","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$bir-sub4","1__2__3__4__5__6")) + ".$bir-sub4.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub4","1__2__3__4__5__6")) + ".$bir-sub4.6.table", FULL);
relation* rel___dollorhir__sub2__3__1 = new relation(1, false, 3, get_tag_for_rel("$hir-sub2","1"), std::to_string(get_tag_for_rel("$hir-sub2","1")) + ".$hir-sub2.3.table",   FULL);
relation* rel___dollorbir__sub14__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$bir-sub14","1__2__3__4"), std::to_string(get_tag_for_rel("$bir-sub14","1__2__3__4")) + ".$bir-sub14.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub14","1__2__3__4")) + ".$bir-sub14.4.table", FULL);
relation* rel___dollorinter__head31__3__2 = new relation(1, false, 3, get_tag_for_rel("$inter-head31","2"), std::to_string(get_tag_for_rel("$inter-head31","2")) + ".$inter-head31.3.table",   FULL);
relation* rel___dollorrule76__inter__body1__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$rule76-inter-body1","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$rule76-inter-body1","1__2__3__4__5__6")) + ".$rule76-inter-body1.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule76-inter-body1","1__2__3__4__5__6")) + ".$rule76-inter-body1.6.table", FULL);
relation* rel___dollorrule67__inter__body9__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule67-inter-body9","1__2"), std::to_string(get_tag_for_rel("$rule67-inter-body9","1__2")) + ".$rule67-inter-body9.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule67-inter-body9","1__2")) + ".$rule67-inter-body9.2.table", FULL);
relation* rel__list__of__1__0 = new relation(1, false, 1, get_tag_for_rel("list-of","0"), std::to_string(get_tag_for_rel("list-of","0")) + ".list-of.1.table",   FULL);
relation* rel___dollorhead__stratified37__7__5__7__6__3__2__4 = new relation(6, false, 7, get_tag_for_rel("$head-stratified37","5__7__6__3__2__4"), std::to_string(get_tag_for_rel("$head-stratified37","5__7__6__3__2__4")) + ".$head-stratified37.7.table",   FULL);
relation* rel___dollorinter__head8__2__2 = new relation(1, false, 2, get_tag_for_rel("$inter-head8","2"), std::to_string(get_tag_for_rel("$inter-head8","2")) + ".$inter-head8.2.table",   FULL);
relation* rel___dollorrule52__inter__body2__4__4 = new relation(1, false, 4, get_tag_for_rel("$rule52-inter-body2","4"), std::to_string(get_tag_for_rel("$rule52-inter-body2","4")) + ".$rule52-inter-body2.4.table",   FULL);
relation* rel___dollorrule73__inter__body2__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule73-inter-body2","1__2__3"), std::to_string(get_tag_for_rel("$rule73-inter-body2","1__2__3")) + ".$rule73-inter-body2.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule73-inter-body2","1__2__3")) + ".$rule73-inter-body2.3.table", FULL);
relation* rel___dollorbir__sub9__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$bir-sub9","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$bir-sub9","1__2__3__4__5__6")) + ".$bir-sub9.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub9","1__2__3__4__5__6")) + ".$bir-sub9.6.table", FULL);
relation* rel___dollorhead__splice__10__1__2__3__4__5__6__7__8__9__10 = new relation(10, true, 10, get_tag_for_rel("$head-splice","1__2__3__4__5__6__7__8__9__10"), std::to_string(get_tag_for_rel("$head-splice","1__2__3__4__5__6__7__8__9__10")) + ".$head-splice.10.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-splice","1__2__3__4__5__6__7__8__9__10")) + ".$head-splice.10.table", FULL);
relation* rel___dollorhead__stratified21__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified21","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified21","1__2__3")) + ".$head-stratified21.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified21","1__2__3")) + ".$head-stratified21.3.table", FULL);
relation* rel___dollorrule67__inter__body1__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule67-inter-body1","1__2__3"), std::to_string(get_tag_for_rel("$rule67-inter-body1","1__2__3")) + ".$rule67-inter-body1.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule67-inter-body1","1__2__3")) + ".$rule67-inter-body1.3.table", FULL);
relation* rel___dollorrule47__inter__body6__5__1 = new relation(1, false, 5, get_tag_for_rel("$rule47-inter-body6","1"), std::to_string(get_tag_for_rel("$rule47-inter-body6","1")) + ".$rule47-inter-body6.5.table",   FULL);
relation* rel__do__free__lam__3__2 = new relation(1, false, 3, get_tag_for_rel("do-free-lam","2"), std::to_string(get_tag_for_rel("do-free-lam","2")) + ".do-free-lam.3.table",   FULL);
relation* rel__store__2__1__2 = new relation(2, true, 2, get_tag_for_rel("store","1__2"), std::to_string(get_tag_for_rel("store","1__2")) + ".store.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("store","1__2")) + ".store.2.table", FULL);
relation* rel___dollorinter__head2__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head2","1__2__3"), std::to_string(get_tag_for_rel("$inter-head2","1__2__3")) + ".$inter-head2.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head2","1__2__3")) + ".$inter-head2.3.table", FULL);
relation* rel___dollorhead__stratified28__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$head-stratified28","1__2__3__4__5"), std::to_string(get_tag_for_rel("$head-stratified28","1__2__3__4__5")) + ".$head-stratified28.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified28","1__2__3__4__5")) + ".$head-stratified28.5.table", FULL);
relation* rel___dollorrule79__inter__body1__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule79-inter-body1","1__2__3__4"), std::to_string(get_tag_for_rel("$rule79-inter-body1","1__2__3__4")) + ".$rule79-inter-body1.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule79-inter-body1","1__2__3__4")) + ".$rule79-inter-body1.4.table", FULL);
relation* rel___dollorinter__head9__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$inter-head9","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$inter-head9","1__2__3__4__5__6")) + ".$inter-head9.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head9","1__2__3__4__5__6")) + ".$inter-head9.6.table", FULL);
relation* rel___dollorhead__stratified9__8__8__4 = new relation(2, false, 8, get_tag_for_rel("$head-stratified9","8__4"), std::to_string(get_tag_for_rel("$head-stratified9","8__4")) + ".$head-stratified9.8.table",   FULL);
relation* rel___dollorrule53__inter__body__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule53-inter-body","1"), std::to_string(get_tag_for_rel("$rule53-inter-body","1")) + ".$rule53-inter-body.2.table",   FULL);
relation* rel___dollorhead__stratified15__4__1__3__4 = new relation(3, false, 4, get_tag_for_rel("$head-stratified15","1__3__4"), std::to_string(get_tag_for_rel("$head-stratified15","1__3__4")) + ".$head-stratified15.4.table",   FULL);
relation* rel___dollorhead__stratified20__4__3__4 = new relation(2, false, 4, get_tag_for_rel("$head-stratified20","3__4"), std::to_string(get_tag_for_rel("$head-stratified20","3__4")) + ".$head-stratified20.4.table",   FULL);
relation* rel___dollorinter__head50__6__2__4__3__1__5 = new relation(5, false, 6, get_tag_for_rel("$inter-head50","2__4__3__1__5"), std::to_string(get_tag_for_rel("$inter-head50","2__4__3__1__5")) + ".$inter-head50.6.table",   FULL);
relation* rel___dollorinter__head12__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$inter-head12","1__2"), std::to_string(get_tag_for_rel("$inter-head12","1__2")) + ".$inter-head12.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head12","1__2")) + ".$inter-head12.2.table", FULL);
relation* rel___dollorrule55__inter__body6__3__2 = new relation(1, false, 3, get_tag_for_rel("$rule55-inter-body6","2"), std::to_string(get_tag_for_rel("$rule55-inter-body6","2")) + ".$rule55-inter-body6.3.table",   FULL);
relation* rel___dollorrule3__inter__body1__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule3-inter-body1","1__2"), std::to_string(get_tag_for_rel("$rule3-inter-body1","1__2")) + ".$rule3-inter-body1.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule3-inter-body1","1__2")) + ".$rule3-inter-body1.2.table", FULL);
relation* rel___dollorrule2__inter__body3__4__3 = new relation(1, false, 4, get_tag_for_rel("$rule2-inter-body3","3"), std::to_string(get_tag_for_rel("$rule2-inter-body3","3")) + ".$rule2-inter-body3.4.table",   FULL);
relation* rel__applfk__4__0 = new relation(1, false, 4, get_tag_for_rel("applfk","0"), std::to_string(get_tag_for_rel("applfk","0")) + ".applfk.4.table",   FULL);
relation* rel___dollorlst__2__0__1 = new relation(2, false, 2, get_tag_for_rel("$lst","0__1"), std::to_string(get_tag_for_rel("$lst","0__1")) + ".$lst.2.table",   FULL);
relation* rel___dollorinter__head17__3__1__3 = new relation(2, false, 3, get_tag_for_rel("$inter-head17","1__3"), std::to_string(get_tag_for_rel("$inter-head17","1__3")) + ".$inter-head17.3.table",   FULL);
relation* rel__fixedarg__1__1 = new relation(1, true, 1, get_tag_for_rel("fixedarg","1"), std::to_string(get_tag_for_rel("fixedarg","1")) + ".fixedarg.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("fixedarg","1")) + ".fixedarg.1.table", FULL);
relation* rel___dollorrule60__inter__body7__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule60-inter-body7","3"), std::to_string(get_tag_for_rel("$rule60-inter-body7","3")) + ".$rule60-inter-body7.3.table",   FULL);
relation* rel___dollorrule7__inter__body1__7__7 = new relation(1, false, 7, get_tag_for_rel("$rule7-inter-body1","7"), std::to_string(get_tag_for_rel("$rule7-inter-body1","7")) + ".$rule7-inter-body1.7.table",   FULL);
relation* rel___dollorinter__head62__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$inter-head62","1__2__3__4"), std::to_string(get_tag_for_rel("$inter-head62","1__2__3__4")) + ".$inter-head62.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head62","1__2__3__4")) + ".$inter-head62.4.table", FULL);
relation* rel___dollorlst__split__input__1__1 = new relation(1, true, 1, get_tag_for_rel("$lst-split-input","1"), std::to_string(get_tag_for_rel("$lst-split-input","1")) + ".$lst-split-input.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$lst-split-input","1")) + ".$lst-split-input.1.table", FULL);
relation* rel___dollorrule81__inter__body1__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule81-inter-body1","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule81-inter-body1","1__2__3__4__5")) + ".$rule81-inter-body1.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule81-inter-body1","1__2__3__4__5")) + ".$rule81-inter-body1.5.table", FULL);
relation* rel___dollorinter__head35__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$inter-head35","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$inter-head35","1__2__3__4__5__6")) + ".$inter-head35.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head35","1__2__3__4__5__6")) + ".$inter-head35.6.table", FULL);
relation* rel__letk__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("letk","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("letk","1__2__3__4__5__6")) + ".letk.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("letk","1__2__3__4__5__6")) + ".letk.6.table", FULL);
relation* rel___dollorinter__head73__7__3__1 = new relation(2, false, 7, get_tag_for_rel("$inter-head73","3__1"), std::to_string(get_tag_for_rel("$inter-head73","3__1")) + ".$inter-head73.7.table",   FULL);
relation* rel__split__at__input__2__2 = new relation(1, false, 2, get_tag_for_rel("split-at-input","2"), std::to_string(get_tag_for_rel("split-at-input","2")) + ".split-at-input.2.table",   FULL);
relation* rel___dollorhir__sub__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$hir-sub","1__2__3"), std::to_string(get_tag_for_rel("$hir-sub","1__2__3")) + ".$hir-sub.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$hir-sub","1__2__3")) + ".$hir-sub.3.table", FULL);
relation* rel___dollorrule9__inter__body__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule9-inter-body","1__2__3__4"), std::to_string(get_tag_for_rel("$rule9-inter-body","1__2__3__4")) + ".$rule9-inter-body.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule9-inter-body","1__2__3__4")) + ".$rule9-inter-body.4.table", FULL);
relation* rel___dollorinter__head59__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head59","1__2__3"), std::to_string(get_tag_for_rel("$inter-head59","1__2__3")) + ".$inter-head59.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head59","1__2__3")) + ".$inter-head59.3.table", FULL);
relation* rel__do__tick__2__1 = new relation(1, false, 2, get_tag_for_rel("do-tick","1"), std::to_string(get_tag_for_rel("do-tick","1")) + ".do-tick.2.table",   FULL);
relation* rel___dollorrule1__inter__body1__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule1-inter-body1","1"), std::to_string(get_tag_for_rel("$rule1-inter-body1","1")) + ".$rule1-inter-body1.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule1-inter-body1","1")) + ".$rule1-inter-body1.1.table", FULL);
relation* rel___dollorinter__head29__2__1 = new relation(1, false, 2, get_tag_for_rel("$inter-head29","1"), std::to_string(get_tag_for_rel("$inter-head29","1")) + ".$inter-head29.2.table",   FULL);
relation* rel___dollorrule71__inter__body5__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule71-inter-body5","1__2"), std::to_string(get_tag_for_rel("$rule71-inter-body5","1__2")) + ".$rule71-inter-body5.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule71-inter-body5","1__2")) + ".$rule71-inter-body5.2.table", FULL);
relation* rel__do__free__let__rhs__2__2 = new relation(1, false, 2, get_tag_for_rel("do-free-let-rhs","2"), std::to_string(get_tag_for_rel("do-free-let-rhs","2")) + ".do-free-let-rhs.2.table",   FULL);
relation* rel___dollorrule55__inter__body12__9__7 = new relation(1, false, 9, get_tag_for_rel("$rule55-inter-body12","7"), std::to_string(get_tag_for_rel("$rule55-inter-body12","7")) + ".$rule55-inter-body12.9.table",   FULL);
relation* rel___dollorrule76__inter__body6__3__3__1 = new relation(2, false, 3, get_tag_for_rel("$rule76-inter-body6","3__1"), std::to_string(get_tag_for_rel("$rule76-inter-body6","3__1")) + ".$rule76-inter-body6.3.table",   FULL);
relation* rel___dollorinter__head40__6__4__6__3 = new relation(3, false, 6, get_tag_for_rel("$inter-head40","4__6__3"), std::to_string(get_tag_for_rel("$inter-head40","4__6__3")) + ".$inter-head40.6.table",   FULL);
relation* rel__saddr__1__0 = new relation(1, false, 1, get_tag_for_rel("saddr","0"), std::to_string(get_tag_for_rel("saddr","0")) + ".saddr.1.table",   FULL);
relation* rel___dollorrule74__inter__body3__4__4 = new relation(1, false, 4, get_tag_for_rel("$rule74-inter-body3","4"), std::to_string(get_tag_for_rel("$rule74-inter-body3","4")) + ".$rule74-inter-body3.4.table",   FULL);
relation* rel___dollorhead__stratified25__3__2__1 = new relation(2, false, 3, get_tag_for_rel("$head-stratified25","2__1"), std::to_string(get_tag_for_rel("$head-stratified25","2__1")) + ".$head-stratified25.3.table",   FULL);
relation* rel__appl__2__2 = new relation(1, false, 2, get_tag_for_rel("appl","2"), std::to_string(get_tag_for_rel("appl","2")) + ".appl.2.table",   FULL);
relation* rel__length__2__1__2 = new relation(2, true, 2, get_tag_for_rel("length","1__2"), std::to_string(get_tag_for_rel("length","1__2")) + ".length.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("length","1__2")) + ".length.2.table", FULL);
relation* rel___dollorrule62__inter__body2__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule62-inter-body2","1__2"), std::to_string(get_tag_for_rel("$rule62-inter-body2","1__2")) + ".$rule62-inter-body2.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule62-inter-body2","1__2")) + ".$rule62-inter-body2.2.table", FULL);
relation* rel___dollorbir__sub16__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$bir-sub16","1__2"), std::to_string(get_tag_for_rel("$bir-sub16","1__2")) + ".$bir-sub16.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub16","1__2")) + ".$bir-sub16.2.table", FULL);
relation* rel___dollorrule57__inter__body__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule57-inter-body","3"), std::to_string(get_tag_for_rel("$rule57-inter-body","3")) + ".$rule57-inter-body.3.table",   FULL);
relation* rel___dollorrule45__inter__body__4__4 = new relation(1, false, 4, get_tag_for_rel("$rule45-inter-body","4"), std::to_string(get_tag_for_rel("$rule45-inter-body","4")) + ".$rule45-inter-body.4.table",   FULL);
relation* rel__apply__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("apply","1__2__3__4__5"), std::to_string(get_tag_for_rel("apply","1__2__3__4__5")) + ".apply.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("apply","1__2__3__4__5")) + ".apply.5.table", FULL);
relation* rel___dollorrule61__inter__body5__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule61-inter-body5","1__2__3"), std::to_string(get_tag_for_rel("$rule61-inter-body5","1__2__3")) + ".$rule61-inter-body5.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule61-inter-body5","1__2__3")) + ".$rule61-inter-body5.3.table", FULL);
relation* rel___dollorrule2__inter__body2__4__3 = new relation(1, false, 4, get_tag_for_rel("$rule2-inter-body2","3"), std::to_string(get_tag_for_rel("$rule2-inter-body2","3")) + ".$rule2-inter-body2.4.table",   FULL);
relation* rel___dollorsplice__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$splice","1__2__3__4"), std::to_string(get_tag_for_rel("$splice","1__2__3__4")) + ".$splice.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$splice","1__2__3__4")) + ".$splice.4.table", FULL);
relation* rel___dollorrule75__inter__body4__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule75-inter-body4","1__2__3__4"), std::to_string(get_tag_for_rel("$rule75-inter-body4","1__2__3__4")) + ".$rule75-inter-body4.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule75-inter-body4","1__2__3__4")) + ".$rule75-inter-body4.4.table", FULL);
relation* rel___dollorbir__sub13__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$bir-sub13","1__2__3"), std::to_string(get_tag_for_rel("$bir-sub13","1__2__3")) + ".$bir-sub13.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub13","1__2__3")) + ".$bir-sub13.3.table", FULL);
relation* rel__breaks__into__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("breaks-into","1__2__3__4"), std::to_string(get_tag_for_rel("breaks-into","1__2__3__4")) + ".breaks-into.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("breaks-into","1__2__3__4")) + ".breaks-into.4.table", FULL);
relation* rel___dollorrule66__inter__body6__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule66-inter-body6","1__2"), std::to_string(get_tag_for_rel("$rule66-inter-body6","1__2")) + ".$rule66-inter-body6.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule66-inter-body6","1__2")) + ".$rule66-inter-body6.2.table", FULL);
relation* rel__split__at__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("split-at","1__2__3"), std::to_string(get_tag_for_rel("split-at","1__2__3")) + ".split-at.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("split-at","1__2__3")) + ".split-at.3.table", FULL);
relation* rel__free__2__1__2 = new relation(2, true, 2, get_tag_for_rel("free","1__2"), std::to_string(get_tag_for_rel("free","1__2")) + ".free.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("free","1__2")) + ".free.2.table", FULL);
relation* rel___dollorrule20__inter__body1__3__1__2 = new relation(2, false, 3, get_tag_for_rel("$rule20-inter-body1","1__2"), std::to_string(get_tag_for_rel("$rule20-inter-body1","1__2")) + ".$rule20-inter-body1.3.table",   FULL);
relation* rel__addr__1__0 = new relation(1, false, 1, get_tag_for_rel("addr","0"), std::to_string(get_tag_for_rel("addr","0")) + ".addr.1.table",   FULL);
relation* rel___dollorhead__stratified64__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified64","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified64","1__2__3")) + ".$head-stratified64.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified64","1__2__3")) + ".$head-stratified64.3.table", FULL);
relation* rel___dollorinter__head43__2__2 = new relation(1, false, 2, get_tag_for_rel("$inter-head43","2"), std::to_string(get_tag_for_rel("$inter-head43","2")) + ".$inter-head43.2.table",   FULL);
relation* rel__do__var__prop__all__h__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("do-var-prop-all-h","1__2__3__4"), std::to_string(get_tag_for_rel("do-var-prop-all-h","1__2__3__4")) + ".do-var-prop-all-h.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("do-var-prop-all-h","1__2__3__4")) + ".do-var-prop-all-h.4.table", FULL);
relation* rel___dollorhead__stratified4__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified4","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified4","1__2__3")) + ".$head-stratified4.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified4","1__2__3")) + ".$head-stratified4.3.table", FULL);
relation* rel___dollorrule35__inter__body__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule35-inter-body","1"), std::to_string(get_tag_for_rel("$rule35-inter-body","1")) + ".$rule35-inter-body.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule35-inter-body","1")) + ".$rule35-inter-body.1.table", FULL);
relation* rel___dollorhead__stratified14__5__2__5 = new relation(2, false, 5, get_tag_for_rel("$head-stratified14","2__5"), std::to_string(get_tag_for_rel("$head-stratified14","2__5")) + ".$head-stratified14.5.table",   FULL);
relation* rel___dollorrule66__inter__body4__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule66-inter-body4","3"), std::to_string(get_tag_for_rel("$rule66-inter-body4","3")) + ".$rule66-inter-body4.3.table",   FULL);
relation* rel___dollorinter__head50__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$inter-head50","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$inter-head50","1__2__3__4__5__6")) + ".$inter-head50.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head50","1__2__3__4__5__6")) + ".$inter-head50.6.table", FULL);
relation* rel___dollorhead__stratified53__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified53","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified53","1__2__3")) + ".$head-stratified53.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified53","1__2__3")) + ".$head-stratified53.3.table", FULL);
relation* rel___dollorhead__stratified9__8__1__2__3__4__5__6__7__8 = new relation(8, true, 8, get_tag_for_rel("$head-stratified9","1__2__3__4__5__6__7__8"), std::to_string(get_tag_for_rel("$head-stratified9","1__2__3__4__5__6__7__8")) + ".$head-stratified9.8.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified9","1__2__3__4__5__6__7__8")) + ".$head-stratified9.8.table", FULL);
relation* rel___dollorrule55__inter__body11__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule55-inter-body11","1__2__3__4"), std::to_string(get_tag_for_rel("$rule55-inter-body11","1__2__3__4")) + ".$rule55-inter-body11.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule55-inter-body11","1__2__3__4")) + ".$rule55-inter-body11.4.table", FULL);
relation* rel___dollorhead__stratified64__3__2__3 = new relation(2, false, 3, get_tag_for_rel("$head-stratified64","2__3"), std::to_string(get_tag_for_rel("$head-stratified64","2__3")) + ".$head-stratified64.3.table",   FULL);
relation* rel__let__2__2 = new relation(1, false, 2, get_tag_for_rel("let","2"), std::to_string(get_tag_for_rel("let","2")) + ".let.2.table",   FULL);
relation* rel___dollorinter__head56__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head56","1__2__3"), std::to_string(get_tag_for_rel("$inter-head56","1__2__3")) + ".$inter-head56.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head56","1__2__3")) + ".$inter-head56.3.table", FULL);
relation* rel__if__3__2 = new relation(1, false, 3, get_tag_for_rel("if","2"), std::to_string(get_tag_for_rel("if","2")) + ".if.3.table",   FULL);
relation* rel___dollorhead__stratified19__5__4__5 = new relation(2, false, 5, get_tag_for_rel("$head-stratified19","4__5"), std::to_string(get_tag_for_rel("$head-stratified19","4__5")) + ".$head-stratified19.5.table",   FULL);
relation* rel___dollorrule2__inter__body1__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule2-inter-body1","1"), std::to_string(get_tag_for_rel("$rule2-inter-body1","1")) + ".$rule2-inter-body1.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule2-inter-body1","1")) + ".$rule2-inter-body1.1.table", FULL);
relation* rel___dollorbir__sub2__9__1__2__3__4__5__6__7__8__9 = new relation(9, true, 9, get_tag_for_rel("$bir-sub2","1__2__3__4__5__6__7__8__9"), std::to_string(get_tag_for_rel("$bir-sub2","1__2__3__4__5__6__7__8__9")) + ".$bir-sub2.9.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub2","1__2__3__4__5__6__7__8__9")) + ".$bir-sub2.9.table", FULL);
relation* rel___dollorrule55__inter__body__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule55-inter-body","1"), std::to_string(get_tag_for_rel("$rule55-inter-body","1")) + ".$rule55-inter-body.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule55-inter-body","1")) + ".$rule55-inter-body.1.table", FULL);
relation* rel___dollorbir__sub__1__1 = new relation(1, true, 1, get_tag_for_rel("$bir-sub","1"), std::to_string(get_tag_for_rel("$bir-sub","1")) + ".$bir-sub.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub","1")) + ".$bir-sub.1.table", FULL);
relation* rel___dollorrule69__inter__body7__4__4 = new relation(1, false, 4, get_tag_for_rel("$rule69-inter-body7","4"), std::to_string(get_tag_for_rel("$rule69-inter-body7","4")) + ".$rule69-inter-body7.4.table",   FULL);
relation* rel___dollorinter__head38__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$inter-head38","1__2__3__4__5"), std::to_string(get_tag_for_rel("$inter-head38","1__2__3__4__5")) + ".$inter-head38.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head38","1__2__3__4__5")) + ".$inter-head38.5.table", FULL);
relation* rel__bool__1__1 = new relation(1, true, 1, get_tag_for_rel("bool","1"), std::to_string(get_tag_for_rel("bool","1")) + ".bool.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("bool","1")) + ".bool.1.table", FULL);
relation* rel__appl__2__0 = new relation(1, false, 2, get_tag_for_rel("appl","0"), std::to_string(get_tag_for_rel("appl","0")) + ".appl.2.table",   FULL);
relation* rel___dollorrule60__inter__body__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule60-inter-body","1__2__3"), std::to_string(get_tag_for_rel("$rule60-inter-body","1__2__3")) + ".$rule60-inter-body.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule60-inter-body","1__2__3")) + ".$rule60-inter-body.3.table", FULL);
relation* rel___dollorrule7__inter__body10__3__ = new relation(0, false, 3, get_tag_for_rel("$rule7-inter-body10",""), std::to_string(get_tag_for_rel("$rule7-inter-body10","")) + ".$rule7-inter-body10.3.table",   FULL);
relation* rel___dollorrule6__inter__body3__4__ = new relation(0, false, 4, get_tag_for_rel("$rule6-inter-body3",""), std::to_string(get_tag_for_rel("$rule6-inter-body3","")) + ".$rule6-inter-body3.4.table",   FULL);
relation* rel___dollorinter__head51__4__3__4 = new relation(2, false, 4, get_tag_for_rel("$inter-head51","3__4"), std::to_string(get_tag_for_rel("$inter-head51","3__4")) + ".$inter-head51.4.table",   FULL);
relation* rel___dollorlst__split__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$lst-split","1__2__3"), std::to_string(get_tag_for_rel("$lst-split","1__2__3")) + ".$lst-split.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$lst-split","1__2__3")) + ".$lst-split.3.table", FULL);
relation* rel___dollorbir__sub8__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$bir-sub8","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$bir-sub8","1__2__3__4__5__6")) + ".$bir-sub8.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub8","1__2__3__4__5__6")) + ".$bir-sub8.6.table", FULL);
relation* rel___dollorrule7__inter__body8__1__ = new relation(0, false, 1, get_tag_for_rel("$rule7-inter-body8",""), std::to_string(get_tag_for_rel("$rule7-inter-body8","")) + ".$rule7-inter-body8.1.table",   FULL);
relation* rel__if__k__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("if-k","1__2__3__4"), std::to_string(get_tag_for_rel("if-k","1__2__3__4")) + ".if-k.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("if-k","1__2__3__4")) + ".if-k.4.table", FULL);
relation* rel___dollorrule56__inter__body__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$rule56-inter-body","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$rule56-inter-body","1__2__3__4__5__6")) + ".$rule56-inter-body.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule56-inter-body","1__2__3__4__5__6")) + ".$rule56-inter-body.6.table", FULL);
relation* rel___dollorrule75__inter__body2__3__1__2 = new relation(2, false, 3, get_tag_for_rel("$rule75-inter-body2","1__2"), std::to_string(get_tag_for_rel("$rule75-inter-body2","1__2")) + ".$rule75-inter-body2.3.table",   FULL);
relation* rel___dollorrule60__inter__body8__4__1 = new relation(1, false, 4, get_tag_for_rel("$rule60-inter-body8","1"), std::to_string(get_tag_for_rel("$rule60-inter-body8","1")) + ".$rule60-inter-body8.4.table",   FULL);
relation* rel___dollorrule9__inter__body3__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule9-inter-body3","1"), std::to_string(get_tag_for_rel("$rule9-inter-body3","1")) + ".$rule9-inter-body3.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule9-inter-body3","1")) + ".$rule9-inter-body3.1.table", FULL);
relation* rel___dollorrule67__inter__body3__2__2 = new relation(1, false, 2, get_tag_for_rel("$rule67-inter-body3","2"), std::to_string(get_tag_for_rel("$rule67-inter-body3","2")) + ".$rule67-inter-body3.2.table",   FULL);
relation* rel___dollorrule69__inter__body3__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule69-inter-body3","1"), std::to_string(get_tag_for_rel("$rule69-inter-body3","1")) + ".$rule69-inter-body3.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule69-inter-body3","1")) + ".$rule69-inter-body3.1.table", FULL);
relation* rel___dollorrule55__inter__body3__8__6 = new relation(1, false, 8, get_tag_for_rel("$rule55-inter-body3","6"), std::to_string(get_tag_for_rel("$rule55-inter-body3","6")) + ".$rule55-inter-body3.8.table",   FULL);
relation* rel___dollorbir__sub6__7__1 = new relation(1, false, 7, get_tag_for_rel("$bir-sub6","1"), std::to_string(get_tag_for_rel("$bir-sub6","1")) + ".$bir-sub6.7.table",   FULL);
relation* rel___dollorhead__stratified53__3__2__3 = new relation(2, false, 3, get_tag_for_rel("$head-stratified53","2__3"), std::to_string(get_tag_for_rel("$head-stratified53","2__3")) + ".$head-stratified53.3.table",   FULL);
relation* rel___dollorrule47__inter__body7__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$rule47-inter-body7","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$rule47-inter-body7","1__2__3__4__5__6")) + ".$rule47-inter-body7.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule47-inter-body7","1__2__3__4__5__6")) + ".$rule47-inter-body7.6.table", FULL);
relation* rel___dollorhead__stratified21__3__2__3 = new relation(2, false, 3, get_tag_for_rel("$head-stratified21","2__3"), std::to_string(get_tag_for_rel("$head-stratified21","2__3")) + ".$head-stratified21.3.table",   FULL);
relation* rel___dollorinter__head1__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head1","1__2__3"), std::to_string(get_tag_for_rel("$inter-head1","1__2__3")) + ".$inter-head1.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head1","1__2__3")) + ".$inter-head1.3.table", FULL);
relation* rel___dollorinter__head70__5__4__2__3__5 = new relation(4, false, 5, get_tag_for_rel("$inter-head70","4__2__3__5"), std::to_string(get_tag_for_rel("$inter-head70","4__2__3__5")) + ".$inter-head70.5.table",   FULL);
relation* rel__eval__3__1 = new relation(1, false, 3, get_tag_for_rel("eval","1"), std::to_string(get_tag_for_rel("eval","1")) + ".eval.3.table",   FULL);
relation* rel___dollorrule46__inter__body5__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$rule46-inter-body5","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$rule46-inter-body5","1__2__3__4__5__6__7")) + ".$rule46-inter-body5.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule46-inter-body5","1__2__3__4__5__6__7")) + ".$rule46-inter-body5.7.table", FULL);
relation* rel___dollorinter__head38__5__5 = new relation(1, false, 5, get_tag_for_rel("$inter-head38","5"), std::to_string(get_tag_for_rel("$inter-head38","5")) + ".$inter-head38.5.table",   FULL);
relation* rel___dollorrule66__inter__body8__1__ = new relation(0, false, 1, get_tag_for_rel("$rule66-inter-body8",""), std::to_string(get_tag_for_rel("$rule66-inter-body8","")) + ".$rule66-inter-body8.1.table",   FULL);

RAM* scc0 = new RAM(false, 0);
scc0->add_relation(rel__string__1__1, true, false);
scc0->add_relation(rel__string__1__0, true, false);
scc0->add_rule(new parallel_acopy(rel__string__1__0, rel__string__1__1, DELTA, {1, 0}));

RAM* scc1 = new RAM(false, 1);
scc1->add_relation(rel___dollorunit__1__1, true, false);
scc1->add_rule(new fact(rel___dollorunit__1__1, {n2d(0)}));

RAM* scc2 = new RAM(false, 2);
scc2->add_relation(rel__if__3__1__2__3, true, false);
scc2->add_relation(rel__if__3__2, true, false);
scc2->add_rule(new parallel_acopy(rel__if__3__2, rel__if__3__1__2__3, DELTA, {1, 3, 0, 2}));

RAM* scc3 = new RAM(false, 3);
scc3->add_relation(rel__appl__2__1__2, true, false);
scc3->add_relation(rel__appl__2__0, true, false);
scc3->add_rule(new parallel_acopy(rel__appl__2__0, rel__appl__2__1__2, DELTA, {2, 0, 1}));

RAM* scc4 = new RAM(false, 4);
scc4->add_relation(rel__appl__2__1__2, true, false);
scc4->add_relation(rel__appl__2__2, true, false);
scc4->add_rule(new parallel_acopy(rel__appl__2__2, rel__appl__2__1__2, DELTA, {1, 2, 0}));

RAM* scc5 = new RAM(false, 5);
scc5->add_relation(rel__breaks__into__input__3__1__2__3, true, false);
scc5->add_relation(rel__breaks__into__input__3__1__3, true, false);
scc5->add_rule(new parallel_acopy(rel__breaks__into__input__3__1__3, rel__breaks__into__input__3__1__2__3, DELTA, {0, 2, 3, 1}));

RAM* scc6 = new RAM(false, 6);
scc6->add_relation(rel__specialized__prim__1__1, true, false);
scc6->add_rule(new fact(rel__specialized__prim__1__1, {s2d("car")}));

RAM* scc7 = new RAM(false, 7);
scc7->add_relation(rel___dollorunit__1__1, true, false);
scc7->add_rule(new fact(rel___dollorunit__1__1, {n2d(0)}));

RAM* scc8 = new RAM(false, 8);
scc8->add_relation(rel___dollorunit__1__1, true, false);
scc8->add_rule(new fact(rel___dollorunit__1__1, {n2d(0)}));

RAM* scc9 = new RAM(false, 9);
scc9->add_relation(rel___dollorunit__1__1, true, false);
scc9->add_rule(new fact(rel___dollorunit__1__1, {n2d(0)}));

RAM* scc10 = new RAM(false, 10);
scc10->add_relation(rel__specialized__prim__1__1, true, false);
scc10->add_rule(new fact(rel__specialized__prim__1__1, {s2d("list")}));

RAM* scc11 = new RAM(false, 11);
scc11->add_relation(rel__if__3__3, true, false);
scc11->add_relation(rel__if__3__1__2__3, true, false);
scc11->add_rule(new parallel_acopy(rel__if__3__3, rel__if__3__1__2__3, DELTA, {2, 3, 0, 1}));

RAM* scc12 = new RAM(false, 12);
scc12->add_relation(rel___dollorunit__1__1, true, false);
scc12->add_rule(new fact(rel___dollorunit__1__1, {n2d(0)}));

RAM* scc13 = new RAM(false, 13);
scc13->add_relation(rel___dollorunit__1__1, true, false);
scc13->add_rule(new fact(rel___dollorunit__1__1, {n2d(0)}));

RAM* scc14 = new RAM(false, 14);
scc14->add_relation(rel__split__at__input__2__1__2, true, false);
scc14->add_relation(rel__breaks__into__input__3__1__2__3, false, false);
scc14->add_rule(new parallel_copy(rel__split__at__input__2__1__2, rel__breaks__into__input__3__1__2__3, FULL, {0, 2}));

RAM* scc15 = new RAM(false, 15);
scc15->add_relation(rel__specialized__prim__1__1, true, false);
scc15->add_rule(new fact(rel__specialized__prim__1__1, {s2d("cdr")}));

RAM* scc16 = new RAM(false, 16);
scc16->add_relation(rel__let__2__1__2, false, false);
scc16->add_relation(rel__do__free__let__rhs__2__1__2, true, false);
scc16->add_rule(new parallel_copy(rel__do__free__let__rhs__2__1__2, rel__let__2__1__2, FULL, {2, 0}));

RAM* scc17 = new RAM(false, 17);
scc17->add_relation(rel__let__2__1__2, true, false);
scc17->add_relation(rel__let__2__0, true, false);
scc17->add_rule(new parallel_acopy(rel__let__2__0, rel__let__2__1__2, DELTA, {2, 0, 1}));

RAM* scc18 = new RAM(false, 18);
scc18->add_relation(rel__specialized__prim__1__1, true, false);
scc18->add_rule(new fact(rel__specialized__prim__1__1, {s2d("null?")}));

RAM* scc19 = new RAM(false, 19);
scc19->add_relation(rel__binding__2__1__2, true, false);
scc19->add_relation(rel__binding__2__0, true, false);
scc19->add_rule(new parallel_acopy(rel__binding__2__0, rel__binding__2__1__2, DELTA, {2, 0, 1}));

RAM* scc20 = new RAM(false, 20);
scc20->add_relation(rel__if__3__1__2__3, true, false);
scc20->add_relation(rel__if__3__0, true, false);
scc20->add_rule(new parallel_acopy(rel__if__3__0, rel__if__3__1__2__3, DELTA, {3, 0, 1, 2}));

RAM* scc21 = new RAM(false, 21);
scc21->add_relation(rel__if__3__1, true, false);
scc21->add_relation(rel__if__3__1__2__3, true, false);
scc21->add_rule(new parallel_acopy(rel__if__3__1, rel__if__3__1__2__3, DELTA, {0, 3, 1, 2}));

RAM* scc22 = new RAM(false, 22);
scc22->add_relation(rel___dollorunit__1__1, true, false);
scc22->add_rule(new fact(rel___dollorunit__1__1, {n2d(0)}));

RAM* scc23 = new RAM(false, 23);
scc23->add_relation(rel__specialized__prim__1__1, true, false);
scc23->add_rule(new fact(rel__specialized__prim__1__1, {s2d("cons")}));

RAM* scc24 = new RAM(false, 24);
scc24->add_relation(rel___dollorunit__1__1, true, false);
scc24->add_rule(new fact(rel___dollorunit__1__1, {n2d(0)}));

RAM* scc25 = new RAM(false, 25);
scc25->add_relation(rel__non__list__value__1__1, true, false);
scc25->add_relation(rel__string__1__1, false, false);
scc25->add_rule(new parallel_copy(rel__non__list__value__1__1, rel__string__1__1, FULL, {1}));

RAM* scc26 = new RAM(false, 26);
scc26->add_relation(rel___dollorunit__1__1, true, false);
scc26->add_rule(new fact(rel___dollorunit__1__1, {n2d(0)}));

RAM* scc27 = new RAM(false, 27);
scc27->add_relation(rel__binding__2__1__2, true, false);
scc27->add_relation(rel__binding__2__2, true, false);
scc27->add_rule(new parallel_acopy(rel__binding__2__2, rel__binding__2__1__2, DELTA, {1, 2, 0}));

RAM* scc28 = new RAM(false, 28);
scc28->add_relation(rel__appl__2__1__2, true, false);
scc28->add_relation(rel__appl__2__1, true, false);
scc28->add_rule(new parallel_acopy(rel__appl__2__1, rel__appl__2__1__2, DELTA, {0, 2, 1}));

RAM* scc29 = new RAM(false, 29);
scc29->add_relation(rel__let__2__1__2, true, false);
scc29->add_relation(rel__let__2__2, true, false);
scc29->add_rule(new parallel_acopy(rel__let__2__2, rel__let__2__1__2, DELTA, {1, 2, 0}));

RAM* scc30 = new RAM(false, 30);
scc30->add_relation(rel___dollorunit__1__1, true, false);
scc30->add_rule(new fact(rel___dollorunit__1__1, {n2d(0)}));

RAM* scc31 = new RAM(false, 31);
scc31->add_relation(rel___dollorunit__1__1, true, false);
scc31->add_rule(new fact(rel___dollorunit__1__1, {n2d(0)}));

RAM* scc32 = new RAM(false, 32);
scc32->add_relation(rel___dollorunit__1__1, true, false);
scc32->add_relation(rel___dollorunit__1__, true, false);
scc32->add_rule(new parallel_acopy(rel___dollorunit__1__, rel___dollorunit__1__1, DELTA, {1, 0}));

RAM* scc33 = new RAM(false, 33);
scc33->add_relation(rel___dollorunit__1__, false, false);
scc33->add_relation(rel___dollorrule4__inter__body2__1__1, true, false);
scc33->add_rule(new parallel_copy_generate(rel___dollorrule4__inter__body2__1__1, rel___dollorunit__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("lst")};
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

RAM* scc34 = new RAM(false, 34);
scc34->add_relation(rel___dollorrule4__inter__body2__1__, true, false);
scc34->add_relation(rel___dollorrule4__inter__body2__1__1, true, false);
scc34->add_rule(new parallel_acopy(rel___dollorrule4__inter__body2__1__, rel___dollorrule4__inter__body2__1__1, DELTA, {1, 0}));

RAM* scc35 = new RAM(false, 35);
scc35->add_relation(rel___dollorinter__head68__2__1__2, true, false);
scc35->add_relation(rel___dollorrule4__inter__body2__1__, false, true);
scc35->add_rule(new parallel_copy_generate(rel___dollorinter__head68__2__1__2, rel___dollorrule4__inter__body2__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("list")};
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

RAM* scc36 = new RAM(false, 36);
scc36->add_relation(rel___dollorinter__head68__2__1__2, false, false);
scc36->add_relation(rel__varparam__1__1, true, false);
scc36->add_rule(new parallel_copy(rel__varparam__1__1, rel___dollorinter__head68__2__1__2, FULL, {0}));

RAM* scc37 = new RAM(false, 37);
scc37->add_relation(rel___dollorinter__head68__2__1__2, false, false);
scc37->add_relation(rel__addr__1__1, true, false);
scc37->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head68__2__1__2, FULL, {1}));

RAM* scc38 = new RAM(false, 38);
scc38->add_relation(rel___dollorinter__head68__2__1__2, true, false);
scc38->add_relation(rel___dollorinter__head68__2__1, true, false);
scc38->add_rule(new parallel_acopy(rel___dollorinter__head68__2__1, rel___dollorinter__head68__2__1__2, DELTA, {0, 2, 1}));

RAM* scc39 = new RAM(false, 39);
scc39->add_relation(rel___dollorunit__1__, false, false);
scc39->add_relation(rel___dollorrule2__inter__body1__1__1, true, false);
scc39->add_rule(new parallel_copy_generate(rel___dollorrule2__inter__body1__1__1, rel___dollorunit__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("cons")};
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

RAM* scc40 = new RAM(false, 40);
scc40->add_relation(rel___dollorrule2__inter__body1__1__, true, false);
scc40->add_relation(rel___dollorrule2__inter__body1__1__1, true, false);
scc40->add_rule(new parallel_acopy(rel___dollorrule2__inter__body1__1__, rel___dollorrule2__inter__body1__1__1, DELTA, {1, 0}));

RAM* scc41 = new RAM(false, 41);
scc41->add_relation(rel___dollorrule2__inter__body1__1__, false, true);
scc41->add_relation(rel___dollorinter__head14__2__1__2, true, false);
scc41->add_rule(new parallel_copy_generate(rel___dollorinter__head14__2__1__2, rel___dollorrule2__inter__body1__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {n2d(0)};
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

RAM* scc42 = new RAM(false, 42);
scc42->add_relation(rel___dollorinter__head14__2__2, true, false);
scc42->add_relation(rel___dollorinter__head14__2__1__2, true, false);
scc42->add_rule(new parallel_acopy(rel___dollorinter__head14__2__2, rel___dollorinter__head14__2__1__2, DELTA, {1, 2, 0}));

RAM* scc43 = new RAM(false, 43);
scc43->add_relation(rel___dollorinter__head14__2__1__2, false, false);
scc43->add_relation(rel___dollornil__1__1, true, false);
scc43->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head14__2__1__2, FULL, {1}));

RAM* scc44 = new RAM(false, 44);
scc44->add_relation(rel__addr__1__1, true, false);
scc44->add_relation(rel___dollorinter__head14__2__1__2, false, false);
scc44->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head14__2__1__2, FULL, {0}));

RAM* scc45 = new RAM(false, 45);
scc45->add_relation(rel___dollorunit__1__, false, false);
scc45->add_relation(rel___dollorrule9__inter__body3__1__1, true, false);
scc45->add_rule(new parallel_copy_generate(rel___dollorrule9__inter__body3__1__1, rel___dollorunit__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("call")};
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

RAM* scc46 = new RAM(false, 46);
scc46->add_relation(rel___dollorrule9__inter__body3__1__, true, false);
scc46->add_relation(rel___dollorrule9__inter__body3__1__1, true, false);
scc46->add_rule(new parallel_acopy(rel___dollorrule9__inter__body3__1__, rel___dollorrule9__inter__body3__1__1, DELTA, {1, 0}));

RAM* scc47 = new RAM(false, 47);
scc47->add_relation(rel___dollorrule9__inter__body4__2__1__2, true, false);
scc47->add_relation(rel___dollorrule9__inter__body3__1__, false, true);
scc47->add_rule(new parallel_copy_generate(rel___dollorrule9__inter__body4__2__1__2, rel___dollorrule9__inter__body3__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {n2d(0)};
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

RAM* scc48 = new RAM(false, 48);
scc48->add_relation(rel___dollorrule9__inter__body4__2__1__2, true, false);
scc48->add_relation(rel___dollorrule9__inter__body4__2__, true, false);
scc48->add_rule(new parallel_acopy(rel___dollorrule9__inter__body4__2__, rel___dollorrule9__inter__body4__2__1__2, DELTA, {2, 0, 1}));

RAM* scc49 = new RAM(false, 49);
scc49->add_relation(rel___dollorinter__head34__3__1__2__3, true, false);
scc49->add_relation(rel___dollorrule9__inter__body4__2__, false, true);
scc49->add_rule(new parallel_copy_generate(rel___dollorinter__head34__3__1__2__3, rel___dollorrule9__inter__body4__2__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("brouhaha_main")};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = data[1];
head_tuple[1] = res_0;
head_tuple[2] = data[2];
        return std::make_tuple(data, output + 3);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 3;
      return tuples_count;
    }));

RAM* scc50 = new RAM(false, 50);
scc50->add_relation(rel__addr__1__1, true, false);
scc50->add_relation(rel___dollorinter__head34__3__1__2__3, false, false);
scc50->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head34__3__1__2__3, FULL, {1}));

RAM* scc51 = new RAM(false, 51);
scc51->add_relation(rel___dollorinter__head34__3__1__2__3, false, false);
scc51->add_relation(rel__ref__1__1, true, false);
scc51->add_rule(new parallel_copy(rel__ref__1__1, rel___dollorinter__head34__3__1__2__3, FULL, {0}));

RAM* scc52 = new RAM(false, 52);
scc52->add_relation(rel___dollornil__1__1, true, false);
scc52->add_relation(rel___dollorinter__head34__3__1__2__3, false, false);
scc52->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head34__3__1__2__3, FULL, {2}));

RAM* scc53 = new RAM(false, 53);
scc53->add_relation(rel___dollorinter__head34__3__2, true, false);
scc53->add_relation(rel___dollorinter__head34__3__1__2__3, true, false);
scc53->add_rule(new parallel_acopy(rel___dollorinter__head34__3__2, rel___dollorinter__head34__3__1__2__3, DELTA, {1, 3, 0, 2}));

RAM* scc54 = new RAM(false, 54);
scc54->add_relation(rel___dollorinter__head69__1__1, true, false);
scc54->add_relation(rel___dollorunit__1__, false, false);
scc54->add_rule(new parallel_copy_generate(rel___dollorinter__head69__1__1, rel___dollorunit__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {n2d(0)};
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

RAM* scc55 = new RAM(false, 55);
scc55->add_relation(rel___dollorinter__head69__1__1, false, false);
scc55->add_relation(rel___dollornil__1__1, true, false);
scc55->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head69__1__1, FULL, {0}));

RAM* scc56 = new RAM(false, 56);
scc56->add_relation(rel___dollorrule5__inter__body1__1__1, true, false);
scc56->add_relation(rel___dollorunit__1__, false, false);
scc56->add_rule(new parallel_copy_generate(rel___dollorrule5__inter__body1__1__1, rel___dollorunit__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("list")};
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

RAM* scc57 = new RAM(false, 57);
scc57->add_relation(rel___dollorrule5__inter__body1__1__1, true, false);
scc57->add_relation(rel___dollorrule5__inter__body1__1__, true, false);
scc57->add_rule(new parallel_acopy(rel___dollorrule5__inter__body1__1__, rel___dollorrule5__inter__body1__1__1, DELTA, {1, 0}));

RAM* scc58 = new RAM(false, 58);
scc58->add_relation(rel___dollorinter__head48__2__1__2, true, false);
scc58->add_relation(rel___dollorrule5__inter__body1__1__, false, true);
scc58->add_rule(new parallel_copy_generate(rel___dollorinter__head48__2__1__2, rel___dollorrule5__inter__body1__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {n2d(0)};
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

RAM* scc59 = new RAM(false, 59);
scc59->add_relation(rel___dollorinter__head48__2__1__2, false, false);
scc59->add_relation(rel___dollornil__1__1, true, false);
scc59->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head48__2__1__2, FULL, {0}));

RAM* scc60 = new RAM(false, 60);
scc60->add_relation(rel___dollorinter__head48__2__1__2, false, false);
scc60->add_relation(rel__addr__1__1, true, false);
scc60->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head48__2__1__2, FULL, {1}));

RAM* scc61 = new RAM(false, 61);
scc61->add_relation(rel___dollorinter__head48__2__1__2, true, false);
scc61->add_relation(rel___dollorinter__head48__2__1, true, false);
scc61->add_rule(new parallel_acopy(rel___dollorinter__head48__2__1, rel___dollorinter__head48__2__1__2, DELTA, {0, 2, 1}));

RAM* scc62 = new RAM(false, 62);
scc62->add_relation(rel___dollorunit__1__, false, false);
scc62->add_relation(rel___dollorrule8__inter__body1__1__1, true, false);
scc62->add_rule(new parallel_copy_generate(rel___dollorrule8__inter__body1__1__1, rel___dollorunit__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {n2d(0)};
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

RAM* scc63 = new RAM(false, 63);
scc63->add_relation(rel___dollorrule8__inter__body1__1__, true, false);
scc63->add_relation(rel___dollorrule8__inter__body1__1__1, true, false);
scc63->add_rule(new parallel_acopy(rel___dollorrule8__inter__body1__1__, rel___dollorrule8__inter__body1__1__1, DELTA, {1, 0}));

RAM* scc64 = new RAM(false, 64);
scc64->add_relation(rel___dollorinter__head24__2__1__2, true, false);
scc64->add_relation(rel___dollorrule8__inter__body1__1__, false, true);
scc64->add_rule(new parallel_copy_generate(rel___dollorinter__head24__2__1__2, rel___dollorrule8__inter__body1__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("call")};
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

RAM* scc65 = new RAM(false, 65);
scc65->add_relation(rel___dollorinter__head24__2__1__2, false, false);
scc65->add_relation(rel___dollornil__1__1, true, false);
scc65->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head24__2__1__2, FULL, {1}));

RAM* scc66 = new RAM(false, 66);
scc66->add_relation(rel___dollorinter__head24__2__1__2, false, false);
scc66->add_relation(rel__addr__1__1, true, false);
scc66->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head24__2__1__2, FULL, {0}));

RAM* scc67 = new RAM(false, 67);
scc67->add_relation(rel___dollorinter__head24__2__1__2, true, false);
scc67->add_relation(rel___dollorinter__head24__2__2, true, false);
scc67->add_rule(new parallel_acopy(rel___dollorinter__head24__2__2, rel___dollorinter__head24__2__1__2, DELTA, {1, 2, 0}));

RAM* scc68 = new RAM(false, 68);
scc68->add_relation(rel___dollorunit__1__, false, false);
scc68->add_relation(rel___dollorrule1__inter__body1__1__1, true, false);
scc68->add_rule(new parallel_copy_generate(rel___dollorrule1__inter__body1__1__1, rel___dollorunit__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("lst")};
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

RAM* scc69 = new RAM(false, 69);
scc69->add_relation(rel___dollorrule1__inter__body1__1__, true, false);
scc69->add_relation(rel___dollorrule1__inter__body1__1__1, true, false);
scc69->add_rule(new parallel_acopy(rel___dollorrule1__inter__body1__1__, rel___dollorrule1__inter__body1__1__1, DELTA, {1, 0}));

RAM* scc70 = new RAM(false, 70);
scc70->add_relation(rel___dollorrule1__inter__body1__1__, false, true);
scc70->add_relation(rel___dollorinter__head18__2__1__2, true, false);
scc70->add_rule(new parallel_copy_generate(rel___dollorinter__head18__2__1__2, rel___dollorrule1__inter__body1__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("cons")};
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

RAM* scc71 = new RAM(false, 71);
scc71->add_relation(rel___dollorinter__head18__2__2, true, false);
scc71->add_relation(rel___dollorinter__head18__2__1__2, true, false);
scc71->add_rule(new parallel_acopy(rel___dollorinter__head18__2__2, rel___dollorinter__head18__2__1__2, DELTA, {1, 2, 0}));

RAM* scc72 = new RAM(false, 72);
scc72->add_relation(rel___dollorinter__head18__2__1__2, false, false);
scc72->add_relation(rel__addr__1__1, true, false);
scc72->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head18__2__1__2, FULL, {0}));

RAM* scc73 = new RAM(false, 73);
scc73->add_relation(rel___dollorinter__head18__2__1__2, false, false);
scc73->add_relation(rel__varparam__1__1, true, false);
scc73->add_rule(new parallel_copy(rel__varparam__1__1, rel___dollorinter__head18__2__1__2, FULL, {1}));

RAM* scc74 = new RAM(false, 74);
scc74->add_relation(rel__varparam__1__0, true, false);
scc74->add_relation(rel__varparam__1__1, true, false);
scc74->add_rule(new parallel_acopy(rel__varparam__1__0, rel__varparam__1__1, DELTA, {1, 0}));

RAM* scc75 = new RAM(false, 75);
scc75->add_relation(rel___dollorrule4__inter__body1__2__1__2, true, false);
scc75->add_relation(rel__varparam__1__1, false, false);
scc75->add_relation(rel___dollorinter__head68__2__1, false, false);
scc75->add_rule(new parallel_join(rel___dollorrule4__inter__body1__2__1__2, rel__varparam__1__1, FULL, rel___dollorinter__head68__2__1, FULL, {1, 3}));

RAM* scc76 = new RAM(false, 76);
scc76->add_relation(rel___dollorrule4__inter__body1__2__1__2, true, false);
scc76->add_relation(rel___dollorrule4__inter__body1__2__2, true, false);
scc76->add_rule(new parallel_acopy(rel___dollorrule4__inter__body1__2__2, rel___dollorrule4__inter__body1__2__1__2, DELTA, {1, 2, 0}));

RAM* scc77 = new RAM(false, 77);
scc77->add_relation(rel___dollorinter__head18__2__2, false, false);
scc77->add_relation(rel__varparam__1__1, false, false);
scc77->add_relation(rel___dollorrule1__inter__body__2__1__2, true, false);
scc77->add_rule(new parallel_join(rel___dollorrule1__inter__body__2__1__2, rel__varparam__1__1, FULL, rel___dollorinter__head18__2__2, FULL, {3, 1}));

RAM* scc78 = new RAM(false, 78);
scc78->add_relation(rel___dollorrule1__inter__body__2__1__2, true, false);
scc78->add_relation(rel___dollorrule1__inter__body__2__1, true, false);
scc78->add_rule(new parallel_acopy(rel___dollorrule1__inter__body__2__1, rel___dollorrule1__inter__body__2__1__2, DELTA, {0, 2, 1}));

RAM* scc79 = new RAM(false, 79);
scc79->add_relation(rel___dollorrule6__inter__body__1__1, true, false);
scc79->add_relation(rel___dollorunit__1__, false, false);
scc79->add_rule(new parallel_copy_generate(rel___dollorrule6__inter__body__1__1, rel___dollorunit__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {n2d(4)};
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

RAM* scc80 = new RAM(false, 80);
scc80->add_relation(rel___dollorrule6__inter__body__1__1, true, false);
scc80->add_relation(rel___dollorrule6__inter__body__1__, true, false);
scc80->add_rule(new parallel_acopy(rel___dollorrule6__inter__body__1__, rel___dollorrule6__inter__body__1__1, DELTA, {1, 0}));

RAM* scc81 = new RAM(false, 81);
scc81->add_relation(rel___dollorrule6__inter__body1__2__1__2, true, false);
scc81->add_relation(rel___dollorrule6__inter__body__1__, false, true);
scc81->add_rule(new parallel_copy_generate(rel___dollorrule6__inter__body1__2__1__2, rel___dollorrule6__inter__body__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("list")};
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

RAM* scc82 = new RAM(false, 82);
scc82->add_relation(rel___dollorrule6__inter__body1__2__1__2, true, false);
scc82->add_relation(rel___dollorrule6__inter__body1__2__, true, false);
scc82->add_rule(new parallel_acopy(rel___dollorrule6__inter__body1__2__, rel___dollorrule6__inter__body1__2__1__2, DELTA, {2, 0, 1}));

RAM* scc83 = new RAM(false, 83);
scc83->add_relation(rel___dollorrule6__inter__body2__3__1__2__3, true, false);
scc83->add_relation(rel___dollorrule6__inter__body1__2__, false, true);
scc83->add_rule(new parallel_copy_generate(rel___dollorrule6__inter__body2__3__1__2__3, rel___dollorrule6__inter__body1__2__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {n2d(2)};
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

RAM* scc84 = new RAM(false, 84);
scc84->add_relation(rel___dollorrule6__inter__body2__3__1__2__3, true, false);
scc84->add_relation(rel___dollorrule6__inter__body2__3__, true, false);
scc84->add_rule(new parallel_acopy(rel___dollorrule6__inter__body2__3__, rel___dollorrule6__inter__body2__3__1__2__3, DELTA, {3, 0, 1, 2}));

RAM* scc85 = new RAM(false, 85);
scc85->add_relation(rel___dollorrule6__inter__body2__3__, false, true);
scc85->add_relation(rel___dollorrule6__inter__body3__4__1__2__3__4, true, false);
scc85->add_rule(new parallel_copy_generate(rel___dollorrule6__inter__body3__4__1__2__3__4, rel___dollorrule6__inter__body2__3__, FULL, [](const u64* const data, u64* const output) -> int{
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
head_tuple[2] = data[3];
head_tuple[3] = res_0;
        return std::make_tuple(data, output + 4);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 4;
      return tuples_count;
    }));

RAM* scc86 = new RAM(false, 86);
scc86->add_relation(rel___dollorrule6__inter__body3__4__1__2__3__4, true, false);
scc86->add_relation(rel___dollorrule6__inter__body3__4__, true, false);
scc86->add_rule(new parallel_acopy(rel___dollorrule6__inter__body3__4__, rel___dollorrule6__inter__body3__4__1__2__3__4, DELTA, {4, 0, 1, 2, 3}));

RAM* scc87 = new RAM(false, 87);
scc87->add_relation(rel___dollorrule6__inter__body4__5__1__2__3__4__5, true, false);
scc87->add_relation(rel___dollorrule6__inter__body3__4__, false, true);
scc87->add_rule(new parallel_copy_generate(rel___dollorrule6__inter__body4__5__1__2__3__4__5, rel___dollorrule6__inter__body3__4__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {n2d(1)};
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
head_tuple[3] = data[3];
head_tuple[4] = data[4];
        return std::make_tuple(data, output + 5);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 5;
      return tuples_count;
    }));

RAM* scc88 = new RAM(false, 88);
scc88->add_relation(rel___dollorrule6__inter__body4__5__, true, false);
scc88->add_relation(rel___dollorrule6__inter__body4__5__1__2__3__4__5, true, false);
scc88->add_rule(new parallel_acopy(rel___dollorrule6__inter__body4__5__, rel___dollorrule6__inter__body4__5__1__2__3__4__5, DELTA, {5, 0, 1, 2, 3, 4}));

RAM* scc89 = new RAM(false, 89);
scc89->add_relation(rel___dollorrule6__inter__body4__5__, false, true);
scc89->add_relation(rel___dollorinter__head9__6__1__2__3__4__5__6, true, false);
scc89->add_rule(new parallel_copy_generate(rel___dollorinter__head9__6__1__2__3__4__5__6, rel___dollorrule6__inter__body4__5__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {n2d(0)};
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
head_tuple[3] = data[3];
head_tuple[4] = data[4];
head_tuple[5] = data[5];
        return std::make_tuple(data, output + 6);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 6;
      return tuples_count;
    }));

RAM* scc90 = new RAM(false, 90);
scc90->add_relation(rel___dollornil__1__1, true, false);
scc90->add_relation(rel___dollorinter__head9__6__1__2__3__4__5__6, false, false);
scc90->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head9__6__1__2__3__4__5__6, FULL, {2}));

RAM* scc91 = new RAM(false, 91);
scc91->add_relation(rel___dollorinter__head9__6__3, true, false);
scc91->add_relation(rel___dollorinter__head9__6__1__2__3__4__5__6, true, false);
scc91->add_rule(new parallel_acopy(rel___dollorinter__head9__6__3, rel___dollorinter__head9__6__1__2__3__4__5__6, DELTA, {2, 6, 0, 1, 3, 4, 5}));

RAM* scc92 = new RAM(false, 92);
scc92->add_relation(rel___dollorunit__1__, false, false);
scc92->add_relation(rel___dollorrule3__inter__body__1__1, true, false);
scc92->add_rule(new parallel_copy_generate(rel___dollorrule3__inter__body__1__1, rel___dollorunit__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {n2d(0)};
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

RAM* scc93 = new RAM(false, 93);
scc93->add_relation(rel___dollorrule3__inter__body__1__1, true, false);
scc93->add_relation(rel___dollorrule3__inter__body__1__, true, false);
scc93->add_rule(new parallel_acopy(rel___dollorrule3__inter__body__1__, rel___dollorrule3__inter__body__1__1, DELTA, {1, 0}));

RAM* scc94 = new RAM(false, 94);
scc94->add_relation(rel___dollorrule3__inter__body__1__, false, true);
scc94->add_relation(rel___dollorrule3__inter__body1__2__1__2, true, false);
scc94->add_rule(new parallel_copy_generate(rel___dollorrule3__inter__body1__2__1__2, rel___dollorrule3__inter__body__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("cons")};
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

RAM* scc95 = new RAM(false, 95);
scc95->add_relation(rel___dollorrule3__inter__body1__2__, true, false);
scc95->add_relation(rel___dollorrule3__inter__body1__2__1__2, true, false);
scc95->add_rule(new parallel_acopy(rel___dollorrule3__inter__body1__2__, rel___dollorrule3__inter__body1__2__1__2, DELTA, {2, 0, 1}));

RAM* scc96 = new RAM(false, 96);
scc96->add_relation(rel___dollorinter__head20__3__1__2__3, true, false);
scc96->add_relation(rel___dollorrule3__inter__body1__2__, false, true);
scc96->add_rule(new parallel_copy_generate(rel___dollorinter__head20__3__1__2__3, rel___dollorrule3__inter__body1__2__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {n2d(2)};
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

RAM* scc97 = new RAM(false, 97);
scc97->add_relation(rel___dollorinter__head20__3__1__2__3, false, false);
scc97->add_relation(rel___dollornil__1__1, true, false);
scc97->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head20__3__1__2__3, FULL, {1}));

RAM* scc98 = new RAM(false, 98);
scc98->add_relation(rel___dollorinter__head20__3__1__2__3, true, false);
scc98->add_relation(rel___dollorinter__head20__3__2, true, false);
scc98->add_rule(new parallel_acopy(rel___dollorinter__head20__3__2, rel___dollorinter__head20__3__1__2__3, DELTA, {1, 3, 0, 2}));

RAM* scc99 = new RAM(false, 99);
scc99->add_relation(rel___dollorunit__1__, false, false);
scc99->add_relation(rel___dollorrule10__inter__body1__1__1, true, false);
scc99->add_rule(new parallel_copy_generate(rel___dollorrule10__inter__body1__1__1, rel___dollorunit__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {n2d(0)};
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

RAM* scc100 = new RAM(false, 100);
scc100->add_relation(rel___dollorrule10__inter__body1__1__, true, false);
scc100->add_relation(rel___dollorrule10__inter__body1__1__1, true, false);
scc100->add_rule(new parallel_acopy(rel___dollorrule10__inter__body1__1__, rel___dollorrule10__inter__body1__1__1, DELTA, {1, 0}));

RAM* scc101 = new RAM(false, 101);
scc101->add_relation(rel___dollorrule10__inter__body1__1__, false, true);
scc101->add_relation(rel___dollorinter__head43__2__1__2, true, false);
scc101->add_rule(new parallel_copy_generate(rel___dollorinter__head43__2__1__2, rel___dollorrule10__inter__body1__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("brouhaha_main")};
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

RAM* scc102 = new RAM(false, 102);
scc102->add_relation(rel__addr__1__1, true, false);
scc102->add_relation(rel___dollorinter__head43__2__1__2, false, false);
scc102->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head43__2__1__2, FULL, {0}));

RAM* scc103 = new RAM(false, 103);
scc103->add_relation(rel___dollorinter__head43__2__1__2, false, false);
scc103->add_relation(rel___dollornil__1__1, true, false);
scc103->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head43__2__1__2, FULL, {1}));

RAM* scc104 = new RAM(false, 104);
scc104->add_relation(rel___dollorinter__head43__2__1__2, true, false);
scc104->add_relation(rel___dollorinter__head43__2__2, true, false);
scc104->add_rule(new parallel_acopy(rel___dollorinter__head43__2__2, rel___dollorinter__head43__2__1__2, DELTA, {1, 2, 0}));

RAM* scc105 = new RAM(false, 105);
scc105->add_relation(rel___dollorunit__1__, false, false);
scc105->add_relation(rel___dollorrule7__inter__body8__1__1, true, false);
scc105->add_rule(new parallel_copy_generate(rel___dollorrule7__inter__body8__1__1, rel___dollorunit__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("1")};
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

RAM* scc106 = new RAM(false, 106);
scc106->add_relation(rel___dollorrule7__inter__body8__1__1, true, false);
scc106->add_relation(rel___dollorrule7__inter__body8__1__, true, false);
scc106->add_rule(new parallel_acopy(rel___dollorrule7__inter__body8__1__, rel___dollorrule7__inter__body8__1__1, DELTA, {1, 0}));

RAM* scc107 = new RAM(false, 107);
scc107->add_relation(rel___dollorrule7__inter__body9__2__1__2, true, false);
scc107->add_relation(rel___dollorrule7__inter__body8__1__, false, true);
scc107->add_rule(new parallel_copy_generate(rel___dollorrule7__inter__body9__2__1__2, rel___dollorrule7__inter__body8__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {n2d(0)};
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

RAM* scc108 = new RAM(false, 108);
scc108->add_relation(rel___dollorrule7__inter__body9__2__, true, false);
scc108->add_relation(rel___dollorrule7__inter__body9__2__1__2, true, false);
scc108->add_rule(new parallel_acopy(rel___dollorrule7__inter__body9__2__, rel___dollorrule7__inter__body9__2__1__2, DELTA, {2, 0, 1}));

RAM* scc109 = new RAM(false, 109);
scc109->add_relation(rel___dollorrule7__inter__body9__2__, false, true);
scc109->add_relation(rel___dollorrule7__inter__body10__3__1__2__3, true, false);
scc109->add_rule(new parallel_copy_generate(rel___dollorrule7__inter__body10__3__1__2__3, rel___dollorrule7__inter__body9__2__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("call")};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = res_0;
head_tuple[1] = data[1];
head_tuple[2] = data[2];
        return std::make_tuple(data, output + 3);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 3;
      return tuples_count;
    }));

RAM* scc110 = new RAM(false, 110);
scc110->add_relation(rel___dollorrule7__inter__body10__3__1__2__3, true, false);
scc110->add_relation(rel___dollorrule7__inter__body10__3__, true, false);
scc110->add_rule(new parallel_acopy(rel___dollorrule7__inter__body10__3__, rel___dollorrule7__inter__body10__3__1__2__3, DELTA, {3, 0, 1, 2}));

RAM* scc111 = new RAM(false, 111);
scc111->add_relation(rel___dollorrule7__inter__body11__4__1__2__3__4, true, false);
scc111->add_relation(rel___dollorrule7__inter__body10__3__, false, true);
scc111->add_rule(new parallel_copy_generate(rel___dollorrule7__inter__body11__4__1__2__3__4, rel___dollorrule7__inter__body10__3__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("2")};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = res_0;
head_tuple[1] = data[3];
head_tuple[2] = data[1];
head_tuple[3] = data[2];
        return std::make_tuple(data, output + 4);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 4;
      return tuples_count;
    }));

RAM* scc112 = new RAM(false, 112);
scc112->add_relation(rel___dollorrule7__inter__body11__4__, true, false);
scc112->add_relation(rel___dollorrule7__inter__body11__4__1__2__3__4, true, false);
scc112->add_rule(new parallel_acopy(rel___dollorrule7__inter__body11__4__, rel___dollorrule7__inter__body11__4__1__2__3__4, DELTA, {4, 0, 1, 2, 3}));

RAM* scc113 = new RAM(false, 113);
scc113->add_relation(rel___dollorrule7__inter__body12__5__1__2__3__4__5, true, false);
scc113->add_relation(rel___dollorrule7__inter__body11__4__, false, true);
scc113->add_rule(new parallel_copy_generate(rel___dollorrule7__inter__body12__5__1__2__3__4__5, rel___dollorrule7__inter__body11__4__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("cons")};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = data[1];
head_tuple[1] = data[2];
head_tuple[2] = data[3];
head_tuple[3] = data[4];
head_tuple[4] = res_0;
        return std::make_tuple(data, output + 5);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 5;
      return tuples_count;
    }));

RAM* scc114 = new RAM(false, 114);
scc114->add_relation(rel___dollorrule7__inter__body12__5__, true, false);
scc114->add_relation(rel___dollorrule7__inter__body12__5__1__2__3__4__5, true, false);
scc114->add_rule(new parallel_acopy(rel___dollorrule7__inter__body12__5__, rel___dollorrule7__inter__body12__5__1__2__3__4__5, DELTA, {5, 0, 1, 2, 3, 4}));

RAM* scc115 = new RAM(false, 115);
scc115->add_relation(rel___dollorinter__head4__6__1__2__3__4__5__6, true, false);
scc115->add_relation(rel___dollorrule7__inter__body12__5__, false, true);
scc115->add_rule(new parallel_copy_generate(rel___dollorinter__head4__6__1__2__3__4__5__6, rel___dollorrule7__inter__body12__5__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("list")};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = data[1];
head_tuple[1] = data[2];
head_tuple[2] = data[3];
head_tuple[3] = res_0;
head_tuple[4] = data[4];
head_tuple[5] = data[5];
        return std::make_tuple(data, output + 6);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 6;
      return tuples_count;
    }));

RAM* scc116 = new RAM(false, 116);
scc116->add_relation(rel___dollorinter__head4__6__1__2__3__4__5__6, false, false);
scc116->add_relation(rel__int__1__1, true, false);
scc116->add_rule(new parallel_copy(rel__int__1__1, rel___dollorinter__head4__6__1__2__3__4__5__6, FULL, {4}));

RAM* scc117 = new RAM(false, 117);
scc117->add_relation(rel___dollorinter__head4__6__1__2__3__4__5__6, false, false);
scc117->add_relation(rel__ref__1__1, true, false);
scc117->add_rule(new parallel_copy(rel__ref__1__1, rel___dollorinter__head4__6__1__2__3__4__5__6, FULL, {5}));

RAM* scc118 = new RAM(false, 118);
scc118->add_relation(rel___dollorinter__head4__6__1__2__3__4__5__6, false, false);
scc118->add_relation(rel__int__1__1, true, false);
scc118->add_rule(new parallel_copy(rel__int__1__1, rel___dollorinter__head4__6__1__2__3__4__5__6, FULL, {0}));

RAM* scc119 = new RAM(false, 119);
scc119->add_relation(rel__non__list__value__1__1, true, false);
scc119->add_relation(rel__int__1__1, false, false);
scc119->add_rule(new parallel_copy(rel__non__list__value__1__1, rel__int__1__1, FULL, {1}));

RAM* scc120 = new RAM(false, 120);
scc120->add_relation(rel___dollorinter__head4__6__3, true, false);
scc120->add_relation(rel___dollorinter__head4__6__1__2__3__4__5__6, true, false);
scc120->add_rule(new parallel_acopy(rel___dollorinter__head4__6__3, rel___dollorinter__head4__6__1__2__3__4__5__6, DELTA, {2, 6, 0, 1, 3, 4, 5}));

RAM* scc121 = new RAM(false, 121);
scc121->add_relation(rel___dollorinter__head4__6__1__2__3__4__5__6, false, false);
scc121->add_relation(rel___dollornil__1__1, true, false);
scc121->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head4__6__1__2__3__4__5__6, FULL, {1}));

RAM* scc122 = new RAM(false, 122);
scc122->add_relation(rel___dollorinter__head4__6__1__2__3__4__5__6, false, false);
scc122->add_relation(rel__addr__1__1, true, false);
scc122->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head4__6__1__2__3__4__5__6, FULL, {2}));

RAM* scc123 = new RAM(false, 123);
scc123->add_relation(rel___dollorinter__head4__6__1__2__3__4__5__6, false, false);
scc123->add_relation(rel__ref__1__1, true, false);
scc123->add_rule(new parallel_copy(rel__ref__1__1, rel___dollorinter__head4__6__1__2__3__4__5__6, FULL, {3}));

RAM* scc124 = new RAM(false, 124);
scc124->add_relation(rel__ref__1__1, true, false);
scc124->add_relation(rel__ref__1__0, true, false);
scc124->add_rule(new parallel_acopy(rel__ref__1__0, rel__ref__1__1, DELTA, {1, 0}));

RAM* scc125 = new RAM(false, 125);
scc125->add_relation(rel__ref__1__1, false, false);
scc125->add_relation(rel__free__2__1__2, true, false);
scc125->add_rule(new parallel_copy(rel__free__2__1__2, rel__ref__1__1, FULL, {0, 1}));

RAM* scc126 = new RAM(true, 126);
scc126->add_relation(rel__do__free__app__2__2, true, false);
scc126->add_relation(rel___dollorlst__split__input__1__0, true, true);
scc126->add_relation(rel___dollorhead__stratified67__2__2, true, true);
scc126->add_relation(rel___dollorhead__stratified54__3__3__1, true, true);
scc126->add_relation(rel__ret__2__1, true, false);
scc126->add_relation(rel___dollorrule77__inter__body5__3__3__1, true, true);
scc126->add_relation(rel___dollorbir__sub19__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule46__inter__body1__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule55__inter__body9__9__1__2__3__4__5__6__7__8__9, true, true);
scc126->add_relation(rel___dollorrule78__inter__body7__2__1__2, true, true);
scc126->add_relation(rel__varparam__1__0, false, false);
scc126->add_relation(rel___dollorinter__head63__5__2__3__1__4, true, true);
scc126->add_relation(rel__split__at__input__2__1__2, true, false);
scc126->add_relation(rel___dollorrule8__inter__body__2__1, true, true);
scc126->add_relation(rel___dollorhead__stratified1__2__1__2, true, true);
scc126->add_relation(rel___dollorrule76__inter__body5__5__1__2__3__4__5, true, true);
scc126->add_relation(rel___dollorbir__sub9__6__1, true, true);
scc126->add_relation(rel___dollorrule7__inter__body7__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel___dollorrule67__inter__body5__3__1, true, true);
scc126->add_relation(rel___dollorinter__head16__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel___dollorrule59__inter__body5__2__2, true, true);
scc126->add_relation(rel___dollorbir__sub6__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel___dollorrule55__inter__body8__3__3, true, true);
scc126->add_relation(rel___dollorinter__head44__2__1__2, true, true);
scc126->add_relation(rel___dollorhead__stratified10__8__1__2__3__4__5__6__7__8, true, true);
scc126->add_relation(rel___dollorrule62__inter__body1__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorinter__head12__2__2, true, true);
scc126->add_relation(rel___dollorrule51__inter__body__2__1__2, true, true);
scc126->add_relation(rel___dollorrule29__inter__body__2__1, true, true);
scc126->add_relation(rel___dollorrule69__inter__body1__3__1__2__3, true, true);
scc126->add_relation(rel___dollorinter__head27__7__6, true, true);
scc126->add_relation(rel__define__prim__2__1, true, false);
scc126->add_relation(rel___dollorinter__head44__2__1, true, true);
scc126->add_relation(rel___dollorrule51__inter__body__2__1, true, true);
scc126->add_relation(rel___dollorrule29__inter__body__2__1__2, true, true);
scc126->add_relation(rel___dollorrule7__inter__body3__7__1, true, true);
scc126->add_relation(rel___dollorrule46__inter__body4__8__1__2__3__4__5__6__7__8, true, true);
scc126->add_relation(rel___dollorrule67__inter__body2__3__1__2__3, true, true);
scc126->add_relation(rel__do__fixed__prop__all__3__1__2__3, true, false);
scc126->add_relation(rel___dollorbir__sub18__2__1__2, true, true);
scc126->add_relation(rel___dollorrule59__inter__body6__2__1, true, true);
scc126->add_relation(rel___dollorrule66__inter__body3__2__1, true, true);
scc126->add_relation(rel__list__of__1__1, true, false);
scc126->add_relation(rel__appk__5__2__3, true, false);
scc126->add_relation(rel___dollorrule47__inter__body4__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel__applfk__4__1__2__3__4, true, false);
scc126->add_relation(rel___dollorrule73__inter__body__3__1, true, true);
scc126->add_relation(rel___dollorrule80__inter__body__3__1__2__3, true, true);
scc126->add_relation(rel___dollorhead__stratified8__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel___dollorinter__head28__7__7__1, true, true);
scc126->add_relation(rel___dollorinter__head66__3__1__2__3, true, true);
scc126->add_relation(rel___dollorinter__head26__8__1__2__3__4__5__6__7__8, true, true);
scc126->add_relation(rel___dollorrule61__inter__body5__3__, true, true);
scc126->add_relation(rel___dollorhead__splice4__6__, true, true);
scc126->add_relation(rel___dollorinter__head23__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel___dollorrule71__inter__body3__3__1__2__3, true, true);
scc126->add_relation(rel___dollorinter__head69__1__1, false, false);
scc126->add_relation(rel___dollorrule40__inter__body__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule9__inter__body2__4__1, true, true);
scc126->add_relation(rel___dollorrule53__inter__body1__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorhead__stratified15__4__1__2__3__4, true, true);
scc126->add_relation(rel__state__1__1, true, false);
scc126->add_relation(rel___dollorrule71__inter__body6__2__1__2, true, true);
scc126->add_relation(rel___dollorhead__stratified20__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorrule34__inter__body__3__1__2__3, true, true);
scc126->add_relation(rel___dollorhead__stratified42__4__4__2, true, true);
scc126->add_relation(rel___dollorrule50__inter__body__5__1__2__3__4__5, true, true);
scc126->add_relation(rel___dollorinter__head36__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel__define__3__1__2__3, true, false);
scc126->add_relation(rel___dollorrule47__inter__body6__5__1__2__3__4__5, true, true);
scc126->add_relation(rel___dollorrule36__inter__body1__1__1, true, true);
scc126->add_relation(rel___dollorhead__stratified32__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel___dollorinter__head41__3__1__2__3, true, true);
scc126->add_relation(rel__quote__1__1, true, false);
scc126->add_relation(rel___dollorrule67__inter__body4__2__1__2, true, true);
scc126->add_relation(rel___dollorrule47__inter__body5__6__5, true, true);
scc126->add_relation(rel___dollorrule63__inter__body__1__1, true, true);
scc126->add_relation(rel___dollorinter__head11__4__4__2, true, true);
scc126->add_relation(rel___dollorrule78__inter__body6__7__4, true, true);
scc126->add_relation(rel___dollorrule55__inter__body13__1__1, true, true);
scc126->add_relation(rel___dollorrule67__inter__body2__3__2, true, true);
scc126->add_relation(rel__split__at__3__1, true, false);
scc126->add_relation(rel___dollorinter__head60__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule82__inter__body__4__2, true, true);
scc126->add_relation(rel___dollorrule7__inter__body5__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel___dollorhead__stratified43__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorrule48__inter__body2__2__1__2, true, true);
scc126->add_relation(rel__clo__2__1__2, true, false);
scc126->add_relation(rel___dollorinter__head37__5__1__2__3__4__5, true, true);
scc126->add_relation(rel___dollorrule60__inter__body1__1__1, true, true);
scc126->add_relation(rel___dollorhead__stratified55__3__2__3, true, true);
scc126->add_relation(rel___dollorbir__sub7__5__1__2__3__4__5, true, true);
scc126->add_relation(rel___dollorrule67__inter__body8__2__1__2, true, true);
scc126->add_relation(rel___dollorbir__sub19__3__1, true, true);
scc126->add_relation(rel__do__var__prop__all__h__4__3, true, false);
scc126->add_relation(rel___dollorinter__head10__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule67__inter__body8__2__1, true, true);
scc126->add_relation(rel___dollorrule55__inter__body7__8__1__2__3__4__5__6__7__8, true, true);
scc126->add_relation(rel___dollorrule47__inter__body7__6__4, true, true);
scc126->add_relation(rel___dollorrule66__inter__body6__2__1, true, true);
scc126->add_relation(rel__bool__1__0, true, false);
scc126->add_relation(rel___dollorinter__head37__5__3__1__2, true, true);
scc126->add_relation(rel___dollorhead__stratified65__3__1__3, true, true);
scc126->add_relation(rel___dollorrule56__inter__body1__6__, true, true);
scc126->add_relation(rel__applak__4__0, true, false);
scc126->add_relation(rel__length__2__1, true, false);
scc126->add_relation(rel___dollorhead__stratified49__3__2__1, true, true);
scc126->add_relation(rel___dollorinter__head62__4__1__3, true, true);
scc126->add_relation(rel__do__free__app__2__1__2, true, false);
scc126->add_relation(rel___dollorrule78__inter__body1__4__1__2__3__4, true, true);
scc126->add_relation(rel__do__var__prop__all__3__1__2__3, true, false);
scc126->add_relation(rel___dollorrule76__inter__body__5__1__2__3__4__5, true, true);
scc126->add_relation(rel___dollorinter__head73__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel__do__free__lam__3__1__2__3, true, false);
scc126->add_relation(rel___dollorrule53__inter__body2__1__1, true, true);
scc126->add_relation(rel___dollorrule32__inter__body__2__2, true, true);
scc126->add_relation(rel___dollorrule71__inter__body2__2__2, true, true);
scc126->add_relation(rel___dollorrule23__inter__body__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule76__inter__body3__6__3__2, true, true);
scc126->add_relation(rel__app__2__1__2, true, false);
scc126->add_relation(rel___dollorrule67__inter__body5__3__1__2__3, true, true);
scc126->add_relation(rel___dollorinter__head4__6__3, false, false);
scc126->add_relation(rel__app__2__0, true, false);
scc126->add_relation(rel__tick__2__1, true, false);
scc126->add_relation(rel__clo__2__1, true, false);
scc126->add_relation(rel___dollorsplice__4__1, true, true);
scc126->add_relation(rel___dollorbir__sub3__6__1, true, true);
scc126->add_relation(rel___dollorrule21__inter__body__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule76__inter__body__5__4, true, true);
scc126->add_relation(rel___dollorrule77__inter__body5__3__1__2__3, true, true);
scc126->add_relation(rel__lambda__2__1__2, true, false);
scc126->add_relation(rel___dollorinter__head40__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel___dollorrule82__inter__body1__4__1__2__3__4, true, true);
scc126->add_relation(rel__store__2__1, true, false);
scc126->add_relation(rel___dollorrule55__inter__body2__8__1__2__3__4__5__6__7__8, true, true);
scc126->add_relation(rel___dollorinter__head45__3__1__2__3, true, true);
scc126->add_relation(rel___dollorinter__head30__7__3__1, true, true);
scc126->add_relation(rel__fixedparam__1__1, true, false);
scc126->add_relation(rel___dollorhead__stratified27__3__1__2__3, true, false);
scc126->add_relation(rel___dollorhead__stratified26__3__1__2__3, true, true);
scc126->add_relation(rel__do__free__let__lhs__3__1__2__3, true, false);
scc126->add_relation(rel___dollorrule78__inter__body6__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel___dollorrule78__inter__body2__3__1__2__3, true, true);
scc126->add_relation(rel___dollorhir__sub__3__1, true, true);
scc126->add_relation(rel___dollorhead__stratified35__3__1__2__3, true, true);
scc126->add_relation(rel__fixedparam__1__0, true, false);
scc126->add_relation(rel___dollorinter__head15__5__1__2__3__4__5, true, true);
scc126->add_relation(rel___dollorinter__head57__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorrule71__inter__body4__3__1__2__3, true, true);
scc126->add_relation(rel___dollorinter__head5__3__1__2__3, true, true);
scc126->add_relation(rel___dollorhead__stratified29__4__3__4, true, true);
scc126->add_relation(rel__app__2__1, true, false);
scc126->add_relation(rel__if__3__1, false, false);
scc126->add_relation(rel___dollorinter__head39__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorinter__head14__2__2, false, false);
scc126->add_relation(rel___dollorrule63__inter__body2__4__, true, true);
scc126->add_relation(rel___dollorrule74__inter__body1__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorrule76__inter__body2__7__4, true, true);
scc126->add_relation(rel___dollorbir__sub20__3__1, true, true);
scc126->add_relation(rel___dollorlst__append__2__1__2, true, true);
scc126->add_relation(rel__kaddr__1__1, true, false);
scc126->add_relation(rel___dollorrule47__inter__body8__3__1__2__3, true, true);
scc126->add_relation(rel___dollorinter__head65__3__1__2__3, true, true);
scc126->add_relation(rel__store__flow__2__1, true, false);
scc126->add_relation(rel___dollorhead__stratified46__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel__define__3__1, true, false);
scc126->add_relation(rel__split__at__input__2__1, true, false);
scc126->add_relation(rel___dollorrule7__inter__body13__3__3, true, true);
scc126->add_relation(rel___dollorrule69__inter__body4__3__3, true, true);
scc126->add_relation(rel___dollorrule81__inter__body__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule20__inter__body__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule47__inter__body1__7__3__7, true, true);
scc126->add_relation(rel___dollorrule69__inter__body9__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorinter__head46__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorrule56__inter__body1__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel___dollorinter__head45__3__3, true, true);
scc126->add_relation(rel___dollorrule4__inter__body__5__1__2__3__4__5, true, true);
scc126->add_relation(rel___dollorrule55__inter__body2__8__6, true, true);
scc126->add_relation(rel___dollorrule47__inter__body4__6__4, true, true);
scc126->add_relation(rel___dollorrule5__inter__body__2__1__2, true, true);
scc126->add_relation(rel__split__at__end__input__2__2, true, false);
scc126->add_relation(rel___dollorlst__append__2__1, true, true);
scc126->add_relation(rel___dollorrule82__inter__body1__4__4, true, true);
scc126->add_relation(rel___dollorinter__head52__3__1__2__3, true, true);
scc126->add_relation(rel___dollorhead__splice1__9__6__9, true, true);
scc126->add_relation(rel___dollorrule41__inter__body__3__2, true, true);
scc126->add_relation(rel___dollorrule7__inter__body1__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel___dollorrule9__inter__body__4__3, true, true);
scc126->add_relation(rel___dollorrule47__inter__body1__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel___dollorhead__stratified55__3__1__2__3, true, true);
scc126->add_relation(rel___dollorinter__head10__3__1__2, true, true);
scc126->add_relation(rel___dollorinter__head34__3__2, false, false);
scc126->add_relation(rel___dollorrule74__inter__body2__2__1__2, true, true);
scc126->add_relation(rel___dollorrule75__inter__body1__3__1, true, true);
scc126->add_relation(rel___dollorrule55__inter__body7__8__, true, true);
scc126->add_relation(rel___dollorrule67__inter__body6__2__1, true, true);
scc126->add_relation(rel___dollorrule20__inter__body__3__2, true, true);
scc126->add_relation(rel___dollorrule78__inter__body4__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorlst__append__input__2__0, true, true);
scc126->add_relation(rel__quote__1__0, true, false);
scc126->add_relation(rel___dollorhead__splice3__5__1__2__3__4__5, true, true);
scc126->add_relation(rel___dollorrule59__inter__body3__2__1__2, true, true);
scc126->add_relation(rel___dollorrule59__inter__body8__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule59__inter__body9__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorrule61__inter__body__4__4, true, true);
scc126->add_relation(rel___dollorhead__stratified19__5__1__2__3__4__5, true, true);
scc126->add_relation(rel___dollorinter__head33__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel___dollorrule71__inter__body5__2__2, true, true);
scc126->add_relation(rel___dollorrule78__inter__body5__2__2, true, true);
scc126->add_relation(rel___dollorlst__split__3__3, true, true);
scc126->add_relation(rel___dollorinter__head67__7__2__7__1__3__4__5, true, true);
scc126->add_relation(rel___dollorinter__head67__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel___dollorrule46__inter__body__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel___dollorrule78__inter__body__3__3__1, true, true);
scc126->add_relation(rel___dollorhead__stratified38__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel___dollorrule77__inter__body3__4__1, true, true);
scc126->add_relation(rel___dollorrule59__inter__body4__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorrule36__inter__body2__2__1, true, true);
scc126->add_relation(rel___dollorhir__sub1__3__1__2__3, true, true);
scc126->add_relation(rel___dollorinter__head51__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorinter__head25__7__2__1, true, true);
scc126->add_relation(rel___dollorrule69__inter__body9__4__3, true, true);
scc126->add_relation(rel___dollorhead__stratified26__3__1__2, true, true);
scc126->add_relation(rel___dollorbir__sub10__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule66__inter__body__2__1__2, true, true);
scc126->add_relation(rel__apply__5__3, true, false);
scc126->add_relation(rel___dollorrule76__inter__body5__5__1, true, true);
scc126->add_relation(rel___dollorrule46__inter__body__6__3, true, true);
scc126->add_relation(rel__lambda__2__2, true, false);
scc126->add_relation(rel__saddr__1__1, true, false);
scc126->add_relation(rel___dollorbir__sub4__6__1, true, true);
scc126->add_relation(rel___dollorrule55__inter__body9__9__, true, true);
scc126->add_relation(rel___dollorrule41__inter__body__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule61__inter__body__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorrule81__inter__body__3__2__1, true, true);
scc126->add_relation(rel___dollorbir__sub14__4__1, true, true);
scc126->add_relation(rel___dollorinter__head36__7__3__1, true, true);
scc126->add_relation(rel___dollorrule76__inter__body2__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel___dollorrule55__inter__body4__7__7, true, true);
scc126->add_relation(rel___dollorhead__stratified60__2__1__2, true, true);
scc126->add_relation(rel___dollorrule69__inter__body6__4__1, true, true);
scc126->add_relation(rel___dollorrule57__inter__body1__3__1, true, true);
scc126->add_relation(rel___dollorrule67__inter__body4__2__2, true, true);
scc126->add_relation(rel___dollorrule60__inter__body2__3__1__2__3, true, true);
scc126->add_relation(rel___dollorhead__stratified29__4__1__2__3__4, true, true);
scc126->add_relation(rel__applak__4__1__2__3__4, true, false);
scc126->add_relation(rel___dollorbir__sub20__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule81__inter__body1__5__4, true, true);
scc126->add_relation(rel___dollorrule69__inter__body8__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorbir__sub2__9__1__2, true, true);
scc126->add_relation(rel___dollorrule45__inter__body2__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel___dollorrule73__inter__body1__4__1, true, true);
scc126->add_relation(rel___dollorbir__sub5__6__1, true, true);
scc126->add_relation(rel___dollorbir__sub11__4__1__2__3__4, true, false);
scc126->add_relation(rel___dollorhead__stratified11__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel__addr__1__1, true, false);
scc126->add_relation(rel___dollorrule56__inter__body__6__5, true, true);
scc126->add_relation(rel___dollorrule7__inter__body3__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel___dollorrule79__inter__body1__4__4, true, true);
scc126->add_relation(rel___dollorhead__stratified10__8__6__8, true, true);
scc126->add_relation(rel___dollorinter__head29__2__1__2, true, true);
scc126->add_relation(rel___dollorrule75__inter__body3__3__2, true, true);
scc126->add_relation(rel___dollorrule67__inter__body1__3__3, true, true);
scc126->add_relation(rel___dollorinter__head66__3__1, true, true);
scc126->add_relation(rel___dollorrule32__inter__body1__2__1__2, true, true);
scc126->add_relation(rel___dollorinter__head__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorinter__head39__4__2__3, true, true);
scc126->add_relation(rel___dollorrule66__inter__body2__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule7__inter__body6__7__7, true, true);
scc126->add_relation(rel___dollorhead__stratified__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule60__inter__body4__1__1, true, true);
scc126->add_relation(rel___dollorinter__head16__7__7__3__6__4__2__5, true, true);
scc126->add_relation(rel___dollorrule34__inter__body__3__3, true, true);
scc126->add_relation(rel___dollorrule10__inter__body__2__1, true, true);
scc126->add_relation(rel___dollorbir__sub18__2__2, true, true);
scc126->add_relation(rel___dollorrule46__inter__body6__6__4, true, true);
scc126->add_relation(rel__halt__0__, true, false);
scc126->add_relation(rel___dollorrule22__inter__body__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorinter__head13__5__5, true, true);
scc126->add_relation(rel___dollorrule73__inter__body__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule55__inter__body1__9__9__3, true, true);
scc126->add_relation(rel___dollorrule59__inter__body7__4__1, true, true);
scc126->add_relation(rel___dollorrule78__inter__body__3__1__2__3, true, true);
scc126->add_relation(rel___dollorinter__head71__3__3, true, true);
scc126->add_relation(rel___dollorrule59__inter__body5__2__1__2, true, true);
scc126->add_relation(rel___dollorbir__sub7__5__1__2, true, true);
scc126->add_relation(rel___dollorrule60__inter__body2__3__3, true, true);
scc126->add_relation(rel___dollorhead__stratified2__3__1__2__3, true, true);
scc126->add_relation(rel___dollorinter__head20__3__2, false, false);
scc126->add_relation(rel___dollorhead__stratified14__5__1__2__3__4__5, true, true);
scc126->add_relation(rel___dollorrule47__inter__body2__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel___dollorrule59__inter__body6__2__1__2, true, true);
scc126->add_relation(rel___dollorrule78__inter__body5__2__1__2, true, true);
scc126->add_relation(rel___dollorrule7__inter__body5__7__6, true, true);
scc126->add_relation(rel___dollorrule47__inter__body8__3__2, true, true);
scc126->add_relation(rel___dollorrule66__inter__body__2__2, true, true);
scc126->add_relation(rel___dollorrule36__inter__body__2__1__2, true, true);
scc126->add_relation(rel___dollorhead__stratified67__2__1__2, true, true);
scc126->add_relation(rel___dollorrule71__inter__body1__1__1, true, true);
scc126->add_relation(rel___dollorrule7__inter__body__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel___dollorinter__head53__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule40__inter__body1__2__1__2, true, true);
scc126->add_relation(rel__binding__2__2, false, false);
scc126->add_relation(rel___dollorinter__head33__6__3__1__2, true, true);
scc126->add_relation(rel___dollorinter__head47__9__3__5__6__7__4__2__8__1, true, true);
scc126->add_relation(rel___dollorrule52__inter__body2__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorrule47__inter__body2__6__2, true, true);
scc126->add_relation(rel___dollorinter__head17__3__1__2__3, true, false);
scc126->add_relation(rel___dollorbir__sub17__2__1__2, true, true);
scc126->add_relation(rel___dollorrule63__inter__body1__4__4, true, true);
scc126->add_relation(rel___dollorrule40__inter__body__3__1__2, true, true);
scc126->add_relation(rel___dollorrule55__inter__body3__8__1__2__3__4__5__6__7__8, true, true);
scc126->add_relation(rel__letk__6__0, true, false);
scc126->add_relation(rel___dollorrule34__inter__body1__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorrule62__inter__body__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorrule61__inter__body3__3__1__2__3, true, true);
scc126->add_relation(rel___dollorinter__head11__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorinter__head27__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel___dollorlst__2__2, true, false);
scc126->add_relation(rel___dollorinter__head30__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel___dollorinter__head9__6__3, false, false);
scc126->add_relation(rel___dollorrule69__inter__body1__3__1, true, true);
scc126->add_relation(rel___dollorrule63__inter__body2__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorhead__splice4__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel__if__3__3, false, false);
scc126->add_relation(rel___dollorrule5__inter__body__2__2, true, true);
scc126->add_relation(rel___dollorrule66__inter__body2__3__1, true, true);
scc126->add_relation(rel___dollorinter__head32__3__1__2__3, true, true);
scc126->add_relation(rel___dollorbir__sub5__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel___dollorrule52__inter__body1__1__1, true, true);
scc126->add_relation(rel___dollorrule55__inter__body12__9__1__2__3__4__5__6__7__8__9, true, true);
scc126->add_relation(rel___dollorrule69__inter__body4__3__1__2__3, true, true);
scc126->add_relation(rel__if__k__4__0, true, false);
scc126->add_relation(rel___dollorrule78__inter__body3__4__3, true, true);
scc126->add_relation(rel___dollorrule61__inter__body3__3__3, true, true);
scc126->add_relation(rel___dollorhead__stratified36__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel___dollorbir__sub15__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorhead__stratified17__2__1__2, true, true);
scc126->add_relation(rel___dollorinter__head61__3__1__2__3, true, true);
scc126->add_relation(rel___dollorinter__head19__2__, true, true);
scc126->add_relation(rel___dollorrule79__inter__body__3__1__2, true, true);
scc126->add_relation(rel___dollorrule57__inter__body1__3__1__2__3, true, true);
scc126->add_relation(rel___dollorhead__stratified40__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorrule59__inter__body__2__1__2, true, true);
scc126->add_relation(rel___dollorrule54__inter__body__1__1, true, true);
scc126->add_relation(rel___dollorrule7__inter__body7__7__2, true, true);
scc126->add_relation(rel___dollorrule60__inter__body8__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorrule59__inter__body2__1__1, true, true);
scc126->add_relation(rel___dollorrule75__inter__body4__4__2, true, true);
scc126->add_relation(rel___dollorrule74__inter__body__2__2, true, true);
scc126->add_relation(rel___dollorrule62__inter__body1__4__4, true, true);
scc126->add_relation(rel___dollorrule7__inter__body2__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel___dollorhead__stratified12__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel___dollorinter__head55__2__1__2, true, true);
scc126->add_relation(rel___dollorrule66__inter__body3__2__1__2, true, true);
scc126->add_relation(rel___dollorrule66__inter__body1__1__1, true, true);
scc126->add_relation(rel___dollorrule22__inter__body__4__2__3, true, true);
scc126->add_relation(rel___dollorinter__head41__3__1__2, true, true);
scc126->add_relation(rel___dollorrule50__inter__body__5__3, true, true);
scc126->add_relation(rel___dollorrule79__inter__body__3__1__2__3, true, true);
scc126->add_relation(rel___dollorhir__sub1__3__1, true, true);
scc126->add_relation(rel___dollorrule62__inter__body2__2__2, true, true);
scc126->add_relation(rel__if__3__0, false, false);
scc126->add_relation(rel___dollorrule47__inter__body__3__2, true, true);
scc126->add_relation(rel___dollorrule61__inter__body4__3__3, true, true);
scc126->add_relation(rel___dollorrule60__inter__body6__1__1, true, true);
scc126->add_relation(rel___dollorrule77__inter__body1__5__2, true, true);
scc126->add_relation(rel___dollorrule45__inter__body2__6__, true, true);
scc126->add_relation(rel___dollorrule7__inter__body13__3__1__2__3, true, true);
scc126->add_relation(rel___dollorinter__head8__2__1__2, true, true);
scc126->add_relation(rel___dollorrule67__inter__body11__2__1__2, true, true);
scc126->add_relation(rel__define__prim__2__1__2, true, false);
scc126->add_relation(rel___dollorrule77__inter__body2__3__1, true, true);
scc126->add_relation(rel___dollorinter__head58__3__2, true, true);
scc126->add_relation(rel___dollorinter__head3__4__3, true, true);
scc126->add_relation(rel___dollorinter__head55__2__1, true, true);
scc126->add_relation(rel___dollorrule46__inter__body2__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel__apply__5__4, true, false);
scc126->add_relation(rel__clo__2__0, true, false);
scc126->add_relation(rel___dollorrule55__inter__body5__8__1__2__3__4__5__6__7__8, true, true);
scc126->add_relation(rel___dollorhead__stratified__3__2__1, true, true);
scc126->add_relation(rel__vararg__1__0, true, false);
scc126->add_relation(rel___dollorhead__stratified38__6__5__6, true, true);
scc126->add_relation(rel___dollornil__1__1, true, false);
scc126->add_relation(rel___dollorinter__head7__5__1__2__3__4__5, true, true);
scc126->add_relation(rel___dollorbir__sub3__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel___dollorhir__sub3__3__1, true, true);
scc126->add_relation(rel__ret__2__1__2, true, false);
scc126->add_relation(rel___dollorhead__splice2__8__5__8, true, true);
scc126->add_relation(rel___dollorbir__sub10__3__1, true, true);
scc126->add_relation(rel__split__at__end__input__2__1__2, true, false);
scc126->add_relation(rel___dollorrule77__inter__body4__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel___dollorhead__stratified62__3__1__2__3, true, true);
scc126->add_relation(rel___dollorhead__stratified45__2__1__2, true, true);
scc126->add_relation(rel___dollorrule67__inter__body9__2__2, true, true);
scc126->add_relation(rel___dollorrule77__inter__body__6__2__1, true, true);
scc126->add_relation(rel___dollorrule71__inter__body2__2__1__2, true, true);
scc126->add_relation(rel___dollorhead__stratified56__2__1__2, true, true);
scc126->add_relation(rel___dollorrule59__inter__body9__4__2, true, true);
scc126->add_relation(rel___dollorinter__head13__5__1__2__3__4__5, true, true);
scc126->add_relation(rel___dollorrule71__inter__body6__2__1, true, true);
scc126->add_relation(rel___dollorrule55__inter__body8__3__1__2__3, true, true);
scc126->add_relation(rel___dollorhead__stratified13__6__4__6, true, true);
scc126->add_relation(rel___dollorrule48__inter__body3__5__1__2__3__4__5, true, true);
scc126->add_relation(rel___dollorinter__head7__5__2, true, true);
scc126->add_relation(rel__list__of__1__0__1, true, false);
scc126->add_relation(rel___dollorrule48__inter__body1__1__1, true, true);
scc126->add_relation(rel__do__free__let__rhs__2__1__2, true, false);
scc126->add_relation(rel___dollorrule1__inter__body__2__1, false, true);
scc126->add_relation(rel___dollorrule8__inter__body__2__1__2, true, true);
scc126->add_relation(rel___dollorhead__stratified50__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule61__inter__body2__2__1__2, true, true);
scc126->add_relation(rel___dollorhead__stratified13__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel___dollorrule46__inter__body2__7__, true, true);
scc126->add_relation(rel___dollorinter__head54__3__1__2__3, true, true);
scc126->add_relation(rel___dollorinter__head22__6__3__1__2, true, true);
scc126->add_relation(rel___dollorrule67__inter__body__3__1, true, true);
scc126->add_relation(rel___dollorhead__stratified43__4__1__3__4, true, true);
scc126->add_relation(rel___dollorrule67__inter__body7__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule47__inter__body5__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel___dollorhead__stratified6__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorrule55__inter__body10__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule69__inter__body7__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollornil__1__0, true, false);
scc126->add_relation(rel___dollorrule78__inter__body1__4__2__4__1, true, true);
scc126->add_relation(rel__binding__2__0, false, false);
scc126->add_relation(rel___dollorinter__head6__3__1__2__3, true, true);
scc126->add_relation(rel___dollorinter__head35__6__6, true, true);
scc126->add_relation(rel___dollorrule59__inter__body8__3__3, true, true);
scc126->add_relation(rel___dollorinter__head61__3__3__2, true, true);
scc126->add_relation(rel___dollorrule55__inter__body6__3__1__2__3, true, true);
scc126->add_relation(rel__do__tick__2__1__2, true, false);
scc126->add_relation(rel___dollorhead__stratified22__2__1__2, true, true);
scc126->add_relation(rel___dollorrule52__inter__body__2__1__2, true, true);
scc126->add_relation(rel___dollorrule53__inter__body1__4__3, true, true);
scc126->add_relation(rel___dollorinter__head24__2__2, false, false);
scc126->add_relation(rel___dollorrule69__inter__body2__3__1, true, true);
scc126->add_relation(rel___dollorrule60__inter__body5__2__1__2, true, true);
scc126->add_relation(rel___dollorhead__stratified44__6__3__6__1__2__4, true, true);
scc126->add_relation(rel___dollorhead__stratified23__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule63__inter__body1__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorinter__head31__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule75__inter__body__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorrule48__inter__body3__5__5, true, true);
scc126->add_relation(rel___dollorrule60__inter__body5__2__1, true, true);
scc126->add_relation(rel__ret__2__2, true, false);
scc126->add_relation(rel___dollorbir__sub15__4__3__4, true, true);
scc126->add_relation(rel___dollorrule59__inter__body4__4__2, true, true);
scc126->add_relation(rel___dollorhead__stratified8__7__7__6, true, true);
scc126->add_relation(rel___dollorrule71__inter__body4__3__1, true, true);
scc126->add_relation(rel___dollorhead__stratified36__7__5__7, true, true);
scc126->add_relation(rel___dollorinter__head72__6__2__5__3__4, true, true);
scc126->add_relation(rel__do__fixed__prop__all__3__2, true, false);
scc126->add_relation(rel___dollorrule52__inter__body__2__1, true, true);
scc126->add_relation(rel___dollorinter__head54__3__2__3, true, true);
scc126->add_relation(rel___dollorrule60__inter__body__3__3, true, true);
scc126->add_relation(rel___dollorinter__head19__2__1__2, true, true);
scc126->add_relation(rel___dollorrule74__inter__body1__4__1, true, true);
scc126->add_relation(rel___dollorbir__sub1__8__1__2__3__4__5__6__7__8, true, true);
scc126->add_relation(rel___dollorrule59__inter__body1__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule59__inter__body1__3__3, true, true);
scc126->add_relation(rel___dollorrule78__inter__body2__3__1, true, true);
scc126->add_relation(rel__non__list__value__1__1, true, false);
scc126->add_relation(rel___dollorinter__head5__3__2, true, true);
scc126->add_relation(rel___dollorinter__head26__8__2__8__1__4__3__5__6, true, true);
scc126->add_relation(rel___dollorrule47__inter__body3__1__1, true, true);
scc126->add_relation(rel__appk__5__1__2__3__4__5, true, false);
scc126->add_relation(rel__define__prim__2__0, true, false);
scc126->add_relation(rel___dollorrule23__inter__body__3__3, true, true);
scc126->add_relation(rel___dollorbir__sub1__8__1, true, true);
scc126->add_relation(rel___dollorrule55__inter__body4__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel___dollorrule55__inter__body5__8__2, true, true);
scc126->add_relation(rel__tick__2__1__2, true, false);
scc126->add_relation(rel___dollorrule4__inter__body1__2__2, false, true);
scc126->add_relation(rel___dollorrule53__inter__body__2__1__2, true, true);
scc126->add_relation(rel___dollorrule75__inter__body1__3__1__2__3, true, true);
scc126->add_relation(rel__do__store__addr__union__3__2, true, false);
scc126->add_relation(rel___dollorinter__head63__5__1__2__3__4__5, true, true);
scc126->add_relation(rel__free__2__2, true, false);
scc126->add_relation(rel___dollorrule67__inter__body11__2__, true, true);
scc126->add_relation(rel___dollorrule7__inter__body4__7__5, true, true);
scc126->add_relation(rel___dollorhead__stratified42__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorhir__sub3__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule76__inter__body3__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel___dollorlst__2__1, true, false);
scc126->add_relation(rel___dollorrule57__inter__body__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule69__inter__body8__4__2, true, true);
scc126->add_relation(rel___dollorrule48__inter__body__5__5, true, true);
scc126->add_relation(rel___dollorrule76__inter__body6__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule80__inter__body__3__3, true, true);
scc126->add_relation(rel___dollorhead__stratified30__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorrule59__inter__body3__2__2, true, true);
scc126->add_relation(rel___dollorinter__head53__3__3__2, true, true);
scc126->add_relation(rel___dollorrule64__inter__body__1__1, true, true);
scc126->add_relation(rel___dollorrule75__inter__body3__3__1__2__3, true, true);
scc126->add_relation(rel__do__free__let__lhs__3__2, true, false);
scc126->add_relation(rel___dollorrule77__inter__body__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel___dollorinter__head3__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorhead__stratified28__5__1__5, true, true);
scc126->add_relation(rel__do__var__prop__all__3__3, true, false);
scc126->add_relation(rel__let__2__0, false, false);
scc126->add_relation(rel__lambda__2__1, true, false);
scc126->add_relation(rel___dollorhead__splice__10__7__10, true, true);
scc126->add_relation(rel___dollorrule66__inter__body5__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule67__inter__body3__2__1__2, true, true);
scc126->add_relation(rel___dollorhead__stratified34__3__2__1, true, true);
scc126->add_relation(rel___dollorinter__head47__9__1__2__3__4__5__6__7__8__9, true, true);
scc126->add_relation(rel___dollorrule7__inter__body4__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel___dollorinter__head15__5__3__5__2__4, true, true);
scc126->add_relation(rel___dollorrule69__inter__body5__3__3, true, true);
scc126->add_relation(rel___dollorhead__stratified12__7__7__4, true, true);
scc126->add_relation(rel___dollorrule7__inter__body2__7__4, true, true);
scc126->add_relation(rel___dollorrule74__inter__body__2__1__2, true, true);
scc126->add_relation(rel__lambda__2__0, true, false);
scc126->add_relation(rel___dollorinter__head72__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel___dollorrule42__inter__body__5__, true, true);
scc126->add_relation(rel___dollorrule74__inter__body3__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorhead__stratified54__3__1__2__3, true, true);
scc126->add_relation(rel___dollorinter__head23__6__3__6__2, true, true);
scc126->add_relation(rel___dollorrule32__inter__body1__2__2, true, true);
scc126->add_relation(rel___dollorrule36__inter__body__2__1, true, true);
scc126->add_relation(rel__store__flow__2__1__2, true, false);
scc126->add_relation(rel___dollorinter__head25__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel__define__3__0, true, false);
scc126->add_relation(rel___dollorrule74__inter__body2__2__1, true, true);
scc126->add_relation(rel___dollorlst__append__input__2__1, true, true);
scc126->add_relation(rel___dollorrule59__inter__body__2__1, true, true);
scc126->add_relation(rel___dollorinter__head42__3__3, true, true);
scc126->add_relation(rel___dollorrule67__inter__body7__3__3, true, true);
scc126->add_relation(rel___dollorinter__head49__10__1__2__3__4__5__6__7__8__9__10, true, true);
scc126->add_relation(rel__breaks__into__input__3__1__3, false, false);
scc126->add_relation(rel___dollorhead__stratified35__3__2__3, true, true);
scc126->add_relation(rel___dollorlst__2__1__2, true, false);
scc126->add_relation(rel___dollorrule69__inter__body2__3__1__2__3, true, true);
scc126->add_relation(rel___dollorinter__head52__3__3, true, true);
scc126->add_relation(rel___dollorrule76__inter__body4__5__1__2__3__4__5, true, true);
scc126->add_relation(rel__kaddr__1__0, true, false);
scc126->add_relation(rel___dollorrule77__inter__body1__5__1__2__3__4__5, true, true);
scc126->add_relation(rel___dollorhead__splice2__8__1__2__3__4__5__6__7__8, true, true);
scc126->add_relation(rel___dollorrule2__inter__body__2__1__2, true, true);
scc126->add_relation(rel___dollorrule69__inter__body__3__1__2__3, true, true);
scc126->add_relation(rel__fixedarg__1__0, true, false);
scc126->add_relation(rel___dollorinter__head64__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule9__inter__body1__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorrule9__inter__body2__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorrule78__inter__body3__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorrule45__inter__body1__5__1__2__3__4__5, true, true);
scc126->add_relation(rel___dollorrule66__inter__body5__3__1__2, true, true);
scc126->add_relation(rel___dollorrule78__inter__body4__4__2, true, true);
scc126->add_relation(rel___dollorrule48__inter__body__5__1__2__3__4__5, true, true);
scc126->add_relation(rel___dollorrule76__inter__body4__5__1, true, true);
scc126->add_relation(rel___dollorrule61__inter__body1__1__1, true, true);
scc126->add_relation(rel___dollorrule59__inter__body7__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorhead__stratified49__3__1__2__3, true, true);
scc126->add_relation(rel___dollorhead__splice1__9__1__2__3__4__5__6__7__8__9, true, true);
scc126->add_relation(rel___dollorrule2__inter__body__2__1, true, true);
scc126->add_relation(rel___dollorrule82__inter__body__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorinter__head60__3__1__2, true, true);
scc126->add_relation(rel___dollorrule67__inter__body10__1__, true, true);
scc126->add_relation(rel___dollorrule21__inter__body__3__1, true, true);
scc126->add_relation(rel___dollorlst__split__input__1__, true, true);
scc126->add_relation(rel___dollorrule61__inter__body4__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule46__inter__body5__7__2, true, true);
scc126->add_relation(rel___dollorrule75__inter__body5__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel___dollorhead__stratified25__3__1__2__3, true, true);
scc126->add_relation(rel___dollorinter__head49__10__7__9__6__3__5__4__2__8__1, true, true);
scc126->add_relation(rel__store__2__2, true, false);
scc126->add_relation(rel___dollorinter__head1__3__3, true, true);
scc126->add_relation(rel___dollorlst__2__0, true, false);
scc126->add_relation(rel__vararg__1__1, true, false);
scc126->add_relation(rel__string__1__0, false, false);
scc126->add_relation(rel__ref__1__1, false, false);
scc126->add_relation(rel__appl__2__1, false, false);
scc126->add_relation(rel___dollorrule7__inter__body__7__4, true, true);
scc126->add_relation(rel___dollorlst__append__input__2__1__2, true, true);
scc126->add_relation(rel___dollorinter__head70__5__1__2__3__4__5, true, true);
scc126->add_relation(rel___dollorrule46__inter__body6__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel___dollorrule66__inter__body8__1__1, true, true);
scc126->add_relation(rel___dollorhead__stratified37__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel___dollorrule67__inter__body6__2__1__2, true, true);
scc126->add_relation(rel___dollorhead__stratified65__3__1__2__3, true, true);
scc126->add_relation(rel___dollorinter__head28__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel___dollorrule71__inter__body3__3__3, true, true);
scc126->add_relation(rel___dollorrule46__inter__body4__8__1__8, true, true);
scc126->add_relation(rel___dollorrule66__inter__body4__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule37__inter__body__1__1, true, true);
scc126->add_relation(rel___dollorhead__stratified68__2__1__2, true, true);
scc126->add_relation(rel___dollorrule32__inter__body__2__1__2, true, true);
scc126->add_relation(rel___dollorrule7__inter__body6__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel__faddr__2__1__2, true, false);
scc126->add_relation(rel___dollorrule2__inter__body3__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorrule76__inter__body1__6__4, true, true);
scc126->add_relation(rel___dollorrule55__inter__body10__3__3, true, true);
scc126->add_relation(rel___dollorhir__sub2__3__1__2__3, true, true);
scc126->add_relation(rel___dollorinter__head64__3__2, true, true);
scc126->add_relation(rel___dollorrule4__inter__body__5__1__4, true, true);
scc126->add_relation(rel___dollorrule60__inter__body3__1__1, true, true);
scc126->add_relation(rel___dollorhead__stratified44__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel___dollorrule55__inter__body1__9__1__2__3__4__5__6__7__8__9, true, true);
scc126->add_relation(rel___dollorrule73__inter__body2__3__3, true, true);
scc126->add_relation(rel___dollorhead__stratified48__2__1__2, true, true);
scc126->add_relation(rel__eval__3__1__2__3, true, false);
scc126->add_relation(rel___dollorrule69__inter__body6__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorinter__head58__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule71__inter__body__1__1, true, true);
scc126->add_relation(rel___dollorrule73__inter__body1__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorinter__head__4__1__2, true, true);
scc126->add_relation(rel___dollorinter__head71__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule10__inter__body__2__1__2, true, true);
scc126->add_relation(rel___dollorrule34__inter__body1__4__2__4, true, true);
scc126->add_relation(rel___dollorbir__sub13__3__1, true, true);
scc126->add_relation(rel___dollorbir__sub8__6__1, true, true);
scc126->add_relation(rel___dollorinter__head22__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel___dollorlst__split__3__1, true, true);
scc126->add_relation(rel___dollorrule66__inter__body7__1__1, true, true);
scc126->add_relation(rel___dollorrule75__inter__body2__3__1__2__3, true, true);
scc126->add_relation(rel___dollorbir__sub17__2__1, true, true);
scc126->add_relation(rel___dollorinter__head57__4__4__1, true, true);
scc126->add_relation(rel___dollorrule36__inter__body2__2__1__2, true, true);
scc126->add_relation(rel___dollorrule77__inter__body4__7__5, true, true);
scc126->add_relation(rel___dollorrule47__inter__body__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule69__inter__body__3__2, true, true);
scc126->add_relation(rel___dollorinter__head42__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule45__inter__body1__5__3, true, true);
scc126->add_relation(rel___dollorinter__head2__3__3__1, true, true);
scc126->add_relation(rel___dollorinter__head21__5__4, true, true);
scc126->add_relation(rel__do__store__addr__union__3__1__2__3, true, false);
scc126->add_relation(rel__length__input__1__1, true, false);
scc126->add_relation(rel___dollorhead__stratified18__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel___dollorrule77__inter__body3__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorrule48__inter__body2__2__2, true, true);
scc126->add_relation(rel___dollorrule67__inter__body__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule9__inter__body1__4__3, true, true);
scc126->add_relation(rel___dollorrule60__inter__body7__3__1__2__3, true, true);
scc126->add_relation(rel___dollorhead__stratified34__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule46__inter__body1__3__2, true, true);
scc126->add_relation(rel___dollorrule40__inter__body1__2__2, true, true);
scc126->add_relation(rel___dollorrule75__inter__body__4__2__4__1, true, true);
scc126->add_relation(rel___dollorrule46__inter__body3__1__1, true, true);
scc126->add_relation(rel___dollorinter__head21__5__1__2__3__4__5, true, true);
scc126->add_relation(rel___dollorhead__stratified18__6__1__6, true, true);
scc126->add_relation(rel___dollorrule55__inter__body11__4__1__4, true, true);
scc126->add_relation(rel___dollorrule42__inter__body__5__1__2__3__4__5, true, true);
scc126->add_relation(rel__int__1__1, false, false);
scc126->add_relation(rel__ref__1__0, false, false);
scc126->add_relation(rel___dollorrule69__inter__body5__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule2__inter__body2__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorrule75__inter__body5__7__4, true, true);
scc126->add_relation(rel___dollorinter__head48__2__1, false, false);
scc126->add_relation(rel___dollorrule78__inter__body7__2__2, true, true);
scc126->add_relation(rel__appk__5__0, true, false);
scc126->add_relation(rel___dollorrule45__inter__body__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorrule61__inter__body2__2__2, true, true);
scc126->add_relation(rel___dollorhead__stratified11__7__2__7, true, true);
scc126->add_relation(rel___dollorrule67__inter__body10__1__1, true, true);
scc126->add_relation(rel___dollorrule62__inter__body__4__1, true, true);
scc126->add_relation(rel___dollorrule77__inter__body2__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule20__inter__body1__3__1__2__3, true, true);
scc126->add_relation(rel___dollorbir__sub4__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel___dollorhir__sub2__3__1, true, true);
scc126->add_relation(rel___dollorbir__sub14__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorinter__head31__3__2, true, true);
scc126->add_relation(rel___dollorrule76__inter__body1__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel___dollorrule67__inter__body9__2__1__2, true, true);
scc126->add_relation(rel__list__of__1__0, true, false);
scc126->add_relation(rel___dollorhead__stratified37__7__5__7__6__3__2__4, true, true);
scc126->add_relation(rel___dollorinter__head8__2__2, true, true);
scc126->add_relation(rel___dollorrule52__inter__body2__4__4, true, true);
scc126->add_relation(rel___dollorrule73__inter__body2__3__1__2__3, true, true);
scc126->add_relation(rel___dollorbir__sub9__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel___dollorhead__splice__10__1__2__3__4__5__6__7__8__9__10, true, true);
scc126->add_relation(rel___dollorhead__stratified21__3__1__2__3, true, false);
scc126->add_relation(rel___dollorrule67__inter__body1__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule47__inter__body6__5__1, true, true);
scc126->add_relation(rel__do__free__lam__3__2, true, false);
scc126->add_relation(rel__store__2__1__2, true, false);
scc126->add_relation(rel___dollorinter__head2__3__1__2__3, true, true);
scc126->add_relation(rel___dollorhead__stratified28__5__1__2__3__4__5, true, true);
scc126->add_relation(rel___dollorrule79__inter__body1__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorhead__stratified9__8__8__4, true, true);
scc126->add_relation(rel___dollorrule53__inter__body__2__1, true, true);
scc126->add_relation(rel___dollorhead__stratified15__4__1__3__4, true, true);
scc126->add_relation(rel___dollorhead__stratified20__4__3__4, true, true);
scc126->add_relation(rel___dollorinter__head50__6__2__4__3__1__5, true, true);
scc126->add_relation(rel___dollorinter__head12__2__1__2, true, true);
scc126->add_relation(rel___dollorrule55__inter__body6__3__2, true, true);
scc126->add_relation(rel___dollorrule2__inter__body3__4__3, true, true);
scc126->add_relation(rel__applfk__4__0, true, false);
scc126->add_relation(rel___dollorlst__2__0__1, true, false);
scc126->add_relation(rel__fixedarg__1__1, true, false);
scc126->add_relation(rel___dollorrule60__inter__body7__3__3, true, true);
scc126->add_relation(rel___dollorrule7__inter__body1__7__7, true, true);
scc126->add_relation(rel___dollorinter__head62__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorlst__split__input__1__1, true, true);
scc126->add_relation(rel___dollorrule81__inter__body1__5__1__2__3__4__5, true, true);
scc126->add_relation(rel___dollorinter__head35__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel__letk__6__1__2__3__4__5__6, true, false);
scc126->add_relation(rel___dollorinter__head73__7__3__1, true, true);
scc126->add_relation(rel__split__at__input__2__2, true, false);
scc126->add_relation(rel___dollorhir__sub__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule9__inter__body__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorinter__head59__3__1__2__3, true, true);
scc126->add_relation(rel__do__tick__2__1, true, false);
scc126->add_relation(rel___dollorinter__head29__2__1, true, true);
scc126->add_relation(rel___dollorrule71__inter__body5__2__1__2, true, true);
scc126->add_relation(rel__do__free__let__rhs__2__2, true, false);
scc126->add_relation(rel___dollorrule55__inter__body12__9__7, true, true);
scc126->add_relation(rel___dollorrule76__inter__body6__3__3__1, true, true);
scc126->add_relation(rel___dollorinter__head40__6__4__6__3, true, true);
scc126->add_relation(rel__saddr__1__0, true, false);
scc126->add_relation(rel___dollorrule74__inter__body3__4__4, true, true);
scc126->add_relation(rel___dollorhead__stratified25__3__2__1, true, true);
scc126->add_relation(rel__appl__2__2, false, false);
scc126->add_relation(rel__length__2__1__2, true, false);
scc126->add_relation(rel___dollorrule62__inter__body2__2__1__2, true, true);
scc126->add_relation(rel___dollorrule57__inter__body__3__3, true, true);
scc126->add_relation(rel___dollorrule45__inter__body__4__4, true, true);
scc126->add_relation(rel__apply__5__1__2__3__4__5, true, false);
scc126->add_relation(rel___dollorrule61__inter__body5__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule2__inter__body2__4__3, true, true);
scc126->add_relation(rel___dollorsplice__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorrule75__inter__body4__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorbir__sub13__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule66__inter__body6__2__1__2, true, true);
scc126->add_relation(rel__split__at__3__1__2__3, true, false);
scc126->add_relation(rel__free__2__1__2, true, false);
scc126->add_relation(rel___dollorrule20__inter__body1__3__1__2, true, true);
scc126->add_relation(rel___dollorhead__stratified64__3__1__2__3, true, true);
scc126->add_relation(rel___dollorinter__head43__2__2, false, false);
scc126->add_relation(rel__do__var__prop__all__h__4__1__2__3__4, true, false);
scc126->add_relation(rel___dollorhead__stratified4__3__1__2__3, true, true);
scc126->add_relation(rel___dollorrule35__inter__body__1__1, true, true);
scc126->add_relation(rel___dollorhead__stratified14__5__2__5, true, true);
scc126->add_relation(rel___dollorrule66__inter__body4__3__3, true, true);
scc126->add_relation(rel___dollorinter__head50__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel___dollorhead__stratified53__3__1__2__3, true, true);
scc126->add_relation(rel___dollorhead__stratified9__8__1__2__3__4__5__6__7__8, true, true);
scc126->add_relation(rel___dollorrule55__inter__body11__4__1__2__3__4, true, true);
scc126->add_relation(rel___dollorhead__stratified64__3__2__3, true, true);
scc126->add_relation(rel__let__2__2, false, false);
scc126->add_relation(rel___dollorinter__head56__3__1__2__3, true, true);
scc126->add_relation(rel__if__3__2, false, false);
scc126->add_relation(rel___dollorhead__stratified19__5__4__5, true, true);
scc126->add_relation(rel___dollorbir__sub2__9__1__2__3__4__5__6__7__8__9, true, true);
scc126->add_relation(rel___dollorrule55__inter__body__1__1, true, true);
scc126->add_relation(rel___dollorbir__sub__1__1, true, true);
scc126->add_relation(rel___dollorrule69__inter__body7__4__4, true, true);
scc126->add_relation(rel___dollorinter__head38__5__1__2__3__4__5, true, true);
scc126->add_relation(rel__bool__1__1, true, false);
scc126->add_relation(rel__appl__2__0, false, false);
scc126->add_relation(rel___dollorrule60__inter__body__3__1__2__3, true, true);
scc126->add_relation(rel___dollorinter__head51__4__3__4, true, true);
scc126->add_relation(rel___dollorlst__split__3__1__2__3, true, true);
scc126->add_relation(rel__if__k__4__1__2__3__4, true, false);
scc126->add_relation(rel___dollorrule56__inter__body__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel___dollorrule75__inter__body2__3__1__2, true, true);
scc126->add_relation(rel___dollorrule60__inter__body8__4__1, true, true);
scc126->add_relation(rel___dollorbir__sub8__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel___dollorrule67__inter__body3__2__2, true, true);
scc126->add_relation(rel___dollorrule69__inter__body3__1__1, true, true);
scc126->add_relation(rel___dollorrule55__inter__body3__8__6, true, true);
scc126->add_relation(rel___dollorbir__sub6__7__1, true, true);
scc126->add_relation(rel___dollorhead__stratified53__3__2__3, true, true);
scc126->add_relation(rel___dollorrule47__inter__body7__6__1__2__3__4__5__6, true, true);
scc126->add_relation(rel___dollorinter__head1__3__1__2__3, true, true);
scc126->add_relation(rel___dollorinter__head70__5__4__2__3__5, true, true);
scc126->add_relation(rel__eval__3__1, true, false);
scc126->add_relation(rel___dollorrule46__inter__body5__7__1__2__3__4__5__6__7, true, true);
scc126->add_relation(rel___dollorinter__head38__5__5, true, true);
scc126->add_relation(rel___dollorrule66__inter__body8__1__, true, true);
scc126->add_rule(new parallel_join(rel___dollorhead__stratified67__2__1__2, rel___dollorinter__head69__1__1, FULL, rel___dollornil__1__1, DELTA, {0, 2}));
scc126->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head42__3__1__2__3, DELTA, {2}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body3__8__1__2__3__4__5__6__7__8, rel___dollorlst__append__2__1, DELTA, rel___dollorrule55__inter__body2__8__6, FULL, {4, 5, 6, 7, 8, 9, 2, 10}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body3__8__1__2__3__4__5__6__7__8, rel___dollorlst__append__2__1, DELTA, rel___dollorrule55__inter__body2__8__6, DELTA, {4, 5, 6, 7, 8, 9, 2, 10}));
scc126->add_rule(new parallel_join(rel___dollorrule53__inter__body1__4__1__2__3__4, rel__ret__2__2, DELTA, rel__if__k__4__0, DELTA, {5, 6, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified6__4__1__2__3__4, rel___dollornil__1__1, FULL, rel___dollorrule61__inter__body__4__4, DELTA, {5, 4, 3, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule21__inter__body__3__1, rel___dollorrule21__inter__body__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__faddr__2__1__2, FULL, rel___dollorhead__stratified25__3__2__1, DELTA, {2, 4}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified56__2__1__2, rel__faddr__2__1__2, DELTA, rel___dollorrule75__inter__body2__3__1__2, DELTA, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule29__inter__body__2__1__2, rel___dollorlst__2__1, DELTA, rel__free__2__2, DELTA, {1, 4}));
scc126->add_rule(new parallel_acopy(rel__clo__2__1, rel__clo__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_copy(rel__bool__1__1, rel___dollorinter__head1__3__1__2__3, DELTA, {1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule47__inter__body1__7__3__7, rel___dollorrule47__inter__body1__7__1__2__3__4__5__6__7, DELTA, {2, 6, 7, 0, 1, 3, 4, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule75__inter__body3__3__1__2__3, rel__fixedparam__1__0, FULL, rel__lambda__2__1, DELTA, {1, 2, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule76__inter__body6__3__1__2__3, rel__faddr__2__1__2, FULL, rel___dollorinter__head60__3__1__2, DELTA, {1, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule59__inter__body9__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel___dollorrule59__inter__body8__3__3, DELTA, {1, 2, 4, 5}));
scc126->add_rule(new parallel_join(rel__apply__5__1__2__3__4__5, rel__fixedarg__1__1, DELTA, rel___dollorinter__head7__5__2, FULL, {5, 4, 3, 1, 6}));
scc126->add_rule(new parallel_acopy(rel___dollorrule79__inter__body1__4__4, rel___dollorrule79__inter__body1__4__1__2__3__4, DELTA, {3, 4, 0, 1, 2}));
scc126->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorinter__head__4__1__2__3__4, DELTA, {0, 1}));
scc126->add_rule(new parallel_copy(rel__kaddr__1__1, rel___dollorinter__head40__6__1__2__3__4__5__6, DELTA, {3}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified26__3__1__2, rel___dollorhead__stratified26__3__1__2__3, DELTA, {0, 1, 3, 2}));
scc126->add_rule(new parallel_copy(rel__ret__2__1__2, rel___dollorinter__head56__3__1__2__3, DELTA, {0, 2}));
scc126->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head67__7__1__2__3__4__5__6__7, DELTA, {5}));
scc126->add_rule(new parallel_join(rel___dollorrule60__inter__body8__4__1__2__3__4, rel___dollorrule60__inter__body2__3__3, DELTA, rel___dollorrule60__inter__body7__3__3, DELTA, {2, 3, 5, 6}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body5__8__1__2__3__4__5__6__7__8, rel___dollorlst__2__0, FULL, rel___dollorrule55__inter__body4__7__7, DELTA, {7, 1, 8, 2, 4, 5, 6, 9}));
scc126->add_rule(new parallel_acopy(rel___dollorrule55__inter__body2__8__6, rel___dollorrule55__inter__body2__8__1__2__3__4__5__6__7__8, DELTA, {5, 8, 0, 1, 2, 3, 4, 6, 7}));
scc126->add_rule(new parallel_copy_generate(rel__length__2__1__2, rel___dollorbir__sub18__2__2, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = data[2];
head_tuple[1] = res_0;
        return std::make_tuple(data, output + 2);
      };
      auto [_,new_ptr] = builtin_add1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 2;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorrule32__inter__body1__2__1__2, rel__do__free__let__rhs__2__2, DELTA, rel___dollorlst__2__0, FULL, {2, 3}));
scc126->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorhead__stratified2__3__1__2__3, DELTA, {0, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule81__inter__body__3__1__2__3, rel__do__var__prop__all__h__4__1__2__3__4, FULL, rel___dollorinter__head72__6__2__5__3__4, DELTA, {6, 0, 7}));
scc126->add_rule(new parallel_join(rel__free__2__1__2, rel___dollorrule32__inter__body__2__2, FULL, rel___dollorrule32__inter__body1__2__2, DELTA, {2, 4}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub15__4__1__2__3__4, rel__length__2__1, DELTA, rel___dollorbir__sub14__4__1, DELTA, {4, 5, 6, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule69__inter__body5__3__1__2__3, rel__list__of__1__0, FULL, rel___dollorrule69__inter__body2__3__1, DELTA, {1, 3, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorrule66__inter__body4__3__3, rel___dollorrule66__inter__body4__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc126->add_rule(new parallel_copy(rel__fixedparam__1__1, rel___dollorhead__stratified42__4__1__2__3__4, DELTA, {1}));
scc126->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head35__6__1__2__3__4__5__6, DELTA, {5}));
scc126->add_rule(new parallel_join(rel___dollorrule66__inter__body2__3__1__2__3, rel__fixedarg__1__0, FULL, rel__apply__5__4, DELTA, {5, 1, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule71__inter__body6__2__1__2, rel___dollorrule71__inter__body5__2__2, DELTA, rel___dollorrule71__inter__body2__2__2, DELTA, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule46__inter__body1__3__1__2__3, rel___dollorbir__sub6__7__1__2__3__4__5__6__7, FULL, rel___dollorinter__head26__8__2__8__1__4__3__5__6, DELTA, {0, 9, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule78__inter__body1__4__2__4__1, rel___dollorrule78__inter__body1__4__1__2__3__4, DELTA, {1, 3, 0, 4, 2}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified35__3__1__2__3, rel___dollornil__1__1, FULL, rel___dollorrule46__inter__body1__3__2, DELTA, {3, 4, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified38__6__5__6, rel___dollorhead__stratified38__6__1__2__3__4__5__6, DELTA, {4, 5, 6, 0, 1, 2, 3}));
scc126->add_rule(new parallel_join(rel__do__store__addr__union__3__1__2__3, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified29__4__3__4, DELTA, {5, 4, 2}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified14__5__1__2__3__4__5, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified13__6__4__6, DELTA, {4, 5, 6, 7, 2}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified15__4__1__2__3__4, rel__app__2__1__2, DELTA, rel___dollorhead__stratified14__5__2__5, FULL, {4, 5, 6, 2}));
scc126->add_rule(new parallel_copy_generate(rel__free__2__1__2, rel___dollorrule23__inter__body__3__3, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == n2d(0);
        if (! compatible) return state;

        head_tuple[0] = data[2];
head_tuple[1] = data[3];
        return std::make_tuple(data, output + 2);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 2;
      return tuples_count;
    }));
scc126->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorhead__stratified4__3__1__2__3, DELTA, {1, 2}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified13__6__1__2__3__4__5__6, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified12__7__7__4, FULL, {4, 5, 6, 7, 8, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule9__inter__body1__4__3, rel___dollorrule9__inter__body1__4__1__2__3__4, DELTA, {2, 4, 0, 1, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule67__inter__body9__2__1__2, rel___dollorrule67__inter__body6__2__1, DELTA, rel___dollorrule67__inter__body8__2__1, DELTA, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule73__inter__body1__4__1__2__3__4, rel__define__prim__2__0, FULL, rel__apply__5__3, DELTA, {1, 6, 7, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule42__inter__body__5__1__2__3__4__5, rel__app__2__0, DELTA, rel__eval__3__1, FULL, {2, 4, 0, 5, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule20__inter__body__3__2, rel___dollorrule20__inter__body__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule75__inter__body3__3__1__2__3, rel__fixedparam__1__0, DELTA, rel__lambda__2__1, DELTA, {1, 2, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule67__inter__body5__3__1__2__3, rel__define__prim__2__0, DELTA, rel__apply__5__3, DELTA, {6, 3, 1}));
scc126->add_rule(new parallel_copy(rel__eval__3__1__2__3, rel___dollorhead__stratified46__6__1__2__3__4__5__6, DELTA, {0, 2, 5}));
scc126->add_rule(new parallel_join(rel__do__var__prop__all__h__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel___dollorrule80__inter__body__3__3, FULL, {4, 0, 5, 5}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified44__6__1__2__3__4__5__6, rel___dollornil__1__1, DELTA, rel___dollorinter__head35__6__6, DELTA, {3, 4, 5, 6, 7, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule60__inter__body6__1__1, rel___dollorrule60__inter__body1__1__1, DELTA, rel___dollorrule60__inter__body5__2__1, FULL, {3}));
scc126->add_rule(new parallel_copy(rel__letk__6__1__2__3__4__5__6, rel___dollorinter__head16__7__1__2__3__4__5__6__7, DELTA, {6, 2, 5, 3, 1, 4}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified38__6__1__2__3__4__5__6, rel___dollornil__1__1, FULL, rel___dollorrule56__inter__body__6__5, DELTA, {7, 3, 4, 5, 6, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified54__3__3__1, rel___dollorhead__stratified54__3__1__2__3, DELTA, {2, 0, 3, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head2__3__1__2__3, rel__lambda__2__0, DELTA, rel__eval__3__1, FULL, {4, 5, 0}));
scc126->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorhead__stratified2__3__1__2__3, DELTA, {0, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule23__inter__body__3__1__2__3, rel___dollornil__1__0, FULL, rel__do__free__lam__3__2, DELTA, {4, 3, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified12__7__1__2__3__4__5__6__7, rel__app__2__1__2, DELTA, rel___dollorhead__stratified11__7__2__7, FULL, {4, 0, 5, 6, 7, 8, 2}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified12__7__1__2__3__4__5__6__7, rel__app__2__1__2, DELTA, rel___dollorhead__stratified11__7__2__7, DELTA, {4, 0, 5, 6, 7, 8, 2}));
scc126->add_rule(new parallel_join(rel___dollorinter__head39__4__1__2__3__4, rel___dollorlst__split__3__1, DELTA, rel___dollorbir__sub20__3__1, FULL, {3, 5, 2, 6}));
scc126->add_rule(new parallel_acopy(rel___dollorrule80__inter__body__3__3, rel___dollorrule80__inter__body__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__faddr__2__1__2, DELTA, rel___dollorhead__stratified54__3__3__1, DELTA, {2, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule62__inter__body2__2__1__2, rel__list__of__1__0, DELTA, rel__store__2__2, DELTA, {1, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule48__inter__body2__2__1__2, rel__ret__2__1, DELTA, rel__store__2__1, DELTA, {4, 2}));
scc126->add_rule(new parallel_acopy(rel__do__var__prop__all__3__3, rel__do__var__prop__all__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule82__inter__body1__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel___dollorrule82__inter__body__4__2, DELTA, {4, 2, 5, 6}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel___dollorrule53__inter__body2__1__1, DELTA, rel___dollorrule53__inter__body1__4__3, FULL, {5, 3, 4}));
scc126->add_rule(new parallel_copy(rel__store__flow__2__1__2, rel___dollorhead__stratified56__2__1__2, DELTA, {0, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule53__inter__body1__4__1__2__3__4, rel__ret__2__2, FULL, rel__if__k__4__0, DELTA, {5, 6, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorinter__head16__7__1__2__3__4__5__6__7, rel___dollorrule55__inter__body__1__1, DELTA, rel___dollorrule55__inter__body3__8__6, DELTA, {3, 4, 5, 6, 7, 8, 9}));
scc126->add_rule(new parallel_acopy(rel___dollorhir__sub2__3__1, rel___dollorhir__sub2__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified53__3__1__2__3, rel___dollornil__1__1, DELTA, rel___dollorrule55__inter__body6__3__2, FULL, {3, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head30__7__1__2__3__4__5__6__7, rel___dollorrule78__inter__body7__2__2, FULL, rel___dollorrule78__inter__body6__7__4, DELTA, {4, 2, 5, 7, 6, 8, 9}));
scc126->add_rule(new parallel_join(rel___dollorinter__head65__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorinter__head64__3__2, DELTA, {1, 3, 4}));
scc126->add_rule(new parallel_join(rel___dollorinter__head13__5__1__2__3__4__5, rel___dollorrule48__inter__body1__1__1, FULL, rel___dollorrule48__inter__body3__5__5, DELTA, {3, 4, 5, 6, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule47__inter__body4__6__1__2__3__4__5__6, rel__ret__2__2, DELTA, rel__appk__5__0, FULL, {4, 6, 3, 5, 7, 2}));
scc126->add_rule(new parallel_join(rel___dollorinter__head44__2__1__2, rel__length__input__1__1, DELTA, rel___dollorlst__2__0, DELTA, {3, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified25__3__1__2__3, rel__addr__1__1, FULL, rel___dollorrule2__inter__body__2__1, DELTA, {0, 3, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head22__6__1__2__3__4__5__6, rel__tick__2__1, DELTA, rel___dollorbir__sub8__6__1, FULL, {7, 4, 2, 6, 5, 8}));
scc126->add_rule(new parallel_join(rel___dollorrule59__inter__body1__3__1__2__3, rel___dollorlst__2__1__2, DELTA, rel___dollorinter__head__4__1__2, FULL, {2, 4, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule32__inter__body1__2__1__2, rel__do__free__let__rhs__2__2, DELTA, rel___dollorlst__2__0, DELTA, {2, 3}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified56__2__1__2, rel__faddr__2__1__2, FULL, rel___dollorrule75__inter__body2__3__1__2, DELTA, {4, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule9__inter__body2__4__1, rel___dollorrule9__inter__body2__4__1__2__3__4, DELTA, {0, 4, 1, 2, 3}));
scc126->add_rule(new parallel_copy(rel___dollorhir__sub__3__1__2__3, rel___dollorinter__head33__6__1__2__3__4__5__6, DELTA, {3, 5, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule53__inter__body__2__1__2, rel__bool__1__0, DELTA, rel__store__2__2, FULL, {1, 3}));
scc126->add_rule(new parallel_join(rel__split__at__3__1__2__3, rel___dollornil__1__1, DELTA, rel___dollorinter__head42__3__3, FULL, {4, 1, 3}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel___dollorrule52__inter__body1__1__1, DELTA, rel___dollorrule52__inter__body2__4__4, FULL, {4, 3, 5}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__if__k__4__1__2__3__4, FULL, rel___dollorinter__head15__5__3__5__2__4, DELTA, {6, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body4__7__1__2__3__4__5__6__7, rel__ret__2__2, DELTA, rel__letk__6__0, FULL, {2, 3, 4, 7, 5, 8, 6}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body4__7__1__2__3__4__5__6__7, rel__ret__2__2, DELTA, rel__letk__6__0, DELTA, {2, 3, 4, 7, 5, 8, 6}));
scc126->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified55__3__1__2__3, DELTA, {1, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule34__inter__body1__4__1__2__3__4, rel__do__free__let__lhs__3__2, FULL, rel___dollorrule34__inter__body__3__3, DELTA, {2, 3, 5, 6}));
scc126->add_rule(new parallel_join(rel___dollorinter__head22__6__1__2__3__4__5__6, rel__tick__2__1, FULL, rel___dollorbir__sub8__6__1, DELTA, {7, 4, 2, 6, 5, 8}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified__3__1__2__3, rel__addr__1__1, FULL, rel___dollorrule59__inter__body1__3__3, DELTA, {4, 1, 3}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified28__5__1__2__3__4__5, rel___dollornil__1__1, DELTA, rel___dollorinter__head21__5__4, DELTA, {3, 4, 5, 6, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule76__inter__body5__5__1, rel___dollorrule76__inter__body5__5__1__2__3__4__5, DELTA, {0, 5, 1, 2, 3, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule23__inter__body__3__1__2__3, rel___dollornil__1__0, DELTA, rel__do__free__lam__3__2, FULL, {4, 3, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified22__2__1__2, rel__faddr__2__1__2, DELTA, rel___dollorrule78__inter__body__3__3__1, FULL, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule60__inter__body__3__1__2__3, rel__list__of__1__1, DELTA, rel___dollorinter__head66__3__1, FULL, {1, 3, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule47__inter__body__3__1__2__3, rel___dollorlst__append__input__2__0, DELTA, rel___dollorlst__append__2__1, FULL, {2, 1, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule9__inter__body__4__1__2__3__4, rel__app__2__1__2, DELTA, rel___dollorhead__stratified42__4__4__2, DELTA, {2, 4, 1, 5}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified46__6__1__2__3__4__5__6, rel__kaddr__1__1, DELTA, rel___dollorrule76__inter__body5__5__1, FULL, {0, 3, 6, 4, 5, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified43__4__1__2__3__4, rel__fixedparam__1__1, FULL, rel___dollorrule9__inter__body__4__3, DELTA, {4, 5, 1, 3}));
scc126->add_rule(new parallel_acopy(rel___dollorrule7__inter__body__7__4, rel___dollorrule7__inter__body__7__1__2__3__4__5__6__7, DELTA, {3, 7, 0, 1, 2, 4, 5, 6}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified67__2__2, rel___dollorhead__stratified67__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule45__inter__body1__5__1__2__3__4__5, rel___dollorlst__2__0, DELTA, rel___dollorrule45__inter__body__4__4, FULL, {4, 2, 1, 5, 6}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified44__6__1__2__3__4__5__6, rel___dollornil__1__1, DELTA, rel___dollorinter__head35__6__6, FULL, {3, 4, 5, 6, 7, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified2__3__1__2__3, rel__bool__1__1, DELTA, rel___dollorrule67__inter__body1__3__3, FULL, {4, 1, 3}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified21__3__1__2__3, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified20__4__3__4, FULL, {4, 5, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule75__inter__body4__4__1__2__3__4, rel__clo__2__1, DELTA, rel___dollorrule75__inter__body3__3__2, DELTA, {4, 1, 5, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule47__inter__body7__6__1__2__3__4__5__6, rel___dollorlst__2__0, FULL, rel___dollorrule47__inter__body6__5__1, DELTA, {5, 2, 4, 1, 6, 7}));
scc126->add_rule(new parallel_acopy(rel___dollorrule23__inter__body__3__3, rel___dollorrule23__inter__body__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc126->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorinter__head51__4__1__2__3__4, DELTA, {2, 3}));
scc126->add_rule(new parallel_join(rel__do__free__lam__3__1__2__3, rel__fixedparam__1__0, DELTA, rel___dollorrule21__inter__body__3__1, DELTA, {3, 1, 4}));
scc126->add_rule(new parallel_join(rel__free__2__1__2, rel__appl__2__1, FULL, rel__free__2__2, DELTA, {4, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule71__inter__body6__2__1__2, rel___dollorrule71__inter__body5__2__2, DELTA, rel___dollorrule71__inter__body2__2__2, FULL, {4, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorbir__sub15__4__3__4, rel___dollorbir__sub15__4__1__2__3__4, DELTA, {2, 3, 4, 0, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule75__inter__body1__3__1__2__3, rel___dollorhir__sub__3__1__2__3, DELTA, rel___dollorrule75__inter__body__4__2__4__1, DELTA, {0, 5, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule74__inter__body2__2__1__2, rel__vararg__1__1, DELTA, rel___dollorrule74__inter__body__2__2, FULL, {1, 3}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified42__4__4__2, rel___dollorhead__stratified42__4__1__2__3__4, DELTA, {3, 1, 4, 0, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule55__inter__body8__3__3, rel___dollorrule55__inter__body8__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub10__3__1__2__3, rel__split__at__input__2__1__2, DELTA, rel__breaks__into__input__3__1__3, FULL, {2, 3, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule78__inter__body3__4__1__2__3__4, rel__clo__2__1, FULL, rel__lambda__2__0, DELTA, {1, 4, 3, 2}));
scc126->add_rule(new parallel_acopy(rel__if__k__4__0, rel__if__k__4__1__2__3__4, DELTA, {4, 0, 1, 2, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body4__7__1__2__3__4__5__6__7, rel__ret__2__2, FULL, rel__letk__6__0, DELTA, {2, 3, 4, 7, 5, 8, 6}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified23__3__1__2__3, rel__saddr__1__1, DELTA, rel___dollorrule57__inter__body__3__3, FULL, {4, 3, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule81__inter__body1__5__4, rel___dollorrule81__inter__body1__5__1__2__3__4__5, DELTA, {3, 5, 0, 1, 2, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorrule55__inter__body5__8__2, rel___dollorrule55__inter__body5__8__1__2__3__4__5__6__7__8, DELTA, {1, 8, 0, 2, 3, 4, 5, 6, 7}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__halt__0__, DELTA, rel___dollorinter__head19__2__, FULL, {3, 2, 0}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified6__4__1__2__3__4, rel___dollornil__1__1, DELTA, rel___dollorrule61__inter__body__4__4, DELTA, {5, 4, 3, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified17__2__1__2, rel__bool__1__1, DELTA, rel___dollorrule66__inter__body__2__2, DELTA, {3, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule62__inter__body1__4__1__2__3__4, rel___dollorlst__2__0, FULL, rel__do__store__addr__union__3__2, DELTA, {5, 2, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorlst__append__input__2__1__2, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified64__3__2__3, DELTA, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorinter__head50__6__1__2__3__4__5__6, rel___dollorlst__append__2__1, FULL, rel___dollorrule46__inter__body6__6__4, DELTA, {4, 5, 6, 2, 7, 8}));
scc126->add_rule(new parallel_join(rel___dollorrule78__inter__body4__4__1__2__3__4, rel__fixedparam__1__0, DELTA, rel___dollorrule78__inter__body3__4__3, FULL, {1, 3, 4, 5}));
scc126->add_rule(new parallel_join(rel___dollorinter__head70__5__1__2__3__4__5, rel__ret__2__2, DELTA, rel__applak__4__0, DELTA, {4, 2, 5, 3, 6}));
scc126->add_rule(new parallel_acopy(rel___dollorrule67__inter__body9__2__2, rel___dollorrule67__inter__body9__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head44__2__1, rel___dollorinter__head44__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule56__inter__body__6__1__2__3__4__5__6, rel__lambda__2__1__2, FULL, rel___dollorinter__head28__7__7__1, DELTA, {5, 6, 7, 2, 8, 4}));
scc126->add_rule(new parallel_acopy(rel__clo__2__0, rel__clo__2__1__2, DELTA, {2, 0, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified50__3__1__2__3, rel__list__of__1__1, DELTA, rel___dollorrule73__inter__body__3__1, FULL, {3, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule46__inter__body5__7__1__2__3__4__5__6__7, rel___dollorlst__2__0__1, DELTA, rel___dollorrule46__inter__body4__8__1__8, FULL, {6, 2, 5, 4, 7, 8, 9}));
scc126->add_rule(new parallel_join(rel___dollorrule46__inter__body5__7__1__2__3__4__5__6__7, rel___dollorlst__2__0__1, DELTA, rel___dollorrule46__inter__body4__8__1__8, DELTA, {6, 2, 5, 4, 7, 8, 9}));
scc126->add_rule(new parallel_join(rel___dollorinter__head65__3__1__2__3, rel__addr__1__1, FULL, rel___dollorinter__head64__3__2, DELTA, {1, 3, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule79__inter__body__3__1__2__3, rel__do__fixed__prop__all__3__1__2__3, DELTA, rel___dollorinter__head37__5__3__1__2, DELTA, {0, 5, 6}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__applfk__4__1__2__3__4, FULL, rel___dollorinter__head70__5__4__2__3__5, DELTA, {6, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule77__inter__body1__5__1__2__3__4__5, rel__faddr__2__1__2, FULL, rel___dollorrule77__inter__body__6__2__1, DELTA, {2, 4, 5, 6, 7}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified55__3__1__2__3, rel___dollornil__1__1, FULL, rel___dollorrule55__inter__body8__3__3, DELTA, {3, 4, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head47__9__3__5__6__7__4__2__8__1, rel___dollorinter__head47__9__1__2__3__4__5__6__7__8__9, DELTA, {2, 4, 5, 6, 3, 1, 7, 0, 9, 8}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified34__3__2__1, rel___dollorhead__stratified34__3__1__2__3, DELTA, {1, 0, 3, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule54__inter__body__1__1, rel__saddr__1__0, DELTA, rel__ret__2__1, DELTA, {3}));
scc126->add_rule(new parallel_copy(rel__eval__3__1__2__3, rel___dollorhead__stratified30__4__1__2__3__4, DELTA, {0, 2, 3}));
scc126->add_rule(new parallel_join(rel___dollorhead__splice4__6__1__2__3__4__5__6, rel__store__2__1, FULL, rel___dollorrule47__inter__body7__6__4, DELTA, {5, 8, 4, 6, 2, 7}));
scc126->add_rule(new parallel_join(rel___dollorinter__head56__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorinter__head55__2__1, DELTA, {1, 0, 3}));
scc126->add_rule(new parallel_acopy(rel___dollorrule71__inter__body3__3__3, rel___dollorrule71__inter__body3__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__define__prim__2__1__2, DELTA, rel___dollorhead__stratified65__3__1__3, DELTA, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule8__inter__body__2__1__2, rel___dollornil__1__1, DELTA, rel___dollorinter__head24__2__2, FULL, {3, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule59__inter__body3__2__1__2, rel___dollorrule59__inter__body2__1__1, FULL, rel___dollorlst__2__2, DELTA, {2, 3}));
scc126->add_rule(new parallel_join(rel___dollorinter__head70__5__1__2__3__4__5, rel__ret__2__2, DELTA, rel__applak__4__0, FULL, {4, 2, 5, 3, 6}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub8__6__1__2__3__4__5__6, rel__do__tick__2__1__2, DELTA, rel___dollorinter__head30__7__3__1, FULL, {2, 4, 7, 6, 5, 8}));
scc126->add_rule(new parallel_acopy(rel___dollorlst__2__0__1, rel___dollorlst__2__1__2, DELTA, {2, 0, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule67__inter__body7__3__1__2__3, rel__fixedarg__1__0, FULL, rel___dollorrule67__inter__body5__3__1, DELTA, {1, 3, 4}));
scc126->add_rule(new parallel_copy(rel__app__2__1__2, rel___dollorhead__stratified14__5__1__2__3__4__5, DELTA, {1, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body1__9__1__2__3__4__5__6__7__8__9, rel___dollorlst__append__input__2__1, DELTA, rel___dollorbir__sub1__8__1, FULL, {10, 8, 4, 5, 6, 7, 9, 1, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body1__9__1__2__3__4__5__6__7__8__9, rel___dollorlst__append__input__2__1, DELTA, rel___dollorbir__sub1__8__1, DELTA, {10, 8, 4, 5, 6, 7, 9, 1, 2}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub20__3__1__2__3, rel___dollorlst__split__input__1__1, FULL, rel___dollorinter__head52__3__3, DELTA, {1, 3, 4}));
scc126->add_rule(new parallel_join(rel__free__2__1__2, rel__do__free__app__2__2, DELTA, rel___dollorrule29__inter__body__2__1, FULL, {4, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule48__inter__body__5__5, rel___dollorrule48__inter__body__5__1__2__3__4__5, DELTA, {4, 5, 0, 1, 2, 3}));
scc126->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorinter__head61__3__1__2__3, DELTA, {2, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule76__inter__body__5__4, rel___dollorrule76__inter__body__5__1__2__3__4__5, DELTA, {3, 5, 0, 1, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body12__9__1__2__3__4__5__6__7__8__9, rel___dollorrule55__inter__body11__4__1__4, DELTA, rel___dollorbir__sub2__9__1__2, FULL, {12, 10, 7, 9, 8, 6, 3, 4, 11}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body12__9__1__2__3__4__5__6__7__8__9, rel___dollorrule55__inter__body11__4__1__4, DELTA, rel___dollorbir__sub2__9__1__2, DELTA, {12, 10, 7, 9, 8, 6, 3, 4, 11}));
scc126->add_rule(new parallel_acopy(rel___dollorrule66__inter__body__2__2, rel___dollorrule66__inter__body__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule76__inter__body__5__1__2__3__4__5, rel__fixedarg__1__0, DELTA, rel__apply__5__4, FULL, {3, 1, 4, 5, 6}));
scc126->add_rule(new parallel_copy(rel__store__flow__2__1__2, rel___dollorhead__stratified60__2__1__2, DELTA, {1, 0}));
scc126->add_rule(new parallel_acopy(rel___dollorhir__sub1__3__1, rel___dollorhir__sub1__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__define__3__1__2__3, FULL, rel___dollorhead__stratified15__4__1__3__4, DELTA, {5, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body8__3__1__2__3, rel___dollorbir__sub2__9__1__2__3__4__5__6__7__8__9, DELTA, rel___dollorinter__head49__10__7__9__6__3__5__4__2__8__1, FULL, {0, 1, 11}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body8__3__1__2__3, rel___dollorbir__sub2__9__1__2__3__4__5__6__7__8__9, DELTA, rel___dollorinter__head49__10__7__9__6__3__5__4__2__8__1, DELTA, {0, 1, 11}));
scc126->add_rule(new parallel_join(rel___dollorrule61__inter__body5__3__1__2__3, rel__list__of__1__0, DELTA, rel___dollorrule61__inter__body4__3__3, FULL, {1, 3, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule36__inter__body2__2__1__2, rel__fixedparam__1__0, FULL, rel___dollorrule36__inter__body__2__1, DELTA, {1, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule67__inter__body1__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorrule67__inter__body__3__1, FULL, {4, 1, 3}));
scc126->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head71__3__1__2__3, DELTA, {2}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified2__3__1__2__3, rel__bool__1__1, FULL, rel___dollorrule67__inter__body1__3__3, DELTA, {4, 1, 3}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head2__3__3__1, rel___dollorinter__head2__3__1__2__3, DELTA, {2, 0, 3, 1}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule46__inter__body3__1__1, rel___dollornil__1__1, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == n2d(0);
        if (! compatible) return state;

        head_tuple[0] = data[1];
        return std::make_tuple(data, output + 1);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 1;
      return tuples_count;
    }));
scc126->add_rule(new parallel_acopy(rel___dollorbir__sub6__7__1, rel___dollorbir__sub6__7__1__2__3__4__5__6__7, DELTA, {0, 7, 1, 2, 3, 4, 5, 6}));
scc126->add_rule(new parallel_acopy(rel__define__prim__2__1, rel__define__prim__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule47__inter__body7__6__4, rel___dollorrule47__inter__body7__6__1__2__3__4__5__6, DELTA, {3, 6, 0, 1, 2, 4, 5}));
scc126->add_rule(new parallel_acopy(rel___dollorrule5__inter__body__2__2, rel___dollorrule5__inter__body__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_acopy(rel___dollorhir__sub__3__1, rel___dollorhir__sub__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc126->add_rule(new parallel_join(rel___dollorinter__head15__5__1__2__3__4__5, rel__if__3__0, FULL, rel__eval__3__1, DELTA, {1, 5, 2, 6, 3}));
scc126->add_rule(new parallel_acopy(rel___dollorrule9__inter__body__4__3, rel___dollorrule9__inter__body__4__1__2__3__4, DELTA, {2, 4, 0, 1, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule41__inter__body__3__1__2__3, rel__clo__2__1__2, FULL, rel___dollorinter__head2__3__3__1, DELTA, {4, 0, 2}));
scc126->add_rule(new parallel_copy_generate(rel___dollorinter__head35__6__1__2__3__4__5__6, rel___dollorrule42__inter__body__5__, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {n2d(0)};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = data[1];
head_tuple[1] = data[2];
head_tuple[2] = data[3];
head_tuple[3] = data[4];
head_tuple[4] = data[5];
head_tuple[5] = res_0;
        return std::make_tuple(data, output + 6);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 6;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorrule82__inter__body__4__1__2__3__4, rel___dollornil__1__0, FULL, rel__do__var__prop__all__h__4__3, DELTA, {3, 4, 5, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body10__3__1__2__3, rel___dollorlst__append__2__1, FULL, rel___dollorlst__append__input__2__0, DELTA, {3, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule67__inter__body4__2__1__2, rel__store__2__1, DELTA, rel___dollorrule67__inter__body3__2__2, FULL, {4, 2}));
scc126->add_rule(new parallel_copy(rel__store__flow__2__1__2, rel___dollorhead__stratified32__6__1__2__3__4__5__6, DELTA, {2, 4}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__halt__0__, FULL, rel___dollorinter__head19__2__, DELTA, {3, 2, 0}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub13__3__1__2__3, rel__split__at__input__2__1__2, FULL, rel___dollorinter__head57__4__4__1, DELTA, {2, 5, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorrule59__inter__body5__2__2, rel___dollorrule59__inter__body5__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_join(rel___dollorinter__head50__6__1__2__3__4__5__6, rel___dollorlst__append__2__1, DELTA, rel___dollorrule46__inter__body6__6__4, FULL, {4, 5, 6, 2, 7, 8}));
scc126->add_rule(new parallel_join(rel___dollorinter__head56__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorinter__head55__2__1, FULL, {1, 0, 3}));
scc126->add_rule(new parallel_acopy(rel___dollorrule36__inter__body2__2__1, rel___dollorrule36__inter__body2__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule47__inter__body5__6__1__2__3__4__5__6, rel___dollornil__1__0, FULL, rel___dollorrule47__inter__body4__6__4, DELTA, {3, 4, 5, 6, 1, 7}));
scc126->add_rule(new parallel_copy(rel___dollorlst__append__input__2__1__2, rel___dollorhead__splice3__5__1__2__3__4__5, DELTA, {3, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule76__inter__body1__6__1__2__3__4__5__6, rel__clo__2__0, DELTA, rel___dollorrule76__inter__body__5__4, FULL, {4, 5, 6, 1, 7, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule76__inter__body4__5__1__2__3__4__5, rel__faddr__2__1__2, FULL, rel___dollorrule76__inter__body3__6__3__2, DELTA, {4, 5, 6, 2, 7}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__splice2__8__5__8, rel___dollorhead__splice2__8__1__2__3__4__5__6__7__8, DELTA, {4, 7, 8, 0, 1, 2, 3, 5, 6}));
scc126->add_rule(new parallel_acopy(rel__do__fixed__prop__all__3__2, rel__do__fixed__prop__all__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule82__inter__body__4__2, rel___dollorrule82__inter__body__4__1__2__3__4, DELTA, {1, 4, 0, 2, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule74__inter__body__2__1__2, rel__list__of__1__0, FULL, rel__store__2__2, DELTA, {0, 3}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__appk__5__1__2__3__4__5, FULL, rel___dollorhead__stratified44__6__3__6__1__2__4, DELTA, {7, 3, 5}));
scc126->add_rule(new parallel_join(rel__do__free__lam__3__1__2__3, rel__fixedparam__1__0, DELTA, rel___dollorrule21__inter__body__3__1, FULL, {3, 1, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body2__8__1__2__3__4__5__6__7__8, rel___dollorlst__2__0__1, DELTA, rel___dollorrule55__inter__body1__9__9__3, FULL, {4, 5, 7, 8, 9, 10, 2, 6}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body2__8__1__2__3__4__5__6__7__8, rel___dollorlst__2__0__1, DELTA, rel___dollorrule55__inter__body1__9__9__3, DELTA, {4, 5, 7, 8, 9, 10, 2, 6}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head28__7__7__1, rel___dollorinter__head28__7__1__2__3__4__5__6__7, DELTA, {6, 0, 7, 1, 2, 3, 4, 5}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__applfk__4__1__2__3__4, DELTA, rel___dollorinter__head70__5__4__2__3__5, DELTA, {6, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule71__inter__body4__3__1__2__3, rel__fixedarg__1__0, DELTA, rel___dollorrule71__inter__body3__3__3, FULL, {1, 3, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule78__inter__body2__3__1__2__3, rel___dollorhir__sub3__3__1__2__3, DELTA, rel___dollorrule78__inter__body1__4__2__4__1, DELTA, {0, 5, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified36__7__1__2__3__4__5__6__7, rel___dollornil__1__1, FULL, rel___dollorinter__head27__7__6, DELTA, {3, 4, 5, 6, 7, 8, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule71__inter__body2__2__1__2, rel___dollorrule71__inter__body__1__1, DELTA, rel___dollorlst__2__2, FULL, {2, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule59__inter__body9__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel___dollorrule59__inter__body8__3__3, FULL, {1, 2, 4, 5}));
scc126->add_rule(new parallel_acopy(rel___dollorrule60__inter__body__3__3, rel___dollorrule60__inter__body__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc126->add_rule(new parallel_copy(rel__faddr__2__1__2, rel___dollorinter__head53__3__1__2__3, DELTA, {2, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule7__inter__body5__7__6, rel___dollorrule7__inter__body5__7__1__2__3__4__5__6__7, DELTA, {5, 7, 0, 1, 2, 3, 4, 6}));
scc126->add_rule(new parallel_acopy(rel___dollorrule59__inter__body6__2__1, rel___dollorrule59__inter__body6__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule60__inter__body__3__1__2__3, rel__list__of__1__1, FULL, rel___dollorinter__head66__3__1, DELTA, {1, 3, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule56__inter__body1__6__1__2__3__4__5__6, rel__define__3__0, FULL, rel__apply__5__3, DELTA, {3, 7, 6, 5, 8, 2}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub11__4__1__2__3__4, rel___dollorbir__sub10__3__1, FULL, rel__split__at__3__1, DELTA, {2, 3, 5, 6}));
scc126->add_rule(new parallel_acopy(rel___dollorrule48__inter__body2__2__2, rel___dollorrule48__inter__body2__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule78__inter__body__3__1__2__3, rel__faddr__2__1__2, DELTA, rel___dollorinter__head10__3__1__2, DELTA, {1, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorlst__append__input__2__1__2, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified53__3__2__3, FULL, {4, 2}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__store__2__1, FULL, rel__store__flow__2__1, DELTA, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule59__inter__body__2__1__2, rel__ret__2__1__2, DELTA, rel___dollorhead__stratified__3__2__1, DELTA, {4, 0}));
scc126->add_rule(new parallel_join(rel___dollorinter__head37__5__1__2__3__4__5, rel___dollorlst__2__0, DELTA, rel___dollorrule79__inter__body1__4__4, FULL, {6, 2, 4, 5, 1}));
scc126->add_rule(new parallel_copy(rel___dollorhir__sub1__3__1__2__3, rel___dollorinter__head40__6__1__2__3__4__5__6, DELTA, {3, 5, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule67__inter__body5__3__1__2__3, rel__define__prim__2__0, FULL, rel__apply__5__3, DELTA, {6, 3, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified28__5__1__2__3__4__5, rel___dollornil__1__1, DELTA, rel___dollorinter__head21__5__4, FULL, {3, 4, 5, 6, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body11__4__1__2__3__4, rel___dollorlst__2__0, FULL, rel___dollorrule55__inter__body10__3__3, DELTA, {4, 2, 5, 1}));
scc126->add_rule(new parallel_join(rel__split__at__3__1__2__3, rel___dollornil__1__1, FULL, rel___dollorinter__head42__3__3, DELTA, {4, 1, 3}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule52__inter__body1__1__1, rel__bool__1__1, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == s2d("t");
        if (! compatible) return state;

        head_tuple[0] = data[1];
        return std::make_tuple(data, output + 1);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 1;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorrule66__inter__body5__3__1__2__3, rel__store__2__1, FULL, rel___dollorrule66__inter__body4__3__3, DELTA, {2, 4, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule77__inter__body5__3__1__2__3, rel__faddr__2__1__2, FULL, rel___dollorinter__head41__3__1__2, DELTA, {1, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule69__inter__body1__3__1__2__3, rel__fixedarg__1__1, DELTA, rel___dollorrule69__inter__body__3__2, DELTA, {3, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule77__inter__body__6__1__2__3__4__5__6, rel___dollorhir__sub2__3__1__2__3, FULL, rel___dollorinter__head23__6__3__6__2, DELTA, {5, 2, 0, 6, 7, 1}));
scc126->add_rule(new parallel_acopy(rel__define__3__1, rel__define__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc126->add_rule(new parallel_copy(rel__faddr__2__1__2, rel___dollorhead__stratified49__3__1__2__3, DELTA, {1, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule76__inter__body__5__1__2__3__4__5, rel__fixedarg__1__0, FULL, rel__apply__5__4, DELTA, {3, 1, 4, 5, 6}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified46__6__1__2__3__4__5__6, rel__kaddr__1__1, FULL, rel___dollorrule76__inter__body5__5__1, DELTA, {0, 3, 6, 4, 5, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule75__inter__body1__3__1, rel___dollorrule75__inter__body1__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule60__inter__body7__3__1__2__3, rel___dollorrule60__inter__body4__1__1, DELTA, rel__apply__5__3, FULL, {6, 2, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule41__inter__body__3__1__2__3, rel__clo__2__1__2, DELTA, rel___dollorinter__head2__3__3__1, FULL, {4, 0, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule69__inter__body1__3__1, rel___dollorrule69__inter__body1__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc126->add_rule(new parallel_join(rel__free__2__1__2, rel__do__free__app__2__2, FULL, rel___dollorrule29__inter__body__2__1, DELTA, {4, 2}));
scc126->add_rule(new parallel_copy(rel__faddr__2__1__2, rel___dollorinter__head10__3__1__2__3, DELTA, {0, 1}));
scc126->add_rule(new parallel_copy(rel__quote__1__1, rel___dollorhead__stratified8__7__1__2__3__4__5__6__7, DELTA, {3}));
scc126->add_rule(new parallel_acopy(rel___dollorrule62__inter__body1__4__4, rel___dollorrule62__inter__body1__4__1__2__3__4, DELTA, {3, 4, 0, 1, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule47__inter__body1__7__1__2__3__4__5__6__7, rel___dollorrule47__inter__body__3__2, FULL, rel___dollorbir__sub9__6__1, DELTA, {8, 3, 2, 7, 6, 9, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule61__inter__body__4__1__2__3__4, rel__addr__1__1, FULL, rel___dollorinter__head3__4__3, DELTA, {1, 4, 3, 5}));
scc126->add_rule(new parallel_copy(rel__do__free__app__2__1__2, rel__app__2__1__2, DELTA, {2, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule77__inter__body4__7__1__2__3__4__5__6__7, rel___dollorrule77__inter__body3__4__1, DELTA, rel__apply__5__3, FULL, {6, 7, 2, 3, 8, 9, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule77__inter__body4__7__1__2__3__4__5__6__7, rel___dollorrule77__inter__body3__4__1, DELTA, rel__apply__5__3, DELTA, {6, 7, 2, 3, 8, 9, 4}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__define__3__1__2__3, DELTA, rel___dollorhead__stratified15__4__1__3__4, DELTA, {5, 3}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified26__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorrule1__inter__body__2__1, FULL, {0, 3, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule67__inter__body7__3__3, rel___dollorrule67__inter__body7__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub4__6__1__2__3__4__5__6, rel__do__tick__2__1__2, DELTA, rel___dollorinter__head36__7__3__1, DELTA, {2, 8, 4, 6, 7, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule67__inter__body6__2__1__2, rel__list__of__1__0, DELTA, rel___dollorrule67__inter__body4__2__2, DELTA, {3, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head1__3__3, rel___dollorinter__head1__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc126->add_rule(new parallel_acopy(rel__eval__3__1, rel__eval__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc126->add_rule(new parallel_copy(rel__applfk__4__1__2__3__4, rel___dollorinter__head70__5__1__2__3__4__5, DELTA, {3, 1, 2, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorrule46__inter__body4__8__1__8, rel___dollorrule46__inter__body4__8__1__2__3__4__5__6__7__8, DELTA, {0, 7, 8, 1, 2, 3, 4, 5, 6}));
scc126->add_rule(new parallel_copy(rel__do__fixed__prop__all__3__1__2__3, rel___dollorinter__head37__5__1__2__3__4__5, DELTA, {2, 0, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head72__6__1__2__3__4__5__6, rel___dollorlst__2__0, FULL, rel___dollorrule81__inter__body1__5__4, DELTA, {1, 4, 5, 6, 0, 7}));
scc126->add_rule(new parallel_join(rel___dollorrule9__inter__body2__4__1__2__3__4, rel___dollornil__1__1, DELTA, rel___dollorrule9__inter__body1__4__3, DELTA, {3, 4, 1, 5}));
scc126->add_rule(new parallel_join(rel___dollorinter__head46__4__1__2__3__4, rel___dollorrule54__inter__body__1__1, DELTA, rel__if__k__4__0, DELTA, {4, 2, 5, 3}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule36__inter__body__2__1__2, rel__define__3__1, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == s2d("brouhaha_main");
        if (! compatible) return state;

        head_tuple[0] = data[2];
head_tuple[1] = data[3];
        return std::make_tuple(data, output + 2);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 2;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified42__4__1__2__3__4, rel__ref__1__1, FULL, rel___dollorrule9__inter__body2__4__1, DELTA, {3, 4, 5, 1}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule66__inter__body7__1__1, rel___dollornil__1__1, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == n2d(0);
        if (! compatible) return state;

        head_tuple[0] = data[1];
        return std::make_tuple(data, output + 1);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 1;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorrule52__inter__body2__4__1__2__3__4, rel___dollorrule52__inter__body__2__1, DELTA, rel__if__k__4__0, FULL, {5, 3, 6, 2}));
scc126->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorhead__stratified46__6__1__2__3__4__5__6, DELTA, {3, 4}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified19__5__1__2__3__4__5, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified18__6__1__6, FULL, {4, 5, 6, 7, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule60__inter__body5__2__1__2, rel___dollorrule60__inter__body3__1__1, FULL, rel___dollorlst__2__2, DELTA, {3, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule59__inter__body3__2__1__2, rel___dollorrule59__inter__body2__1__1, DELTA, rel___dollorlst__2__2, DELTA, {2, 3}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__faddr__2__1__2, FULL, rel___dollorhead__stratified49__3__2__1, DELTA, {2, 4}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified68__2__1__2, rel__faddr__2__1__2, DELTA, rel___dollorrule81__inter__body__3__2__1, DELTA, {4, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule56__inter__body__6__5, rel___dollorrule56__inter__body__6__1__2__3__4__5__6, DELTA, {4, 6, 0, 1, 2, 3, 5}));
scc126->add_rule(new parallel_acopy(rel___dollorrule45__inter__body__4__4, rel___dollorrule45__inter__body__4__1__2__3__4, DELTA, {3, 4, 0, 1, 2}));
scc126->add_rule(new parallel_acopy(rel__split__at__3__1, rel__split__at__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule60__inter__body7__3__1__2__3, rel___dollorrule60__inter__body4__1__1, FULL, rel__apply__5__3, DELTA, {6, 2, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule63__inter__body__1__1, rel__non__list__value__1__1, DELTA, rel__store__2__2, FULL, {3}));
scc126->add_rule(new parallel_join(rel__do__store__addr__union__3__1__2__3, rel___dollorlst__2__1__2, DELTA, rel___dollorinter__head11__4__4__2, FULL, {5, 4, 2}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__appk__5__1__2__3__4__5, DELTA, rel___dollorinter__head50__6__2__4__3__1__5, FULL, {7, 3, 5}));
scc126->add_rule(new parallel_join(rel___dollorinter__head41__3__1__2__3, rel__free__2__2, DELTA, rel___dollorhir__sub2__3__1, FULL, {5, 2, 4}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel___dollorrule53__inter__body2__1__1, FULL, rel___dollorrule53__inter__body1__4__3, DELTA, {5, 3, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head22__6__3__1__2, rel___dollorinter__head22__6__1__2__3__4__5__6, DELTA, {2, 0, 1, 6, 3, 4, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule61__inter__body5__3__1__2__3, rel__list__of__1__0, DELTA, rel___dollorrule61__inter__body4__3__3, DELTA, {1, 3, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule45__inter__body1__5__1__2__3__4__5, rel___dollorlst__2__0, FULL, rel___dollorrule45__inter__body__4__4, DELTA, {4, 2, 1, 5, 6}));
scc126->add_rule(new parallel_copy(rel__non__list__value__1__1, rel__bool__1__1, DELTA, {1}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body1__9__1__2__3__4__5__6__7__8__9, rel___dollorlst__append__input__2__1, FULL, rel___dollorbir__sub1__8__1, DELTA, {10, 8, 4, 5, 6, 7, 9, 1, 2}));
scc126->add_rule(new parallel_copy(rel___dollorhir__sub2__3__1__2__3, rel___dollorinter__head23__6__1__2__3__4__5__6, DELTA, {2, 5, 1}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule66__inter__body1__1__1, rel__define__prim__2__1, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == s2d("null?");
        if (! compatible) return state;

        head_tuple[0] = data[1];
        return std::make_tuple(data, output + 1);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 1;
      return tuples_count;
    }));
scc126->add_rule(new parallel_copy(rel__list__of__1__1, rel___dollorhead__stratified__3__1__2__3, DELTA, {2}));
scc126->add_rule(new parallel_acopy(rel__split__at__input__2__1, rel__split__at__input__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule53__inter__body__2__1, rel___dollorrule53__inter__body__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule73__inter__body__3__1__2__3, rel__addr__1__1, FULL, rel___dollorinter__head45__3__3, DELTA, {3, 4, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule20__inter__body1__3__1__2, rel___dollorrule20__inter__body1__3__1__2__3, DELTA, {0, 1, 3, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule76__inter__body2__7__1__2__3__4__5__6__7, rel__lambda__2__0, FULL, rel___dollorrule76__inter__body1__6__4, DELTA, {4, 5, 6, 1, 2, 7, 8}));
scc126->add_rule(new parallel_join(rel___dollorrule7__inter__body6__7__1__2__3__4__5__6__7, rel___dollornil__1__1, DELTA, rel___dollorrule7__inter__body5__7__6, DELTA, {3, 4, 5, 6, 1, 7, 8}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified43__4__1__3__4, rel___dollorhead__stratified43__4__1__2__3__4, DELTA, {0, 2, 3, 4, 1}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__faddr__2__1__2, DELTA, rel___dollorhead__stratified25__3__2__1, DELTA, {2, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorrule61__inter__body4__3__3, rel___dollorrule61__inter__body4__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head72__6__1__2__3__4__5__6, rel___dollorlst__2__0, DELTA, rel___dollorrule81__inter__body1__5__4, FULL, {1, 4, 5, 6, 0, 7}));
scc126->add_rule(new parallel_acopy(rel__letk__6__0, rel__letk__6__1__2__3__4__5__6, DELTA, {6, 0, 1, 2, 3, 4, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule75__inter__body2__3__1__2__3, rel__faddr__2__1__2, DELTA, rel___dollorinter__head53__3__3__2, FULL, {4, 1, 2}));
scc126->add_rule(new parallel_copy(rel__store__flow__2__1__2, rel___dollorhead__stratified68__2__1__2, DELTA, {0, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified4__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorrule41__inter__body__3__2, FULL, {3, 1, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head19__2__, rel___dollorinter__head19__2__1__2, DELTA, {2, 0, 1}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule55__inter__body13__1__1, rel___dollornil__1__1, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == n2d(0);
        if (! compatible) return state;

        head_tuple[0] = data[1];
        return std::make_tuple(data, output + 1);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 1;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorrule60__inter__body7__3__1__2__3, rel___dollorrule60__inter__body4__1__1, DELTA, rel__apply__5__3, DELTA, {6, 2, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule7__inter__body2__7__1__2__3__4__5__6__7, rel__quote__1__1, FULL, rel___dollorrule7__inter__body1__7__7, DELTA, {3, 4, 1, 8, 5, 6, 7}));
scc126->add_rule(new parallel_acopy(rel___dollorrule74__inter__body3__4__4, rel___dollorrule74__inter__body3__4__1__2__3__4, DELTA, {3, 4, 0, 1, 2}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified2__3__1__2__3, rel__bool__1__1, DELTA, rel___dollorrule67__inter__body1__3__3, DELTA, {4, 1, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule50__inter__body__5__1__2__3__4__5, rel__ret__2__2, DELTA, rel__applfk__4__0, FULL, {5, 3, 4, 6, 2}));
scc126->add_rule(new parallel_copy(rel__kaddr__1__1, rel___dollorinter__head23__6__1__2__3__4__5__6, DELTA, {2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule50__inter__body__5__3, rel___dollorrule50__inter__body__5__1__2__3__4__5, DELTA, {2, 5, 0, 1, 3, 4}));
scc126->add_rule(new parallel_join(rel___dollorinter__head__4__1__2__3__4, rel___dollorrule59__inter__body6__2__1, FULL, rel___dollorrule59__inter__body9__4__2, DELTA, {4, 2, 5, 6}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified49__3__2__1, rel___dollorhead__stratified49__3__1__2__3, DELTA, {1, 0, 3, 2}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub13__3__1__2__3, rel__split__at__input__2__1__2, DELTA, rel___dollorinter__head57__4__4__1, FULL, {2, 5, 4}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified60__2__1__2, rel__faddr__2__1__2, DELTA, rel___dollorrule76__inter__body6__3__3__1, FULL, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule20__inter__body1__3__1__2__3, rel__varparam__1__0, FULL, rel___dollorrule20__inter__body__3__2, DELTA, {3, 1, 4}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule35__inter__body__1__1, rel___dollornil__1__1, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == n2d(0);
        if (! compatible) return state;

        head_tuple[0] = data[1];
        return std::make_tuple(data, output + 1);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 1;
      return tuples_count;
    }));
scc126->add_rule(new parallel_copy(rel__ret__2__1__2, rel___dollorinter__head6__3__1__2__3, DELTA, {2, 0}));
scc126->add_rule(new parallel_acopy(rel__bool__1__0, rel__bool__1__1, DELTA, {1, 0}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule48__inter__body__5__1__2__3__4__5, rel__appk__5__2__3, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == data[1];
        if (! compatible) return state;

        head_tuple[0] = data[4];
head_tuple[1] = data[3];
head_tuple[2] = data[5];
head_tuple[3] = data[0];
head_tuple[4] = data[2];
        return std::make_tuple(data, output + 5);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 5;
      return tuples_count;
    }));
scc126->add_rule(new parallel_acopy(rel___dollorrule75__inter__body3__3__2, rel___dollorrule75__inter__body3__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub19__3__1__2__3, rel___dollorlst__append__input__2__1__2, DELTA, rel___dollorinter__head62__4__1__3, DELTA, {2, 5, 4}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub4__6__1__2__3__4__5__6, rel__do__tick__2__1__2, FULL, rel___dollorinter__head36__7__3__1, DELTA, {2, 8, 4, 6, 7, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule69__inter__body1__3__1__2__3, rel__fixedarg__1__1, DELTA, rel___dollorrule69__inter__body__3__2, FULL, {3, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule78__inter__body1__4__1__2__3__4, rel__do__var__prop__all__3__1__2__3, DELTA, rel___dollorinter__head22__6__3__1__2, FULL, {0, 5, 6, 7}));
scc126->add_rule(new parallel_join(rel___dollorrule47__inter__body7__6__1__2__3__4__5__6, rel___dollorlst__2__0, DELTA, rel___dollorrule47__inter__body6__5__1, FULL, {5, 2, 4, 1, 6, 7}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified13__6__1__2__3__4__5__6, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified12__7__7__4, DELTA, {4, 5, 6, 7, 8, 2}));
scc126->add_rule(new parallel_join(rel__apply__5__1__2__3__4__5, rel__vararg__1__1, DELTA, rel___dollorinter__head38__5__5, DELTA, {4, 3, 5, 1, 6}));
scc126->add_rule(new parallel_join(rel__ret__2__1__2, rel__ret__2__2, DELTA, rel___dollorrule51__inter__body__2__1, FULL, {2, 4}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__faddr__2__1__2, DELTA, rel___dollorhead__stratified25__3__2__1, FULL, {2, 4}));
scc126->add_rule(new parallel_copy(rel__clo__2__1__2, rel___dollorinter__head2__3__1__2__3, DELTA, {2, 0}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__letk__6__1__2__3__4__5__6, FULL, rel___dollorhead__stratified37__7__5__7__6__3__2__4, DELTA, {8, 4, 6}));
scc126->add_rule(new parallel_join(rel___dollorinter__head59__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorinter__head58__3__2, FULL, {3, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head62__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel___dollorlst__append__input__2__1, FULL, {2, 3, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head54__3__1__2__3, rel___dollorrule37__inter__body__1__1, FULL, rel__do__tick__2__1, DELTA, {2, 3, 0}));
scc126->add_rule(new parallel_join(rel__free__2__1__2, rel___dollorrule32__inter__body__2__2, DELTA, rel___dollorrule32__inter__body1__2__2, DELTA, {2, 4}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__letk__6__1__2__3__4__5__6, DELTA, rel___dollorhead__stratified37__7__5__7__6__3__2__4, FULL, {8, 4, 6}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__letk__6__1__2__3__4__5__6, DELTA, rel___dollorhead__stratified37__7__5__7__6__3__2__4, DELTA, {8, 4, 6}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub18__2__1__2, rel___dollorbir__sub17__2__1, DELTA, rel__length__2__1, DELTA, {2, 4}));
scc126->add_rule(new parallel_copy(rel__do__tick__2__1__2, rel___dollorinter__head30__7__1__2__3__4__5__6__7, DELTA, {2, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule66__inter__body8__1__1, rel___dollorrule66__inter__body7__1__1, FULL, rel___dollorrule66__inter__body6__2__1, DELTA, {3}));
scc126->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head1__3__1__2__3, DELTA, {0}));
scc126->add_rule(new parallel_join(rel___dollorrule69__inter__body__3__1__2__3, rel__store__2__1, DELTA, rel___dollorlst__2__1, FULL, {4, 3, 2}));
scc126->add_rule(new parallel_join(rel___dollorinter__head30__7__1__2__3__4__5__6__7, rel___dollorrule78__inter__body7__2__2, DELTA, rel___dollorrule78__inter__body6__7__4, FULL, {4, 2, 5, 7, 6, 8, 9}));
scc126->add_rule(new parallel_join(rel___dollorinter__head30__7__1__2__3__4__5__6__7, rel___dollorrule78__inter__body7__2__2, DELTA, rel___dollorrule78__inter__body6__7__4, DELTA, {4, 2, 5, 7, 6, 8, 9}));
scc126->add_rule(new parallel_acopy(rel___dollorrule67__inter__body1__3__3, rel___dollorrule67__inter__body1__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc126->add_rule(new parallel_copy(rel___dollorbir__sub2__9__1__2__3__4__5__6__7__8__9, rel___dollorinter__head49__10__1__2__3__4__5__6__7__8__9__10, DELTA, {6, 8, 5, 2, 4, 3, 1, 7, 0}));
scc126->add_rule(new parallel_acopy(rel___dollorrule73__inter__body1__4__1, rel___dollorrule73__inter__body1__4__1__2__3__4, DELTA, {0, 4, 1, 2, 3}));
scc126->add_rule(new parallel_copy(rel__faddr__2__1__2, rel___dollorinter__head53__3__1__2__3, DELTA, {0, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule75__inter__body__4__1__2__3__4, rel__do__fixed__prop__all__3__1__2__3, FULL, rel___dollorinter__head33__6__3__1__2, DELTA, {0, 5, 6, 7}));
scc126->add_rule(new parallel_copy_generate(rel___dollorinter__head57__4__1__2__3__4, rel___dollorrule2__inter__body3__4__3, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = data[2];
head_tuple[1] = data[3];
head_tuple[2] = data[4];
head_tuple[3] = res_0;
        return std::make_tuple(data, output + 4);
      };
      auto [_,new_ptr] = builtin_sub1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 4;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__applak__4__1__2__3__4, FULL, rel___dollorinter__head63__5__2__3__1__4, DELTA, {6, 2, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorrule81__inter__body__3__2__1, rel___dollorrule81__inter__body__3__1__2__3, DELTA, {1, 0, 3, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head45__3__3, rel___dollorinter__head45__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule75__inter__body1__3__1__2__3, rel___dollorhir__sub__3__1__2__3, FULL, rel___dollorrule75__inter__body__4__2__4__1, DELTA, {0, 5, 1}));
scc126->add_rule(new parallel_copy(rel__do__tick__2__1__2, rel___dollorinter__head36__7__1__2__3__4__5__6__7, DELTA, {2, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule61__inter__body3__3__1__2__3, rel___dollorrule61__inter__body1__1__1, DELTA, rel__apply__5__3, FULL, {6, 2, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule77__inter__body5__3__1__2__3, rel__faddr__2__1__2, DELTA, rel___dollorinter__head41__3__1__2, DELTA, {1, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorinter__head16__7__1__2__3__4__5__6__7, rel___dollorrule55__inter__body__1__1, DELTA, rel___dollorrule55__inter__body3__8__6, FULL, {3, 4, 5, 6, 7, 8, 9}));
scc126->add_rule(new parallel_join(rel___dollorrule69__inter__body8__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel___dollorlst__split__3__3, DELTA, {5, 4, 2, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule36__inter__body2__2__1__2, rel__fixedparam__1__0, DELTA, rel___dollorrule36__inter__body__2__1, FULL, {1, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule78__inter__body4__4__1__2__3__4, rel__fixedparam__1__0, DELTA, rel___dollorrule78__inter__body3__4__3, DELTA, {1, 3, 4, 5}));
scc126->add_rule(new parallel_acopy(rel___dollorrule60__inter__body8__4__1, rel___dollorrule60__inter__body8__4__1__2__3__4, DELTA, {0, 4, 1, 2, 3}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified62__3__1__2__3, rel__addr__1__1, FULL, rel___dollorrule60__inter__body__3__3, DELTA, {4, 3, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified40__4__1__2__3__4, rel__kaddr__1__1, DELTA, rel___dollorrule75__inter__body1__3__1, DELTA, {0, 3, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head72__6__1__2__3__4__5__6, rel___dollorlst__2__0, DELTA, rel___dollorrule81__inter__body1__5__4, DELTA, {1, 4, 5, 6, 0, 7}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__applak__4__1__2__3__4, DELTA, rel___dollorinter__head63__5__2__3__1__4, DELTA, {6, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule78__inter__body1__4__1__2__3__4, rel__do__var__prop__all__3__1__2__3, DELTA, rel___dollorinter__head22__6__3__1__2, DELTA, {0, 5, 6, 7}));
scc126->add_rule(new parallel_join(rel___dollorrule74__inter__body1__4__1__2__3__4, rel__define__prim__2__0, DELTA, rel__apply__5__3, DELTA, {6, 7, 3, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified64__3__1__2__3, rel___dollornil__1__1, FULL, rel___dollorrule47__inter__body8__3__2, DELTA, {3, 4, 1}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__define__prim__2__1__2, DELTA, rel___dollorhead__stratified26__3__1__2, DELTA, {4, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule32__inter__body1__2__2, rel___dollorrule32__inter__body1__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_join(rel___dollorlst__append__input__2__1__2, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified55__3__2__3, DELTA, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified9__8__1__2__3__4__5__6__7__8, rel__fixedparam__1__1, FULL, rel___dollorrule7__inter__body2__7__4, DELTA, {6, 7, 3, 0, 5, 4, 1, 8}));
scc126->add_rule(new parallel_acopy(rel__appk__5__2__3, rel__appk__5__1__2__3__4__5, DELTA, {1, 2, 5, 0, 3, 4}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__define__3__1__2__3, DELTA, rel___dollorhead__stratified15__4__1__3__4, FULL, {5, 3}));
scc126->add_rule(new parallel_join(rel___dollorinter__head52__3__1__2__3, rel___dollorlst__split__input__1__1, DELTA, rel___dollorlst__2__0, DELTA, {2, 1, 3}));
scc126->add_rule(new parallel_acopy(rel__list__of__1__0, rel__list__of__1__1, DELTA, {1, 0}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified1__2__1__2, rel__list__of__1__1, DELTA, rel___dollorrule59__inter__body__2__1, FULL, {3, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head19__2__1__2, rel___dollorrule36__inter__body1__1__1, FULL, rel___dollorrule36__inter__body2__2__1, DELTA, {0, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule52__inter__body__2__1__2, rel__ret__2__1, DELTA, rel__store__2__1, DELTA, {2, 4}));
scc126->add_rule(new parallel_join(rel___dollorinter__head25__7__1__2__3__4__5__6__7, rel__vararg__1__0, FULL, rel___dollorrule77__inter__body4__7__5, DELTA, {3, 4, 5, 6, 7, 1, 8}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified45__2__1__2, rel__faddr__2__1__2, FULL, rel___dollorrule79__inter__body__3__1__2, DELTA, {4, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule8__inter__body__2__1, rel___dollorrule8__inter__body__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_join(rel__ret__2__1__2, rel___dollorrule40__inter__body1__2__2, DELTA, rel__store__2__1, DELTA, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule2__inter__body2__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel__split__at__input__2__2, DELTA, {2, 1, 4, 3}));
scc126->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head8__2__1__2, DELTA, {1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head52__3__1__2__3, rel___dollorlst__split__input__1__1, FULL, rel___dollorlst__2__0, DELTA, {2, 1, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule59__inter__body4__4__1__2__3__4, rel__define__prim__2__0, DELTA, rel__apply__5__3, DELTA, {1, 6, 7, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule75__inter__body__4__1__2__3__4, rel__do__fixed__prop__all__3__1__2__3, DELTA, rel___dollorinter__head33__6__3__1__2, FULL, {0, 5, 6, 7}));
scc126->add_rule(new parallel_join(rel___dollorinter__head__4__1__2__3__4, rel___dollorrule59__inter__body6__2__1, DELTA, rel___dollorrule59__inter__body9__4__2, DELTA, {4, 2, 5, 6}));
scc126->add_rule(new parallel_join(rel___dollorrule7__inter__body7__7__1__2__3__4__5__6__7, rel__ref__1__1, FULL, rel___dollorrule7__inter__body6__7__7, DELTA, {3, 4, 1, 5, 6, 7, 8}));
scc126->add_rule(new parallel_join(rel___dollorrule7__inter__body6__7__1__2__3__4__5__6__7, rel___dollornil__1__1, DELTA, rel___dollorrule7__inter__body5__7__6, FULL, {3, 4, 5, 6, 1, 7, 8}));
scc126->add_rule(new parallel_copy(rel__kaddr__1__1, rel___dollorinter__head33__6__1__2__3__4__5__6, DELTA, {3}));
scc126->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified35__3__1__2__3, DELTA, {1, 2}));
scc126->add_rule(new parallel_join(rel__tick__2__1__2, rel___dollorlst__2__1__2, FULL, rel___dollorinter__head54__3__2__3, DELTA, {4, 2}));
scc126->add_rule(new parallel_copy_generate(rel___dollorinter__head31__3__1__2__3, rel___dollorrule69__inter__body7__4__4, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == n2d(0);
        if (! compatible) return state;

        head_tuple[0] = data[2];
head_tuple[1] = data[3];
head_tuple[2] = data[4];
        return std::make_tuple(data, output + 3);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 3;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorrule67__inter__body1__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorrule67__inter__body__3__1, DELTA, {4, 1, 3}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified14__5__1__2__3__4__5, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified13__6__4__6, FULL, {4, 5, 6, 7, 2}));
scc126->add_rule(new parallel_join(rel__tick__2__1__2, rel___dollorlst__2__1__2, DELTA, rel___dollorinter__head54__3__2__3, DELTA, {4, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule7__inter__body1__7__7, rel___dollorrule7__inter__body1__7__1__2__3__4__5__6__7, DELTA, {6, 7, 0, 1, 2, 3, 4, 5}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head52__3__3, rel___dollorinter__head52__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule67__inter__body5__3__1, rel___dollorrule67__inter__body5__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule47__inter__body7__6__1__2__3__4__5__6, rel___dollorlst__2__0, DELTA, rel___dollorrule47__inter__body6__5__1, DELTA, {5, 2, 4, 1, 6, 7}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub15__4__1__2__3__4, rel__length__2__1, DELTA, rel___dollorbir__sub14__4__1, FULL, {4, 5, 6, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head42__3__3, rel___dollorinter__head42__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule77__inter__body5__3__1__2__3, rel__faddr__2__1__2, DELTA, rel___dollorinter__head41__3__1__2, FULL, {1, 2, 4}));
scc126->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified20__4__1__2__3__4, DELTA, {2, 3}));
scc126->add_rule(new parallel_join(rel__do__free__app__2__1__2, rel__do__free__app__2__2, DELTA, rel___dollorlst__2__0, FULL, {2, 4}));
scc126->add_rule(new parallel_acopy(rel__define__3__0, rel__define__3__1__2__3, DELTA, {3, 0, 1, 2}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule46__inter__body2__7__1__2__3__4__5__6__7, rel___dollorhead__splice2__8__5__8, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == data[1];
        if (! compatible) return state;

        head_tuple[0] = data[3];
head_tuple[1] = data[4];
head_tuple[2] = data[0];
head_tuple[3] = data[6];
head_tuple[4] = data[7];
head_tuple[5] = data[8];
head_tuple[6] = data[5];
        return std::make_tuple(data, output + 7);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 7;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorrule79__inter__body1__4__1__2__3__4, rel___dollorlst__2__0, FULL, rel__do__fixed__prop__all__3__2, DELTA, {4, 1, 2, 5}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified32__6__1__2__3__4__5__6, rel__kaddr__1__1, DELTA, rel___dollorrule77__inter__body1__5__2, DELTA, {0, 4, 5, 6, 3, 1}));
scc126->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified13__6__1__2__3__4__5__6, DELTA, {3, 5}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified50__3__1__2__3, rel__list__of__1__1, DELTA, rel___dollorrule73__inter__body__3__1, DELTA, {3, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule79__inter__body__3__1__2__3, rel__do__fixed__prop__all__3__1__2__3, FULL, rel___dollorinter__head37__5__3__1__2, DELTA, {0, 5, 6}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified11__7__1__2__3__4__5__6__7, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified10__8__6__8, DELTA, {4, 5, 6, 7, 8, 9, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule40__inter__body1__2__1__2, rel__faddr__2__1__2, FULL, rel___dollorrule40__inter__body__3__1__2, DELTA, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule67__inter__body9__2__1__2, rel___dollorrule67__inter__body6__2__1, DELTA, rel___dollorrule67__inter__body8__2__1, FULL, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule67__inter__body10__1__1, rel___dollorrule67__inter__body9__2__2, DELTA, rel___dollorlst__2__0, FULL, {2}));
scc126->add_rule(new parallel_join(rel___dollorinter__head13__5__1__2__3__4__5, rel___dollorrule48__inter__body1__1__1, DELTA, rel___dollorrule48__inter__body3__5__5, DELTA, {3, 4, 5, 6, 0}));
scc126->add_rule(new parallel_join(rel___dollorinter__head45__3__1__2__3, rel__fixedarg__1__0, DELTA, rel___dollorrule73__inter__body2__3__3, DELTA, {1, 3, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule63__inter__body2__4__1__2__3__4, rel___dollorrule63__inter__body__1__1, DELTA, rel___dollorrule63__inter__body1__4__4, FULL, {3, 4, 5, 0}));
scc126->add_rule(new parallel_join(rel___dollorinter__head10__3__1__2__3, rel__free__2__2, FULL, rel___dollorhir__sub3__3__1, DELTA, {5, 2, 4}));
scc126->add_rule(new parallel_copy(rel__state__1__1, rel___dollorinter__head12__2__1__2, DELTA, {1}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head57__4__4__1, rel___dollorinter__head57__4__1__2__3__4, DELTA, {3, 0, 4, 1, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule73__inter__body__3__1, rel___dollorrule73__inter__body__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc126->add_rule(new parallel_join(rel__free__2__1__2, rel__free__2__2, DELTA, rel__if__3__2, FULL, {2, 3}));
scc126->add_rule(new parallel_join(rel___dollorinter__head19__2__1__2, rel___dollorrule36__inter__body1__1__1, DELTA, rel___dollorrule36__inter__body2__2__1, DELTA, {0, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule81__inter__body1__5__1__2__3__4__5, rel___dollorlst__2__0, DELTA, rel__do__var__prop__all__h__4__3, DELTA, {4, 2, 6, 5, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body6__3__1__2__3, rel___dollorbir__sub1__8__1__2__3__4__5__6__7__8, DELTA, rel___dollorinter__head47__9__3__5__6__7__4__2__8__1, FULL, {0, 10, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body6__3__1__2__3, rel___dollorbir__sub1__8__1__2__3__4__5__6__7__8, DELTA, rel___dollorinter__head47__9__3__5__6__7__4__2__8__1, DELTA, {0, 10, 1}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub13__3__1__2__3, rel__split__at__input__2__1__2, DELTA, rel___dollorinter__head57__4__4__1, DELTA, {2, 5, 4}));
scc126->add_rule(new parallel_join(rel___dollorlst__append__input__2__1__2, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified35__3__2__3, DELTA, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule60__inter__body8__4__1__2__3__4, rel___dollorrule60__inter__body2__3__3, FULL, rel___dollorrule60__inter__body7__3__3, DELTA, {2, 3, 5, 6}));
scc126->add_rule(new parallel_join(rel___dollorinter__head33__6__1__2__3__4__5__6, rel__tick__2__1, FULL, rel___dollorbir__sub3__6__1, DELTA, {5, 4, 2, 8, 7, 6}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified1__2__1__2, rel__list__of__1__1, FULL, rel___dollorrule59__inter__body__2__1, DELTA, {3, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified37__7__1__2__3__4__5__6__7, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified36__7__5__7, FULL, {4, 5, 6, 7, 8, 1, 2}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified37__7__1__2__3__4__5__6__7, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified36__7__5__7, DELTA, {4, 5, 6, 7, 8, 1, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule62__inter__body__4__1, rel___dollorrule62__inter__body__4__1__2__3__4, DELTA, {0, 4, 1, 2, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule62__inter__body2__2__1__2, rel__list__of__1__0, DELTA, rel__store__2__2, FULL, {1, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule63__inter__body__1__1, rel__non__list__value__1__1, FULL, rel__store__2__2, DELTA, {3}));
scc126->add_rule(new parallel_join(rel___dollorrule77__inter__body3__4__1__2__3__4, rel__clo__2__1, DELTA, rel___dollorrule77__inter__body2__3__1, FULL, {1, 4, 5, 2}));
scc126->add_rule(new parallel_copy(rel__non__list__value__1__1, rel__saddr__1__1, DELTA, {1}));
scc126->add_rule(new parallel_join(rel___dollorrule62__inter__body__4__1__2__3__4, rel___dollorlst__append__input__2__1__2, FULL, rel___dollorbir__sub7__5__1__2, DELTA, {2, 5, 4, 6}));
scc126->add_rule(new parallel_join(rel___dollorrule34__inter__body__3__1__2__3, rel___dollorlst__2__1, DELTA, rel__binding__2__0, FULL, {2, 3, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head66__3__1__2__3, rel___dollorrule60__inter__body6__1__1, FULL, rel___dollorrule60__inter__body8__4__1, DELTA, {3, 4, 5}));
scc126->add_rule(new parallel_join(rel__apply__5__1__2__3__4__5, rel__fixedarg__1__1, DELTA, rel___dollorinter__head13__5__5, DELTA, {4, 3, 5, 1, 6}));
scc126->add_rule(new parallel_join(rel___dollorrule69__inter__body1__3__1__2__3, rel__fixedarg__1__1, FULL, rel___dollorrule69__inter__body__3__2, DELTA, {3, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head39__4__1__2__3__4, rel___dollorlst__split__3__1, DELTA, rel___dollorbir__sub20__3__1, DELTA, {3, 5, 2, 6}));
scc126->add_rule(new parallel_join(rel___dollorinter__head55__2__1__2, rel__string__1__0, FULL, rel__eval__3__1, DELTA, {0, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified8__7__7__6, rel___dollorhead__stratified8__7__1__2__3__4__5__6__7, DELTA, {6, 5, 7, 0, 1, 2, 3, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule46__inter__body6__6__1__2__3__4__5__6, rel___dollorrule46__inter__body3__1__1, DELTA, rel___dollorrule46__inter__body5__7__2, FULL, {4, 3, 5, 6, 7, 8}));
scc126->add_rule(new parallel_join(rel___dollorrule7__inter__body6__7__1__2__3__4__5__6__7, rel___dollornil__1__1, FULL, rel___dollorrule7__inter__body5__7__6, DELTA, {3, 4, 5, 6, 1, 7, 8}));
scc126->add_rule(new parallel_acopy(rel___dollorrule7__inter__body2__7__4, rel___dollorrule7__inter__body2__7__1__2__3__4__5__6__7, DELTA, {3, 7, 0, 1, 2, 4, 5, 6}));
scc126->add_rule(new parallel_join(rel___dollorrule9__inter__body__4__1__2__3__4, rel__app__2__1__2, DELTA, rel___dollorhead__stratified42__4__4__2, FULL, {2, 4, 1, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule9__inter__body__4__1__2__3__4, rel__app__2__1__2, FULL, rel___dollorhead__stratified42__4__4__2, DELTA, {2, 4, 1, 5}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__appk__5__1__2__3__4__5, DELTA, rel___dollorhead__stratified44__6__3__6__1__2__4, DELTA, {7, 3, 5}));
scc126->add_rule(new parallel_acopy(rel__app__2__0, rel__app__2__1__2, DELTA, {2, 0, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head39__4__1__2__3__4, rel___dollorlst__split__3__1, FULL, rel___dollorbir__sub20__3__1, DELTA, {3, 5, 2, 6}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel___dollorrule52__inter__body1__1__1, DELTA, rel___dollorrule52__inter__body2__4__4, DELTA, {4, 3, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule61__inter__body__4__1__2__3__4, rel__addr__1__1, DELTA, rel___dollorinter__head3__4__3, FULL, {1, 4, 3, 5}));
scc126->add_rule(new parallel_acopy(rel___dollorbir__sub14__4__1, rel___dollorbir__sub14__4__1__2__3__4, DELTA, {0, 4, 1, 2, 3}));
scc126->add_rule(new parallel_join(rel___dollorinter__head33__6__1__2__3__4__5__6, rel__tick__2__1, DELTA, rel___dollorbir__sub3__6__1, FULL, {5, 4, 2, 8, 7, 6}));
scc126->add_rule(new parallel_join(rel___dollorrule66__inter__body4__3__1__2__3, rel___dollorlst__2__0, FULL, rel___dollorrule66__inter__body3__2__1, DELTA, {2, 4, 1}));
scc126->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head55__2__1__2, DELTA, {0}));
scc126->add_rule(new parallel_join(rel___dollorrule62__inter__body__4__1__2__3__4, rel___dollorlst__append__input__2__1__2, DELTA, rel___dollorbir__sub7__5__1__2, FULL, {2, 5, 4, 6}));
scc126->add_rule(new parallel_acopy(rel___dollorrule66__inter__body2__3__1, rel___dollorrule66__inter__body2__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule63__inter__body1__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel__do__store__addr__union__3__2, FULL, {5, 2, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head2__3__1__2__3, rel__lambda__2__0, FULL, rel__eval__3__1, DELTA, {4, 5, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule2__inter__body__2__1__2, rel___dollornil__1__1, DELTA, rel___dollorinter__head14__2__2, FULL, {3, 1}));
scc126->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorinter__head54__3__1__2__3, DELTA, {1, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule61__inter__body2__2__1__2, rel__vararg__1__1, DELTA, rel__store__2__1, DELTA, {3, 1}));
scc126->add_rule(new parallel_copy_generate(rel___dollorinter__head3__4__1__2__3__4, rel___dollorrule61__inter__body5__3__, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {n2d(0)};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = data[1];
head_tuple[1] = data[2];
head_tuple[2] = data[3];
head_tuple[3] = res_0;
        return std::make_tuple(data, output + 4);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 4;
      return tuples_count;
    }));
scc126->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorhead__stratified40__4__1__2__3__4, DELTA, {3, 1}));
scc126->add_rule(new parallel_acopy(rel__define__prim__2__0, rel__define__prim__2__1__2, DELTA, {2, 0, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule51__inter__body__2__1__2, rel__kaddr__1__0, DELTA, rel__store__2__1, DELTA, {0, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body11__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel___dollorrule55__inter__body10__3__3, DELTA, {4, 2, 5, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule41__inter__body__3__2, rel___dollorrule41__inter__body__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head37__5__3__1__2, rel___dollorinter__head37__5__1__2__3__4__5, DELTA, {2, 0, 1, 5, 3, 4}));
scc126->add_rule(new parallel_join(rel___dollorinter__head40__6__1__2__3__4__5__6, rel__tick__2__1, DELTA, rel___dollorbir__sub4__6__1, DELTA, {5, 8, 2, 6, 7, 4}));
scc126->add_rule(new parallel_join(rel___dollorinter__head61__3__1__2__3, rel___dollorlst__append__2__1, DELTA, rel___dollorbir__sub19__3__1, FULL, {5, 2, 4}));
scc126->add_rule(new parallel_copy(rel__list__of__1__1, rel___dollorinter__head66__3__1__2__3, DELTA, {0}));
scc126->add_rule(new parallel_copy_generate(rel__free__2__1__2, rel___dollorrule20__inter__body1__3__1__2, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 2> {data[1], data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = []( TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = data[0];
head_tuple[1] = data[3];
        return std::make_tuple(data, output + 2);
      };
      auto [_,new_ptr] = builtin_neq<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 2;
      return tuples_count;
    }));
scc126->add_rule(new parallel_copy(rel__faddr__2__1__2, rel___dollorinter__head60__3__1__2__3, DELTA, {2, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule46__inter__body__6__1__2__3__4__5__6, rel__ret__2__2, FULL, rel__appk__5__0, DELTA, {3, 4, 5, 6, 7, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule59__inter__body7__4__1, rel___dollorrule59__inter__body7__4__1__2__3__4, DELTA, {0, 4, 1, 2, 3}));
scc126->add_rule(new parallel_acopy(rel___dollorrule47__inter__body6__5__1, rel___dollorrule47__inter__body6__5__1__2__3__4__5, DELTA, {0, 5, 1, 2, 3, 4}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified43__4__1__2__3__4, rel__fixedparam__1__1, DELTA, rel___dollorrule9__inter__body__4__3, FULL, {4, 5, 1, 3}));
scc126->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head21__5__1__2__3__4__5, DELTA, {3}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified__3__2__1, rel___dollorhead__stratified__3__1__2__3, DELTA, {1, 0, 3, 2}));
scc126->add_rule(new parallel_copy(rel__fixedparam__1__1, rel___dollorhead__stratified8__7__1__2__3__4__5__6__7, DELTA, {5}));
scc126->add_rule(new parallel_join(rel___dollorrule20__inter__body__3__1__2__3, rel__lambda__2__2, DELTA, rel__free__2__2, DELTA, {4, 2, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified19__5__4__5, rel___dollorhead__stratified19__5__1__2__3__4__5, DELTA, {3, 4, 5, 0, 1, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule59__inter__body7__4__1__2__3__4, rel__fixedarg__1__0, DELTA, rel___dollorrule59__inter__body4__4__2, DELTA, {3, 4, 5, 1}));
scc126->add_rule(new parallel_copy(rel__store__flow__2__1__2, rel___dollorhead__stratified48__2__1__2, DELTA, {1, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule69__inter__body4__3__1__2__3, rel___dollorrule69__inter__body3__1__1, FULL, rel__apply__5__3, DELTA, {6, 2, 5}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified1__2__1__2, rel__list__of__1__1, DELTA, rel___dollorrule59__inter__body__2__1, DELTA, {3, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head2__3__1__2__3, rel__lambda__2__0, DELTA, rel__eval__3__1, DELTA, {4, 5, 0}));
scc126->add_rule(new parallel_join(rel__do__store__addr__union__3__1__2__3, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified29__4__3__4, FULL, {5, 4, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule60__inter__body5__2__1, rel___dollorrule60__inter__body5__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__list__of__1__1, FULL, rel___dollorinter__head29__2__1, DELTA, {3, 1}));
scc126->add_rule(new parallel_join(rel___dollorlst__split__3__1__2__3, rel___dollorlst__2__1__2, DELTA, rel___dollorinter__head39__4__2__3, FULL, {5, 2, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head49__10__7__9__6__3__5__4__2__8__1, rel___dollorinter__head49__10__1__2__3__4__5__6__7__8__9__10, DELTA, {6, 8, 5, 2, 4, 3, 1, 7, 0, 10, 9}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__faddr__2__1__2, DELTA, rel___dollorhead__stratified49__3__2__1, FULL, {2, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head13__5__5, rel___dollorinter__head13__5__1__2__3__4__5, DELTA, {4, 5, 0, 1, 2, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule71__inter__body5__2__1__2, rel__list__of__1__0, DELTA, rel__store__2__2, DELTA, {0, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule7__inter__body2__7__1__2__3__4__5__6__7, rel__quote__1__1, DELTA, rel___dollorrule7__inter__body1__7__7, DELTA, {3, 4, 1, 8, 5, 6, 7}));
scc126->add_rule(new parallel_copy(rel___dollorlst__split__input__1__1, rel__list__of__1__1, DELTA, {0}));
scc126->add_rule(new parallel_join(rel___dollorinter__head50__6__1__2__3__4__5__6, rel___dollorlst__append__2__1, DELTA, rel___dollorrule46__inter__body6__6__4, DELTA, {4, 5, 6, 2, 7, 8}));
scc126->add_rule(new parallel_acopy(rel__apply__5__4, rel__apply__5__1__2__3__4__5, DELTA, {3, 5, 0, 1, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorlst__split__3__1__2__3, rel___dollornil__1__1, FULL, rel___dollorinter__head71__3__3, DELTA, {3, 1, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule71__inter__body2__2__1__2, rel___dollorrule71__inter__body__1__1, DELTA, rel___dollorlst__2__2, DELTA, {2, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule75__inter__body4__4__1__2__3__4, rel__clo__2__1, FULL, rel___dollorrule75__inter__body3__3__2, DELTA, {4, 1, 5, 2}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule69__inter__body3__1__1, rel__define__prim__2__1, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == s2d("car");
        if (! compatible) return state;

        head_tuple[0] = data[1];
        return std::make_tuple(data, output + 1);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 1;
      return tuples_count;
    }));
scc126->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head45__3__1__2__3, DELTA, {2}));
scc126->add_rule(new parallel_join(rel___dollorinter__head40__6__1__2__3__4__5__6, rel__tick__2__1, FULL, rel___dollorbir__sub4__6__1, DELTA, {5, 8, 2, 6, 7, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorrule46__inter__body2__7__, rel___dollorrule46__inter__body2__7__1__2__3__4__5__6__7, DELTA, {7, 0, 1, 2, 3, 4, 5, 6}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head29__2__1, rel___dollorinter__head29__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule55__inter__body1__9__9__3, rel___dollorrule55__inter__body1__9__1__2__3__4__5__6__7__8__9, DELTA, {8, 2, 9, 0, 1, 3, 4, 5, 6, 7}));
scc126->add_rule(new parallel_acopy(rel___dollorrule45__inter__body1__5__3, rel___dollorrule45__inter__body1__5__1__2__3__4__5, DELTA, {2, 5, 0, 1, 3, 4}));
scc126->add_rule(new parallel_copy_generate(rel___dollorinter__head28__7__1__2__3__4__5__6__7, rel___dollorrule56__inter__body1__6__, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {n2d(0)};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = data[1];
head_tuple[1] = data[2];
head_tuple[2] = data[3];
head_tuple[3] = data[4];
head_tuple[4] = data[5];
head_tuple[5] = res_0;
head_tuple[6] = data[6];
        return std::make_tuple(data, output + 7);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 7;
      return tuples_count;
    }));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head50__6__2__4__3__1__5, rel___dollorinter__head50__6__1__2__3__4__5__6, DELTA, {1, 3, 2, 0, 4, 6, 5}));
scc126->add_rule(new parallel_join(rel___dollorhead__splice1__9__1__2__3__4__5__6__7__8__9, rel___dollorrule55__inter__body13__1__1, DELTA, rel___dollorrule55__inter__body12__9__7, FULL, {8, 9, 5, 7, 6, 4, 10, 3, 4}));
scc126->add_rule(new parallel_join(rel___dollorhead__splice1__9__1__2__3__4__5__6__7__8__9, rel___dollorrule55__inter__body13__1__1, DELTA, rel___dollorrule55__inter__body12__9__7, DELTA, {8, 9, 5, 7, 6, 4, 10, 3, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorrule59__inter__body8__3__3, rel___dollorrule59__inter__body8__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc126->add_rule(new parallel_copy(rel__define__3__1__2__3, rel___dollorhead__stratified43__4__1__2__3__4, DELTA, {0, 2, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule7__inter__body13__3__1__2__3, rel___dollornil__1__0, FULL, rel___dollorlst__append__input__2__1, DELTA, {3, 2, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified34__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorrule8__inter__body__2__1, FULL, {0, 3, 1}));
scc126->add_rule(new parallel_join(rel___dollorlst__append__2__1__2, rel___dollorlst__2__1__2, DELTA, rel___dollorinter__head61__3__3__2, DELTA, {4, 2}));
scc126->add_rule(new parallel_join(rel__split__at__3__1__2__3, rel___dollornil__1__1, DELTA, rel___dollorinter__head42__3__3, DELTA, {4, 1, 3}));
scc126->add_rule(new parallel_join(rel___dollorlst__append__input__2__1__2, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified64__3__2__3, DELTA, {4, 2}));
scc126->add_rule(new parallel_copy(rel__lambda__2__1__2, rel___dollorinter__head28__7__1__2__3__4__5__6__7, DELTA, {6, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule60__inter__body2__3__1__2__3, rel__fixedarg__1__1, DELTA, rel___dollorlst__2__0, DELTA, {3, 0, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule36__inter__body2__2__1__2, rel__fixedparam__1__0, DELTA, rel___dollorrule36__inter__body__2__1, DELTA, {1, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule7__inter__body1__7__1__2__3__4__5__6__7, rel__quote__1__1, FULL, rel___dollorrule7__inter__body__7__4, DELTA, {5, 1, 3, 4, 6, 7, 8}));
scc126->add_rule(new parallel_acopy(rel___dollorbir__sub17__2__1, rel___dollorbir__sub17__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule46__inter__body5__7__1__2__3__4__5__6__7, rel___dollorlst__2__0__1, FULL, rel___dollorrule46__inter__body4__8__1__8, DELTA, {6, 2, 5, 4, 7, 8, 9}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub19__3__1__2__3, rel___dollorlst__append__input__2__1__2, FULL, rel___dollorinter__head62__4__1__3, DELTA, {2, 5, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorrule78__inter__body7__2__2, rel___dollorrule78__inter__body7__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule74__inter__body2__2__1__2, rel__vararg__1__1, FULL, rel___dollorrule74__inter__body__2__2, DELTA, {1, 3}));
scc126->add_rule(new parallel_acopy(rel__apply__5__3, rel__apply__5__1__2__3__4__5, DELTA, {2, 5, 0, 1, 3, 4}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified22__2__1__2, rel__faddr__2__1__2, DELTA, rel___dollorrule78__inter__body__3__3__1, DELTA, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule67__inter__body7__3__1__2__3, rel__fixedarg__1__0, DELTA, rel___dollorrule67__inter__body5__3__1, FULL, {1, 3, 4}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified10__8__1__2__3__4__5__6__7__8, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified9__8__8__4, FULL, {4, 5, 6, 1, 7, 8, 9, 2}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified10__8__1__2__3__4__5__6__7__8, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified9__8__8__4, DELTA, {4, 5, 6, 1, 7, 8, 9, 2}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified4__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorrule41__inter__body__3__2, DELTA, {3, 1, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule78__inter__body5__2__1__2, rel__list__of__1__0, DELTA, rel__store__2__2, FULL, {1, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule61__inter__body3__3__1__2__3, rel___dollorrule61__inter__body1__1__1, DELTA, rel__apply__5__3, DELTA, {6, 2, 5}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified21__3__1__2__3, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified20__4__3__4, DELTA, {4, 5, 2}));
scc126->add_rule(new parallel_copy(rel__applak__4__1__2__3__4, rel___dollorinter__head63__5__1__2__3__4__5, DELTA, {1, 2, 0, 3}));
scc126->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorhead__stratified46__6__1__2__3__4__5__6, DELTA, {5, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule60__inter__body2__3__1__2__3, rel__fixedarg__1__1, FULL, rel___dollorlst__2__0, DELTA, {3, 0, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head37__5__1__2__3__4__5, rel___dollorlst__2__0, DELTA, rel___dollorrule79__inter__body1__4__4, DELTA, {6, 2, 4, 5, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorrule59__inter__body1__3__3, FULL, {4, 1, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule61__inter__body5__3__1__2__3, rel__list__of__1__0, FULL, rel___dollorrule61__inter__body4__3__3, DELTA, {1, 3, 4}));
scc126->add_rule(new parallel_copy(rel__quote__1__1, rel___dollorhead__stratified8__7__1__2__3__4__5__6__7, DELTA, {4}));
scc126->add_rule(new parallel_copy(rel__vararg__1__1, rel___dollorinter__head38__5__1__2__3__4__5, DELTA, {4}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified13__6__1__2__3__4__5__6, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified12__7__7__4, DELTA, {4, 5, 6, 7, 8, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule76__inter__body4__5__1__2__3__4__5, rel__faddr__2__1__2, DELTA, rel___dollorrule76__inter__body3__6__3__2, FULL, {4, 5, 6, 2, 7}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head27__7__6, rel___dollorinter__head27__7__1__2__3__4__5__6__7, DELTA, {5, 7, 0, 1, 2, 3, 4, 6}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified64__3__2__3, rel___dollorhead__stratified64__3__1__2__3, DELTA, {1, 2, 3, 0}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified65__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorrule4__inter__body1__2__2, FULL, {0, 1, 3}));
scc126->add_rule(new parallel_acopy(rel__lambda__2__2, rel__lambda__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule66__inter__body4__3__1__2__3, rel___dollorlst__2__0, DELTA, rel___dollorrule66__inter__body3__2__1, FULL, {2, 4, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head41__3__1__2, rel___dollorinter__head41__3__1__2__3, DELTA, {0, 1, 3, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule77__inter__body__6__2__1, rel___dollorrule77__inter__body__6__1__2__3__4__5__6, DELTA, {1, 0, 6, 2, 3, 4, 5}));
scc126->add_rule(new parallel_acopy(rel___dollorrule55__inter__body7__8__, rel___dollorrule55__inter__body7__8__1__2__3__4__5__6__7__8, DELTA, {8, 0, 1, 2, 3, 4, 5, 6, 7}));
scc126->add_rule(new parallel_join(rel__length__2__1__2, rel__length__input__1__1, DELTA, rel___dollorhead__stratified67__2__2, DELTA, {1, 3}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__appk__5__1__2__3__4__5, DELTA, rel___dollorhead__stratified44__6__3__6__1__2__4, FULL, {7, 3, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule67__inter__body2__3__1__2__3, rel___dollornil__1__0, FULL, rel___dollorlst__2__2, DELTA, {2, 1, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule40__inter__body1__2__1__2, rel__faddr__2__1__2, DELTA, rel___dollorrule40__inter__body__3__1__2, DELTA, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule59__inter__body__2__1__2, rel__ret__2__1__2, DELTA, rel___dollorhead__stratified__3__2__1, FULL, {4, 0}));
scc126->add_rule(new parallel_acopy(rel__store__flow__2__1, rel__store__flow__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_join(rel__length__2__1__2, rel__length__input__1__1, DELTA, rel___dollorhead__stratified67__2__2, FULL, {1, 3}));
scc126->add_rule(new parallel_join(rel___dollorinter__head11__4__1__2__3__4, rel___dollorlst__append__2__1, DELTA, rel___dollorrule62__inter__body__4__1, DELTA, {4, 2, 5, 6}));
scc126->add_rule(new parallel_acopy(rel___dollorrule4__inter__body__5__1__4, rel___dollorrule4__inter__body__5__1__2__3__4__5, DELTA, {0, 3, 5, 1, 2, 4}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule60__inter__body3__1__1, rel___dollornil__1__1, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == n2d(0);
        if (! compatible) return state;

        head_tuple[0] = data[1];
        return std::make_tuple(data, output + 1);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 1;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__store__2__1, DELTA, rel__store__flow__2__1, DELTA, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule60__inter__body5__2__1__2, rel___dollorrule60__inter__body3__1__1, DELTA, rel___dollorlst__2__2, FULL, {3, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified11__7__2__7, rel___dollorhead__stratified11__7__1__2__3__4__5__6__7, DELTA, {1, 6, 7, 0, 2, 3, 4, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule59__inter__body1__3__1__2__3, rel___dollorlst__2__1__2, FULL, rel___dollorinter__head__4__1__2, DELTA, {2, 4, 5}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified54__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorrule5__inter__body__2__2, FULL, {0, 1, 3}));
scc126->add_rule(new parallel_join(rel___dollorlst__split__3__1__2__3, rel___dollorlst__2__1__2, FULL, rel___dollorinter__head39__4__2__3, DELTA, {5, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule40__inter__body__3__1__2__3, rel__ref__1__0, FULL, rel__eval__3__1, DELTA, {3, 1, 4}));
scc126->add_rule(new parallel_copy(rel__non__list__value__1__1, rel__addr__1__1, DELTA, {1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified21__3__1__2__3, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified20__4__3__4, DELTA, {4, 5, 2}));
scc126->add_rule(new parallel_join(rel___dollorinter__head38__5__1__2__3__4__5, rel__store__2__1, DELTA, rel___dollorrule50__inter__body__5__3, FULL, {4, 5, 2, 6, 7}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule59__inter__body2__1__1, rel___dollornil__1__1, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == n2d(0);
        if (! compatible) return state;

        head_tuple[0] = data[1];
        return std::make_tuple(data, output + 1);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 1;
      return tuples_count;
    }));
scc126->add_rule(new parallel_copy(rel__define__prim__2__1__2, rel___dollorhead__stratified26__3__1__2__3, DELTA, {0, 1}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__applak__4__1__2__3__4, DELTA, rel___dollorinter__head63__5__2__3__1__4, FULL, {6, 2, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorsplice__4__1, rel___dollorsplice__4__1__2__3__4, DELTA, {0, 4, 1, 2, 3}));
scc126->add_rule(new parallel_acopy(rel___dollorrule46__inter__body__6__3, rel___dollorrule46__inter__body__6__1__2__3__4__5__6, DELTA, {2, 6, 0, 1, 3, 4, 5}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified48__2__1__2, rel__faddr__2__1__2, DELTA, rel___dollorrule77__inter__body5__3__3__1, DELTA, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorlst__split__3__1__2__3, rel___dollornil__1__1, DELTA, rel___dollorinter__head71__3__3, FULL, {3, 1, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule66__inter__body6__2__1__2, rel__list__of__1__0__1, DELTA, rel___dollorrule66__inter__body5__3__1__2, DELTA, {1, 3}));
scc126->add_rule(new parallel_copy(rel__ret__2__1__2, rel___dollorinter__head32__3__1__2__3, DELTA, {0, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorlst__append__2__1, rel___dollorlst__append__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head59__3__1__2__3, rel__addr__1__1, FULL, rel___dollorinter__head58__3__2, DELTA, {3, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified44__6__1__2__3__4__5__6, rel___dollornil__1__1, FULL, rel___dollorinter__head35__6__6, DELTA, {3, 4, 5, 6, 7, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule61__inter__body4__3__1__2__3, rel___dollorrule61__inter__body2__2__2, FULL, rel___dollorrule61__inter__body3__3__3, DELTA, {4, 5, 2}));
scc126->add_rule(new parallel_join(rel__apply__5__1__2__3__4__5, rel__fixedarg__1__1, DELTA, rel___dollorinter__head13__5__5, FULL, {4, 3, 5, 1, 6}));
scc126->add_rule(new parallel_acopy(rel___dollorbir__sub10__3__1, rel___dollorbir__sub10__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head15__5__3__5__2__4, rel___dollorinter__head15__5__1__2__3__4__5, DELTA, {2, 4, 1, 3, 5, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule77__inter__body4__7__1__2__3__4__5__6__7, rel___dollorrule77__inter__body3__4__1, FULL, rel__apply__5__3, DELTA, {6, 7, 2, 3, 8, 9, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head23__6__3__6__2, rel___dollorinter__head23__6__1__2__3__4__5__6, DELTA, {2, 5, 1, 6, 0, 3, 4}));
scc126->add_rule(new parallel_join(rel__do__free__let__rhs__2__1__2, rel___dollorlst__2__0, DELTA, rel__do__free__let__rhs__2__2, DELTA, {4, 2}));
scc126->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head5__3__1__2__3, DELTA, {1}));
scc126->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head64__3__1__2__3, DELTA, {1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head6__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorinter__head5__3__2, FULL, {3, 4, 1}));
scc126->add_rule(new parallel_copy(rel__ret__2__1__2, rel___dollorhead__stratified23__3__1__2__3, DELTA, {2, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule2__inter__body2__4__1__2__3__4, rel___dollorlst__2__0, FULL, rel__split__at__input__2__2, DELTA, {2, 1, 4, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule76__inter__body5__5__1__2__3__4__5, rel__list__of__1__1, DELTA, rel___dollorrule76__inter__body4__5__1, DELTA, {3, 4, 5, 1, 6}));
scc126->add_rule(new parallel_join(rel___dollorinter__head44__2__1__2, rel__length__input__1__1, FULL, rel___dollorlst__2__0, DELTA, {3, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified8__7__1__2__3__4__5__6__7, rel__ref__1__1, FULL, rel___dollorrule7__inter__body7__7__2, DELTA, {3, 4, 5, 8, 6, 7, 1}));
scc126->add_rule(new parallel_copy(rel__faddr__2__1__2, rel___dollorinter__head41__3__1__2__3, DELTA, {2, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified35__3__1__2__3, rel___dollornil__1__1, DELTA, rel___dollorrule46__inter__body1__3__2, FULL, {3, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified27__3__1__2__3, rel___dollornil__1__1, DELTA, rel___dollorinter__head20__3__2, FULL, {3, 4, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule66__inter__body3__2__1, rel___dollorrule66__inter__body3__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule46__inter__body1__3__1__2__3, rel___dollorbir__sub6__7__1__2__3__4__5__6__7, DELTA, rel___dollorinter__head26__8__2__8__1__4__3__5__6, FULL, {0, 9, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule46__inter__body1__3__1__2__3, rel___dollorbir__sub6__7__1__2__3__4__5__6__7, DELTA, rel___dollorinter__head26__8__2__8__1__4__3__5__6, DELTA, {0, 9, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule61__inter__body2__2__1__2, rel__vararg__1__1, FULL, rel__store__2__1, DELTA, {3, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body11__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel___dollorrule55__inter__body10__3__3, FULL, {4, 2, 5, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule52__inter__body2__4__1__2__3__4, rel___dollorrule52__inter__body__2__1, DELTA, rel__if__k__4__0, DELTA, {5, 3, 6, 2}));
scc126->add_rule(new parallel_copy(rel__faddr__2__1__2, rel___dollorinter__head40__6__1__2__3__4__5__6, DELTA, {2, 1}));
scc126->add_rule(new parallel_copy(rel__kaddr__1__1, rel___dollorinter__head22__6__1__2__3__4__5__6, DELTA, {3}));
scc126->add_rule(new parallel_join(rel___dollorrule23__inter__body__3__1__2__3, rel___dollornil__1__0, DELTA, rel__do__free__lam__3__2, DELTA, {4, 3, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified36__7__1__2__3__4__5__6__7, rel___dollornil__1__1, DELTA, rel___dollorinter__head27__7__6, DELTA, {3, 4, 5, 6, 7, 8, 1}));
scc126->add_rule(new parallel_copy_generate(rel__do__free__let__lhs__3__1__2__3, rel___dollorrule34__inter__body1__4__2__4, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 2> {data[1], data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = []( TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = data[3];
head_tuple[1] = data[4];
head_tuple[2] = data[0];
        return std::make_tuple(data, output + 3);
      };
      auto [_,new_ptr] = builtin_neq<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 3;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorrule76__inter__body2__7__1__2__3__4__5__6__7, rel__lambda__2__0, DELTA, rel___dollorrule76__inter__body1__6__4, FULL, {4, 5, 6, 1, 2, 7, 8}));
scc126->add_rule(new parallel_join(rel___dollorrule76__inter__body2__7__1__2__3__4__5__6__7, rel__lambda__2__0, DELTA, rel___dollorrule76__inter__body1__6__4, DELTA, {4, 5, 6, 1, 2, 7, 8}));
scc126->add_rule(new parallel_join(rel___dollorrule60__inter__body6__1__1, rel___dollorrule60__inter__body1__1__1, DELTA, rel___dollorrule60__inter__body5__2__1, DELTA, {3}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__letk__6__1__2__3__4__5__6, FULL, rel___dollorinter__head16__7__7__3__6__4__2__5, DELTA, {8, 4, 6}));
scc126->add_rule(new parallel_acopy(rel___dollorlst__split__input__1__, rel___dollorlst__split__input__1__1, DELTA, {1, 0}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head25__7__2__1, rel___dollorinter__head25__7__1__2__3__4__5__6__7, DELTA, {1, 0, 7, 2, 3, 4, 5, 6}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub19__3__1__2__3, rel___dollorlst__append__input__2__1__2, DELTA, rel___dollorinter__head62__4__1__3, FULL, {2, 5, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorrule7__inter__body4__7__5, rel___dollorrule7__inter__body4__7__1__2__3__4__5__6__7, DELTA, {4, 7, 0, 1, 2, 3, 5, 6}));
scc126->add_rule(new parallel_join(rel___dollorrule22__inter__body__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel__do__free__lam__3__2, DELTA, {2, 5, 1, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule62__inter__body1__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel__do__store__addr__union__3__2, FULL, {5, 2, 4, 1}));
scc126->add_rule(new parallel_copy(rel__define__prim__2__1__2, rel___dollorhead__stratified65__3__1__2__3, DELTA, {0, 2}));
scc126->add_rule(new parallel_copy(rel__list__of__1__1, rel___dollorinter__head45__3__1__2__3, DELTA, {0}));
scc126->add_rule(new parallel_acopy(rel___dollorrule52__inter__body2__4__4, rel___dollorrule52__inter__body2__4__1__2__3__4, DELTA, {3, 4, 0, 1, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule71__inter__body6__2__1, rel___dollorrule71__inter__body6__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule76__inter__body2__7__4, rel___dollorrule76__inter__body2__7__1__2__3__4__5__6__7, DELTA, {3, 7, 0, 1, 2, 4, 5, 6}));
scc126->add_rule(new parallel_acopy(rel___dollorrule7__inter__body13__3__3, rel___dollorrule7__inter__body13__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head64__3__1__2__3, rel__quote__1__0, DELTA, rel__eval__3__1, DELTA, {1, 0, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head71__3__3, rel___dollorinter__head71__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head61__3__3__2, rel___dollorinter__head61__3__1__2__3, DELTA, {2, 1, 3, 0}));
scc126->add_rule(new parallel_copy(rel__if__k__4__1__2__3__4, rel___dollorinter__head15__5__1__2__3__4__5, DELTA, {2, 4, 1, 3}));
scc126->add_rule(new parallel_acopy(rel___dollorrule55__inter__body3__8__6, rel___dollorrule55__inter__body3__8__1__2__3__4__5__6__7__8, DELTA, {5, 8, 0, 1, 2, 3, 4, 6, 7}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub11__4__1__2__3__4, rel___dollorbir__sub10__3__1, DELTA, rel__split__at__3__1, FULL, {2, 3, 5, 6}));
scc126->add_rule(new parallel_join(rel___dollorrule73__inter__body1__4__1__2__3__4, rel__define__prim__2__0, DELTA, rel__apply__5__3, FULL, {1, 6, 7, 3}));
scc126->add_rule(new parallel_acopy(rel__fixedparam__1__0, rel__fixedparam__1__1, DELTA, {1, 0}));
scc126->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head3__4__1__2__3__4, DELTA, {3}));
scc126->add_rule(new parallel_acopy(rel__do__store__addr__union__3__2, rel__do__store__addr__union__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule59__inter__body5__2__1__2, rel___dollorrule59__inter__body3__2__2, FULL, rel__store__2__1, DELTA, {2, 4}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified32__6__1__2__3__4__5__6, rel__kaddr__1__1, DELTA, rel___dollorrule77__inter__body1__5__2, FULL, {0, 4, 5, 6, 3, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule69__inter__body8__4__1__2__3__4, rel___dollorlst__2__0, FULL, rel___dollorlst__split__3__3, DELTA, {5, 4, 2, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorlst__2__0, rel___dollorlst__2__1__2, DELTA, {2, 0, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule56__inter__body1__6__, rel___dollorrule56__inter__body1__6__1__2__3__4__5__6, DELTA, {6, 0, 1, 2, 3, 4, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule47__inter__body2__6__1__2__3__4__5__6, rel___dollorlst__2__0__1, DELTA, rel___dollorrule47__inter__body1__7__3__7, DELTA, {6, 2, 4, 5, 7, 8}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule37__inter__body__1__1, rel___dollornil__1__1, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == n2d(0);
        if (! compatible) return state;

        head_tuple[0] = data[1];
        return std::make_tuple(data, output + 1);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 1;
      return tuples_count;
    }));
scc126->add_rule(new parallel_acopy(rel___dollorrule59__inter__body3__2__2, rel___dollorrule59__inter__body3__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule46__inter__body4__8__1__2__3__4__5__6__7__8, rel___dollorlst__append__input__2__1, DELTA, rel___dollorbir__sub6__7__1, FULL, {2, 6, 7, 5, 1, 8, 9, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule46__inter__body4__8__1__2__3__4__5__6__7__8, rel___dollorlst__append__input__2__1, DELTA, rel___dollorbir__sub6__7__1, DELTA, {2, 6, 7, 5, 1, 8, 9, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head7__5__2, rel___dollorinter__head7__5__1__2__3__4__5, DELTA, {1, 5, 0, 2, 3, 4}));
scc126->add_rule(new parallel_join(rel___dollorhead__splice3__5__1__2__3__4__5, rel___dollorrule62__inter__body2__2__2, DELTA, rel___dollorrule62__inter__body1__4__4, FULL, {6, 5, 0, 2, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorrule71__inter__body5__2__2, rel___dollorrule71__inter__body5__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_copy(rel__do__fixed__prop__all__3__1__2__3, rel___dollorinter__head33__6__1__2__3__4__5__6, DELTA, {2, 0, 1}));
scc126->add_rule(new parallel_join(rel__free__2__1__2, rel__do__free__app__2__2, DELTA, rel___dollorrule29__inter__body__2__1, DELTA, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorinter__head10__3__1__2__3, rel__free__2__2, DELTA, rel___dollorhir__sub3__3__1, DELTA, {5, 2, 4}));
scc126->add_rule(new parallel_copy_generate(rel___dollorinter__head49__10__1__2__3__4__5__6__7__8__9__10, rel___dollorrule55__inter__body9__9__, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {n2d(0)};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = data[1];
head_tuple[1] = data[2];
head_tuple[2] = data[3];
head_tuple[3] = data[4];
head_tuple[4] = data[5];
head_tuple[5] = data[6];
head_tuple[6] = data[7];
head_tuple[7] = data[8];
head_tuple[8] = data[9];
head_tuple[9] = res_0;
        return std::make_tuple(data, output + 10);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 10;
      return tuples_count;
    }));
scc126->add_rule(new parallel_copy(rel__bool__1__1, rel___dollorinter__head8__2__1__2, DELTA, {0}));
scc126->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorinter__head65__3__1__2__3, DELTA, {0, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified60__2__1__2, rel__faddr__2__1__2, DELTA, rel___dollorrule76__inter__body6__3__3__1, DELTA, {4, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule67__inter__body__3__1, rel___dollorrule67__inter__body__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorlst__append__input__2__0, rel___dollorlst__append__input__2__1__2, DELTA, {2, 0, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorhir__sub3__3__1, rel___dollorhir__sub3__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head66__3__1, rel___dollorinter__head66__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc126->add_rule(new parallel_copy(rel__non__list__value__1__1, rel__faddr__2__1__2, DELTA, {2}));
scc126->add_rule(new parallel_join(rel__ret__2__1__2, rel__ret__2__2, FULL, rel___dollorrule51__inter__body__2__1, DELTA, {2, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule69__inter__body__3__1__2__3, rel__store__2__1, DELTA, rel___dollorlst__2__1, DELTA, {4, 3, 2}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified53__3__1__2__3, rel___dollornil__1__1, FULL, rel___dollorrule55__inter__body6__3__2, DELTA, {3, 4, 1}));
scc126->add_rule(new parallel_copy(rel__faddr__2__1__2, rel___dollorinter__head60__3__1__2__3, DELTA, {0, 1}));
scc126->add_rule(new parallel_copy(rel__ret__2__1__2, rel___dollorhead__stratified__3__1__2__3, DELTA, {1, 0}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified32__6__1__2__3__4__5__6, rel__kaddr__1__1, FULL, rel___dollorrule77__inter__body1__5__2, DELTA, {0, 4, 5, 6, 3, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule47__inter__body5__6__5, rel___dollorrule47__inter__body5__6__1__2__3__4__5__6, DELTA, {4, 6, 0, 1, 2, 3, 5}));
scc126->add_rule(new parallel_acopy(rel__vararg__1__0, rel__vararg__1__1, DELTA, {1, 0}));
scc126->add_rule(new parallel_acopy(rel__do__free__lam__3__2, rel__do__free__lam__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub3__6__1__2__3__4__5__6, rel__do__tick__2__1__2, DELTA, rel___dollorinter__head73__7__3__1, FULL, {2, 4, 5, 8, 7, 6}));
scc126->add_rule(new parallel_join(rel___dollorrule69__inter__body7__4__1__2__3__4, rel___dollorsplice__4__1, DELTA, rel___dollorrule69__inter__body6__4__1, FULL, {6, 7, 3, 8}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified48__2__1__2, rel__faddr__2__1__2, FULL, rel___dollorrule77__inter__body5__3__3__1, DELTA, {4, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head5__3__2, rel___dollorinter__head5__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule55__inter__body7__8__1__2__3__4__5__6__7__8, rel___dollorhead__splice1__9__6__9, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == data[1];
        if (! compatible) return state;

        head_tuple[0] = data[9];
head_tuple[1] = data[0];
head_tuple[2] = data[5];
head_tuple[3] = data[7];
head_tuple[4] = data[6];
head_tuple[5] = data[3];
head_tuple[6] = data[4];
head_tuple[7] = data[8];
        return std::make_tuple(data, output + 8);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 8;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorrule56__inter__body__6__1__2__3__4__5__6, rel__lambda__2__1__2, DELTA, rel___dollorinter__head28__7__7__1, DELTA, {5, 6, 7, 2, 8, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head60__3__1__2, rel___dollorinter__head60__3__1__2__3, DELTA, {0, 1, 3, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule78__inter__body3__4__3, rel___dollorrule78__inter__body3__4__1__2__3__4, DELTA, {2, 4, 0, 1, 3}));
scc126->add_rule(new parallel_copy(rel__store__flow__2__1__2, rel___dollorhead__stratified45__2__1__2, DELTA, {0, 1}));
scc126->add_rule(new parallel_join(rel__apply__5__1__2__3__4__5, rel__clo__2__1__2, DELTA, rel___dollorhead__stratified38__6__5__6, FULL, {6, 5, 2, 4, 7}));
scc126->add_rule(new parallel_join(rel___dollorrule78__inter__body6__7__1__2__3__4__5__6__7, rel___dollorrule78__inter__body4__4__2, FULL, rel__apply__5__3, DELTA, {6, 7, 3, 8, 2, 9, 4}));
scc126->add_rule(new parallel_acopy(rel__tick__2__1, rel__tick__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule67__inter__body2__3__1__2__3, rel___dollornil__1__0, DELTA, rel___dollorlst__2__2, DELTA, {2, 1, 3}));
scc126->add_rule(new parallel_copy(rel__saddr__1__1, rel___dollorinter__head12__2__1__2, DELTA, {1}));
scc126->add_rule(new parallel_join(rel___dollorrule77__inter__body3__4__1__2__3__4, rel__clo__2__1, FULL, rel___dollorrule77__inter__body2__3__1, DELTA, {1, 4, 5, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__splice1__9__6__9, rel___dollorhead__splice1__9__1__2__3__4__5__6__7__8__9, DELTA, {5, 8, 9, 0, 1, 2, 3, 4, 6, 7}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule47__inter__body3__1__1, rel___dollornil__1__1, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == n2d(0);
        if (! compatible) return state;

        head_tuple[0] = data[1];
        return std::make_tuple(data, output + 1);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 1;
      return tuples_count;
    }));
scc126->add_rule(new parallel_acopy(rel___dollorrule60__inter__body2__3__3, rel___dollorrule60__inter__body2__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule59__inter__body5__2__1__2, rel___dollorrule59__inter__body3__2__2, DELTA, rel__store__2__1, FULL, {2, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorrule52__inter__body__2__1, rel___dollorrule52__inter__body__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule66__inter__body5__3__1__2__3, rel__store__2__1, DELTA, rel___dollorrule66__inter__body4__3__3, DELTA, {2, 4, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule60__inter__body1__1__1, rel__non__list__value__1__1, DELTA, rel__store__2__2, FULL, {3}));
scc126->add_rule(new parallel_join(rel___dollorrule75__inter__body2__3__1__2__3, rel__faddr__2__1__2, DELTA, rel___dollorinter__head53__3__3__2, DELTA, {4, 1, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule77__inter__body1__5__1__2__3__4__5, rel__faddr__2__1__2, DELTA, rel___dollorrule77__inter__body__6__2__1, DELTA, {2, 4, 5, 6, 7}));
scc126->add_rule(new parallel_copy(rel__store__flow__2__1__2, rel___dollorhead__stratified22__2__1__2, DELTA, {1, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule75__inter__body5__7__1__2__3__4__5__6__7, rel___dollorrule75__inter__body4__4__2, DELTA, rel__apply__5__3, FULL, {6, 7, 2, 8, 3, 9, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule75__inter__body5__7__1__2__3__4__5__6__7, rel___dollorrule75__inter__body4__4__2, DELTA, rel__apply__5__3, DELTA, {6, 7, 2, 8, 3, 9, 4}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub14__4__1__2__3__4, rel__length__input__1__1, DELTA, rel__split__at__end__input__2__2, DELTA, {1, 0, 2, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule9__inter__body1__4__1__2__3__4, rel__addr__1__1, DELTA, rel___dollorinter__head34__3__2, FULL, {3, 0, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule69__inter__body6__4__1__2__3__4, rel___dollorrule69__inter__body5__3__3, DELTA, rel___dollorrule69__inter__body4__3__3, DELTA, {2, 5, 6, 3}));
scc126->add_rule(new parallel_copy(rel__faddr__2__1__2, rel___dollorinter__head10__3__1__2__3, DELTA, {2, 1}));
scc126->add_rule(new parallel_join(rel__tick__2__1__2, rel___dollorlst__2__1__2, DELTA, rel___dollorinter__head54__3__2__3, FULL, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule47__inter__body2__6__1__2__3__4__5__6, rel___dollorlst__2__0__1, DELTA, rel___dollorrule47__inter__body1__7__3__7, FULL, {6, 2, 4, 5, 7, 8}));
scc126->add_rule(new parallel_acopy(rel___dollorrule36__inter__body__2__1, rel___dollorrule36__inter__body__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule69__inter__body9__4__1__2__3__4, rel___dollorlst__split__input__1__0, DELTA, rel___dollorrule69__inter__body8__4__2, FULL, {3, 4, 1, 5}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule67__inter__body8__2__1__2, rel___dollorrule67__inter__body7__3__3, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == s2d("null?");
        if (! compatible) return state;

        head_tuple[0] = data[2];
head_tuple[1] = data[3];
        return std::make_tuple(data, output + 2);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 2;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorrule9__inter__body2__4__1__2__3__4, rel___dollornil__1__1, FULL, rel___dollorrule9__inter__body1__4__3, DELTA, {3, 4, 1, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule69__inter__body2__3__1__2__3, rel___dollornil__1__0, FULL, rel___dollorrule69__inter__body1__3__1, DELTA, {3, 1, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head33__6__3__1__2, rel___dollorinter__head33__6__1__2__3__4__5__6, DELTA, {2, 0, 1, 6, 3, 4, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule46__inter__body6__6__1__2__3__4__5__6, rel___dollorrule46__inter__body3__1__1, DELTA, rel___dollorrule46__inter__body5__7__2, DELTA, {4, 3, 5, 6, 7, 8}));
scc126->add_rule(new parallel_join(rel___dollorrule71__inter__body5__2__1__2, rel__list__of__1__0, FULL, rel__store__2__2, DELTA, {0, 3}));
scc126->add_rule(new parallel_acopy(rel___dollorrule67__inter__body2__3__2, rel___dollorrule67__inter__body2__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule59__inter__body5__2__1__2, rel___dollorrule59__inter__body3__2__2, DELTA, rel__store__2__1, DELTA, {2, 4}));
scc126->add_rule(new parallel_join(rel__length__2__1__2, rel__length__input__1__1, FULL, rel___dollorhead__stratified67__2__2, DELTA, {1, 3}));
scc126->add_rule(new parallel_acopy(rel___dollorrule32__inter__body__2__2, rel___dollorrule32__inter__body__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_acopy(rel___dollorrule59__inter__body4__4__2, rel___dollorrule59__inter__body4__4__1__2__3__4, DELTA, {1, 4, 0, 2, 3}));
scc126->add_rule(new parallel_join(rel___dollorinter__head53__3__1__2__3, rel__free__2__2, FULL, rel___dollorhir__sub__3__1, DELTA, {5, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule57__inter__body1__3__1__2__3, rel__define__prim__2__0, FULL, rel__apply__5__3, DELTA, {1, 7, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule69__inter__body2__3__1__2__3, rel___dollornil__1__0, DELTA, rel___dollorrule69__inter__body1__3__1, DELTA, {3, 1, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorrule46__inter__body6__6__4, rel___dollorrule46__inter__body6__6__1__2__3__4__5__6, DELTA, {3, 6, 0, 1, 2, 4, 5}));
scc126->add_rule(new parallel_join(rel___dollorinter__head25__7__1__2__3__4__5__6__7, rel__vararg__1__0, DELTA, rel___dollorrule77__inter__body4__7__5, FULL, {3, 4, 5, 6, 7, 1, 8}));
scc126->add_rule(new parallel_acopy(rel___dollornil__1__0, rel___dollornil__1__1, DELTA, {1, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule74__inter__body2__2__1__2, rel__vararg__1__1, DELTA, rel___dollorrule74__inter__body__2__2, DELTA, {1, 3}));
scc126->add_rule(new parallel_acopy(rel___dollorrule61__inter__body2__2__2, rel___dollorrule61__inter__body2__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule20__inter__body__3__1__2__3, rel__lambda__2__2, DELTA, rel__free__2__2, FULL, {4, 2, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule76__inter__body4__5__1, rel___dollorrule76__inter__body4__5__1__2__3__4__5, DELTA, {0, 5, 1, 2, 3, 4}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__define__prim__2__1__2, DELTA, rel___dollorhead__stratified65__3__1__3, FULL, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule79__inter__body1__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel__do__fixed__prop__all__3__2, FULL, {4, 1, 2, 5}));
scc126->add_rule(new parallel_copy(rel__appk__5__1__2__3__4__5, rel___dollorhead__stratified44__6__1__2__3__4__5__6, DELTA, {2, 5, 0, 1, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule60__inter__body6__1__1, rel___dollorrule60__inter__body1__1__1, FULL, rel___dollorrule60__inter__body5__2__1, DELTA, {3}));
scc126->add_rule(new parallel_copy_generate(rel___dollorlst__append__2__1__2, rel___dollorrule7__inter__body13__3__3, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == n2d(0);
        if (! compatible) return state;

        head_tuple[0] = data[3];
head_tuple[1] = data[2];
        return std::make_tuple(data, output + 2);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 2;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorrule81__inter__body__3__1__2__3, rel__do__var__prop__all__h__4__1__2__3__4, DELTA, rel___dollorinter__head72__6__2__5__3__4, FULL, {6, 0, 7}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule67__inter__body11__2__1__2, rel___dollorrule67__inter__body10__1__, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("f")};
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
scc126->add_rule(new parallel_join(rel___dollorrule67__inter__body4__2__1__2, rel__store__2__1, DELTA, rel___dollorrule67__inter__body3__2__2, DELTA, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule7__inter__body__7__1__2__3__4__5__6__7, rel__app__2__1__2, DELTA, rel___dollorhead__stratified8__7__7__6, FULL, {4, 5, 6, 8, 2, 1, 7}));
scc126->add_rule(new parallel_join(rel___dollorrule7__inter__body__7__1__2__3__4__5__6__7, rel__app__2__1__2, DELTA, rel___dollorhead__stratified8__7__7__6, DELTA, {4, 5, 6, 8, 2, 1, 7}));
scc126->add_rule(new parallel_join(rel__do__var__prop__all__h__4__1__2__3__4, rel___dollorlst__2__0, FULL, rel___dollorrule80__inter__body__3__3, DELTA, {4, 0, 5, 5}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head62__4__1__3, rel___dollorinter__head62__4__1__2__3__4, DELTA, {0, 2, 4, 1, 3}));
scc126->add_rule(new parallel_join(rel__apply__5__1__2__3__4__5, rel__fixedarg__1__1, FULL, rel___dollorinter__head7__5__2, DELTA, {5, 4, 3, 1, 6}));
scc126->add_rule(new parallel_acopy(rel___dollorrule78__inter__body4__4__2, rel___dollorrule78__inter__body4__4__1__2__3__4, DELTA, {1, 4, 0, 2, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule47__inter__body5__6__1__2__3__4__5__6, rel___dollornil__1__0, DELTA, rel___dollorrule47__inter__body4__6__4, DELTA, {3, 4, 5, 6, 1, 7}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head36__7__3__1, rel___dollorinter__head36__7__1__2__3__4__5__6__7, DELTA, {2, 0, 7, 1, 3, 4, 5, 6}));
scc126->add_rule(new parallel_join(rel__apply__5__1__2__3__4__5, rel__vararg__1__1, DELTA, rel___dollorinter__head38__5__5, FULL, {4, 3, 5, 1, 6}));
scc126->add_rule(new parallel_join(rel___dollorrule63__inter__body1__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel__do__store__addr__union__3__2, DELTA, {5, 2, 4, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule62__inter__body2__2__2, rel___dollorrule62__inter__body2__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_acopy(rel___dollorrule55__inter__body10__3__3, rel___dollorrule55__inter__body10__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head23__6__1__2__3__4__5__6, rel__tick__2__1, DELTA, rel___dollorbir__sub5__6__1, DELTA, {8, 2, 5, 4, 6, 7}));
scc126->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorhead__stratified23__3__1__2__3, DELTA, {2, 1}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub17__2__1__2, rel__length__input__1__1, DELTA, rel___dollorinter__head44__2__1, DELTA, {1, 3}));
scc126->add_rule(new parallel_join(rel___dollorlst__append__input__2__1__2, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified55__3__2__3, FULL, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule66__inter__body6__2__1__2, rel__list__of__1__0__1, FULL, rel___dollorrule66__inter__body5__3__1__2, DELTA, {1, 3}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__halt__0__, DELTA, rel___dollorinter__head19__2__, DELTA, {3, 2, 0}));
scc126->add_rule(new parallel_acopy(rel___dollorrule78__inter__body2__3__1, rel___dollorrule78__inter__body2__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc126->add_rule(new parallel_acopy(rel__lambda__2__0, rel__lambda__2__1__2, DELTA, {2, 0, 1}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__faddr__2__1__2, DELTA, rel___dollorhead__stratified54__3__3__1, FULL, {2, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorrule67__inter__body6__2__1, rel___dollorrule67__inter__body6__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule78__inter__body__3__3__1, rel___dollorrule78__inter__body__3__1__2__3, DELTA, {2, 0, 3, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head59__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorinter__head58__3__2, DELTA, {3, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule80__inter__body__3__1__2__3, rel___dollorlst__2__0, FULL, rel__do__var__prop__all__3__3, DELTA, {4, 0, 5}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head63__5__2__3__1__4, rel___dollorinter__head63__5__1__2__3__4__5, DELTA, {1, 2, 0, 3, 5, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule75__inter__body1__3__1__2__3, rel___dollorhir__sub__3__1__2__3, DELTA, rel___dollorrule75__inter__body__4__2__4__1, FULL, {0, 5, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule74__inter__body1__4__1__2__3__4, rel__define__prim__2__0, FULL, rel__apply__5__3, DELTA, {6, 7, 3, 1}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__define__prim__2__1__2, DELTA, rel___dollorhead__stratified26__3__1__2, FULL, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule61__inter__body__4__1__2__3__4, rel__addr__1__1, DELTA, rel___dollorinter__head3__4__3, DELTA, {1, 4, 3, 5}));
scc126->add_rule(new parallel_acopy(rel___dollorrule66__inter__body6__2__1, rel___dollorrule66__inter__body6__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_join(rel__split__at__3__1__2__3, rel___dollorlst__2__1__2, DELTA, rel___dollorinter__head51__4__3__4, FULL, {5, 2, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorrule71__inter__body4__3__1, rel___dollorrule71__inter__body4__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule61__inter__body1__1__1, rel__define__prim__2__1, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == s2d("cons");
        if (! compatible) return state;

        head_tuple[0] = data[1];
        return std::make_tuple(data, output + 1);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 1;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified10__8__1__2__3__4__5__6__7__8, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified9__8__8__4, DELTA, {4, 5, 6, 1, 7, 8, 9, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule61__inter__body4__3__1__2__3, rel___dollorrule61__inter__body2__2__2, DELTA, rel___dollorrule61__inter__body3__3__3, DELTA, {4, 5, 2}));
scc126->add_rule(new parallel_join(rel___dollorinter__head5__3__1__2__3, rel___dollorrule71__inter__body6__2__1, DELTA, rel___dollorrule71__inter__body4__3__1, FULL, {4, 5, 2}));
scc126->add_rule(new parallel_acopy(rel__applak__4__0, rel__applak__4__1__2__3__4, DELTA, {4, 0, 1, 2, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule48__inter__body3__5__1__2__3__4__5, rel___dollorrule48__inter__body2__2__2, FULL, rel___dollorrule48__inter__body__5__5, DELTA, {4, 5, 2, 6, 7}));
scc126->add_rule(new parallel_join(rel___dollorrule73__inter__body1__4__1__2__3__4, rel__define__prim__2__0, DELTA, rel__apply__5__3, DELTA, {1, 6, 7, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule76__inter__body4__5__1__2__3__4__5, rel__faddr__2__1__2, DELTA, rel___dollorrule76__inter__body3__6__3__2, DELTA, {4, 5, 6, 2, 7}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified49__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorrule10__inter__body__2__1, FULL, {0, 3, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule78__inter__body6__7__1__2__3__4__5__6__7, rel___dollorrule78__inter__body4__4__2, DELTA, rel__apply__5__3, FULL, {6, 7, 3, 8, 2, 9, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule78__inter__body6__7__1__2__3__4__5__6__7, rel___dollorrule78__inter__body4__4__2, DELTA, rel__apply__5__3, DELTA, {6, 7, 3, 8, 2, 9, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified9__8__8__4, rel___dollorhead__stratified9__8__1__2__3__4__5__6__7__8, DELTA, {7, 3, 8, 0, 1, 2, 4, 5, 6}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub4__6__1__2__3__4__5__6, rel__do__tick__2__1__2, DELTA, rel___dollorinter__head36__7__3__1, FULL, {2, 8, 4, 6, 7, 5}));
scc126->add_rule(new parallel_join(rel___dollorinter__head51__4__1__2__3__4, rel___dollorbir__sub13__3__1, FULL, rel__split__at__3__1, DELTA, {6, 2, 3, 5}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified12__7__7__4, rel___dollorhead__stratified12__7__1__2__3__4__5__6__7, DELTA, {6, 3, 7, 0, 1, 2, 4, 5}));
scc126->add_rule(new parallel_acopy(rel__store__2__1, rel__store__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule76__inter__body6__3__1__2__3, rel__faddr__2__1__2, DELTA, rel___dollorinter__head60__3__1__2, FULL, {1, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule32__inter__body__2__1__2, rel__binding__2__2, FULL, rel__free__2__2, DELTA, {4, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified29__4__1__2__3__4, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified28__5__1__5, DELTA, {4, 5, 6, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule76__inter__body3__6__1__2__3__4__5__6, rel___dollorhir__sub1__3__1__2__3, FULL, rel___dollorinter__head40__6__4__6__3, DELTA, {5, 6, 2, 0, 7, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head72__6__2__5__3__4, rel___dollorinter__head72__6__1__2__3__4__5__6, DELTA, {1, 4, 2, 3, 6, 0, 5}));
scc126->add_rule(new parallel_acopy(rel___dollorlst__split__3__3, rel___dollorlst__split__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule57__inter__body__3__3, rel___dollorrule57__inter__body__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc126->add_rule(new parallel_copy(rel__split__at__input__2__1__2, rel___dollorinter__head17__3__1__2__3, DELTA, {0, 2}));
scc126->add_rule(new parallel_join(rel___dollorinter__head70__5__1__2__3__4__5, rel__ret__2__2, FULL, rel__applak__4__0, DELTA, {4, 2, 5, 3, 6}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified17__2__1__2, rel__bool__1__1, FULL, rel___dollorrule66__inter__body__2__2, DELTA, {3, 1}));
scc126->add_rule(new parallel_copy(rel___dollorbir__sub6__7__1__2__3__4__5__6__7, rel___dollorinter__head26__8__1__2__3__4__5__6__7__8, DELTA, {1, 7, 0, 3, 2, 4, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule76__inter__body5__5__1__2__3__4__5, rel__list__of__1__1, DELTA, rel___dollorrule76__inter__body4__5__1, FULL, {3, 4, 5, 1, 6}));
scc126->add_rule(new parallel_acopy(rel___dollorrule69__inter__body8__4__2, rel___dollorrule69__inter__body8__4__1__2__3__4, DELTA, {1, 4, 0, 2, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule69__inter__body6__4__1__2__3__4, rel___dollorrule69__inter__body5__3__3, DELTA, rel___dollorrule69__inter__body4__3__3, FULL, {2, 5, 6, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule46__inter__body6__6__1__2__3__4__5__6, rel___dollorrule46__inter__body3__1__1, FULL, rel___dollorrule46__inter__body5__7__2, DELTA, {4, 3, 5, 6, 7, 8}));
scc126->add_rule(new parallel_join(rel___dollorrule78__inter__body2__3__1__2__3, rel___dollorhir__sub3__3__1__2__3, DELTA, rel___dollorrule78__inter__body1__4__2__4__1, FULL, {0, 5, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule76__inter__body3__6__3__2, rel___dollorrule76__inter__body3__6__1__2__3__4__5__6, DELTA, {2, 1, 6, 0, 3, 4, 5}));
scc126->add_rule(new parallel_acopy(rel___dollorrule34__inter__body1__4__2__4, rel___dollorrule34__inter__body1__4__1__2__3__4, DELTA, {1, 3, 4, 0, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule60__inter__body2__3__1__2__3, rel__fixedarg__1__1, DELTA, rel___dollorlst__2__0, FULL, {3, 0, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule55__inter__body11__4__1__4, rel___dollorrule55__inter__body11__4__1__2__3__4, DELTA, {0, 3, 4, 1, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified25__3__2__1, rel___dollorhead__stratified25__3__1__2__3, DELTA, {1, 0, 3, 2}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified37__7__1__2__3__4__5__6__7, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified36__7__5__7, DELTA, {4, 5, 6, 7, 8, 1, 2}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule71__inter__body1__1__1, rel__define__prim__2__1, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == s2d("cdr");
        if (! compatible) return state;

        head_tuple[0] = data[1];
        return std::make_tuple(data, output + 1);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 1;
      return tuples_count;
    }));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head35__6__6, rel___dollorinter__head35__6__1__2__3__4__5__6, DELTA, {5, 6, 0, 1, 2, 3, 4}));
scc126->add_rule(new parallel_copy_generate(rel___dollorinter__head67__7__1__2__3__4__5__6__7, rel___dollorhead__splice4__6__, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {n2d(0)};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = data[3];
head_tuple[1] = data[1];
head_tuple[2] = data[4];
head_tuple[3] = data[5];
head_tuple[4] = data[6];
head_tuple[5] = res_0;
head_tuple[6] = data[2];
        return std::make_tuple(data, output + 7);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 7;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorrule82__inter__body__4__1__2__3__4, rel___dollornil__1__0, DELTA, rel__do__var__prop__all__h__4__3, FULL, {3, 4, 5, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head32__3__1__2__3, rel__addr__1__1, FULL, rel___dollorinter__head31__3__2, DELTA, {1, 3, 4}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub20__3__1__2__3, rel___dollorlst__split__input__1__1, DELTA, rel___dollorinter__head52__3__3, FULL, {1, 3, 4}));
scc126->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorinter__head11__4__1__2__3__4, DELTA, {3, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule56__inter__body__6__1__2__3__4__5__6, rel__lambda__2__1__2, DELTA, rel___dollorinter__head28__7__7__1, FULL, {5, 6, 7, 2, 8, 4}));
scc126->add_rule(new parallel_copy(rel__split__at__input__2__1__2, rel___dollorinter__head57__4__1__2__3__4, DELTA, {3, 0}));
scc126->add_rule(new parallel_copy_generate(rel___dollorinter__head47__9__1__2__3__4__5__6__7__8__9, rel___dollorrule55__inter__body7__8__, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {n2d(0)};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = data[1];
head_tuple[1] = data[2];
head_tuple[2] = data[3];
head_tuple[3] = data[4];
head_tuple[4] = data[5];
head_tuple[5] = data[6];
head_tuple[6] = data[7];
head_tuple[7] = data[8];
head_tuple[8] = res_0;
        return std::make_tuple(data, output + 9);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 9;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorinter__head25__7__1__2__3__4__5__6__7, rel__vararg__1__0, DELTA, rel___dollorrule77__inter__body4__7__5, DELTA, {3, 4, 5, 6, 7, 1, 8}));
scc126->add_rule(new parallel_join(rel___dollorrule75__inter__body__4__1__2__3__4, rel__do__fixed__prop__all__3__1__2__3, DELTA, rel___dollorinter__head33__6__3__1__2, DELTA, {0, 5, 6, 7}));
scc126->add_rule(new parallel_join(rel___dollorrule21__inter__body__3__1__2__3, rel__lambda__2__2, DELTA, rel__free__2__2, FULL, {2, 1, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule45__inter__body__4__1__2__3__4, rel__let__2__0, FULL, rel__eval__3__1, DELTA, {4, 5, 2, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule63__inter__body2__4__1__2__3__4, rel___dollorrule63__inter__body__1__1, FULL, rel___dollorrule63__inter__body1__4__4, DELTA, {3, 4, 5, 0}));
scc126->add_rule(new parallel_copy(rel__eval__3__1__2__3, rel___dollorinter__head46__4__1__2__3__4, DELTA, {3, 0, 2}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified14__5__1__2__3__4__5, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified13__6__4__6, DELTA, {4, 5, 6, 7, 2}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified6__4__1__2__3__4, rel___dollornil__1__1, DELTA, rel___dollorrule61__inter__body__4__4, FULL, {5, 4, 3, 1}));
scc126->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head27__7__1__2__3__4__5__6__7, DELTA, {5}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified49__3__1__2__3, rel__addr__1__1, FULL, rel___dollorrule10__inter__body__2__1, DELTA, {0, 3, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head8__2__2, rel___dollorinter__head8__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule59__inter__body4__4__1__2__3__4, rel__define__prim__2__0, FULL, rel__apply__5__3, DELTA, {1, 6, 7, 3}));
scc126->add_rule(new parallel_join(rel__do__store__addr__union__3__1__2__3, rel___dollorlst__2__1__2, DELTA, rel___dollorinter__head11__4__4__2, DELTA, {5, 4, 2}));
scc126->add_rule(new parallel_join(rel__free__2__1__2, rel__free__2__2, DELTA, rel__app__2__1, DELTA, {2, 3}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified38__6__1__2__3__4__5__6, rel___dollornil__1__1, DELTA, rel___dollorrule56__inter__body__6__5, DELTA, {7, 3, 4, 5, 6, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified23__3__1__2__3, rel__saddr__1__1, FULL, rel___dollorrule57__inter__body__3__3, DELTA, {4, 3, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head51__4__3__4, rel___dollorinter__head51__4__1__2__3__4, DELTA, {2, 3, 4, 0, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule67__inter__body4__2__2, rel___dollorrule67__inter__body4__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified53__3__1__2__3, DELTA, {1, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule59__inter__body7__4__1__2__3__4, rel__fixedarg__1__0, FULL, rel___dollorrule59__inter__body4__4__2, DELTA, {3, 4, 5, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule47__inter__body1__7__1__2__3__4__5__6__7, rel___dollorrule47__inter__body__3__2, DELTA, rel___dollorbir__sub9__6__1, FULL, {8, 3, 2, 7, 6, 9, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule47__inter__body1__7__1__2__3__4__5__6__7, rel___dollorrule47__inter__body__3__2, DELTA, rel___dollorbir__sub9__6__1, DELTA, {8, 3, 2, 7, 6, 9, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule57__inter__body__3__1__2__3, rel__state__1__1, DELTA, rel___dollorinter__head12__2__2, DELTA, {1, 3, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule78__inter__body__3__1__2__3, rel__faddr__2__1__2, DELTA, rel___dollorinter__head10__3__1__2, FULL, {1, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule66__inter__body__2__1__2, rel__addr__1__1, DELTA, rel___dollorinter__head8__2__2, DELTA, {1, 3}));
scc126->add_rule(new parallel_copy(rel__app__2__1__2, rel___dollorhead__stratified42__4__1__2__3__4, DELTA, {3, 1}));
scc126->add_rule(new parallel_acopy(rel__kaddr__1__0, rel__kaddr__1__1, DELTA, {1, 0}));
scc126->add_rule(new parallel_acopy(rel__free__2__2, rel__free__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule67__inter__body__3__1__2__3, rel__bool__1__1, DELTA, rel___dollorinter__head1__3__3, DELTA, {3, 4, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule7__inter__body3__7__1, rel___dollorrule7__inter__body3__7__1__2__3__4__5__6__7, DELTA, {0, 7, 1, 2, 3, 4, 5, 6}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body6__3__1__2__3, rel___dollorbir__sub1__8__1__2__3__4__5__6__7__8, FULL, rel___dollorinter__head47__9__3__5__6__7__4__2__8__1, DELTA, {0, 10, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule45__inter__body2__6__, rel___dollorrule45__inter__body2__6__1__2__3__4__5__6, DELTA, {6, 0, 1, 2, 3, 4, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule45__inter__body1__5__1__2__3__4__5, rel___dollorlst__2__0, DELTA, rel___dollorrule45__inter__body__4__4, DELTA, {4, 2, 1, 5, 6}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified15__4__1__2__3__4, rel__app__2__1__2, DELTA, rel___dollorhead__stratified14__5__2__5, DELTA, {4, 5, 6, 2}));
scc126->add_rule(new parallel_join(rel__split__at__3__1__2__3, rel___dollorlst__2__1__2, DELTA, rel___dollorinter__head51__4__3__4, DELTA, {5, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule59__inter__body7__4__1__2__3__4, rel__fixedarg__1__0, DELTA, rel___dollorrule59__inter__body4__4__2, FULL, {3, 4, 5, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule59__inter__body1__3__3, rel___dollorrule59__inter__body1__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorlst__2__1, rel___dollorlst__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified55__3__1__2__3, rel___dollornil__1__1, DELTA, rel___dollorrule55__inter__body8__3__3, DELTA, {3, 4, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified55__3__2__3, rel___dollorhead__stratified55__3__1__2__3, DELTA, {1, 2, 3, 0}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub3__6__1__2__3__4__5__6, rel__do__tick__2__1__2, DELTA, rel___dollorinter__head73__7__3__1, DELTA, {2, 4, 5, 8, 7, 6}));
scc126->add_rule(new parallel_join(rel___dollorrule67__inter__body6__2__1__2, rel__list__of__1__0, FULL, rel___dollorrule67__inter__body4__2__2, DELTA, {3, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule62__inter__body__4__1__2__3__4, rel___dollorlst__append__input__2__1__2, DELTA, rel___dollorbir__sub7__5__1__2, DELTA, {2, 5, 4, 6}));
scc126->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified27__3__1__2__3, DELTA, {1, 2}));
scc126->add_rule(new parallel_join(rel___dollorinter__head46__4__1__2__3__4, rel___dollorrule54__inter__body__1__1, FULL, rel__if__k__4__0, DELTA, {4, 2, 5, 3}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__if__k__4__1__2__3__4, DELTA, rel___dollorinter__head15__5__3__5__2__4, FULL, {6, 2, 4}));
scc126->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified21__3__1__2__3, DELTA, {1, 2}));
scc126->add_rule(new parallel_join(rel___dollorinter__head16__7__1__2__3__4__5__6__7, rel___dollorrule55__inter__body__1__1, FULL, rel___dollorrule55__inter__body3__8__6, DELTA, {3, 4, 5, 6, 7, 8, 9}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body12__9__1__2__3__4__5__6__7__8__9, rel___dollorrule55__inter__body11__4__1__4, FULL, rel___dollorbir__sub2__9__1__2, DELTA, {12, 10, 7, 9, 8, 6, 3, 4, 11}));
scc126->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified28__5__1__2__3__4__5, DELTA, {0, 4}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified45__2__1__2, rel__faddr__2__1__2, DELTA, rel___dollorrule79__inter__body__3__1__2, DELTA, {4, 2}));
scc126->add_rule(new parallel_copy(rel__appk__5__1__2__3__4__5, rel___dollorinter__head50__6__1__2__3__4__5__6, DELTA, {1, 3, 2, 0, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule71__inter__body2__2__1__2, rel___dollorrule71__inter__body__1__1, FULL, rel___dollorlst__2__2, DELTA, {2, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule56__inter__body1__6__1__2__3__4__5__6, rel__define__3__0, DELTA, rel__apply__5__3, FULL, {3, 7, 6, 5, 8, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule56__inter__body1__6__1__2__3__4__5__6, rel__define__3__0, DELTA, rel__apply__5__3, DELTA, {3, 7, 6, 5, 8, 2}));
scc126->add_rule(new parallel_copy(rel__faddr__2__1__2, rel___dollorinter__head41__3__1__2__3, DELTA, {0, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorbir__sub20__3__1, rel___dollorbir__sub20__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc126->add_rule(new parallel_join(rel___dollorinter__head62__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel___dollorlst__append__input__2__1, DELTA, {2, 3, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head46__4__1__2__3__4, rel___dollorrule54__inter__body__1__1, DELTA, rel__if__k__4__0, FULL, {4, 2, 5, 3}));
scc126->add_rule(new parallel_join(rel___dollorinter__head61__3__1__2__3, rel___dollorlst__append__2__1, FULL, rel___dollorbir__sub19__3__1, DELTA, {5, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule52__inter__body__2__1__2, rel__ret__2__1, DELTA, rel__store__2__1, FULL, {2, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorrule63__inter__body2__4__, rel___dollorrule63__inter__body2__4__1__2__3__4, DELTA, {4, 0, 1, 2, 3}));
scc126->add_rule(new parallel_join(rel___dollorinter__head40__6__1__2__3__4__5__6, rel__tick__2__1, DELTA, rel___dollorbir__sub4__6__1, FULL, {5, 8, 2, 6, 7, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule47__inter__body5__6__1__2__3__4__5__6, rel___dollornil__1__0, DELTA, rel___dollorrule47__inter__body4__6__4, FULL, {3, 4, 5, 6, 1, 7}));
scc126->add_rule(new parallel_join(rel___dollorinter__head61__3__1__2__3, rel___dollorlst__append__2__1, DELTA, rel___dollorbir__sub19__3__1, DELTA, {5, 2, 4}));
scc126->add_rule(new parallel_acopy(rel__do__free__app__2__2, rel__do__free__app__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule2__inter__body2__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel__split__at__input__2__2, FULL, {2, 1, 4, 3}));
scc126->add_rule(new parallel_acopy(rel___dollorrule74__inter__body__2__2, rel___dollorrule74__inter__body__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head64__3__2, rel___dollorinter__head64__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc126->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified12__7__1__2__3__4__5__6__7, DELTA, {6, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule7__inter__body__7__1__2__3__4__5__6__7, rel__app__2__1__2, FULL, rel___dollorhead__stratified8__7__7__6, DELTA, {4, 5, 6, 8, 2, 1, 7}));
scc126->add_rule(new parallel_join(rel___dollorrule47__inter__body4__6__1__2__3__4__5__6, rel__ret__2__2, FULL, rel__appk__5__0, DELTA, {4, 6, 3, 5, 7, 2}));
scc126->add_rule(new parallel_copy(rel__fixedarg__1__1, rel___dollorinter__head7__5__1__2__3__4__5, DELTA, {1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule22__inter__body__4__2__3, rel___dollorrule22__inter__body__4__1__2__3__4, DELTA, {1, 2, 4, 0, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule46__inter__body4__8__1__2__3__4__5__6__7__8, rel___dollorlst__append__input__2__1, FULL, rel___dollorbir__sub6__7__1, DELTA, {2, 6, 7, 5, 1, 8, 9, 4}));
scc126->add_rule(new parallel_join(rel___dollorlst__append__2__1__2, rel___dollorlst__2__1__2, DELTA, rel___dollorinter__head61__3__3__2, FULL, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule20__inter__body__3__1__2__3, rel__lambda__2__2, FULL, rel__free__2__2, DELTA, {4, 2, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head30__7__3__1, rel___dollorinter__head30__7__1__2__3__4__5__6__7, DELTA, {2, 0, 7, 1, 3, 4, 5, 6}));
scc126->add_rule(new parallel_join(rel___dollorrule67__inter__body10__1__1, rel___dollorrule67__inter__body9__2__2, FULL, rel___dollorlst__2__0, DELTA, {2}));
scc126->add_rule(new parallel_join(rel___dollorrule76__inter__body5__5__1__2__3__4__5, rel__list__of__1__1, FULL, rel___dollorrule76__inter__body4__5__1, DELTA, {3, 4, 5, 1, 6}));
scc126->add_rule(new parallel_join(rel___dollorrule50__inter__body__5__1__2__3__4__5, rel__ret__2__2, DELTA, rel__applfk__4__0, DELTA, {5, 3, 4, 6, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule78__inter__body3__4__1__2__3__4, rel__clo__2__1, DELTA, rel__lambda__2__0, DELTA, {1, 4, 3, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule71__inter__body4__3__1__2__3, rel__fixedarg__1__0, FULL, rel___dollorrule71__inter__body3__3__3, DELTA, {1, 3, 4}));
scc126->add_rule(new parallel_join(rel___dollorinter__head36__7__1__2__3__4__5__6__7, rel__varparam__1__0, FULL, rel___dollorrule76__inter__body2__7__4, DELTA, {3, 4, 5, 1, 6, 7, 8}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified35__3__2__3, rel___dollorhead__stratified35__3__1__2__3, DELTA, {1, 2, 3, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule82__inter__body__4__1__2__3__4, rel___dollornil__1__0, DELTA, rel__do__var__prop__all__h__4__3, DELTA, {3, 4, 5, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified49__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorrule10__inter__body__2__1, DELTA, {0, 3, 1}));
scc126->add_rule(new parallel_copy(rel__ret__2__1__2, rel___dollorhead__stratified6__4__1__2__3__4, DELTA, {2, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule69__inter__body6__4__1, rel___dollorrule69__inter__body6__4__1__2__3__4, DELTA, {0, 4, 1, 2, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule81__inter__body__3__1__2__3, rel__do__var__prop__all__h__4__1__2__3__4, DELTA, rel___dollorinter__head72__6__2__5__3__4, DELTA, {6, 0, 7}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified13__6__4__6, rel___dollorhead__stratified13__6__1__2__3__4__5__6, DELTA, {3, 5, 6, 0, 1, 2, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorrule47__inter__body2__6__2, rel___dollorrule47__inter__body2__6__1__2__3__4__5__6, DELTA, {1, 6, 0, 2, 3, 4, 5}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__store__2__1, DELTA, rel__store__flow__2__1, FULL, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule29__inter__body__2__1__2, rel___dollorlst__2__1, DELTA, rel__free__2__2, FULL, {1, 4}));
scc126->add_rule(new parallel_join(rel___dollorinter__head11__4__1__2__3__4, rel___dollorlst__append__2__1, FULL, rel___dollorrule62__inter__body__4__1, DELTA, {4, 2, 5, 6}));
scc126->add_rule(new parallel_join(rel___dollorrule67__inter__body__3__1__2__3, rel__bool__1__1, FULL, rel___dollorinter__head1__3__3, DELTA, {3, 4, 1}));
scc126->add_rule(new parallel_copy(rel__list__of__1__1, rel___dollorinter__head40__6__1__2__3__4__5__6, DELTA, {0}));
scc126->add_rule(new parallel_copy(rel__split__at__end__input__2__1__2, rel___dollorbir__sub11__4__1__2__3__4, DELTA, {1, 3}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified60__2__1__2, rel__faddr__2__1__2, FULL, rel___dollorrule76__inter__body6__3__3__1, DELTA, {4, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule2__inter__body2__4__3, rel___dollorrule2__inter__body2__4__1__2__3__4, DELTA, {2, 4, 0, 1, 3}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head11__4__4__2, rel___dollorinter__head11__4__1__2__3__4, DELTA, {3, 1, 4, 0, 2}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified11__7__1__2__3__4__5__6__7, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified10__8__6__8, FULL, {4, 5, 6, 7, 8, 9, 2}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified11__7__1__2__3__4__5__6__7, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified10__8__6__8, DELTA, {4, 5, 6, 7, 8, 9, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head31__3__2, rel___dollorinter__head31__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule7__inter__body2__7__1__2__3__4__5__6__7, rel__quote__1__1, DELTA, rel___dollorrule7__inter__body1__7__7, FULL, {3, 4, 1, 8, 5, 6, 7}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__if__k__4__1__2__3__4, DELTA, rel___dollorinter__head15__5__3__5__2__4, DELTA, {6, 2, 4}));
scc126->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified29__4__1__2__3__4, DELTA, {2, 3}));
scc126->add_rule(new parallel_acopy(rel__quote__1__0, rel__quote__1__1, DELTA, {1, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule54__inter__body__1__1, rel__saddr__1__0, DELTA, rel__ret__2__1, FULL, {3}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified20__4__1__2__3__4, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified19__5__4__5, FULL, {4, 5, 6, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule77__inter__body2__3__1, rel___dollorrule77__inter__body2__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule48__inter__body3__5__1__2__3__4__5, rel___dollorrule48__inter__body2__2__2, DELTA, rel___dollorrule48__inter__body__5__5, FULL, {4, 5, 2, 6, 7}));
scc126->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified10__8__1__2__3__4__5__6__7__8, DELTA, {5, 7}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__faddr__2__1__2, FULL, rel___dollorhead__stratified54__3__3__1, DELTA, {2, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule77__inter__body3__4__1__2__3__4, rel__clo__2__1, DELTA, rel___dollorrule77__inter__body2__3__1, DELTA, {1, 4, 5, 2}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified46__6__1__2__3__4__5__6, rel__kaddr__1__1, DELTA, rel___dollorrule76__inter__body5__5__1, DELTA, {0, 3, 6, 4, 5, 1}));
scc126->add_rule(new parallel_copy(rel___dollorbir__sub7__5__1__2__3__4__5, rel___dollorhead__splice3__5__1__2__3__4__5, DELTA, {3, 4, 0, 1, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule60__inter__body5__2__1__2, rel___dollorrule60__inter__body3__1__1, DELTA, rel___dollorlst__2__2, DELTA, {3, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule7__inter__body4__7__1__2__3__4__5__6__7, rel__int__1__1, FULL, rel___dollorrule7__inter__body3__7__1, DELTA, {4, 5, 6, 1, 7, 3, 8}));
scc126->add_rule(new parallel_copy(rel__do__var__prop__all__h__4__1__2__3__4, rel___dollorinter__head72__6__1__2__3__4__5__6, DELTA, {1, 4, 2, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule57__inter__body__3__1__2__3, rel__state__1__1, DELTA, rel___dollorinter__head12__2__2, FULL, {1, 3, 0}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule47__inter__body6__5__1__2__3__4__5, rel___dollorrule47__inter__body5__6__5, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == n2d(0);
        if (! compatible) return state;

        head_tuple[0] = data[2];
head_tuple[1] = data[3];
head_tuple[2] = data[4];
head_tuple[3] = data[5];
head_tuple[4] = data[6];
        return std::make_tuple(data, output + 5);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 5;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorinter__head7__5__1__2__3__4__5, rel___dollorrule47__inter__body3__1__1, FULL, rel___dollorrule47__inter__body2__6__2, DELTA, {4, 5, 3, 6, 7}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule55__inter__body__1__1, rel___dollornil__1__1, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == n2d(0);
        if (! compatible) return state;

        head_tuple[0] = data[1];
        return std::make_tuple(data, output + 1);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 1;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorrule21__inter__body__3__1__2__3, rel__lambda__2__2, FULL, rel__free__2__2, DELTA, {2, 1, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule47__inter__body__3__1__2__3, rel___dollorlst__append__input__2__0, DELTA, rel___dollorlst__append__2__1, DELTA, {2, 1, 4}));
scc126->add_rule(new parallel_join(rel__free__2__1__2, rel__free__2__2, DELTA, rel__if__3__1, FULL, {2, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule48__inter__body2__2__1__2, rel__ret__2__1, DELTA, rel__store__2__1, FULL, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule9__inter__body2__4__1__2__3__4, rel___dollornil__1__1, DELTA, rel___dollorrule9__inter__body1__4__3, FULL, {3, 4, 1, 5}));
scc126->add_rule(new parallel_acopy(rel___dollorrule59__inter__body9__4__2, rel___dollorrule59__inter__body9__4__1__2__3__4, DELTA, {1, 4, 0, 2, 3}));
scc126->add_rule(new parallel_acopy(rel___dollorbir__sub5__6__1, rel___dollorbir__sub5__6__1__2__3__4__5__6, DELTA, {0, 6, 1, 2, 3, 4, 5}));
scc126->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorhead__stratified1__2__1__2, DELTA, {0, 1}));
scc126->add_rule(new parallel_join(rel___dollorsplice__4__1__2__3__4, rel___dollorbir__sub__1__1, DELTA, rel___dollorrule69__inter__body9__4__3, FULL, {0, 3, 5, 4}));
scc126->add_rule(new parallel_join(rel___dollorhead__splice1__9__1__2__3__4__5__6__7__8__9, rel___dollorrule55__inter__body13__1__1, FULL, rel___dollorrule55__inter__body12__9__7, DELTA, {8, 9, 5, 7, 6, 4, 10, 3, 4}));
scc126->add_rule(new parallel_acopy(rel__split__at__input__2__2, rel__split__at__input__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_join(rel__do__store__addr__union__3__1__2__3, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified29__4__3__4, DELTA, {5, 4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule32__inter__body1__2__1__2, rel__do__free__let__rhs__2__2, FULL, rel___dollorlst__2__0, DELTA, {2, 3}));
scc126->add_rule(new parallel_copy_generate(rel___dollorinter__head1__3__1__2__3, rel___dollorrule67__inter__body11__2__, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("t")};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = data[2];
head_tuple[1] = res_0;
head_tuple[2] = data[1];
        return std::make_tuple(data, output + 3);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 3;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorrule69__inter__body2__3__1__2__3, rel___dollornil__1__0, DELTA, rel___dollorrule69__inter__body1__3__1, FULL, {3, 1, 4}));
scc126->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorinter__head59__3__1__2__3, DELTA, {2, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule69__inter__body9__4__1__2__3__4, rel___dollorlst__split__input__1__0, DELTA, rel___dollorrule69__inter__body8__4__2, DELTA, {3, 4, 1, 5}));
scc126->add_rule(new parallel_join(rel___dollorinter__head29__2__1__2, rel___dollorrule64__inter__body__1__1, DELTA, rel__do__store__addr__union__3__2, FULL, {4, 3}));
scc126->add_rule(new parallel_join(rel___dollorinter__head13__5__1__2__3__4__5, rel___dollorrule48__inter__body1__1__1, DELTA, rel___dollorrule48__inter__body3__5__5, FULL, {3, 4, 5, 6, 0}));
scc126->add_rule(new parallel_copy(rel___dollorlst__append__input__2__1__2, rel___dollorinter__head62__4__1__2__3__4, DELTA, {0, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule67__inter__body4__2__1__2, rel__store__2__1, FULL, rel___dollorrule67__inter__body3__2__2, DELTA, {4, 2}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule59__inter__body8__3__1__2__3, rel___dollorrule59__inter__body7__4__1, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == s2d("cons");
        if (! compatible) return state;

        head_tuple[0] = data[2];
head_tuple[1] = data[3];
head_tuple[2] = data[4];
        return std::make_tuple(data, output + 3);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 3;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorrule63__inter__body__1__1, rel__non__list__value__1__1, DELTA, rel__store__2__2, DELTA, {3}));
scc126->add_rule(new parallel_join(rel___dollorrule71__inter__body3__3__1__2__3, rel___dollorrule71__inter__body1__1__1, FULL, rel__apply__5__3, DELTA, {6, 2, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule45__inter__body2__6__1__2__3__4__5__6, rel__binding__2__0, FULL, rel___dollorrule45__inter__body1__5__3, DELTA, {2, 4, 5, 6, 1, 7}));
scc126->add_rule(new parallel_acopy(rel___dollorrule2__inter__body3__4__3, rel___dollorrule2__inter__body3__4__1__2__3__4, DELTA, {2, 4, 0, 1, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule81__inter__body1__5__1__2__3__4__5, rel___dollorlst__2__0, DELTA, rel__do__var__prop__all__h__4__3, FULL, {4, 2, 6, 5, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule57__inter__body1__3__1__2__3, rel__define__prim__2__0, DELTA, rel__apply__5__3, FULL, {1, 7, 3}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified53__3__2__3, rel___dollorhead__stratified53__3__1__2__3, DELTA, {1, 2, 3, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule61__inter__body2__2__1__2, rel__vararg__1__1, DELTA, rel__store__2__1, FULL, {3, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule67__inter__body8__2__1, rel___dollorrule67__inter__body8__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head73__7__1__2__3__4__5__6__7, rel__fixedarg__1__0, FULL, rel___dollorrule75__inter__body5__7__4, DELTA, {3, 1, 4, 5, 6, 7, 8}));
scc126->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified9__8__1__2__3__4__5__6__7__8, DELTA, {7, 3}));
scc126->add_rule(new parallel_acopy(rel___dollorrule82__inter__body1__4__4, rel___dollorrule82__inter__body1__4__1__2__3__4, DELTA, {3, 4, 0, 1, 2}));
scc126->add_rule(new parallel_join(rel___dollorinter__head53__3__1__2__3, rel__free__2__2, DELTA, rel___dollorhir__sub__3__1, DELTA, {5, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified43__4__1__2__3__4, rel__fixedparam__1__1, DELTA, rel___dollorrule9__inter__body__4__3, DELTA, {4, 5, 1, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule67__inter__body2__3__1__2__3, rel___dollornil__1__0, DELTA, rel___dollorlst__2__2, FULL, {2, 1, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule75__inter__body2__3__1__2__3, rel__faddr__2__1__2, FULL, rel___dollorinter__head53__3__3__2, DELTA, {4, 1, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule69__inter__body__3__1__2__3, rel__store__2__1, FULL, rel___dollorlst__2__1, DELTA, {4, 3, 2}));
scc126->add_rule(new parallel_join(rel___dollorhead__splice2__8__1__2__3__4__5__6__7__8, rel___dollorlst__2__0, DELTA, rel___dollorrule46__inter__body__6__3, FULL, {4, 5, 8, 2, 6, 7, 1, 6}));
scc126->add_rule(new parallel_join(rel___dollorhead__splice2__8__1__2__3__4__5__6__7__8, rel___dollorlst__2__0, DELTA, rel___dollorrule46__inter__body__6__3, DELTA, {4, 5, 8, 2, 6, 7, 1, 6}));
scc126->add_rule(new parallel_join(rel___dollorrule63__inter__body2__4__1__2__3__4, rel___dollorrule63__inter__body__1__1, DELTA, rel___dollorrule63__inter__body1__4__4, DELTA, {3, 4, 5, 0}));
scc126->add_rule(new parallel_join(rel___dollorinter__head66__3__1__2__3, rel___dollorrule60__inter__body6__1__1, DELTA, rel___dollorrule60__inter__body8__4__1, DELTA, {3, 4, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule7__inter__body13__3__1__2__3, rel___dollornil__1__0, DELTA, rel___dollorlst__append__input__2__1, FULL, {3, 2, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule55__inter__body12__9__7, rel___dollorrule55__inter__body12__9__1__2__3__4__5__6__7__8__9, DELTA, {6, 9, 0, 1, 2, 3, 4, 5, 7, 8}));
scc126->add_rule(new parallel_join(rel___dollorrule21__inter__body__3__1__2__3, rel__lambda__2__2, DELTA, rel__free__2__2, DELTA, {2, 1, 4}));
scc126->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorhead__stratified50__3__1__2__3, DELTA, {1, 2}));
scc126->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head28__7__1__2__3__4__5__6__7, DELTA, {5}));
scc126->add_rule(new parallel_join(rel___dollorinter__head54__3__1__2__3, rel___dollorrule37__inter__body__1__1, DELTA, rel__do__tick__2__1, FULL, {2, 3, 0}));
scc126->add_rule(new parallel_copy(rel__list__of__1__1, rel___dollorinter__head29__2__1__2, DELTA, {0}));
scc126->add_rule(new parallel_acopy(rel__ret__2__2, rel__ret__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_acopy(rel___dollorlst__split__3__1, rel___dollorlst__split__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule69__inter__body4__3__3, rel___dollorrule69__inter__body4__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule69__inter__body5__3__1__2__3, rel__list__of__1__0, DELTA, rel___dollorrule69__inter__body2__3__1, DELTA, {1, 3, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorrule69__inter__body__3__2, rel___dollorrule69__inter__body__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub5__6__1__2__3__4__5__6, rel__do__tick__2__1__2, DELTA, rel___dollorinter__head25__7__2__1, FULL, {2, 6, 5, 7, 8, 4}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub17__2__1__2, rel__length__input__1__1, DELTA, rel___dollorinter__head44__2__1, FULL, {1, 3}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub8__6__1__2__3__4__5__6, rel__do__tick__2__1__2, DELTA, rel___dollorinter__head30__7__3__1, DELTA, {2, 4, 7, 6, 5, 8}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub20__3__1__2__3, rel___dollorlst__split__input__1__1, DELTA, rel___dollorinter__head52__3__3, DELTA, {1, 3, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule66__inter__body2__3__1__2__3, rel__fixedarg__1__0, DELTA, rel__apply__5__4, FULL, {5, 1, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorbir__sub4__6__1, rel___dollorbir__sub4__6__1__2__3__4__5__6, DELTA, {0, 6, 1, 2, 3, 4, 5}));
scc126->add_rule(new parallel_copy_generate(rel___dollorinter__head26__8__1__2__3__4__5__6__7__8, rel___dollorrule46__inter__body2__7__, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {n2d(0)};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = data[1];
head_tuple[1] = data[2];
head_tuple[2] = data[3];
head_tuple[3] = data[4];
head_tuple[4] = data[5];
head_tuple[5] = data[6];
head_tuple[6] = res_0;
head_tuple[7] = data[7];
        return std::make_tuple(data, output + 8);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 8;
      return tuples_count;
    }));
scc126->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorinter__head6__3__1__2__3, DELTA, {2, 1}));
scc126->add_rule(new parallel_acopy(rel__fixedarg__1__0, rel__fixedarg__1__1, DELTA, {1, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule76__inter__body1__6__1__2__3__4__5__6, rel__clo__2__0, FULL, rel___dollorrule76__inter__body__5__4, DELTA, {4, 5, 6, 1, 7, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule48__inter__body3__5__1__2__3__4__5, rel___dollorrule48__inter__body2__2__2, DELTA, rel___dollorrule48__inter__body__5__5, DELTA, {4, 5, 2, 6, 7}));
scc126->add_rule(new parallel_join(rel___dollorrule77__inter__body2__3__1__2__3, rel__varparam__1__0, FULL, rel__lambda__2__1, DELTA, {2, 1, 3}));
scc126->add_rule(new parallel_acopy(rel___dollorrule61__inter__body5__3__, rel___dollorrule61__inter__body5__3__1__2__3, DELTA, {3, 0, 1, 2}));
scc126->add_rule(new parallel_copy_generate(rel___dollorinter__head71__3__1__2__3, rel___dollorlst__split__input__1__, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {n2d(0)};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = data[0];
head_tuple[1] = data[1];
head_tuple[2] = res_0;
        return std::make_tuple(data, output + 3);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 3;
      return tuples_count;
    }));
scc126->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head66__3__1__2__3, DELTA, {2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule71__inter__body2__2__2, rel___dollorrule71__inter__body2__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__splice__10__7__10, rel___dollorhead__splice__10__1__2__3__4__5__6__7__8__9__10, DELTA, {6, 9, 10, 0, 1, 2, 3, 4, 5, 7, 8}));
scc126->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified18__6__1__2__3__4__5__6, DELTA, {0, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule42__inter__body__5__1__2__3__4__5, rel__app__2__0, FULL, rel__eval__3__1, DELTA, {2, 4, 0, 5, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified20__4__3__4, rel___dollorhead__stratified20__4__1__2__3__4, DELTA, {2, 3, 4, 0, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule66__inter__body8__1__, rel___dollorrule66__inter__body8__1__1, DELTA, {1, 0}));
scc126->add_rule(new parallel_acopy(rel___dollorrule74__inter__body2__2__1, rel___dollorrule74__inter__body2__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified54__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorrule5__inter__body__2__2, DELTA, {0, 1, 3}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified19__5__1__2__3__4__5, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified18__6__1__6, DELTA, {4, 5, 6, 7, 2}));
scc126->add_rule(new parallel_copy(rel__do__var__prop__all__3__1__2__3, rel___dollorinter__head22__6__1__2__3__4__5__6, DELTA, {2, 0, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule75__inter__body__4__2__4__1, rel___dollorrule75__inter__body__4__1__2__3__4, DELTA, {1, 3, 0, 4, 2}));
scc126->add_rule(new parallel_copy(rel__do__tick__2__1__2, rel___dollorinter__head25__7__1__2__3__4__5__6__7, DELTA, {1, 0}));
scc126->add_rule(new parallel_acopy(rel___dollorrule47__inter__body4__6__4, rel___dollorrule47__inter__body4__6__1__2__3__4__5__6, DELTA, {3, 6, 0, 1, 2, 4, 5}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule64__inter__body__1__1, rel___dollornil__1__1, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == n2d(0);
        if (! compatible) return state;

        head_tuple[0] = data[1];
        return std::make_tuple(data, output + 1);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 1;
      return tuples_count;
    }));
scc126->add_rule(new parallel_acopy(rel___dollorrule42__inter__body__5__, rel___dollorrule42__inter__body__5__1__2__3__4__5, DELTA, {5, 0, 1, 2, 3, 4}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__appk__5__1__2__3__4__5, DELTA, rel___dollorinter__head50__6__2__4__3__1__5, DELTA, {7, 3, 5}));
scc126->add_rule(new parallel_join(rel___dollorinter__head65__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorinter__head64__3__2, FULL, {1, 3, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorrule67__inter__body11__2__, rel___dollorrule67__inter__body11__2__1__2, DELTA, {2, 0, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified30__4__1__2__3__4, rel__kaddr__1__1, DELTA, rel___dollorrule78__inter__body2__3__1, FULL, {0, 3, 4, 1}));
scc126->add_rule(new parallel_join(rel__free__2__1__2, rel___dollorrule35__inter__body__1__1, DELTA, rel__do__free__let__lhs__3__2, FULL, {4, 3}));
scc126->add_rule(new parallel_join(rel___dollorlst__append__2__1__2, rel___dollorlst__2__1__2, FULL, rel___dollorinter__head61__3__3__2, DELTA, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorinter__head6__3__1__2__3, rel__addr__1__1, FULL, rel___dollorinter__head5__3__2, DELTA, {3, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head22__6__1__2__3__4__5__6, rel__tick__2__1, DELTA, rel___dollorbir__sub8__6__1, DELTA, {7, 4, 2, 6, 5, 8}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified19__5__1__2__3__4__5, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified18__6__1__6, DELTA, {4, 5, 6, 7, 2}));
scc126->add_rule(new parallel_join(rel__free__2__1__2, rel__free__2__2, DELTA, rel__if__3__3, FULL, {2, 3}));
scc126->add_rule(new parallel_copy_generate(rel___dollorinter__head27__7__1__2__3__4__5__6__7, rel___dollorrule45__inter__body2__6__, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {n2d(0)};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = data[1];
head_tuple[1] = data[2];
head_tuple[2] = data[3];
head_tuple[3] = data[4];
head_tuple[4] = data[5];
head_tuple[5] = res_0;
head_tuple[6] = data[6];
        return std::make_tuple(data, output + 7);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 7;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel__free__2__1__2, rel___dollorrule35__inter__body__1__1, DELTA, rel__do__free__let__lhs__3__2, DELTA, {4, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule66__inter__body4__3__1__2__3, rel___dollorlst__2__0, DELTA, rel___dollorrule66__inter__body3__2__1, DELTA, {2, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorlst__append__input__2__1__2, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified53__3__2__3, DELTA, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified34__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorrule8__inter__body__2__1, DELTA, {0, 3, 1}));
scc126->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head47__9__1__2__3__4__5__6__7__8__9, DELTA, {8}));
scc126->add_rule(new parallel_copy(rel__do__tick__2__1__2, rel___dollorinter__head73__7__1__2__3__4__5__6__7, DELTA, {2, 0}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified28__5__1__5, rel___dollorhead__stratified28__5__1__2__3__4__5, DELTA, {0, 4, 5, 1, 2, 3}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__applfk__4__1__2__3__4, DELTA, rel___dollorinter__head70__5__4__2__3__5, FULL, {6, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorinter__head44__2__1__2, rel__length__input__1__1, DELTA, rel___dollorlst__2__0, FULL, {3, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule78__inter__body7__2__1__2, rel__vararg__1__1, FULL, rel___dollorrule78__inter__body5__2__2, DELTA, {3, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head51__4__1__2__3__4, rel___dollorbir__sub13__3__1, DELTA, rel__split__at__3__1, FULL, {6, 2, 3, 5}));
scc126->add_rule(new parallel_join(rel__apply__5__1__2__3__4__5, rel__vararg__1__1, FULL, rel___dollorinter__head38__5__5, DELTA, {4, 3, 5, 1, 6}));
scc126->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head49__10__1__2__3__4__5__6__7__8__9__10, DELTA, {9}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__faddr__2__1__2, DELTA, rel___dollorhead__stratified34__3__2__1, FULL, {2, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head55__2__1, rel___dollorinter__head55__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule67__inter__body10__1__, rel___dollorrule67__inter__body10__1__1, DELTA, {1, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body3__8__1__2__3__4__5__6__7__8, rel___dollorlst__append__2__1, FULL, rel___dollorrule55__inter__body2__8__6, DELTA, {4, 5, 6, 7, 8, 9, 2, 10}));
scc126->add_rule(new parallel_join(rel___dollorrule66__inter__body__2__1__2, rel__addr__1__1, DELTA, rel___dollorinter__head8__2__2, FULL, {1, 3}));
scc126->add_rule(new parallel_acopy(rel___dollorrule77__inter__body3__4__1, rel___dollorrule77__inter__body3__4__1__2__3__4, DELTA, {0, 4, 1, 2, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule47__inter__body4__6__1__2__3__4__5__6, rel__ret__2__2, DELTA, rel__appk__5__0, DELTA, {4, 6, 3, 5, 7, 2}));
scc126->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorinter__head32__3__1__2__3, DELTA, {0, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorbir__sub7__5__1__2, rel___dollorbir__sub7__5__1__2__3__4__5, DELTA, {0, 1, 5, 2, 3, 4}));
scc126->add_rule(new parallel_copy(rel__faddr__2__1__2, rel___dollorhead__stratified34__3__1__2__3, DELTA, {1, 0}));
scc126->add_rule(new parallel_join(rel__apply__5__1__2__3__4__5, rel__fixedarg__1__1, DELTA, rel___dollorinter__head7__5__2, DELTA, {5, 4, 3, 1, 6}));
scc126->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head26__8__1__2__3__4__5__6__7__8, DELTA, {6}));
scc126->add_rule(new parallel_join(rel___dollorrule59__inter__body6__2__1__2, rel__list__of__1__0, DELTA, rel___dollorrule59__inter__body5__2__2, FULL, {3, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule55__inter__body4__7__7, rel___dollorrule55__inter__body4__7__1__2__3__4__5__6__7, DELTA, {6, 7, 0, 1, 2, 3, 4, 5}));
scc126->add_rule(new parallel_join(rel___dollorinter__head38__5__1__2__3__4__5, rel__store__2__1, FULL, rel___dollorrule50__inter__body__5__3, DELTA, {4, 5, 2, 6, 7}));
scc126->add_rule(new parallel_join(rel___dollorrule29__inter__body__2__1__2, rel___dollorlst__2__1, FULL, rel__free__2__2, DELTA, {1, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule34__inter__body1__4__1__2__3__4, rel__do__free__let__lhs__3__2, DELTA, rel___dollorrule34__inter__body__3__3, DELTA, {2, 3, 5, 6}));
scc126->add_rule(new parallel_join(rel___dollorrule66__inter__body__2__1__2, rel__addr__1__1, FULL, rel___dollorinter__head8__2__2, DELTA, {1, 3}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified4__3__1__2__3, rel__addr__1__1, FULL, rel___dollorrule41__inter__body__3__2, DELTA, {3, 1, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule53__inter__body__2__1__2, rel__bool__1__0, FULL, rel__store__2__2, DELTA, {1, 3}));
scc126->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorhead__stratified17__2__1__2, DELTA, {0, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule51__inter__body__2__1__2, rel__kaddr__1__0, FULL, rel__store__2__1, DELTA, {0, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule50__inter__body__5__1__2__3__4__5, rel__ret__2__2, FULL, rel__applfk__4__0, DELTA, {5, 3, 4, 6, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule46__inter__body5__7__2, rel___dollorrule46__inter__body5__7__1__2__3__4__5__6__7, DELTA, {1, 7, 0, 2, 3, 4, 5, 6}));
scc126->add_rule(new parallel_join(rel__do__var__prop__all__h__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel___dollorrule80__inter__body__3__3, DELTA, {4, 0, 5, 5}));
scc126->add_rule(new parallel_acopy(rel__app__2__1, rel__app__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorbir__sub1__8__1, rel___dollorbir__sub1__8__1__2__3__4__5__6__7__8, DELTA, {0, 8, 1, 2, 3, 4, 5, 6, 7}));
scc126->add_rule(new parallel_acopy(rel___dollorrule48__inter__body3__5__5, rel___dollorrule48__inter__body3__5__1__2__3__4__5, DELTA, {4, 5, 0, 1, 2, 3}));
scc126->add_rule(new parallel_copy(rel__faddr__2__1__2, rel___dollorhead__stratified25__3__1__2__3, DELTA, {1, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body8__3__1__2__3, rel___dollorbir__sub2__9__1__2__3__4__5__6__7__8__9, FULL, rel___dollorinter__head49__10__7__9__6__3__5__4__2__8__1, DELTA, {0, 1, 11}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified38__6__1__2__3__4__5__6, rel___dollornil__1__1, DELTA, rel___dollorrule56__inter__body__6__5, FULL, {7, 3, 4, 5, 6, 1}));
scc126->add_rule(new parallel_copy(rel___dollorbir__sub1__8__1__2__3__4__5__6__7__8, rel___dollorinter__head47__9__1__2__3__4__5__6__7__8__9, DELTA, {2, 4, 5, 6, 3, 1, 7, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule48__inter__body2__2__1__2, rel__ret__2__1, FULL, rel__store__2__1, DELTA, {4, 2}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule60__inter__body4__1__1, rel__define__prim__2__1, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == s2d("cons");
        if (! compatible) return state;

        head_tuple[0] = data[1];
        return std::make_tuple(data, output + 1);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 1;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorrule66__inter__body3__2__1__2, rel___dollorrule66__inter__body1__1__1, FULL, rel___dollorrule66__inter__body2__3__1, DELTA, {3, 4}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__define__3__1__2__3, FULL, rel___dollorhead__stratified43__4__1__3__4, DELTA, {5, 3}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule53__inter__body2__1__1, rel___dollorrule53__inter__body__2__1, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == s2d("f");
        if (! compatible) return state;

        head_tuple[0] = data[2];
        return std::make_tuple(data, output + 1);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 1;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorhead__splice4__6__1__2__3__4__5__6, rel__store__2__1, DELTA, rel___dollorrule47__inter__body7__6__4, FULL, {5, 8, 4, 6, 2, 7}));
scc126->add_rule(new parallel_join(rel___dollorinter__head45__3__1__2__3, rel__fixedarg__1__0, FULL, rel___dollorrule73__inter__body2__3__3, DELTA, {1, 3, 4}));
scc126->add_rule(new parallel_copy(rel__non__list__value__1__1, rel__quote__1__1, DELTA, {1}));
scc126->add_rule(new parallel_join(rel___dollorrule69__inter__body8__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel___dollorlst__split__3__3, FULL, {5, 4, 2, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule79__inter__body__3__1__2, rel___dollorrule79__inter__body__3__1__2__3, DELTA, {0, 1, 3, 2}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel___dollorrule52__inter__body1__1__1, FULL, rel___dollorrule52__inter__body2__4__4, DELTA, {4, 3, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule59__inter__body1__3__1__2__3, rel___dollorlst__2__1__2, DELTA, rel___dollorinter__head__4__1__2, DELTA, {2, 4, 5}));
scc126->add_rule(new parallel_acopy(rel___dollorrule7__inter__body7__7__2, rel___dollorrule7__inter__body7__7__1__2__3__4__5__6__7, DELTA, {1, 7, 0, 2, 3, 4, 5, 6}));
scc126->add_rule(new parallel_join(rel___dollorrule34__inter__body1__4__1__2__3__4, rel__do__free__let__lhs__3__2, DELTA, rel___dollorrule34__inter__body__3__3, FULL, {2, 3, 5, 6}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__appk__5__1__2__3__4__5, FULL, rel___dollorinter__head50__6__2__4__3__1__5, DELTA, {7, 3, 5}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head53__3__3__2, rel___dollorinter__head53__3__1__2__3, DELTA, {2, 1, 3, 0}));
scc126->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorinter__head39__4__1__2__3__4, DELTA, {1, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head70__5__4__2__3__5, rel___dollorinter__head70__5__1__2__3__4__5, DELTA, {3, 1, 2, 4, 5, 0}));
scc126->add_rule(new parallel_acopy(rel___dollorrule78__inter__body6__7__4, rel___dollorrule78__inter__body6__7__1__2__3__4__5__6__7, DELTA, {3, 7, 0, 1, 2, 4, 5, 6}));
scc126->add_rule(new parallel_copy(rel__faddr__2__1__2, rel___dollorinter__head37__5__1__2__3__4__5, DELTA, {2, 3}));
scc126->add_rule(new parallel_join(rel__ret__2__1__2, rel___dollorrule40__inter__body1__2__2, DELTA, rel__store__2__1, FULL, {4, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified29__4__3__4, rel___dollorhead__stratified29__4__1__2__3__4, DELTA, {2, 3, 4, 0, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head56__3__1__2__3, rel__addr__1__1, FULL, rel___dollorinter__head55__2__1, DELTA, {1, 0, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule69__inter__body7__4__1__2__3__4, rel___dollorsplice__4__1, FULL, rel___dollorrule69__inter__body6__4__1, DELTA, {6, 7, 3, 8}));
scc126->add_rule(new parallel_copy(rel__faddr__2__1__2, rel___dollorhead__stratified54__3__1__2__3, DELTA, {2, 0}));
scc126->add_rule(new parallel_acopy(rel___dollorrule59__inter__body__2__1, rel___dollorrule59__inter__body__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule75__inter__body4__4__1__2__3__4, rel__clo__2__1, DELTA, rel___dollorrule75__inter__body3__3__2, FULL, {4, 1, 5, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule63__inter__body1__4__1__2__3__4, rel___dollorlst__2__0, FULL, rel__do__store__addr__union__3__2, DELTA, {5, 2, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule47__inter__body8__3__1__2__3, rel___dollorbir__sub9__6__1__2__3__4__5__6, FULL, rel___dollorinter__head67__7__2__7__1__3__4__5, DELTA, {0, 8, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule78__inter__body5__2__1__2, rel__list__of__1__0, FULL, rel__store__2__2, DELTA, {1, 3}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head40__6__4__6__3, rel___dollorinter__head40__6__1__2__3__4__5__6, DELTA, {3, 5, 2, 6, 0, 1, 4}));
scc126->add_rule(new parallel_join(rel___dollorhead__splice__10__1__2__3__4__5__6__7__8__9__10, rel__binding__2__0, FULL, rel___dollorrule55__inter__body5__8__2, DELTA, {8, 9, 1, 5, 7, 6, 4, 10, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified62__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorrule60__inter__body__3__3, DELTA, {4, 3, 1}));
scc126->add_rule(new parallel_join(rel__free__2__1__2, rel___dollorrule35__inter__body__1__1, FULL, rel__do__free__let__lhs__3__2, DELTA, {4, 3}));
scc126->add_rule(new parallel_join(rel___dollorinter__head73__7__1__2__3__4__5__6__7, rel__fixedarg__1__0, DELTA, rel___dollorrule75__inter__body5__7__4, DELTA, {3, 1, 4, 5, 6, 7, 8}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule71__inter__body__1__1, rel___dollornil__1__1, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == n2d(0);
        if (! compatible) return state;

        head_tuple[0] = data[1];
        return std::make_tuple(data, output + 1);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 1;
      return tuples_count;
    }));
scc126->add_rule(new parallel_acopy(rel___dollorbir__sub2__9__1__2, rel___dollorbir__sub2__9__1__2__3__4__5__6__7__8__9, DELTA, {0, 1, 9, 2, 3, 4, 5, 6, 7, 8}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__define__prim__2__1__2, FULL, rel___dollorhead__stratified65__3__1__3, DELTA, {4, 2}));
scc126->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head31__3__1__2__3, DELTA, {1}));
scc126->add_rule(new parallel_copy(rel___dollorbir__sub__1__1, rel__list__of__1__1, DELTA, {0}));
scc126->add_rule(new parallel_acopy(rel___dollorlst__2__2, rel___dollorlst__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule69__inter__body5__3__1__2__3, rel__list__of__1__0, DELTA, rel___dollorrule69__inter__body2__3__1, FULL, {1, 3, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule54__inter__body__1__1, rel__saddr__1__0, FULL, rel__ret__2__1, DELTA, {3}));
scc126->add_rule(new parallel_join(rel___dollorrule71__inter__body3__3__1__2__3, rel___dollorrule71__inter__body1__1__1, DELTA, rel__apply__5__3, DELTA, {6, 2, 5}));
scc126->add_rule(new parallel_acopy(rel___dollorrule75__inter__body2__3__1__2, rel___dollorrule75__inter__body2__3__1__2__3, DELTA, {0, 1, 3, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule71__inter__body6__2__1__2, rel___dollorrule71__inter__body5__2__2, FULL, rel___dollorrule71__inter__body2__2__2, DELTA, {4, 2}));
scc126->add_rule(new parallel_copy_generate(rel___dollorinter__head21__5__1__2__3__4__5, rel___dollorrule63__inter__body2__4__, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {n2d(0)};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = data[1];
head_tuple[1] = data[2];
head_tuple[2] = data[3];
head_tuple[3] = res_0;
head_tuple[4] = data[4];
        return std::make_tuple(data, output + 5);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 5;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified22__2__1__2, rel__faddr__2__1__2, FULL, rel___dollorrule78__inter__body__3__3__1, DELTA, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorlst__append__input__2__1__2, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified64__3__2__3, FULL, {4, 2}));
scc126->add_rule(new parallel_copy(rel__bool__1__1, rel___dollorinter__head1__3__1__2__3, DELTA, {2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule75__inter__body4__4__2, rel___dollorrule75__inter__body4__4__1__2__3__4, DELTA, {1, 4, 0, 2, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body2__8__1__2__3__4__5__6__7__8, rel___dollorlst__2__0__1, FULL, rel___dollorrule55__inter__body1__9__9__3, DELTA, {4, 5, 7, 8, 9, 10, 2, 6}));
scc126->add_rule(new parallel_acopy(rel__saddr__1__0, rel__saddr__1__1, DELTA, {1, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule60__inter__body8__4__1__2__3__4, rel___dollorrule60__inter__body2__3__3, DELTA, rel___dollorrule60__inter__body7__3__3, FULL, {2, 3, 5, 6}));
scc126->add_rule(new parallel_join(rel___dollorrule78__inter__body1__4__1__2__3__4, rel__do__var__prop__all__3__1__2__3, FULL, rel___dollorinter__head22__6__3__1__2, DELTA, {0, 5, 6, 7}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified34__3__1__2__3, rel__addr__1__1, FULL, rel___dollorrule8__inter__body__2__1, DELTA, {0, 3, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorbir__sub19__3__1, rel___dollorbir__sub19__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__faddr__2__1__2, DELTA, rel___dollorhead__stratified49__3__2__1, DELTA, {2, 4}));
scc126->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified19__5__1__2__3__4__5, DELTA, {3, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule60__inter__body1__1__1, rel__non__list__value__1__1, DELTA, rel__store__2__2, DELTA, {3}));
scc126->add_rule(new parallel_join(rel__do__free__app__2__1__2, rel__do__free__app__2__2, DELTA, rel___dollorlst__2__0, DELTA, {2, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule73__inter__body__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorinter__head45__3__3, DELTA, {3, 4, 1}));
scc126->add_rule(new parallel_join(rel__apply__5__1__2__3__4__5, rel__clo__2__1__2, FULL, rel___dollorhead__stratified38__6__5__6, DELTA, {6, 5, 2, 4, 7}));
scc126->add_rule(new parallel_join(rel___dollorrule66__inter__body5__3__1__2__3, rel__store__2__1, DELTA, rel___dollorrule66__inter__body4__3__3, FULL, {2, 4, 5}));
scc126->add_rule(new parallel_acopy(rel___dollorrule67__inter__body3__2__2, rel___dollorrule67__inter__body3__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified28__5__1__2__3__4__5, rel___dollornil__1__1, FULL, rel___dollorinter__head21__5__4, DELTA, {3, 4, 5, 6, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head19__2__1__2, rel___dollorrule36__inter__body1__1__1, DELTA, rel___dollorrule36__inter__body2__2__1, FULL, {0, 3}));
scc126->add_rule(new parallel_join(rel__apply__5__1__2__3__4__5, rel__fixedarg__1__1, FULL, rel___dollorinter__head13__5__5, DELTA, {4, 3, 5, 1, 6}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified18__6__1__2__3__4__5__6, rel___dollornil__1__1, DELTA, rel___dollorinter__head9__6__3, FULL, {3, 4, 5, 6, 7, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule66__inter__body2__3__1__2__3, rel__fixedarg__1__0, DELTA, rel__apply__5__4, DELTA, {5, 1, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule78__inter__body5__2__1__2, rel__list__of__1__0, DELTA, rel__store__2__2, DELTA, {1, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule78__inter__body__3__1__2__3, rel__faddr__2__1__2, FULL, rel___dollorinter__head10__3__1__2, DELTA, {1, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified55__3__1__2__3, rel___dollornil__1__1, DELTA, rel___dollorrule55__inter__body8__3__3, FULL, {3, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule80__inter__body__3__1__2__3, rel___dollorlst__2__0, DELTA, rel__do__var__prop__all__3__3, DELTA, {4, 0, 5}));
scc126->add_rule(new parallel_join(rel___dollorsplice__4__1__2__3__4, rel___dollorbir__sub__1__1, DELTA, rel___dollorrule69__inter__body9__4__3, DELTA, {0, 3, 5, 4}));
scc126->add_rule(new parallel_join(rel___dollorinter__head7__5__1__2__3__4__5, rel___dollorrule47__inter__body3__1__1, DELTA, rel___dollorrule47__inter__body2__6__2, FULL, {4, 5, 3, 6, 7}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body10__3__1__2__3, rel___dollorlst__append__2__1, DELTA, rel___dollorlst__append__input__2__0, DELTA, {3, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified35__3__1__2__3, rel___dollornil__1__1, DELTA, rel___dollorrule46__inter__body1__3__2, DELTA, {3, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule53__inter__body1__4__1__2__3__4, rel__ret__2__2, DELTA, rel__if__k__4__0, FULL, {5, 6, 2, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified36__7__5__7, rel___dollorhead__stratified36__7__1__2__3__4__5__6__7, DELTA, {4, 6, 7, 0, 1, 2, 3, 5}));
scc126->add_rule(new parallel_join(rel___dollorinter__head60__3__1__2__3, rel__free__2__2, DELTA, rel___dollorhir__sub1__3__1, FULL, {5, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule80__inter__body__3__1__2__3, rel___dollorlst__2__0, DELTA, rel__do__var__prop__all__3__3, FULL, {4, 0, 5}));
scc126->add_rule(new parallel_copy_generate(rel___dollorinter__head8__2__1__2, rel___dollorrule66__inter__body8__1__, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("t")};
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
scc126->add_rule(new parallel_join(rel__do__free__let__lhs__3__1__2__3, rel__free__2__2, DELTA, rel__let__2__2, FULL, {3, 4, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule74__inter__body1__4__1, rel___dollorrule74__inter__body1__4__1__2__3__4, DELTA, {0, 4, 1, 2, 3}));
scc126->add_rule(new parallel_join(rel___dollorinter__head54__3__1__2__3, rel___dollorrule37__inter__body__1__1, DELTA, rel__do__tick__2__1, DELTA, {2, 3, 0}));
scc126->add_rule(new parallel_copy(rel__do__store__addr__union__3__1__2__3, rel___dollorhead__stratified6__4__1__2__3__4, DELTA, {2, 0, 3}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub11__4__1__2__3__4, rel___dollorbir__sub10__3__1, DELTA, rel__split__at__3__1, DELTA, {2, 3, 5, 6}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified12__7__1__2__3__4__5__6__7, rel__app__2__1__2, FULL, rel___dollorhead__stratified11__7__2__7, DELTA, {4, 0, 5, 6, 7, 8, 2}));
scc126->add_rule(new parallel_acopy(rel__do__free__let__rhs__2__2, rel__do__free__let__rhs__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__splice4__6__, rel___dollorhead__splice4__6__1__2__3__4__5__6, DELTA, {6, 0, 1, 2, 3, 4, 5}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub8__6__1__2__3__4__5__6, rel__do__tick__2__1__2, FULL, rel___dollorinter__head30__7__3__1, DELTA, {2, 4, 7, 6, 5, 8}));
scc126->add_rule(new parallel_join(rel___dollorrule57__inter__body__3__1__2__3, rel__state__1__1, FULL, rel___dollorinter__head12__2__2, DELTA, {1, 3, 0}));
scc126->add_rule(new parallel_copy_generate(rel___dollorinter__head17__3__1__2__3, rel___dollorrule4__inter__body__5__1__4, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 2> {data[1], data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = []( TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = data[3];
head_tuple[1] = data[4];
head_tuple[2] = data[5];
        return std::make_tuple(data, output + 3);
      };
      auto [_,new_ptr] = builtin_ge<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 3;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorrule79__inter__body__3__1__2__3, rel__do__fixed__prop__all__3__1__2__3, DELTA, rel___dollorinter__head37__5__3__1__2, FULL, {0, 5, 6}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified68__2__1__2, rel__faddr__2__1__2, FULL, rel___dollorrule81__inter__body__3__2__1, DELTA, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub18__2__1__2, rel___dollorbir__sub17__2__1, DELTA, rel__length__2__1, FULL, {2, 4}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__faddr__2__1__2, DELTA, rel___dollorhead__stratified34__3__2__1, DELTA, {2, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule51__inter__body__2__1__2, rel__kaddr__1__0, DELTA, rel__store__2__1, FULL, {0, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule59__inter__body6__2__1__2, rel__list__of__1__0, DELTA, rel___dollorrule59__inter__body5__2__2, DELTA, {3, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule77__inter__body__6__1__2__3__4__5__6, rel___dollorhir__sub2__3__1__2__3, DELTA, rel___dollorinter__head23__6__3__6__2, FULL, {5, 2, 0, 6, 7, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule77__inter__body__6__1__2__3__4__5__6, rel___dollorhir__sub2__3__1__2__3, DELTA, rel___dollorinter__head23__6__3__6__2, DELTA, {5, 2, 0, 6, 7, 1}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__list__of__1__1, DELTA, rel___dollorinter__head29__2__1, FULL, {3, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorlst__append__input__2__1, rel___dollorlst__append__input__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_join(rel__do__free__lam__3__1__2__3, rel__fixedparam__1__0, FULL, rel___dollorrule21__inter__body__3__1, DELTA, {3, 1, 4}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule36__inter__body1__1__1, rel___dollornil__1__1, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == n2d(0);
        if (! compatible) return state;

        head_tuple[0] = data[1];
        return std::make_tuple(data, output + 1);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 1;
      return tuples_count;
    }));
scc126->add_rule(new parallel_copy(rel___dollorbir__sub9__6__1__2__3__4__5__6, rel___dollorinter__head67__7__1__2__3__4__5__6__7, DELTA, {1, 6, 0, 2, 3, 4}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified53__3__1__2__3, rel___dollornil__1__1, DELTA, rel___dollorrule55__inter__body6__3__2, DELTA, {3, 4, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorbir__sub18__2__2, rel___dollorbir__sub18__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule78__inter__body7__2__1__2, rel__vararg__1__1, DELTA, rel___dollorrule78__inter__body5__2__2, FULL, {3, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule2__inter__body__2__1, rel___dollorrule2__inter__body__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__splice3__5__1__2__3__4__5, rel___dollorrule62__inter__body2__2__2, FULL, rel___dollorrule62__inter__body1__4__4, DELTA, {6, 5, 0, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule78__inter__body7__2__1__2, rel__vararg__1__1, DELTA, rel___dollorrule78__inter__body5__2__2, DELTA, {3, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule55__inter__body6__3__2, rel___dollorrule55__inter__body6__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule75__inter__body3__3__1__2__3, rel__fixedparam__1__0, DELTA, rel__lambda__2__1, FULL, {1, 2, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule79__inter__body1__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel__do__fixed__prop__all__3__2, DELTA, {4, 1, 2, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule76__inter__body__5__1__2__3__4__5, rel__fixedarg__1__0, DELTA, rel__apply__5__4, DELTA, {3, 1, 4, 5, 6}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head10__3__1__2, rel___dollorinter__head10__3__1__2__3, DELTA, {0, 1, 3, 2}));
scc126->add_rule(new parallel_join(rel__split__at__3__1__2__3, rel___dollorlst__2__1__2, FULL, rel___dollorinter__head51__4__3__4, DELTA, {5, 2, 4}));
scc126->add_rule(new parallel_acopy(rel__do__free__let__lhs__3__2, rel__do__free__let__lhs__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified44__6__3__6__1__2__4, rel___dollorhead__stratified44__6__1__2__3__4__5__6, DELTA, {2, 5, 0, 1, 3, 6, 4}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified30__4__1__2__3__4, rel__kaddr__1__1, FULL, rel___dollorrule78__inter__body2__3__1, DELTA, {0, 3, 4, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule40__inter__body__3__1__2, rel___dollorrule40__inter__body__3__1__2__3, DELTA, {0, 1, 3, 2}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified40__4__1__2__3__4, rel__kaddr__1__1, FULL, rel___dollorrule75__inter__body1__3__1, DELTA, {0, 3, 4, 1}));
scc126->add_rule(new parallel_copy(rel__ret__2__1__2, rel___dollorinter__head65__3__1__2__3, DELTA, {0, 2}));
scc126->add_rule(new parallel_join(rel___dollorinter__head64__3__1__2__3, rel__quote__1__0, DELTA, rel__eval__3__1, FULL, {1, 0, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorbir__sub8__6__1, rel___dollorbir__sub8__6__1__2__3__4__5__6, DELTA, {0, 6, 1, 2, 3, 4, 5}));
scc126->add_rule(new parallel_acopy(rel___dollorrule40__inter__body1__2__2, rel___dollorrule40__inter__body1__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule47__inter__body__3__1__2__3, rel___dollorlst__append__input__2__0, FULL, rel___dollorlst__append__2__1, DELTA, {2, 1, 4}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub15__4__1__2__3__4, rel__length__2__1, FULL, rel___dollorbir__sub14__4__1, DELTA, {4, 5, 6, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule34__inter__body__3__3, rel___dollorrule34__inter__body__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule7__inter__body1__7__1__2__3__4__5__6__7, rel__quote__1__1, DELTA, rel___dollorrule7__inter__body__7__4, DELTA, {5, 1, 3, 4, 6, 7, 8}));
scc126->add_rule(new parallel_join(rel__free__2__1__2, rel__free__2__2, DELTA, rel__app__2__1, FULL, {2, 3}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub5__6__1__2__3__4__5__6, rel__do__tick__2__1__2, DELTA, rel___dollorinter__head25__7__2__1, DELTA, {2, 6, 5, 7, 8, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorrule61__inter__body__4__4, rel___dollorrule61__inter__body__4__1__2__3__4, DELTA, {3, 4, 0, 1, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule66__inter__body5__3__1__2, rel___dollorrule66__inter__body5__3__1__2__3, DELTA, {0, 1, 3, 2}));
scc126->add_rule(new parallel_join(rel___dollorinter__head5__3__1__2__3, rel___dollorrule71__inter__body6__2__1, DELTA, rel___dollorrule71__inter__body4__3__1, DELTA, {4, 5, 2}));
scc126->add_rule(new parallel_copy(rel__clo__2__1__2, rel___dollorhead__stratified38__6__1__2__3__4__5__6, DELTA, {4, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule57__inter__body1__3__1__2__3, rel__define__prim__2__0, DELTA, rel__apply__5__3, DELTA, {1, 7, 3}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__faddr__2__1__2, FULL, rel___dollorhead__stratified34__3__2__1, DELTA, {2, 4}));
scc126->add_rule(new parallel_join(rel___dollorinter__head33__6__1__2__3__4__5__6, rel__tick__2__1, DELTA, rel___dollorbir__sub3__6__1, DELTA, {5, 4, 2, 8, 7, 6}));
scc126->add_rule(new parallel_join(rel___dollorinter__head66__3__1__2__3, rel___dollorrule60__inter__body6__1__1, DELTA, rel___dollorrule60__inter__body8__4__1, FULL, {3, 4, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule69__inter__body4__3__1__2__3, rel___dollorrule69__inter__body3__1__1, DELTA, rel__apply__5__3, FULL, {6, 2, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule62__inter__body2__2__1__2, rel__list__of__1__0, FULL, rel__store__2__2, DELTA, {1, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule47__inter__body8__3__1__2__3, rel___dollorbir__sub9__6__1__2__3__4__5__6, DELTA, rel___dollorinter__head67__7__2__7__1__3__4__5, FULL, {0, 8, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule47__inter__body8__3__1__2__3, rel___dollorbir__sub9__6__1__2__3__4__5__6, DELTA, rel___dollorinter__head67__7__2__7__1__3__4__5, DELTA, {0, 8, 1}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__define__3__1__2__3, DELTA, rel___dollorhead__stratified43__4__1__3__4, FULL, {5, 3}));
scc126->add_rule(new parallel_join(rel___dollorinter__head7__5__1__2__3__4__5, rel___dollorrule47__inter__body3__1__1, DELTA, rel___dollorrule47__inter__body2__6__2, DELTA, {4, 5, 3, 6, 7}));
scc126->add_rule(new parallel_join(rel___dollorrule60__inter__body1__1__1, rel__non__list__value__1__1, FULL, rel__store__2__2, DELTA, {3}));
scc126->add_rule(new parallel_join(rel___dollorinter__head29__2__1__2, rel___dollorrule64__inter__body__1__1, DELTA, rel__do__store__addr__union__3__2, DELTA, {4, 3}));
scc126->add_rule(new parallel_copy(rel__eval__3__1__2__3, rel___dollorhead__stratified32__6__1__2__3__4__5__6, DELTA, {0, 3, 5}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub3__6__1__2__3__4__5__6, rel__do__tick__2__1__2, FULL, rel___dollorinter__head73__7__3__1, DELTA, {2, 4, 5, 8, 7, 6}));
scc126->add_rule(new parallel_copy(rel__ret__2__1__2, rel___dollorinter__head59__3__1__2__3, DELTA, {2, 0}));
scc126->add_rule(new parallel_acopy(rel___dollorrule76__inter__body6__3__3__1, rel___dollorrule76__inter__body6__3__1__2__3, DELTA, {2, 0, 3, 1}));
scc126->add_rule(new parallel_join(rel__do__store__addr__union__3__1__2__3, rel___dollorlst__2__1__2, FULL, rel___dollorinter__head11__4__4__2, DELTA, {5, 4, 2}));
scc126->add_rule(new parallel_join(rel___dollorinter__head29__2__1__2, rel___dollorrule64__inter__body__1__1, FULL, rel__do__store__addr__union__3__2, DELTA, {4, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule82__inter__body1__4__1__2__3__4, rel___dollorlst__2__0, FULL, rel___dollorrule82__inter__body__4__2, DELTA, {4, 2, 5, 6}));
scc126->add_rule(new parallel_join(rel___dollorrule59__inter__body6__2__1__2, rel__list__of__1__0, FULL, rel___dollorrule59__inter__body5__2__2, DELTA, {3, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head26__8__2__8__1__4__3__5__6, rel___dollorinter__head26__8__1__2__3__4__5__6__7__8, DELTA, {1, 7, 0, 3, 2, 4, 5, 8, 6}));
scc126->add_rule(new parallel_acopy(rel___dollorrule55__inter__body9__9__, rel___dollorrule55__inter__body9__9__1__2__3__4__5__6__7__8__9, DELTA, {9, 0, 1, 2, 3, 4, 5, 6, 7, 8}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified10__8__6__8, rel___dollorhead__stratified10__8__1__2__3__4__5__6__7__8, DELTA, {5, 7, 8, 0, 1, 2, 3, 4, 6}));
scc126->add_rule(new parallel_copy(rel__ret__2__1__2, rel___dollorhead__stratified4__3__1__2__3, DELTA, {1, 0}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified23__3__1__2__3, rel__saddr__1__1, DELTA, rel___dollorrule57__inter__body__3__3, DELTA, {4, 3, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified54__3__1__2__3, rel__addr__1__1, FULL, rel___dollorrule5__inter__body__2__2, DELTA, {0, 1, 3}));
scc126->add_rule(new parallel_join(rel___dollorlst__append__input__2__1__2, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified55__3__2__3, DELTA, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule67__inter__body1__3__1__2__3, rel__addr__1__1, FULL, rel___dollorrule67__inter__body__3__1, DELTA, {4, 1, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule74__inter__body3__4__1__2__3__4, rel___dollorrule74__inter__body2__2__1, FULL, rel___dollorrule74__inter__body1__4__1, DELTA, {4, 5, 2, 6}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified64__3__1__2__3, rel___dollornil__1__1, DELTA, rel___dollorrule47__inter__body8__3__2, DELTA, {3, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule76__inter__body1__6__1__2__3__4__5__6, rel__clo__2__0, DELTA, rel___dollorrule76__inter__body__5__4, DELTA, {4, 5, 6, 1, 7, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head54__3__2__3, rel___dollorinter__head54__3__1__2__3, DELTA, {1, 2, 3, 0}));
scc126->add_rule(new parallel_copy(rel__fixedarg__1__1, rel___dollorinter__head13__5__1__2__3__4__5, DELTA, {4}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified68__2__1__2, rel__faddr__2__1__2, DELTA, rel___dollorrule81__inter__body__3__2__1, FULL, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub5__6__1__2__3__4__5__6, rel__do__tick__2__1__2, FULL, rel___dollorinter__head25__7__2__1, DELTA, {2, 6, 5, 7, 8, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head12__2__2, rel___dollorinter__head12__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_copy(rel__ret__2__1__2, rel___dollorhead__stratified50__3__1__2__3, DELTA, {1, 0}));
scc126->add_rule(new parallel_acopy(rel___dollorrule51__inter__body__2__1, rel___dollorrule51__inter__body__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule71__inter__body3__3__1__2__3, rel___dollorrule71__inter__body1__1__1, DELTA, rel__apply__5__3, FULL, {6, 2, 5}));
scc126->add_rule(new parallel_acopy(rel__do__var__prop__all__h__4__3, rel__do__var__prop__all__h__4__1__2__3__4, DELTA, {2, 4, 0, 1, 3}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head58__3__2, rel___dollorinter__head58__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule77__inter__body1__5__2, rel___dollorrule77__inter__body1__5__1__2__3__4__5, DELTA, {1, 5, 0, 2, 3, 4}));
scc126->add_rule(new parallel_join(rel___dollorinter__head60__3__1__2__3, rel__free__2__2, FULL, rel___dollorhir__sub1__3__1, DELTA, {5, 2, 4}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule73__inter__body2__3__1__2__3, rel___dollorrule73__inter__body1__4__1, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == s2d("list");
        if (! compatible) return state;

        head_tuple[0] = data[3];
head_tuple[1] = data[4];
head_tuple[2] = data[2];
        return std::make_tuple(data, output + 3);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 3;
      return tuples_count;
    }));
scc126->add_rule(new parallel_copy(rel__faddr__2__1__2, rel___dollorinter__head23__6__1__2__3__4__5__6, DELTA, {1, 0}));
scc126->add_rule(new parallel_join(rel___dollorinter__head60__3__1__2__3, rel__free__2__2, DELTA, rel___dollorhir__sub1__3__1, DELTA, {5, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified29__4__1__2__3__4, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified28__5__1__5, FULL, {4, 5, 6, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule46__inter__body__6__1__2__3__4__5__6, rel__ret__2__2, DELTA, rel__appk__5__0, FULL, {3, 4, 5, 6, 7, 2}));
scc126->add_rule(new parallel_join(rel___dollorinter__head73__7__1__2__3__4__5__6__7, rel__fixedarg__1__0, DELTA, rel___dollorrule75__inter__body5__7__4, FULL, {3, 1, 4, 5, 6, 7, 8}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule48__inter__body1__1__1, rel___dollornil__1__1, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == n2d(0);
        if (! compatible) return state;

        head_tuple[0] = data[1];
        return std::make_tuple(data, output + 1);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 1;
      return tuples_count;
    }));
scc126->add_rule(new parallel_acopy(rel___dollorrule29__inter__body__2__1, rel___dollorrule29__inter__body__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_acopy(rel__split__at__end__input__2__2, rel__split__at__end__input__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_acopy(rel___dollorrule77__inter__body4__7__5, rel___dollorrule77__inter__body4__7__1__2__3__4__5__6__7, DELTA, {4, 7, 0, 1, 2, 3, 5, 6}));
scc126->add_rule(new parallel_join(rel___dollorrule62__inter__body1__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel__do__store__addr__union__3__2, DELTA, {5, 2, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub17__2__1__2, rel__length__input__1__1, FULL, rel___dollorinter__head44__2__1, DELTA, {1, 3}));
scc126->add_rule(new parallel_acopy(rel___dollorrule69__inter__body9__4__3, rel___dollorrule69__inter__body9__4__1__2__3__4, DELTA, {2, 4, 0, 1, 3}));
scc126->add_rule(new parallel_copy(rel__ret__2__1__2, rel___dollorhead__stratified62__3__1__2__3, DELTA, {2, 0}));
scc126->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorhead__stratified62__3__1__2__3, DELTA, {2, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule76__inter__body1__6__4, rel___dollorrule76__inter__body1__6__1__2__3__4__5__6, DELTA, {3, 6, 0, 1, 2, 4, 5}));
scc126->add_rule(new parallel_join(rel___dollorlst__split__3__1__2__3, rel___dollorlst__2__1__2, DELTA, rel___dollorinter__head39__4__2__3, DELTA, {5, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule53__inter__body__2__1__2, rel__bool__1__0, DELTA, rel__store__2__2, DELTA, {1, 3}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head67__7__2__7__1__3__4__5, rel___dollorinter__head67__7__1__2__3__4__5__6__7, DELTA, {1, 6, 0, 2, 3, 4, 7, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule66__inter__body6__2__1__2, rel__list__of__1__0__1, DELTA, rel___dollorrule66__inter__body5__3__1__2, FULL, {1, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule67__inter__body10__1__1, rel___dollorrule67__inter__body9__2__2, DELTA, rel___dollorlst__2__0, DELTA, {2}));
scc126->add_rule(new parallel_acopy(rel___dollorrule57__inter__body1__3__1, rel___dollorrule57__inter__body1__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule69__inter__body7__4__1__2__3__4, rel___dollorsplice__4__1, DELTA, rel___dollorrule69__inter__body6__4__1, DELTA, {6, 7, 3, 8}));
scc126->add_rule(new parallel_join(rel___dollorinter__head38__5__1__2__3__4__5, rel__store__2__1, DELTA, rel___dollorrule50__inter__body__5__3, DELTA, {4, 5, 2, 6, 7}));
scc126->add_rule(new parallel_join(rel__do__free__let__rhs__2__1__2, rel___dollorlst__2__0, FULL, rel__do__free__let__rhs__2__2, DELTA, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorinter__head62__4__1__2__3__4, rel___dollorlst__2__0, FULL, rel___dollorlst__append__input__2__1, DELTA, {2, 3, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule10__inter__body__2__1__2, rel___dollornil__1__1, DELTA, rel___dollorinter__head43__2__2, FULL, {3, 1}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__list__of__1__1, DELTA, rel___dollorinter__head29__2__1, DELTA, {3, 1}));
scc126->add_rule(new parallel_copy(rel__app__2__1__2, rel___dollorhead__stratified11__7__1__2__3__4__5__6__7, DELTA, {1, 6}));
scc126->add_rule(new parallel_join(rel___dollorrule66__inter__body3__2__1__2, rel___dollorrule66__inter__body1__1__1, DELTA, rel___dollorrule66__inter__body2__3__1, FULL, {3, 4}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule4__inter__body__5__1__2__3__4__5, rel___dollorbir__sub15__4__3__4, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 2> {data[1], data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = data[0];
head_tuple[1] = res_0;
head_tuple[2] = data[4];
head_tuple[3] = data[1];
head_tuple[4] = data[3];
        return std::make_tuple(data, output + 5);
      };
      auto [_,new_ptr] = builtin_subtract<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 5;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorrule67__inter__body__3__1__2__3, rel__bool__1__1, DELTA, rel___dollorinter__head1__3__3, FULL, {3, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule77__inter__body1__5__1__2__3__4__5, rel__faddr__2__1__2, DELTA, rel___dollorrule77__inter__body__6__2__1, FULL, {2, 4, 5, 6, 7}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified15__4__1__2__3__4, rel__app__2__1__2, FULL, rel___dollorhead__stratified14__5__2__5, DELTA, {4, 5, 6, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule74__inter__body3__4__1__2__3__4, rel___dollorrule74__inter__body2__2__1, DELTA, rel___dollorrule74__inter__body1__4__1, DELTA, {4, 5, 2, 6}));
scc126->add_rule(new parallel_join(rel___dollorrule7__inter__body13__3__1__2__3, rel___dollornil__1__0, DELTA, rel___dollorlst__append__input__2__1, DELTA, {3, 2, 1}));
scc126->add_rule(new parallel_acopy(rel__ret__2__1, rel__ret__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_copy(rel__length__input__1__1, rel___dollorhead__stratified67__2__1__2, DELTA, {1}));
scc126->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head__4__1__2__3__4, DELTA, {3}));
scc126->add_rule(new parallel_join(rel__free__2__1__2, rel__free__2__2, FULL, rel__app__2__1, DELTA, {2, 3}));
scc126->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head2__3__1__2__3, DELTA, {2}));
scc126->add_rule(new parallel_copy(rel__faddr__2__1__2, rel___dollorinter__head72__6__1__2__3__4__5__6, DELTA, {1, 0}));
scc126->add_rule(new parallel_join(rel___dollorinter__head53__3__1__2__3, rel__free__2__2, DELTA, rel___dollorhir__sub__3__1, FULL, {5, 2, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorrule7__inter__body6__7__7, rel___dollorrule7__inter__body6__7__1__2__3__4__5__6__7, DELTA, {6, 7, 0, 1, 2, 3, 4, 5}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub14__4__1__2__3__4, rel__length__input__1__1, FULL, rel__split__at__end__input__2__2, DELTA, {1, 0, 2, 3}));
scc126->add_rule(new parallel_acopy(rel__list__of__1__0__1, rel__list__of__1__1, DELTA, {1, 0}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head38__5__5, rel___dollorinter__head38__5__1__2__3__4__5, DELTA, {4, 5, 0, 1, 2, 3}));
scc126->add_rule(new parallel_join(rel___dollorinter__head41__3__1__2__3, rel__free__2__2, DELTA, rel___dollorhir__sub2__3__1, DELTA, {5, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified45__2__1__2, rel__faddr__2__1__2, DELTA, rel___dollorrule79__inter__body__3__1__2, FULL, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule59__inter__body3__2__1__2, rel___dollorrule59__inter__body2__1__1, DELTA, rel___dollorlst__2__2, FULL, {2, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule71__inter__body4__3__1__2__3, rel__fixedarg__1__0, DELTA, rel___dollorrule71__inter__body3__3__3, DELTA, {1, 3, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule74__inter__body3__4__1__2__3__4, rel___dollorrule74__inter__body2__2__1, DELTA, rel___dollorrule74__inter__body1__4__1, FULL, {4, 5, 2, 6}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head3__4__3, rel___dollorinter__head3__4__1__2__3__4, DELTA, {2, 4, 0, 1, 3}));
scc126->add_rule(new parallel_join(rel___dollorlst__append__input__2__1__2, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified35__3__2__3, FULL, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorhead__splice3__5__1__2__3__4__5, rel___dollorrule62__inter__body2__2__2, DELTA, rel___dollorrule62__inter__body1__4__4, DELTA, {6, 5, 0, 2, 4}));
scc126->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified36__7__1__2__3__4__5__6__7, DELTA, {4, 6}));
scc126->add_rule(new parallel_join(rel___dollorrule61__inter__body4__3__1__2__3, rel___dollorrule61__inter__body2__2__2, DELTA, rel___dollorrule61__inter__body3__3__3, FULL, {4, 5, 2}));
scc126->add_rule(new parallel_copy(rel__letk__6__1__2__3__4__5__6, rel___dollorhead__stratified37__7__1__2__3__4__5__6__7, DELTA, {4, 6, 5, 2, 1, 3}));
scc126->add_rule(new parallel_acopy(rel__applfk__4__0, rel__applfk__4__1__2__3__4, DELTA, {4, 0, 1, 2, 3}));
scc126->add_rule(new parallel_acopy(rel___dollorrule60__inter__body7__3__3, rel___dollorrule60__inter__body7__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule71__inter__body5__2__1__2, rel__list__of__1__0, DELTA, rel__store__2__2, FULL, {0, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule67__inter__body9__2__1__2, rel___dollorrule67__inter__body6__2__1, FULL, rel___dollorrule67__inter__body8__2__1, DELTA, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorinter__head32__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorinter__head31__3__2, FULL, {1, 3, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body5__8__1__2__3__4__5__6__7__8, rel___dollorlst__2__0, DELTA, rel___dollorrule55__inter__body4__7__7, FULL, {7, 1, 8, 2, 4, 5, 6, 9}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body5__8__1__2__3__4__5__6__7__8, rel___dollorlst__2__0, DELTA, rel___dollorrule55__inter__body4__7__7, DELTA, {7, 1, 8, 2, 4, 5, 6, 9}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified9__8__1__2__3__4__5__6__7__8, rel__fixedparam__1__1, DELTA, rel___dollorrule7__inter__body2__7__4, FULL, {6, 7, 3, 0, 5, 4, 1, 8}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified9__8__1__2__3__4__5__6__7__8, rel__fixedparam__1__1, DELTA, rel___dollorrule7__inter__body2__7__4, DELTA, {6, 7, 3, 0, 5, 4, 1, 8}));
scc126->add_rule(new parallel_join(rel___dollorrule67__inter__body5__3__1__2__3, rel__define__prim__2__0, DELTA, rel__apply__5__3, FULL, {6, 3, 1}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule2__inter__body3__4__1__2__3__4, rel___dollorrule2__inter__body2__4__3, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 2> {data[0], n2d(0)};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = []( TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = data[2];
head_tuple[1] = data[3];
head_tuple[2] = data[0];
head_tuple[3] = data[4];
        return std::make_tuple(data, output + 4);
      };
      auto [_,new_ptr] = builtin_greater<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 4;
      return tuples_count;
    }));
scc126->add_rule(new parallel_acopy(rel___dollorrule47__inter__body8__3__2, rel___dollorrule47__inter__body8__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified37__7__5__7__6__3__2__4, rel___dollorhead__stratified37__7__1__2__3__4__5__6__7, DELTA, {4, 6, 5, 2, 1, 3, 7, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule69__inter__body6__4__1__2__3__4, rel___dollorrule69__inter__body5__3__3, FULL, rel___dollorrule69__inter__body4__3__3, DELTA, {2, 5, 6, 3}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__define__prim__2__1__2, FULL, rel___dollorhead__stratified26__3__1__2, DELTA, {4, 2}));
scc126->add_rule(new parallel_acopy(rel__do__tick__2__1, rel__do__tick__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule40__inter__body1__2__1__2, rel__faddr__2__1__2, DELTA, rel___dollorrule40__inter__body__3__1__2, FULL, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule52__inter__body2__4__1__2__3__4, rel___dollorrule52__inter__body__2__1, FULL, rel__if__k__4__0, DELTA, {5, 3, 6, 2}));
scc126->add_rule(new parallel_copy(rel__length__input__1__1, rel__split__at__end__input__2__1__2, DELTA, {1}));
scc126->add_rule(new parallel_join(rel___dollorrule82__inter__body1__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel___dollorrule82__inter__body__4__2, FULL, {4, 2, 5, 6}));
scc126->add_rule(new parallel_join(rel___dollorsplice__4__1__2__3__4, rel___dollorbir__sub__1__1, FULL, rel___dollorrule69__inter__body9__4__3, DELTA, {0, 3, 5, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head39__4__2__3, rel___dollorinter__head39__4__1__2__3__4, DELTA, {1, 2, 4, 0, 3}));
scc126->add_rule(new parallel_join(rel__store__2__1__2, rel__define__3__1__2__3, DELTA, rel___dollorhead__stratified43__4__1__3__4, DELTA, {5, 3}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub14__4__1__2__3__4, rel__length__input__1__1, DELTA, rel__split__at__end__input__2__2, FULL, {1, 0, 2, 3}));
scc126->add_rule(new parallel_copy(rel__length__input__1__1, rel___dollorinter__head44__2__1__2, DELTA, {0}));
scc126->add_rule(new parallel_join(rel___dollorinter__head37__5__1__2__3__4__5, rel___dollorlst__2__0, FULL, rel___dollorrule79__inter__body1__4__4, DELTA, {6, 2, 4, 5, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head64__3__1__2__3, rel__quote__1__0, FULL, rel__eval__3__1, DELTA, {1, 0, 4}));
scc126->add_rule(new parallel_copy(rel__non__list__value__1__1, rel__state__1__1, DELTA, {1}));
scc126->add_rule(new parallel_acopy(rel___dollorbir__sub3__6__1, rel___dollorbir__sub3__6__1__2__3__4__5__6, DELTA, {0, 6, 1, 2, 3, 4, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule7__inter__body5__7__1__2__3__4__5__6__7, rel__int__1__1, FULL, rel___dollorrule7__inter__body4__7__5, DELTA, {3, 4, 5, 6, 1, 7, 8}));
scc126->add_rule(new parallel_copy(rel___dollorlst__split__input__1__1, rel___dollorinter__head52__3__1__2__3, DELTA, {2}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified50__3__1__2__3, rel__list__of__1__1, FULL, rel___dollorrule73__inter__body__3__1, DELTA, {3, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule60__inter__body__3__1__2__3, rel__list__of__1__1, DELTA, rel___dollorinter__head66__3__1, DELTA, {1, 3, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorrule46__inter__body1__3__2, rel___dollorrule46__inter__body1__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc126->add_rule(new parallel_join(rel___dollorinter__head23__6__1__2__3__4__5__6, rel__tick__2__1, DELTA, rel___dollorbir__sub5__6__1, FULL, {8, 2, 5, 4, 6, 7}));
scc126->add_rule(new parallel_acopy(rel___dollorrule53__inter__body1__4__3, rel___dollorrule53__inter__body1__4__1__2__3__4, DELTA, {2, 4, 0, 1, 3}));
scc126->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified64__3__1__2__3, DELTA, {1, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule46__inter__body__6__1__2__3__4__5__6, rel__ret__2__2, DELTA, rel__appk__5__0, DELTA, {3, 4, 5, 6, 7, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified14__5__2__5, rel___dollorhead__stratified14__5__1__2__3__4__5, DELTA, {1, 4, 5, 0, 2, 3}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__letk__6__1__2__3__4__5__6, DELTA, rel___dollorinter__head16__7__7__3__6__4__2__5, FULL, {8, 4, 6}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__letk__6__1__2__3__4__5__6, DELTA, rel___dollorinter__head16__7__7__3__6__4__2__5, DELTA, {8, 4, 6}));
scc126->add_rule(new parallel_acopy(rel___dollorrule69__inter__body7__4__4, rel___dollorrule69__inter__body7__4__1__2__3__4, DELTA, {3, 4, 0, 1, 2}));
scc126->add_rule(new parallel_copy_generate(rel__do__free__lam__3__1__2__3, rel___dollorrule22__inter__body__4__2__3, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 2> {data[1], data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = []( TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = data[4];
head_tuple[1] = data[3];
head_tuple[2] = data[0];
        return std::make_tuple(data, output + 3);
      };
      auto [_,new_ptr] = builtin_neq<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 3;
      return tuples_count;
    }));
scc126->add_rule(new parallel_copy(rel__eval__3__1__2__3, rel___dollorhead__stratified40__4__1__2__3__4, DELTA, {0, 2, 3}));
scc126->add_rule(new parallel_copy_generate(rel__do__var__prop__all__h__4__1__2__3__4, rel___dollorrule82__inter__body1__4__4, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == n2d(0);
        if (! compatible) return state;

        head_tuple[0] = data[2];
head_tuple[1] = data[3];
head_tuple[2] = data[4];
head_tuple[3] = data[4];
        return std::make_tuple(data, output + 4);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 4;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorrule74__inter__body__2__1__2, rel__list__of__1__0, DELTA, rel__store__2__2, DELTA, {0, 3}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule55__inter__body9__9__1__2__3__4__5__6__7__8__9, rel___dollorhead__splice__10__7__10, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == data[1];
        if (! compatible) return state;

        head_tuple[0] = data[10];
head_tuple[1] = data[0];
head_tuple[2] = data[6];
head_tuple[3] = data[8];
head_tuple[4] = data[7];
head_tuple[5] = data[3];
head_tuple[6] = data[4];
head_tuple[7] = data[9];
head_tuple[8] = data[5];
        return std::make_tuple(data, output + 9);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 9;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorinter__head41__3__1__2__3, rel__free__2__2, FULL, rel___dollorhir__sub2__3__1, DELTA, {5, 2, 4}));
scc126->add_rule(new parallel_join(rel___dollorinter__head11__4__1__2__3__4, rel___dollorlst__append__2__1, DELTA, rel___dollorrule62__inter__body__4__1, FULL, {4, 2, 5, 6}));
scc126->add_rule(new parallel_join(rel___dollorinter__head10__3__1__2__3, rel__free__2__2, DELTA, rel___dollorhir__sub3__3__1, FULL, {5, 2, 4}));
scc126->add_rule(new parallel_copy(rel___dollorhir__sub3__3__1__2__3, rel___dollorinter__head22__6__1__2__3__4__5__6, DELTA, {3, 5, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorlst__split__input__1__0, rel___dollorlst__split__input__1__1, DELTA, {1, 0}));
scc126->add_rule(new parallel_acopy(rel___dollorrule10__inter__body__2__1, rel___dollorrule10__inter__body__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head6__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorinter__head5__3__2, DELTA, {3, 4, 1}));
scc126->add_rule(new parallel_copy_generate(rel___dollorrule67__inter__body3__2__1__2, rel___dollorrule67__inter__body2__3__2, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == n2d(0);
        if (! compatible) return state;

        head_tuple[0] = data[2];
head_tuple[1] = data[3];
        return std::make_tuple(data, output + 2);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 2;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorlst__append__input__2__1__2, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified35__3__2__3, DELTA, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule78__inter__body2__3__1__2__3, rel___dollorhir__sub3__3__1__2__3, FULL, rel___dollorrule78__inter__body1__4__2__4__1, DELTA, {0, 5, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule69__inter__body2__3__1, rel___dollorrule69__inter__body2__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorrule59__inter__body1__3__3, DELTA, {4, 1, 3}));
scc126->add_rule(new parallel_acopy(rel___dollorrule73__inter__body2__3__3, rel___dollorrule73__inter__body2__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified30__4__1__2__3__4, rel__kaddr__1__1, DELTA, rel___dollorrule78__inter__body2__3__1, DELTA, {0, 3, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified29__4__1__2__3__4, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified28__5__1__5, DELTA, {4, 5, 6, 2}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified20__4__1__2__3__4, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified19__5__4__5, DELTA, {4, 5, 6, 2}));
scc126->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorhead__stratified30__4__1__2__3__4, DELTA, {3, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule81__inter__body1__5__1__2__3__4__5, rel___dollorlst__2__0, FULL, rel__do__var__prop__all__h__4__3, DELTA, {4, 2, 6, 5, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule66__inter__body3__2__1__2, rel___dollorrule66__inter__body1__1__1, DELTA, rel___dollorrule66__inter__body2__3__1, DELTA, {3, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule78__inter__body4__4__1__2__3__4, rel__fixedparam__1__0, FULL, rel___dollorrule78__inter__body3__4__3, DELTA, {1, 3, 4, 5}));
scc126->add_rule(new parallel_join(rel___dollorlst__split__3__1__2__3, rel___dollornil__1__1, DELTA, rel___dollorinter__head71__3__3, DELTA, {3, 1, 4}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified25__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorrule2__inter__body__2__1, FULL, {0, 3, 1}));
scc126->add_rule(new parallel_join(rel__ret__2__1__2, rel__ret__2__2, DELTA, rel___dollorrule51__inter__body__2__1, DELTA, {2, 4}));
scc126->add_rule(new parallel_join_negate(rel___dollorinter__head12__2__1__2, rel___dollorrule57__inter__body1__3__1, DELTA, rel__specialized__prim__1__1, {2, 3}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified18__6__1__6, rel___dollorhead__stratified18__6__1__2__3__4__5__6, DELTA, {0, 5, 6, 1, 2, 3, 4}));
scc126->add_rule(new parallel_acopy(rel__store__2__2, rel__store__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_join(rel___dollorrule69__inter__body9__4__1__2__3__4, rel___dollorlst__split__input__1__0, FULL, rel___dollorrule69__inter__body8__4__2, DELTA, {3, 4, 1, 5}));
scc126->add_rule(new parallel_acopy(rel___dollorrule63__inter__body1__4__4, rel___dollorrule63__inter__body1__4__1__2__3__4, DELTA, {3, 4, 0, 1, 2}));
scc126->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorinter__head56__3__1__2__3, DELTA, {0, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule7__inter__body3__7__1__2__3__4__5__6__7, rel__addr__1__1, DELTA, rel___dollorinter__head4__6__3, FULL, {3, 4, 0, 5, 1, 6, 7}));
scc126->add_rule(new parallel_join(rel___dollorinter__head63__5__1__2__3__4__5, rel__appl__2__0, FULL, rel__eval__3__1, DELTA, {4, 0, 2, 5, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head__4__1__2__3__4, rel___dollorrule59__inter__body6__2__1, DELTA, rel___dollorrule59__inter__body9__4__2, FULL, {4, 2, 5, 6}));
scc126->add_rule(new parallel_copy(rel__halt__0__, rel___dollorinter__head19__2__1__2, DELTA, {}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head73__7__3__1, rel___dollorinter__head73__7__1__2__3__4__5__6__7, DELTA, {2, 0, 7, 1, 3, 4, 5, 6}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head16__7__7__3__6__4__2__5, rel___dollorinter__head16__7__1__2__3__4__5__6__7, DELTA, {6, 2, 5, 3, 1, 4, 7, 0}));
scc126->add_rule(new parallel_join(rel__ret__2__1__2, rel___dollorrule40__inter__body1__2__2, FULL, rel__store__2__1, DELTA, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule41__inter__body__3__1__2__3, rel__clo__2__1__2, DELTA, rel___dollorinter__head2__3__3__1, DELTA, {4, 0, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule78__inter__body3__4__1__2__3__4, rel__clo__2__1, DELTA, rel__lambda__2__0, FULL, {1, 4, 3, 2}));
scc126->add_rule(new parallel_acopy(rel__lambda__2__1, rel__lambda__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule22__inter__body__4__1__2__3__4, rel___dollorlst__2__0, FULL, rel__do__free__lam__3__2, DELTA, {2, 5, 1, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule67__inter__body7__3__1__2__3, rel__fixedarg__1__0, DELTA, rel___dollorrule67__inter__body5__3__1, DELTA, {1, 3, 4}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified25__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorrule2__inter__body__2__1, DELTA, {0, 3, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule66__inter__body8__1__1, rel___dollorrule66__inter__body7__1__1, DELTA, rel___dollorrule66__inter__body6__2__1, FULL, {3}));
scc126->add_rule(new parallel_join(rel___dollorrule59__inter__body__2__1__2, rel__ret__2__1__2, FULL, rel___dollorhead__stratified__3__2__1, DELTA, {4, 0}));
scc126->add_rule(new parallel_join(rel___dollorinter__head51__4__1__2__3__4, rel___dollorbir__sub13__3__1, DELTA, rel__split__at__3__1, DELTA, {6, 2, 3, 5}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head21__5__4, rel___dollorinter__head21__5__1__2__3__4__5, DELTA, {3, 5, 0, 1, 2, 4}));
scc126->add_rule(new parallel_acopy(rel__appk__5__0, rel__appk__5__1__2__3__4__5, DELTA, {5, 0, 1, 2, 3, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorrule47__inter__body__3__2, rel___dollorrule47__inter__body__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule47__inter__body2__6__1__2__3__4__5__6, rel___dollorlst__2__0__1, FULL, rel___dollorrule47__inter__body1__7__3__7, DELTA, {6, 2, 4, 5, 7, 8}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified64__3__1__2__3, rel___dollornil__1__1, DELTA, rel___dollorrule47__inter__body8__3__2, FULL, {3, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule42__inter__body__5__1__2__3__4__5, rel__app__2__0, DELTA, rel__eval__3__1, DELTA, {2, 4, 0, 5, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified48__2__1__2, rel__faddr__2__1__2, DELTA, rel___dollorrule77__inter__body5__3__3__1, FULL, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule76__inter__body3__6__1__2__3__4__5__6, rel___dollorhir__sub1__3__1__2__3, DELTA, rel___dollorinter__head40__6__4__6__3, FULL, {5, 6, 2, 0, 7, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule76__inter__body3__6__1__2__3__4__5__6, rel___dollorhir__sub1__3__1__2__3, DELTA, rel___dollorinter__head40__6__4__6__3, DELTA, {5, 6, 2, 0, 7, 1}));
scc126->add_rule(new parallel_copy(rel__eval__3__1__2__3, rel___dollorinter__head46__4__1__2__3__4, DELTA, {1, 0, 2}));
scc126->add_rule(new parallel_join(rel___dollorrule69__inter__body4__3__1__2__3, rel___dollorrule69__inter__body3__1__1, DELTA, rel__apply__5__3, DELTA, {6, 2, 5}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified36__7__1__2__3__4__5__6__7, rel___dollornil__1__1, DELTA, rel___dollorinter__head27__7__6, FULL, {3, 4, 5, 6, 7, 8, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule69__inter__body5__3__3, rel___dollorrule69__inter__body5__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule74__inter__body__2__1__2, rel__list__of__1__0, DELTA, rel__store__2__2, FULL, {0, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule76__inter__body6__3__1__2__3, rel__faddr__2__1__2, DELTA, rel___dollorinter__head60__3__1__2, DELTA, {1, 2, 4}));
scc126->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head3__4__1__2__3__4, DELTA, {2}));
scc126->add_rule(new parallel_join(rel___dollorrule74__inter__body1__4__1__2__3__4, rel__define__prim__2__0, DELTA, rel__apply__5__3, FULL, {6, 7, 3, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified20__4__1__2__3__4, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified19__5__4__5, DELTA, {4, 5, 6, 2}));
scc126->add_rule(new parallel_join(rel___dollorbir__sub18__2__1__2, rel___dollorbir__sub17__2__1, FULL, rel__length__2__1, DELTA, {2, 4}));
scc126->add_rule(new parallel_join(rel__free__2__1__2, rel___dollorrule32__inter__body__2__2, DELTA, rel___dollorrule32__inter__body1__2__2, FULL, {2, 4}));
scc126->add_rule(new parallel_copy(rel__app__2__1__2, rel___dollorhead__stratified8__7__1__2__3__4__5__6__7, DELTA, {6, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule22__inter__body__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel__do__free__lam__3__2, FULL, {2, 5, 1, 4}));
scc126->add_rule(new parallel_join(rel__apply__5__1__2__3__4__5, rel__clo__2__1__2, DELTA, rel___dollorhead__stratified38__6__5__6, DELTA, {6, 5, 2, 4, 7}));
scc126->add_rule(new parallel_join(rel___dollorinter__head52__3__1__2__3, rel___dollorlst__split__input__1__1, DELTA, rel___dollorlst__2__0, FULL, {2, 1, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule7__inter__body1__7__1__2__3__4__5__6__7, rel__quote__1__1, DELTA, rel___dollorrule7__inter__body__7__4, FULL, {5, 1, 3, 4, 6, 7, 8}));
scc126->add_rule(new parallel_join(rel___dollorhead__splice4__6__1__2__3__4__5__6, rel__store__2__1, DELTA, rel___dollorrule47__inter__body7__6__4, DELTA, {5, 8, 4, 6, 2, 7}));
scc126->add_rule(new parallel_join(rel___dollorrule55__inter__body10__3__1__2__3, rel___dollorlst__append__2__1, DELTA, rel___dollorlst__append__input__2__0, FULL, {3, 2, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorinter__head__4__1__2, rel___dollorinter__head__4__1__2__3__4, DELTA, {0, 1, 4, 2, 3}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified40__4__1__2__3__4, rel__kaddr__1__1, DELTA, rel___dollorrule75__inter__body1__3__1, FULL, {0, 3, 4, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule78__inter__body5__2__2, rel___dollorrule78__inter__body5__2__1__2, DELTA, {1, 2, 0}));
scc126->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorhead__stratified32__6__1__2__3__4__5__6, DELTA, {5, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head45__3__1__2__3, rel__fixedarg__1__0, DELTA, rel___dollorrule73__inter__body2__3__3, FULL, {1, 3, 4}));
scc126->add_rule(new parallel_acopy(rel__length__2__1, rel__length__2__1__2, DELTA, {0, 2, 1}));
scc126->add_rule(new parallel_join(rel___dollorhead__splice2__8__1__2__3__4__5__6__7__8, rel___dollorlst__2__0, FULL, rel___dollorrule46__inter__body__6__3, DELTA, {4, 5, 8, 2, 6, 7, 1, 6}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified56__2__1__2, rel__faddr__2__1__2, DELTA, rel___dollorrule75__inter__body2__3__1__2, FULL, {4, 2}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified17__2__1__2, rel__bool__1__1, DELTA, rel___dollorrule66__inter__body__2__2, FULL, {3, 1}));
scc126->add_rule(new parallel_join(rel___dollorrule66__inter__body8__1__1, rel___dollorrule66__inter__body7__1__1, DELTA, rel___dollorrule66__inter__body6__2__1, DELTA, {3}));
scc126->add_rule(new parallel_acopy(rel___dollorrule77__inter__body5__3__3__1, rel___dollorrule77__inter__body5__3__1__2__3, DELTA, {2, 0, 3, 1}));
scc126->add_rule(new parallel_acopy(rel___dollorrule61__inter__body3__3__3, rel___dollorrule61__inter__body3__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head32__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorinter__head31__3__2, DELTA, {1, 3, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule61__inter__body3__3__1__2__3, rel___dollorrule61__inter__body1__1__1, FULL, rel__apply__5__3, DELTA, {6, 2, 5}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified15__4__1__3__4, rel___dollorhead__stratified15__4__1__2__3__4, DELTA, {0, 2, 3, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head23__6__1__2__3__4__5__6, rel__tick__2__1, FULL, rel___dollorbir__sub5__6__1, DELTA, {8, 2, 5, 4, 6, 7}));
scc126->add_rule(new parallel_acopy(rel___dollorbir__sub9__6__1, rel___dollorbir__sub9__6__1__2__3__4__5__6, DELTA, {0, 6, 1, 2, 3, 4, 5}));
scc126->add_rule(new parallel_copy_generate(rel___dollorinter__head58__3__1__2__3, rel___dollorrule74__inter__body3__4__4, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == s2d("list");
        if (! compatible) return state;

        head_tuple[0] = data[2];
head_tuple[1] = data[3];
head_tuple[2] = data[4];
        return std::make_tuple(data, output + 3);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 3;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorrule75__inter__body5__7__1__2__3__4__5__6__7, rel___dollorrule75__inter__body4__4__2, FULL, rel__apply__5__3, DELTA, {6, 7, 2, 8, 3, 9, 4}));
scc126->add_rule(new parallel_join(rel___dollorlst__append__input__2__1__2, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified53__3__2__3, DELTA, {4, 2}));
scc126->add_rule(new parallel_acopy(rel___dollorhead__stratified65__3__1__3, rel___dollorhead__stratified65__3__1__2__3, DELTA, {0, 2, 3, 1}));
scc126->add_rule(new parallel_copy_generate(rel___dollorinter__head42__3__1__2__3, rel__split__at__input__2__1, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == n2d(0);
        if (! compatible) return state;

        head_tuple[0] = data[2];
head_tuple[1] = data[1];
head_tuple[2] = data[0];
        return std::make_tuple(data, output + 3);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 3;
      return tuples_count;
    }));
scc126->add_rule(new parallel_join(rel___dollorrule59__inter__body9__4__1__2__3__4, rel___dollorlst__2__0, FULL, rel___dollorrule59__inter__body8__3__3, DELTA, {1, 2, 4, 5}));
scc126->add_rule(new parallel_join(rel___dollorrule5__inter__body__2__1__2, rel___dollornil__1__1, DELTA, rel___dollorinter__head48__2__1, FULL, {1, 3}));
scc126->add_rule(new parallel_join(rel__do__free__let__rhs__2__1__2, rel___dollorlst__2__0, DELTA, rel__do__free__let__rhs__2__2, FULL, {4, 2}));
scc126->add_rule(new parallel_join(rel__eval__3__1__2__3, rel___dollorrule53__inter__body2__1__1, DELTA, rel___dollorrule53__inter__body1__4__3, DELTA, {5, 3, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorbir__sub13__3__1, rel___dollorbir__sub13__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc126->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head58__3__1__2__3, DELTA, {1}));
scc126->add_rule(new parallel_join(rel___dollorrule73__inter__body__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorinter__head45__3__3, FULL, {3, 4, 1}));
scc126->add_rule(new parallel_join(rel___dollorinter__head5__3__1__2__3, rel___dollorrule71__inter__body6__2__1, FULL, rel___dollorrule71__inter__body4__3__1, DELTA, {4, 5, 2}));
scc126->add_rule(new parallel_join(rel___dollorhead__stratified62__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorrule60__inter__body__3__3, FULL, {4, 3, 1}));
scc126->add_rule(new parallel_join(rel__do__free__app__2__1__2, rel__do__free__app__2__2, FULL, rel___dollorlst__2__0, DELTA, {2, 4}));
scc126->add_rule(new parallel_acopy(rel___dollorrule75__inter__body5__7__4, rel___dollorrule75__inter__body5__7__1__2__3__4__5__6__7, DELTA, {3, 7, 0, 1, 2, 4, 5, 6}));
scc126->add_rule(new parallel_join(rel___dollorrule59__inter__body4__4__1__2__3__4, rel__define__prim__2__0, DELTA, rel__apply__5__3, FULL, {1, 6, 7, 3}));
scc126->add_rule(new parallel_copy(rel__define__3__1__2__3, rel___dollorhead__stratified15__4__1__2__3__4, DELTA, {0, 2, 3}));
scc126->add_rule(new parallel_join(rel___dollorrule52__inter__body__2__1__2, rel__ret__2__1, FULL, rel__store__2__1, DELTA, {2, 4}));
scc126->add_rule(new parallel_join(rel___dollorrule67__inter__body6__2__1__2, rel__list__of__1__0, DELTA, rel___dollorrule67__inter__body4__2__2, FULL, {3, 1}));
scc126->add_rule(new parallel_join(rel__free__2__1__2, rel__appl__2__2, FULL, rel__free__2__2, DELTA, {4, 1}));

RAM* scc127 = new RAM(false, 127);
scc127->add_relation(rel__halt__0__0, true, false);
scc127->add_relation(rel__halt__0__, true, false);
scc127->add_rule(new parallel_acopy(rel__halt__0__0, rel__halt__0__, DELTA, {0}));

RAM* scc128 = new RAM(false, 128);
scc128->add_relation(rel___dollorbir__sub11__4__1__2__3__4, true, false);
scc128->add_relation(rel___dollorbir__sub11__4__2__4, true, false);
scc128->add_rule(new parallel_acopy(rel___dollorbir__sub11__4__2__4, rel___dollorbir__sub11__4__1__2__3__4, DELTA, {1, 3, 4, 0, 2}));

RAM* scc129 = new RAM(false, 129);
scc129->add_relation(rel___dollorhead__stratified27__3__2__3, true, false);
scc129->add_relation(rel___dollorhead__stratified27__3__1__2__3, true, false);
scc129->add_rule(new parallel_acopy(rel___dollorhead__stratified27__3__2__3, rel___dollorhead__stratified27__3__1__2__3, DELTA, {1, 2, 3, 0}));

RAM* scc130 = new RAM(false, 130);
scc130->add_relation(rel__addr__1__1, true, false);
scc130->add_relation(rel__addr__1__0, true, false);
scc130->add_rule(new parallel_acopy(rel__addr__1__0, rel__addr__1__1, DELTA, {1, 0}));

RAM* scc131 = new RAM(false, 131);
scc131->add_relation(rel__halt__0__0, false, false);
scc131->add_relation(rel___dollorrule84__inter__body__2__1__2, true, false);
scc131->add_relation(rel__ret__2__2, false, false);
scc131->add_rule(new parallel_join(rel___dollorrule84__inter__body__2__1__2, rel__halt__0__0, FULL, rel__ret__2__2, FULL, {2, 1}));

RAM* scc132 = new RAM(false, 132);
scc132->add_relation(rel___dollorrule84__inter__body__2__1, true, false);
scc132->add_relation(rel___dollorrule84__inter__body__2__1__2, true, false);
scc132->add_rule(new parallel_acopy(rel___dollorrule84__inter__body__2__1, rel___dollorrule84__inter__body__2__1__2, DELTA, {0, 2, 1}));

RAM* scc133 = new RAM(false, 133);
scc133->add_relation(rel___dollorrule84__inter__body__2__1, false, true);
scc133->add_relation(rel___dollorrule84__inter__body1__2__1__2, true, false);
scc133->add_relation(rel__addr__1__0, false, false);
scc133->add_rule(new parallel_join(rel___dollorrule84__inter__body1__2__1__2, rel__addr__1__0, FULL, rel___dollorrule84__inter__body__2__1, FULL, {0, 3}));

RAM* scc134 = new RAM(false, 134);
scc134->add_relation(rel___dollorrule84__inter__body1__2__1, true, false);
scc134->add_relation(rel___dollorrule84__inter__body1__2__1__2, true, false);
scc134->add_rule(new parallel_acopy(rel___dollorrule84__inter__body1__2__1, rel___dollorrule84__inter__body1__2__1__2, DELTA, {0, 2, 1}));

RAM* scc135 = new RAM(false, 135);
scc135->add_relation(rel__store__2__1, false, false);
scc135->add_relation(rel___dollorrule84__inter__body1__2__1, false, true);
scc135->add_relation(rel__answer__2__1__2, true, false);
scc135->add_rule(new parallel_join(rel__answer__2__1__2, rel__store__2__1, FULL, rel___dollorrule84__inter__body1__2__1, FULL, {4, 2}));

RAM* scc136 = new RAM(false, 136);
scc136->add_relation(rel___dollorhead__stratified27__3__2__3, false, true);
scc136->add_relation(rel__prim__count__2__1__2, true, false);
scc136->add_relation(rel___dollorlst__2__1__2, false, false);
scc136->add_rule(new parallel_join(rel__prim__count__2__1__2, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified27__3__2__3, FULL, {4, 2}));

RAM* scc137 = new RAM(false, 137);
scc137->add_relation(rel___dollorbir__sub12__3__1__2__3, true, false);
scc137->add_relation(rel___dollorbir__sub11__4__2__4, false, true);
scc137->add_relation(rel__split__at__end__input__2__1__2, false, false);
scc137->add_rule(new parallel_join(rel___dollorbir__sub12__3__1__2__3, rel__split__at__end__input__2__1__2, FULL, rel___dollorbir__sub11__4__2__4, FULL, {2, 4, 5}));

RAM* scc138 = new RAM(false, 138);
scc138->add_relation(rel___dollorbir__sub12__3__1__2__3, true, false);
scc138->add_relation(rel___dollorbir__sub12__3__1, true, false);
scc138->add_rule(new parallel_acopy(rel___dollorbir__sub12__3__1, rel___dollorbir__sub12__3__1__2__3, DELTA, {0, 3, 1, 2}));

RAM* scc139 = new RAM(false, 139);
scc139->add_relation(rel___dollorrule85__inter__body__2__1__2, true, false);
scc139->add_relation(rel__halt__0__0, false, false);
scc139->add_relation(rel__ret__2__2, false, false);
scc139->add_rule(new parallel_join(rel___dollorrule85__inter__body__2__1__2, rel__halt__0__0, FULL, rel__ret__2__2, FULL, {1, 2}));

RAM* scc140 = new RAM(false, 140);
scc140->add_relation(rel___dollorrule85__inter__body__2__1__2, true, false);
scc140->add_relation(rel___dollorrule85__inter__body__2__2, true, false);
scc140->add_rule(new parallel_acopy(rel___dollorrule85__inter__body__2__2, rel___dollorrule85__inter__body__2__1__2, DELTA, {1, 2, 0}));

RAM* scc141 = new RAM(false, 141);
scc141->add_relation(rel__store__2__1, false, false);
scc141->add_relation(rel___dollorrule85__inter__body__2__2, false, true);
scc141->add_relation(rel___dollorrule85__inter__body1__3__1__2__3, true, false);
scc141->add_rule(new parallel_join(rel___dollorrule85__inter__body1__3__1__2__3, rel__store__2__1, FULL, rel___dollorrule85__inter__body__2__2, FULL, {4, 2, 0}));

RAM* scc142 = new RAM(false, 142);
scc142->add_relation(rel___dollorrule85__inter__body1__3__3, true, false);
scc142->add_relation(rel___dollorrule85__inter__body1__3__1__2__3, true, false);
scc142->add_rule(new parallel_acopy(rel___dollorrule85__inter__body1__3__3, rel___dollorrule85__inter__body1__3__1__2__3, DELTA, {2, 3, 0, 1}));

RAM* scc143 = new RAM(false, 143);
scc143->add_relation(rel___dollorrule85__inter__body1__3__3, false, true);
scc143->add_relation(rel__answer__2__1__2, true, false);
scc143->add_relation(rel__saddr__1__0, false, false);
scc143->add_rule(new parallel_join(rel__answer__2__1__2, rel__saddr__1__0, FULL, rel___dollorrule85__inter__body1__3__3, FULL, {3, 4}));

RAM* scc144 = new RAM(false, 144);
scc144->add_relation(rel___dollorhead__stratified21__3__1__2__3, true, false);
scc144->add_relation(rel___dollorhead__stratified21__3__2__3, true, false);
scc144->add_rule(new parallel_acopy(rel___dollorhead__stratified21__3__2__3, rel___dollorhead__stratified21__3__1__2__3, DELTA, {1, 2, 3, 0}));

RAM* scc145 = new RAM(false, 145);
scc145->add_relation(rel__prim__count__2__1__2, true, false);
scc145->add_relation(rel___dollorlst__2__1__2, false, false);
scc145->add_relation(rel___dollorhead__stratified21__3__2__3, false, true);
scc145->add_rule(new parallel_join(rel__prim__count__2__1__2, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified21__3__2__3, FULL, {4, 2}));

RAM* scc146 = new RAM(false, 146);
scc146->add_relation(rel___dollorinter__head17__3__1__2__3, true, false);
scc146->add_relation(rel___dollorinter__head17__3__1__3, true, false);
scc146->add_rule(new parallel_acopy(rel___dollorinter__head17__3__1__3, rel___dollorinter__head17__3__1__2__3, DELTA, {0, 2, 3, 1}));

RAM* scc147 = new RAM(false, 147);
scc147->add_relation(rel___dollorbir__sub16__2__1__2, true, false);
scc147->add_relation(rel___dollorinter__head17__3__1__3, false, true);
scc147->add_relation(rel__split__at__input__2__1__2, false, false);
scc147->add_rule(new parallel_join(rel___dollorbir__sub16__2__1__2, rel__split__at__input__2__1__2, FULL, rel___dollorinter__head17__3__1__3, FULL, {2, 4}));

RAM* scc148 = new RAM(false, 148);
scc148->add_relation(rel___dollorbir__sub16__2__1, true, false);
scc148->add_relation(rel___dollorbir__sub16__2__1__2, true, false);
scc148->add_rule(new parallel_acopy(rel___dollorbir__sub16__2__1, rel___dollorbir__sub16__2__1__2, DELTA, {0, 2, 1}));

RAM* scc149 = new RAM(false, 149);
scc149->add_relation(rel__split__at__3__1, false, false);
scc149->add_relation(rel__split__at__end__3__1__2__3, true, false);
scc149->add_relation(rel___dollorbir__sub16__2__1, false, true);
scc149->add_rule(new parallel_join(rel__split__at__end__3__1__2__3, rel___dollorbir__sub16__2__1, FULL, rel__split__at__3__1, FULL, {2, 4, 5}));

RAM* scc150 = new RAM(false, 150);
scc150->add_relation(rel__split__at__end__3__1, true, false);
scc150->add_relation(rel__split__at__end__3__1__2__3, true, false);
scc150->add_rule(new parallel_acopy(rel__split__at__end__3__1, rel__split__at__end__3__1__2__3, DELTA, {0, 3, 1, 2}));

RAM* scc151 = new RAM(false, 151);
scc151->add_relation(rel__split__at__end__3__1, false, false);
scc151->add_relation(rel___dollorbir__sub12__3__1, false, true);
scc151->add_relation(rel__breaks__into__4__1__2__3__4, true, false);
scc151->add_rule(new parallel_join(rel__breaks__into__4__1__2__3__4, rel___dollorbir__sub12__3__1, FULL, rel__split__at__end__3__1, FULL, {2, 3, 5, 6}));

LIE* lie = new LIE();
lie->add_relation(rel__do__free__app__2__2);
lie->add_relation(rel___dollorlst__split__input__1__0);
lie->add_relation(rel___dollorhead__stratified67__2__2);
lie->add_relation(rel___dollorhead__stratified54__3__3__1);
lie->add_relation(rel__ret__2__1);
lie->add_relation(rel___dollorrule77__inter__body5__3__3__1);
lie->add_relation(rel___dollorbir__sub19__3__1__2__3);
lie->add_relation(rel___dollorrule46__inter__body1__3__1__2__3);
lie->add_relation(rel___dollorrule55__inter__body9__9__1__2__3__4__5__6__7__8__9);
lie->add_relation(rel___dollorrule78__inter__body7__2__1__2);
lie->add_relation(rel__varparam__1__0);
lie->add_relation(rel___dollorinter__head63__5__2__3__1__4);
lie->add_relation(rel__split__at__input__2__1__2);
lie->add_relation(rel___dollorrule8__inter__body__2__1);
lie->add_relation(rel___dollorhead__stratified1__2__1__2);
lie->add_relation(rel___dollorrule76__inter__body5__5__1__2__3__4__5);
lie->add_relation(rel___dollorbir__sub9__6__1);
lie->add_relation(rel___dollorrule7__inter__body7__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorrule67__inter__body5__3__1);
lie->add_relation(rel___dollorinter__head18__2__2);
lie->add_relation(rel___dollorinter__head16__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorrule59__inter__body5__2__2);
lie->add_relation(rel___dollorbir__sub6__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorrule9__inter__body4__2__1__2);
lie->add_relation(rel___dollorrule55__inter__body8__3__3);
lie->add_relation(rel___dollorinter__head44__2__1__2);
lie->add_relation(rel___dollorhead__stratified10__8__1__2__3__4__5__6__7__8);
lie->add_relation(rel___dollorrule62__inter__body1__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head12__2__2);
lie->add_relation(rel___dollorrule51__inter__body__2__1__2);
lie->add_relation(rel___dollorrule29__inter__body__2__1);
lie->add_relation(rel___dollorrule69__inter__body1__3__1__2__3);
lie->add_relation(rel___dollorinter__head27__7__6);
lie->add_relation(rel__define__prim__2__1);
lie->add_relation(rel___dollorinter__head44__2__1);
lie->add_relation(rel___dollorrule51__inter__body__2__1);
lie->add_relation(rel___dollorrule29__inter__body__2__1__2);
lie->add_relation(rel___dollorrule7__inter__body3__7__1);
lie->add_relation(rel___dollorrule46__inter__body4__8__1__2__3__4__5__6__7__8);
lie->add_relation(rel___dollorrule67__inter__body2__3__1__2__3);
lie->add_relation(rel___dollorunit__1__1);
lie->add_relation(rel__do__fixed__prop__all__3__1__2__3);
lie->add_relation(rel___dollorbir__sub18__2__1__2);
lie->add_relation(rel___dollorrule59__inter__body6__2__1);
lie->add_relation(rel___dollorrule66__inter__body3__2__1);
lie->add_relation(rel__list__of__1__1);
lie->add_relation(rel__appk__5__2__3);
lie->add_relation(rel___dollorrule47__inter__body4__6__1__2__3__4__5__6);
lie->add_relation(rel__applfk__4__1__2__3__4);
lie->add_relation(rel___dollorrule73__inter__body__3__1);
lie->add_relation(rel___dollorrule80__inter__body__3__1__2__3);
lie->add_relation(rel___dollorhead__stratified8__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorinter__head28__7__7__1);
lie->add_relation(rel___dollorinter__head66__3__1__2__3);
lie->add_relation(rel___dollorinter__head26__8__1__2__3__4__5__6__7__8);
lie->add_relation(rel___dollorrule61__inter__body5__3__);
lie->add_relation(rel___dollorhead__splice4__6__);
lie->add_relation(rel___dollorinter__head23__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorrule71__inter__body3__3__1__2__3);
lie->add_relation(rel___dollorinter__head69__1__1);
lie->add_relation(rel___dollorrule40__inter__body__3__1__2__3);
lie->add_relation(rel___dollorrule9__inter__body2__4__1);
lie->add_relation(rel___dollorrule85__inter__body__2__1__2);
lie->add_relation(rel___dollorbir__sub19__3__1);
lie->add_relation(rel___dollorrule53__inter__body1__4__1__2__3__4);
lie->add_relation(rel___dollorhead__stratified15__4__1__2__3__4);
lie->add_relation(rel__state__1__1);
lie->add_relation(rel___dollorrule5__inter__body1__1__1);
lie->add_relation(rel__do__var__prop__all__h__4__3);
lie->add_relation(rel___dollorrule71__inter__body6__2__1__2);
lie->add_relation(rel___dollorrule6__inter__body1__2__1__2);
lie->add_relation(rel___dollorhead__stratified20__4__1__2__3__4);
lie->add_relation(rel___dollorrule34__inter__body__3__1__2__3);
lie->add_relation(rel___dollorhead__stratified42__4__4__2);
lie->add_relation(rel___dollorrule50__inter__body__5__1__2__3__4__5);
lie->add_relation(rel___dollorinter__head36__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorhead__stratified27__3__2__3);
lie->add_relation(rel__define__3__1__2__3);
lie->add_relation(rel___dollorrule47__inter__body6__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule36__inter__body1__1__1);
lie->add_relation(rel___dollorhead__stratified32__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorinter__head41__3__1__2__3);
lie->add_relation(rel__quote__1__1);
lie->add_relation(rel___dollorrule67__inter__body4__2__1__2);
lie->add_relation(rel___dollorrule47__inter__body5__6__5);
lie->add_relation(rel___dollorrule63__inter__body__1__1);
lie->add_relation(rel___dollorinter__head11__4__4__2);
lie->add_relation(rel___dollorrule78__inter__body6__7__4);
lie->add_relation(rel___dollorrule55__inter__body13__1__1);
lie->add_relation(rel___dollorrule67__inter__body2__3__2);
lie->add_relation(rel__split__at__3__1);
lie->add_relation(rel___dollorinter__head60__3__1__2__3);
lie->add_relation(rel___dollorrule82__inter__body__4__2);
lie->add_relation(rel___dollorrule7__inter__body5__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorhead__stratified43__4__1__2__3__4);
lie->add_relation(rel___dollorrule48__inter__body2__2__1__2);
lie->add_relation(rel__clo__2__1__2);
lie->add_relation(rel___dollorinter__head37__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule60__inter__body1__1__1);
lie->add_relation(rel___dollorhead__stratified55__3__2__3);
lie->add_relation(rel___dollorbir__sub7__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule67__inter__body8__2__1__2);
lie->add_relation(rel___dollorinter__head10__3__1__2__3);
lie->add_relation(rel___dollorrule67__inter__body8__2__1);
lie->add_relation(rel___dollorrule55__inter__body7__8__1__2__3__4__5__6__7__8);
lie->add_relation(rel___dollorrule47__inter__body7__6__4);
lie->add_relation(rel___dollorrule66__inter__body6__2__1);
lie->add_relation(rel___dollorrule6__inter__body4__5__);
lie->add_relation(rel___dollorrule6__inter__body2__3__1__2__3);
lie->add_relation(rel__bool__1__0);
lie->add_relation(rel___dollorinter__head37__5__3__1__2);
lie->add_relation(rel___dollorhead__stratified65__3__1__3);
lie->add_relation(rel___dollorrule56__inter__body1__6__);
lie->add_relation(rel___dollorrule6__inter__body__1__1);
lie->add_relation(rel__applak__4__0);
lie->add_relation(rel___dollorrule1__inter__body1__1__);
lie->add_relation(rel__length__2__1);
lie->add_relation(rel___dollorhead__stratified49__3__2__1);
lie->add_relation(rel___dollorinter__head62__4__1__3);
lie->add_relation(rel__do__free__app__2__1__2);
lie->add_relation(rel___dollorrule78__inter__body1__4__1__2__3__4);
lie->add_relation(rel__do__var__prop__all__3__1__2__3);
lie->add_relation(rel___dollorrule76__inter__body__5__1__2__3__4__5);
lie->add_relation(rel___dollorinter__head73__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorrule7__inter__body9__2__);
lie->add_relation(rel__do__free__lam__3__1__2__3);
lie->add_relation(rel___dollorrule53__inter__body2__1__1);
lie->add_relation(rel___dollorrule32__inter__body__2__2);
lie->add_relation(rel___dollorrule71__inter__body2__2__2);
lie->add_relation(rel__halt__0__0);
lie->add_relation(rel___dollorrule23__inter__body__3__1__2__3);
lie->add_relation(rel___dollorrule76__inter__body3__6__3__2);
lie->add_relation(rel__app__2__1__2);
lie->add_relation(rel___dollorrule67__inter__body5__3__1__2__3);
lie->add_relation(rel___dollorinter__head4__6__3);
lie->add_relation(rel__app__2__0);
lie->add_relation(rel__tick__2__1);
lie->add_relation(rel___dollorrule7__inter__body9__2__1__2);
lie->add_relation(rel__clo__2__1);
lie->add_relation(rel___dollorsplice__4__1);
lie->add_relation(rel__prim__count__2__1__2);
lie->add_relation(rel___dollorinter__head40__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorbir__sub3__6__1);
lie->add_relation(rel___dollorrule21__inter__body__3__1__2__3);
lie->add_relation(rel___dollorrule76__inter__body__5__4);
lie->add_relation(rel___dollorrule77__inter__body5__3__1__2__3);
lie->add_relation(rel__lambda__2__1__2);
lie->add_relation(rel___dollorrule82__inter__body1__4__1__2__3__4);
lie->add_relation(rel__store__2__1);
lie->add_relation(rel___dollorrule55__inter__body2__8__1__2__3__4__5__6__7__8);
lie->add_relation(rel___dollorinter__head45__3__1__2__3);
lie->add_relation(rel___dollorinter__head30__7__3__1);
lie->add_relation(rel__fixedparam__1__1);
lie->add_relation(rel___dollorhead__stratified27__3__1__2__3);
lie->add_relation(rel___dollorhead__stratified26__3__1__2__3);
lie->add_relation(rel__do__free__let__lhs__3__1__2__3);
lie->add_relation(rel___dollorrule78__inter__body6__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorrule78__inter__body2__3__1__2__3);
lie->add_relation(rel___dollorhir__sub__3__1);
lie->add_relation(rel___dollorhead__stratified35__3__1__2__3);
lie->add_relation(rel__fixedparam__1__0);
lie->add_relation(rel___dollorinter__head15__5__1__2__3__4__5);
lie->add_relation(rel___dollorinter__head57__4__1__2__3__4);
lie->add_relation(rel___dollorrule71__inter__body4__3__1__2__3);
lie->add_relation(rel___dollorinter__head5__3__1__2__3);
lie->add_relation(rel___dollorinter__head68__2__1__2);
lie->add_relation(rel___dollorunit__1__);
lie->add_relation(rel___dollorinter__head20__3__1__2__3);
lie->add_relation(rel___dollorhead__stratified29__4__3__4);
lie->add_relation(rel__app__2__1);
lie->add_relation(rel__if__3__1);
lie->add_relation(rel__let__2__1__2);
lie->add_relation(rel___dollorinter__head39__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head14__2__2);
lie->add_relation(rel___dollorrule63__inter__body2__4__);
lie->add_relation(rel___dollorrule74__inter__body1__4__1__2__3__4);
lie->add_relation(rel___dollorrule76__inter__body2__7__4);
lie->add_relation(rel___dollorbir__sub20__3__1);
lie->add_relation(rel___dollorlst__append__2__1__2);
lie->add_relation(rel___dollorrule3__inter__body__1__1);
lie->add_relation(rel__kaddr__1__1);
lie->add_relation(rel___dollorrule47__inter__body8__3__1__2__3);
lie->add_relation(rel___dollorinter__head65__3__1__2__3);
lie->add_relation(rel__store__flow__2__1);
lie->add_relation(rel___dollorhead__stratified46__6__1__2__3__4__5__6);
lie->add_relation(rel__define__3__1);
lie->add_relation(rel__split__at__input__2__1);
lie->add_relation(rel___dollorinter__head18__2__1__2);
lie->add_relation(rel___dollorrule7__inter__body13__3__3);
lie->add_relation(rel___dollorrule69__inter__body4__3__3);
lie->add_relation(rel___dollorrule81__inter__body__3__1__2__3);
lie->add_relation(rel___dollorrule20__inter__body__3__1__2__3);
lie->add_relation(rel___dollorrule47__inter__body1__7__3__7);
lie->add_relation(rel___dollorrule69__inter__body9__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head46__4__1__2__3__4);
lie->add_relation(rel___dollorrule56__inter__body1__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorinter__head45__3__3);
lie->add_relation(rel___dollorrule9__inter__body3__1__);
lie->add_relation(rel___dollorrule4__inter__body__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule55__inter__body2__8__6);
lie->add_relation(rel___dollorrule47__inter__body4__6__4);
lie->add_relation(rel___dollorrule5__inter__body__2__1__2);
lie->add_relation(rel__split__at__end__input__2__2);
lie->add_relation(rel___dollorlst__append__2__1);
lie->add_relation(rel___dollorrule82__inter__body1__4__4);
lie->add_relation(rel___dollorlst__split__3__3);
lie->add_relation(rel___dollorrule6__inter__body4__5__1__2__3__4__5);
lie->add_relation(rel___dollorinter__head52__3__1__2__3);
lie->add_relation(rel___dollorhead__splice1__9__6__9);
lie->add_relation(rel___dollorrule41__inter__body__3__2);
lie->add_relation(rel___dollorrule7__inter__body1__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorrule9__inter__body__4__3);
lie->add_relation(rel__binding__2__1__2);
lie->add_relation(rel___dollorrule47__inter__body1__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorhead__stratified55__3__1__2__3);
lie->add_relation(rel___dollorinter__head10__3__1__2);
lie->add_relation(rel___dollorinter__head34__3__2);
lie->add_relation(rel___dollorrule3__inter__body__1__);
lie->add_relation(rel___dollorrule74__inter__body2__2__1__2);
lie->add_relation(rel___dollorrule75__inter__body1__3__1);
lie->add_relation(rel__appl__2__1__2);
lie->add_relation(rel___dollorrule55__inter__body7__8__);
lie->add_relation(rel___dollorrule67__inter__body6__2__1);
lie->add_relation(rel___dollorrule4__inter__body1__2__1__2);
lie->add_relation(rel___dollorrule20__inter__body__3__2);
lie->add_relation(rel___dollorrule78__inter__body4__4__1__2__3__4);
lie->add_relation(rel___dollorlst__append__input__2__0);
lie->add_relation(rel__quote__1__0);
lie->add_relation(rel___dollorhead__splice3__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule59__inter__body3__2__1__2);
lie->add_relation(rel___dollorrule59__inter__body8__3__1__2__3);
lie->add_relation(rel___dollorrule59__inter__body9__4__1__2__3__4);
lie->add_relation(rel___dollorrule61__inter__body__4__4);
lie->add_relation(rel___dollorhead__stratified19__5__1__2__3__4__5);
lie->add_relation(rel___dollorinter__head33__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorrule71__inter__body5__2__2);
lie->add_relation(rel___dollorrule78__inter__body5__2__2);
lie->add_relation(rel___dollorrule2__inter__body1__1__);
lie->add_relation(rel___dollorinter__head67__7__2__7__1__3__4__5);
lie->add_relation(rel___dollorinter__head67__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorrule46__inter__body__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorrule78__inter__body__3__3__1);
lie->add_relation(rel___dollorrule84__inter__body__2__1);
lie->add_relation(rel___dollorrule4__inter__body2__1__);
lie->add_relation(rel___dollorrule45__inter__body2__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorinter__head48__2__1__2);
lie->add_relation(rel___dollorrule73__inter__body1__4__1);
lie->add_relation(rel___dollorhead__stratified38__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorrule77__inter__body3__4__1);
lie->add_relation(rel___dollorrule59__inter__body4__4__1__2__3__4);
lie->add_relation(rel___dollorrule36__inter__body2__2__1);
lie->add_relation(rel___dollorhir__sub1__3__1__2__3);
lie->add_relation(rel___dollorinter__head51__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head25__7__2__1);
lie->add_relation(rel___dollorrule69__inter__body9__4__3);
lie->add_relation(rel___dollorhead__stratified26__3__1__2);
lie->add_relation(rel___dollorbir__sub10__3__1__2__3);
lie->add_relation(rel___dollorrule66__inter__body__2__1__2);
lie->add_relation(rel__apply__5__3);
lie->add_relation(rel___dollorrule76__inter__body5__5__1);
lie->add_relation(rel___dollorrule46__inter__body__6__3);
lie->add_relation(rel__lambda__2__2);
lie->add_relation(rel__saddr__1__1);
lie->add_relation(rel___dollorbir__sub4__6__1);
lie->add_relation(rel___dollorrule55__inter__body9__9__);
lie->add_relation(rel___dollorinter__head24__2__1__2);
lie->add_relation(rel___dollorrule61__inter__body__4__1__2__3__4);
lie->add_relation(rel___dollorrule41__inter__body__3__1__2__3);
lie->add_relation(rel___dollorrule81__inter__body__3__2__1);
lie->add_relation(rel___dollorrule10__inter__body1__1__);
lie->add_relation(rel___dollorbir__sub14__4__1);
lie->add_relation(rel___dollorinter__head36__7__3__1);
lie->add_relation(rel___dollorrule76__inter__body2__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorrule55__inter__body4__7__7);
lie->add_relation(rel___dollorhead__stratified60__2__1__2);
lie->add_relation(rel___dollorrule69__inter__body6__4__1);
lie->add_relation(rel___dollorrule57__inter__body1__3__1);
lie->add_relation(rel___dollorrule67__inter__body4__2__2);
lie->add_relation(rel___dollorrule60__inter__body2__3__1__2__3);
lie->add_relation(rel___dollorhead__stratified29__4__1__2__3__4);
lie->add_relation(rel__applak__4__1__2__3__4);
lie->add_relation(rel___dollorbir__sub20__3__1__2__3);
lie->add_relation(rel___dollorrule81__inter__body1__5__4);
lie->add_relation(rel___dollorrule69__inter__body8__4__1__2__3__4);
lie->add_relation(rel___dollorbir__sub2__9__1__2);
lie->add_relation(rel___dollorinter__head4__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorbir__sub5__6__1);
lie->add_relation(rel___dollorbir__sub11__4__1__2__3__4);
lie->add_relation(rel___dollorrule7__inter__body12__5__);
lie->add_relation(rel___dollorhead__stratified11__7__1__2__3__4__5__6__7);
lie->add_relation(rel__addr__1__1);
lie->add_relation(rel___dollorrule56__inter__body__6__5);
lie->add_relation(rel___dollorrule7__inter__body3__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorrule79__inter__body1__4__4);
lie->add_relation(rel___dollorhead__stratified10__8__6__8);
lie->add_relation(rel___dollorinter__head29__2__1__2);
lie->add_relation(rel___dollorrule75__inter__body3__3__2);
lie->add_relation(rel___dollorrule67__inter__body1__3__3);
lie->add_relation(rel___dollorinter__head66__3__1);
lie->add_relation(rel___dollorrule32__inter__body1__2__1__2);
lie->add_relation(rel__specialized__prim__1__1);
lie->add_relation(rel___dollorinter__head__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head39__4__2__3);
lie->add_relation(rel___dollorrule66__inter__body2__3__1__2__3);
lie->add_relation(rel___dollorrule7__inter__body6__7__7);
lie->add_relation(rel___dollorhead__stratified__3__1__2__3);
lie->add_relation(rel___dollorrule60__inter__body4__1__1);
lie->add_relation(rel___dollorinter__head16__7__7__3__6__4__2__5);
lie->add_relation(rel___dollorrule34__inter__body__3__3);
lie->add_relation(rel___dollorrule10__inter__body__2__1);
lie->add_relation(rel___dollorbir__sub18__2__2);
lie->add_relation(rel___dollorrule5__inter__body1__1__);
lie->add_relation(rel___dollorrule46__inter__body6__6__4);
lie->add_relation(rel__halt__0__);
lie->add_relation(rel___dollorrule22__inter__body__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head13__5__5);
lie->add_relation(rel___dollorrule73__inter__body__3__1__2__3);
lie->add_relation(rel___dollorrule55__inter__body1__9__9__3);
lie->add_relation(rel___dollorrule59__inter__body7__4__1);
lie->add_relation(rel___dollorrule78__inter__body__3__1__2__3);
lie->add_relation(rel___dollorinter__head71__3__3);
lie->add_relation(rel___dollorrule59__inter__body5__2__1__2);
lie->add_relation(rel___dollorbir__sub7__5__1__2);
lie->add_relation(rel___dollorrule60__inter__body2__3__3);
lie->add_relation(rel___dollorhead__stratified2__3__1__2__3);
lie->add_relation(rel___dollorinter__head20__3__2);
lie->add_relation(rel___dollorhead__stratified14__5__1__2__3__4__5);
lie->add_relation(rel___dollorinter__head43__2__1__2);
lie->add_relation(rel___dollorrule8__inter__body1__1__);
lie->add_relation(rel___dollorrule47__inter__body2__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorrule59__inter__body6__2__1__2);
lie->add_relation(rel___dollorrule78__inter__body5__2__1__2);
lie->add_relation(rel___dollorrule7__inter__body12__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule7__inter__body5__7__6);
lie->add_relation(rel___dollorrule47__inter__body8__3__2);
lie->add_relation(rel___dollorrule66__inter__body__2__2);
lie->add_relation(rel___dollorrule36__inter__body__2__1__2);
lie->add_relation(rel___dollorhead__stratified67__2__1__2);
lie->add_relation(rel___dollorrule71__inter__body1__1__1);
lie->add_relation(rel___dollorrule7__inter__body__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorinter__head53__3__1__2__3);
lie->add_relation(rel___dollorrule40__inter__body1__2__1__2);
lie->add_relation(rel__binding__2__2);
lie->add_relation(rel__varparam__1__1);
lie->add_relation(rel___dollorinter__head33__6__3__1__2);
lie->add_relation(rel___dollorinter__head47__9__3__5__6__7__4__2__8__1);
lie->add_relation(rel___dollorrule52__inter__body2__4__1__2__3__4);
lie->add_relation(rel___dollorrule47__inter__body2__6__2);
lie->add_relation(rel___dollorinter__head17__3__1__2__3);
lie->add_relation(rel___dollorbir__sub17__2__1__2);
lie->add_relation(rel___dollorrule63__inter__body1__4__4);
lie->add_relation(rel___dollorrule40__inter__body__3__1__2);
lie->add_relation(rel___dollorrule55__inter__body3__8__1__2__3__4__5__6__7__8);
lie->add_relation(rel__letk__6__0);
lie->add_relation(rel___dollorrule34__inter__body1__4__1__2__3__4);
lie->add_relation(rel___dollorrule62__inter__body__4__1__2__3__4);
lie->add_relation(rel___dollorrule61__inter__body3__3__1__2__3);
lie->add_relation(rel___dollorinter__head11__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head27__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorlst__2__2);
lie->add_relation(rel___dollorinter__head30__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorinter__head9__6__3);
lie->add_relation(rel___dollorrule69__inter__body1__3__1);
lie->add_relation(rel___dollorhead__splice4__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorbir__sub12__3__1__2__3);
lie->add_relation(rel___dollorrule63__inter__body2__4__1__2__3__4);
lie->add_relation(rel__if__3__3);
lie->add_relation(rel___dollorrule5__inter__body__2__2);
lie->add_relation(rel___dollorrule66__inter__body2__3__1);
lie->add_relation(rel___dollorinter__head32__3__1__2__3);
lie->add_relation(rel___dollorbir__sub5__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorrule52__inter__body1__1__1);
lie->add_relation(rel___dollorrule55__inter__body12__9__1__2__3__4__5__6__7__8__9);
lie->add_relation(rel___dollorrule69__inter__body4__3__1__2__3);
lie->add_relation(rel__if__k__4__0);
lie->add_relation(rel___dollorrule78__inter__body3__4__3);
lie->add_relation(rel___dollorrule61__inter__body3__3__3);
lie->add_relation(rel___dollorhead__stratified36__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorbir__sub15__4__1__2__3__4);
lie->add_relation(rel___dollorhead__stratified17__2__1__2);
lie->add_relation(rel___dollorinter__head61__3__1__2__3);
lie->add_relation(rel___dollorinter__head19__2__);
lie->add_relation(rel___dollorrule74__inter__body__2__2);
lie->add_relation(rel___dollorbir__sub11__4__2__4);
lie->add_relation(rel___dollorrule7__inter__body8__1__1);
lie->add_relation(rel___dollorrule79__inter__body__3__1__2);
lie->add_relation(rel__split__at__end__3__1);
lie->add_relation(rel___dollorrule57__inter__body1__3__1__2__3);
lie->add_relation(rel___dollorhead__stratified40__4__1__2__3__4);
lie->add_relation(rel__breaks__into__input__3__1__2__3);
lie->add_relation(rel___dollorrule59__inter__body__2__1__2);
lie->add_relation(rel___dollorrule54__inter__body__1__1);
lie->add_relation(rel___dollorrule7__inter__body7__7__2);
lie->add_relation(rel___dollorrule60__inter__body8__4__1__2__3__4);
lie->add_relation(rel___dollorrule59__inter__body2__1__1);
lie->add_relation(rel___dollorrule75__inter__body4__4__2);
lie->add_relation(rel___dollorrule62__inter__body1__4__4);
lie->add_relation(rel___dollorrule7__inter__body2__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorhead__stratified12__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorinter__head55__2__1__2);
lie->add_relation(rel___dollorrule66__inter__body3__2__1__2);
lie->add_relation(rel__if__3__1__2__3);
lie->add_relation(rel___dollorrule66__inter__body1__1__1);
lie->add_relation(rel___dollorrule22__inter__body__4__2__3);
lie->add_relation(rel___dollorinter__head41__3__1__2);
lie->add_relation(rel___dollorrule50__inter__body__5__3);
lie->add_relation(rel___dollorrule84__inter__body1__2__1);
lie->add_relation(rel___dollorrule84__inter__body1__2__1__2);
lie->add_relation(rel___dollorrule79__inter__body__3__1__2__3);
lie->add_relation(rel___dollorhir__sub1__3__1);
lie->add_relation(rel___dollorrule62__inter__body2__2__2);
lie->add_relation(rel__if__3__0);
lie->add_relation(rel___dollorrule47__inter__body__3__2);
lie->add_relation(rel___dollorrule61__inter__body4__3__3);
lie->add_relation(rel___dollorrule60__inter__body6__1__1);
lie->add_relation(rel___dollorrule77__inter__body1__5__2);
lie->add_relation(rel___dollorrule45__inter__body2__6__);
lie->add_relation(rel___dollorrule7__inter__body13__3__1__2__3);
lie->add_relation(rel___dollorinter__head8__2__1__2);
lie->add_relation(rel___dollorrule6__inter__body__1__);
lie->add_relation(rel___dollorrule67__inter__body11__2__1__2);
lie->add_relation(rel__define__prim__2__1__2);
lie->add_relation(rel___dollorrule77__inter__body2__3__1);
lie->add_relation(rel___dollorinter__head14__2__1__2);
lie->add_relation(rel___dollorinter__head58__3__2);
lie->add_relation(rel___dollorinter__head3__4__3);
lie->add_relation(rel___dollorinter__head55__2__1);
lie->add_relation(rel___dollorrule46__inter__body2__7__1__2__3__4__5__6__7);
lie->add_relation(rel__apply__5__4);
lie->add_relation(rel__clo__2__0);
lie->add_relation(rel___dollorrule55__inter__body5__8__1__2__3__4__5__6__7__8);
lie->add_relation(rel___dollorhead__stratified__3__2__1);
lie->add_relation(rel__vararg__1__0);
lie->add_relation(rel___dollorhead__stratified38__6__5__6);
lie->add_relation(rel___dollornil__1__1);
lie->add_relation(rel___dollorinter__head7__5__1__2__3__4__5);
lie->add_relation(rel___dollorbir__sub3__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorhir__sub3__3__1);
lie->add_relation(rel__ret__2__1__2);
lie->add_relation(rel___dollorrule1__inter__body__2__1__2);
lie->add_relation(rel___dollorhead__splice2__8__5__8);
lie->add_relation(rel___dollorbir__sub10__3__1);
lie->add_relation(rel__split__at__end__input__2__1__2);
lie->add_relation(rel___dollorrule77__inter__body4__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorhead__stratified62__3__1__2__3);
lie->add_relation(rel___dollorhead__stratified45__2__1__2);
lie->add_relation(rel___dollorrule67__inter__body9__2__2);
lie->add_relation(rel___dollorrule77__inter__body__6__2__1);
lie->add_relation(rel___dollorrule71__inter__body2__2__1__2);
lie->add_relation(rel___dollorhead__stratified56__2__1__2);
lie->add_relation(rel___dollorrule59__inter__body9__4__2);
lie->add_relation(rel___dollorinter__head13__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule71__inter__body6__2__1);
lie->add_relation(rel___dollorrule55__inter__body8__3__1__2__3);
lie->add_relation(rel___dollorhead__stratified13__6__4__6);
lie->add_relation(rel___dollorrule48__inter__body3__5__1__2__3__4__5);
lie->add_relation(rel___dollorinter__head7__5__2);
lie->add_relation(rel__list__of__1__0__1);
lie->add_relation(rel___dollorrule48__inter__body1__1__1);
lie->add_relation(rel__do__free__let__rhs__2__1__2);
lie->add_relation(rel___dollorrule1__inter__body__2__1);
lie->add_relation(rel___dollorrule84__inter__body__2__1__2);
lie->add_relation(rel___dollorrule8__inter__body__2__1__2);
lie->add_relation(rel___dollorhead__stratified50__3__1__2__3);
lie->add_relation(rel___dollorrule61__inter__body2__2__1__2);
lie->add_relation(rel___dollorrule85__inter__body1__3__3);
lie->add_relation(rel___dollorhead__stratified13__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorrule46__inter__body2__7__);
lie->add_relation(rel___dollorinter__head54__3__1__2__3);
lie->add_relation(rel___dollorinter__head22__6__3__1__2);
lie->add_relation(rel___dollorrule67__inter__body__3__1);
lie->add_relation(rel___dollorhead__stratified43__4__1__3__4);
lie->add_relation(rel___dollorrule67__inter__body7__3__1__2__3);
lie->add_relation(rel___dollorrule47__inter__body5__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorhead__stratified6__4__1__2__3__4);
lie->add_relation(rel___dollorrule55__inter__body10__3__1__2__3);
lie->add_relation(rel___dollorrule69__inter__body7__4__1__2__3__4);
lie->add_relation(rel__do__fixed__prop__all__3__2);
lie->add_relation(rel___dollorrule6__inter__body1__2__);
lie->add_relation(rel___dollornil__1__0);
lie->add_relation(rel___dollorrule78__inter__body1__4__2__4__1);
lie->add_relation(rel__binding__2__0);
lie->add_relation(rel___dollorinter__head6__3__1__2__3);
lie->add_relation(rel___dollorrule7__inter__body10__3__1__2__3);
lie->add_relation(rel___dollorrule52__inter__body__2__1);
lie->add_relation(rel___dollorinter__head35__6__6);
lie->add_relation(rel___dollorrule59__inter__body8__3__3);
lie->add_relation(rel___dollorinter__head61__3__3__2);
lie->add_relation(rel___dollorrule55__inter__body6__3__1__2__3);
lie->add_relation(rel__do__tick__2__1__2);
lie->add_relation(rel___dollorhead__stratified22__2__1__2);
lie->add_relation(rel___dollorrule52__inter__body__2__1__2);
lie->add_relation(rel___dollorrule53__inter__body1__4__3);
lie->add_relation(rel___dollorinter__head34__3__1__2__3);
lie->add_relation(rel___dollorinter__head24__2__2);
lie->add_relation(rel___dollorrule69__inter__body2__3__1);
lie->add_relation(rel___dollorrule60__inter__body5__2__1__2);
lie->add_relation(rel___dollorhead__stratified44__6__3__6__1__2__4);
lie->add_relation(rel___dollorhead__stratified23__3__1__2__3);
lie->add_relation(rel___dollorrule63__inter__body1__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head31__3__1__2__3);
lie->add_relation(rel___dollorrule75__inter__body__4__1__2__3__4);
lie->add_relation(rel___dollorrule48__inter__body3__5__5);
lie->add_relation(rel___dollorrule60__inter__body5__2__1);
lie->add_relation(rel__ret__2__2);
lie->add_relation(rel___dollorbir__sub15__4__3__4);
lie->add_relation(rel___dollorrule59__inter__body4__4__2);
lie->add_relation(rel___dollorhead__stratified8__7__7__6);
lie->add_relation(rel___dollorrule71__inter__body4__3__1);
lie->add_relation(rel__split__at__end__3__1__2__3);
lie->add_relation(rel___dollorhead__stratified36__7__5__7);
lie->add_relation(rel___dollorinter__head72__6__2__5__3__4);
lie->add_relation(rel___dollorbir__sub12__3__1);
lie->add_relation(rel___dollorrule9__inter__body4__2__);
lie->add_relation(rel___dollorrule60__inter__body__3__3);
lie->add_relation(rel___dollorinter__head54__3__2__3);
lie->add_relation(rel___dollorinter__head19__2__1__2);
lie->add_relation(rel___dollorrule74__inter__body1__4__1);
lie->add_relation(rel___dollorbir__sub1__8__1__2__3__4__5__6__7__8);
lie->add_relation(rel___dollorrule59__inter__body1__3__1__2__3);
lie->add_relation(rel___dollorrule59__inter__body1__3__3);
lie->add_relation(rel___dollorrule78__inter__body2__3__1);
lie->add_relation(rel__non__list__value__1__1);
lie->add_relation(rel___dollorinter__head5__3__2);
lie->add_relation(rel___dollorinter__head26__8__2__8__1__4__3__5__6);
lie->add_relation(rel___dollorrule47__inter__body3__1__1);
lie->add_relation(rel__appk__5__1__2__3__4__5);
lie->add_relation(rel__define__prim__2__0);
lie->add_relation(rel___dollorrule23__inter__body__3__3);
lie->add_relation(rel___dollorbir__sub1__8__1);
lie->add_relation(rel___dollorrule55__inter__body4__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorrule55__inter__body5__8__2);
lie->add_relation(rel__tick__2__1__2);
lie->add_relation(rel___dollorrule4__inter__body1__2__2);
lie->add_relation(rel___dollorrule53__inter__body__2__1__2);
lie->add_relation(rel___dollorrule75__inter__body1__3__1__2__3);
lie->add_relation(rel__do__store__addr__union__3__2);
lie->add_relation(rel___dollorinter__head63__5__1__2__3__4__5);
lie->add_relation(rel__free__2__2);
lie->add_relation(rel___dollorrule67__inter__body11__2__);
lie->add_relation(rel___dollorrule7__inter__body4__7__5);
lie->add_relation(rel___dollorhead__stratified42__4__1__2__3__4);
lie->add_relation(rel___dollorhir__sub3__3__1__2__3);
lie->add_relation(rel___dollorrule76__inter__body3__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorlst__2__1);
lie->add_relation(rel___dollorrule57__inter__body__3__1__2__3);
lie->add_relation(rel___dollorrule69__inter__body8__4__2);
lie->add_relation(rel___dollorrule48__inter__body__5__5);
lie->add_relation(rel___dollorrule76__inter__body6__3__1__2__3);
lie->add_relation(rel___dollorrule80__inter__body__3__3);
lie->add_relation(rel___dollorhead__stratified30__4__1__2__3__4);
lie->add_relation(rel___dollorrule59__inter__body3__2__2);
lie->add_relation(rel___dollorinter__head53__3__3__2);
lie->add_relation(rel___dollorrule64__inter__body__1__1);
lie->add_relation(rel___dollorrule75__inter__body3__3__1__2__3);
lie->add_relation(rel__do__free__let__lhs__3__2);
lie->add_relation(rel__string__1__1);
lie->add_relation(rel___dollorrule77__inter__body__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorinter__head3__4__1__2__3__4);
lie->add_relation(rel___dollorhead__stratified28__5__1__5);
lie->add_relation(rel__do__var__prop__all__3__3);
lie->add_relation(rel__let__2__0);
lie->add_relation(rel___dollorbir__sub16__2__1);
lie->add_relation(rel__lambda__2__1);
lie->add_relation(rel___dollorhead__splice__10__7__10);
lie->add_relation(rel___dollorrule66__inter__body5__3__1__2__3);
lie->add_relation(rel___dollorrule67__inter__body3__2__1__2);
lie->add_relation(rel___dollorhead__stratified34__3__2__1);
lie->add_relation(rel___dollorinter__head47__9__1__2__3__4__5__6__7__8__9);
lie->add_relation(rel___dollorrule7__inter__body4__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorinter__head15__5__3__5__2__4);
lie->add_relation(rel___dollorrule69__inter__body5__3__3);
lie->add_relation(rel___dollorhead__stratified12__7__7__4);
lie->add_relation(rel___dollorrule7__inter__body2__7__4);
lie->add_relation(rel___dollorrule74__inter__body__2__1__2);
lie->add_relation(rel___dollorrule6__inter__body2__3__);
lie->add_relation(rel__lambda__2__0);
lie->add_relation(rel___dollorinter__head72__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorrule42__inter__body__5__);
lie->add_relation(rel___dollorrule74__inter__body3__4__1__2__3__4);
lie->add_relation(rel___dollorhead__stratified54__3__1__2__3);
lie->add_relation(rel___dollorinter__head23__6__3__6__2);
lie->add_relation(rel___dollorrule32__inter__body1__2__2);
lie->add_relation(rel___dollorrule36__inter__body__2__1);
lie->add_relation(rel__store__flow__2__1__2);
lie->add_relation(rel___dollorinter__head25__7__1__2__3__4__5__6__7);
lie->add_relation(rel__define__3__0);
lie->add_relation(rel___dollorrule74__inter__body2__2__1);
lie->add_relation(rel___dollorlst__append__input__2__1);
lie->add_relation(rel___dollorrule59__inter__body__2__1);
lie->add_relation(rel___dollorinter__head42__3__3);
lie->add_relation(rel___dollorrule67__inter__body7__3__3);
lie->add_relation(rel___dollorinter__head49__10__1__2__3__4__5__6__7__8__9__10);
lie->add_relation(rel__breaks__into__input__3__1__3);
lie->add_relation(rel___dollorhead__stratified35__3__2__3);
lie->add_relation(rel___dollorlst__2__1__2);
lie->add_relation(rel___dollorrule69__inter__body2__3__1__2__3);
lie->add_relation(rel___dollorinter__head52__3__3);
lie->add_relation(rel___dollorrule76__inter__body4__5__1__2__3__4__5);
lie->add_relation(rel__kaddr__1__0);
lie->add_relation(rel___dollorrule77__inter__body1__5__1__2__3__4__5);
lie->add_relation(rel___dollorhead__splice2__8__1__2__3__4__5__6__7__8);
lie->add_relation(rel___dollorrule2__inter__body__2__1__2);
lie->add_relation(rel___dollorrule69__inter__body__3__1__2__3);
lie->add_relation(rel__fixedarg__1__0);
lie->add_relation(rel___dollorinter__head64__3__1__2__3);
lie->add_relation(rel___dollorrule9__inter__body1__4__1__2__3__4);
lie->add_relation(rel___dollorrule8__inter__body1__1__1);
lie->add_relation(rel__answer__2__1__2);
lie->add_relation(rel___dollorrule6__inter__body3__4__1__2__3__4);
lie->add_relation(rel___dollorrule9__inter__body2__4__1__2__3__4);
lie->add_relation(rel___dollorrule78__inter__body3__4__1__2__3__4);
lie->add_relation(rel___dollorrule3__inter__body1__2__);
lie->add_relation(rel___dollorhead__stratified44__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorrule45__inter__body1__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule66__inter__body5__3__1__2);
lie->add_relation(rel___dollorrule78__inter__body4__4__2);
lie->add_relation(rel___dollorrule48__inter__body__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule76__inter__body4__5__1);
lie->add_relation(rel___dollorrule61__inter__body1__1__1);
lie->add_relation(rel___dollorrule59__inter__body7__4__1__2__3__4);
lie->add_relation(rel___dollorhead__stratified49__3__1__2__3);
lie->add_relation(rel___dollorhead__splice1__9__1__2__3__4__5__6__7__8__9);
lie->add_relation(rel___dollorinter__head68__2__1);
lie->add_relation(rel___dollorrule2__inter__body__2__1);
lie->add_relation(rel___dollorrule82__inter__body__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head60__3__1__2);
lie->add_relation(rel___dollorrule67__inter__body10__1__);
lie->add_relation(rel___dollorrule21__inter__body__3__1);
lie->add_relation(rel___dollorlst__split__input__1__);
lie->add_relation(rel___dollorrule61__inter__body4__3__1__2__3);
lie->add_relation(rel___dollorrule46__inter__body5__7__2);
lie->add_relation(rel___dollorrule75__inter__body5__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorhead__stratified25__3__1__2__3);
lie->add_relation(rel___dollorinter__head49__10__7__9__6__3__5__4__2__8__1);
lie->add_relation(rel__store__2__2);
lie->add_relation(rel___dollorinter__head1__3__3);
lie->add_relation(rel___dollorrule7__inter__body11__4__);
lie->add_relation(rel___dollorrule55__inter__body1__9__1__2__3__4__5__6__7__8__9);
lie->add_relation(rel___dollorlst__2__0);
lie->add_relation(rel__vararg__1__1);
lie->add_relation(rel__string__1__0);
lie->add_relation(rel__ref__1__1);
lie->add_relation(rel__appl__2__1);
lie->add_relation(rel___dollorrule7__inter__body__7__4);
lie->add_relation(rel___dollorlst__append__input__2__1__2);
lie->add_relation(rel___dollorinter__head70__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule46__inter__body6__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorrule85__inter__body__2__2);
lie->add_relation(rel___dollorrule66__inter__body8__1__1);
lie->add_relation(rel___dollorhead__stratified37__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorrule67__inter__body6__2__1__2);
lie->add_relation(rel___dollorhead__stratified65__3__1__2__3);
lie->add_relation(rel___dollorinter__head28__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorrule71__inter__body3__3__3);
lie->add_relation(rel___dollorrule46__inter__body4__8__1__8);
lie->add_relation(rel___dollorrule66__inter__body4__3__1__2__3);
lie->add_relation(rel___dollorrule37__inter__body__1__1);
lie->add_relation(rel___dollorhead__stratified68__2__1__2);
lie->add_relation(rel___dollorrule32__inter__body__2__1__2);
lie->add_relation(rel___dollorrule7__inter__body6__7__1__2__3__4__5__6__7);
lie->add_relation(rel__faddr__2__1__2);
lie->add_relation(rel___dollorrule2__inter__body3__4__1__2__3__4);
lie->add_relation(rel___dollorrule76__inter__body1__6__4);
lie->add_relation(rel___dollorrule55__inter__body10__3__3);
lie->add_relation(rel___dollorhir__sub2__3__1__2__3);
lie->add_relation(rel___dollorinter__head64__3__2);
lie->add_relation(rel___dollorrule4__inter__body__5__1__4);
lie->add_relation(rel___dollorrule60__inter__body3__1__1);
lie->add_relation(rel___dollorrule73__inter__body2__3__3);
lie->add_relation(rel___dollorhead__stratified48__2__1__2);
lie->add_relation(rel__eval__3__1__2__3);
lie->add_relation(rel___dollorrule69__inter__body6__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head58__3__1__2__3);
lie->add_relation(rel___dollorrule71__inter__body__1__1);
lie->add_relation(rel___dollorrule73__inter__body1__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head__4__1__2);
lie->add_relation(rel___dollorinter__head71__3__1__2__3);
lie->add_relation(rel___dollorrule10__inter__body__2__1__2);
lie->add_relation(rel___dollorrule34__inter__body1__4__2__4);
lie->add_relation(rel___dollorbir__sub13__3__1);
lie->add_relation(rel___dollorbir__sub8__6__1);
lie->add_relation(rel___dollorinter__head22__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorlst__split__3__1);
lie->add_relation(rel___dollorrule66__inter__body7__1__1);
lie->add_relation(rel___dollorrule75__inter__body2__3__1__2__3);
lie->add_relation(rel___dollorbir__sub17__2__1);
lie->add_relation(rel___dollorrule10__inter__body1__1__1);
lie->add_relation(rel___dollorrule85__inter__body1__3__1__2__3);
lie->add_relation(rel___dollorinter__head57__4__4__1);
lie->add_relation(rel___dollorrule36__inter__body2__2__1__2);
lie->add_relation(rel___dollorrule77__inter__body4__7__5);
lie->add_relation(rel___dollorrule47__inter__body__3__1__2__3);
lie->add_relation(rel___dollorrule69__inter__body__3__2);
lie->add_relation(rel___dollorinter__head42__3__1__2__3);
lie->add_relation(rel___dollorrule45__inter__body1__5__3);
lie->add_relation(rel___dollorinter__head2__3__3__1);
lie->add_relation(rel___dollorinter__head21__5__4);
lie->add_relation(rel__do__store__addr__union__3__1__2__3);
lie->add_relation(rel__length__input__1__1);
lie->add_relation(rel___dollorhead__stratified18__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorrule77__inter__body3__4__1__2__3__4);
lie->add_relation(rel___dollorrule48__inter__body2__2__2);
lie->add_relation(rel___dollorrule67__inter__body__3__1__2__3);
lie->add_relation(rel___dollorrule9__inter__body1__4__3);
lie->add_relation(rel___dollorrule60__inter__body7__3__1__2__3);
lie->add_relation(rel___dollorhead__stratified34__3__1__2__3);
lie->add_relation(rel___dollorrule46__inter__body1__3__2);
lie->add_relation(rel___dollorrule40__inter__body1__2__2);
lie->add_relation(rel___dollorrule75__inter__body__4__2__4__1);
lie->add_relation(rel___dollorrule46__inter__body3__1__1);
lie->add_relation(rel___dollorinter__head21__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule4__inter__body2__1__1);
lie->add_relation(rel___dollorhead__stratified18__6__1__6);
lie->add_relation(rel___dollorrule55__inter__body11__4__1__4);
lie->add_relation(rel___dollorrule42__inter__body__5__1__2__3__4__5);
lie->add_relation(rel__int__1__1);
lie->add_relation(rel__ref__1__0);
lie->add_relation(rel___dollorrule7__inter__body11__4__1__2__3__4);
lie->add_relation(rel___dollorrule69__inter__body5__3__1__2__3);
lie->add_relation(rel___dollorrule2__inter__body2__4__1__2__3__4);
lie->add_relation(rel___dollorrule75__inter__body5__7__4);
lie->add_relation(rel___dollorinter__head48__2__1);
lie->add_relation(rel___dollorrule78__inter__body7__2__2);
lie->add_relation(rel__appk__5__0);
lie->add_relation(rel___dollorrule45__inter__body__4__1__2__3__4);
lie->add_relation(rel___dollorrule61__inter__body2__2__2);
lie->add_relation(rel___dollorhead__stratified11__7__2__7);
lie->add_relation(rel___dollorrule67__inter__body10__1__1);
lie->add_relation(rel___dollorrule62__inter__body__4__1);
lie->add_relation(rel___dollorrule77__inter__body2__3__1__2__3);
lie->add_relation(rel___dollorrule20__inter__body1__3__1__2__3);
lie->add_relation(rel___dollorbir__sub4__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorhir__sub2__3__1);
lie->add_relation(rel___dollorbir__sub14__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head31__3__2);
lie->add_relation(rel___dollorrule76__inter__body1__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorrule67__inter__body9__2__1__2);
lie->add_relation(rel__list__of__1__0);
lie->add_relation(rel___dollorhead__stratified37__7__5__7__6__3__2__4);
lie->add_relation(rel___dollorinter__head8__2__2);
lie->add_relation(rel___dollorrule52__inter__body2__4__4);
lie->add_relation(rel___dollorrule73__inter__body2__3__1__2__3);
lie->add_relation(rel___dollorbir__sub9__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorhead__splice__10__1__2__3__4__5__6__7__8__9__10);
lie->add_relation(rel___dollorhead__stratified21__3__1__2__3);
lie->add_relation(rel___dollorrule67__inter__body1__3__1__2__3);
lie->add_relation(rel___dollorrule47__inter__body6__5__1);
lie->add_relation(rel__do__free__lam__3__2);
lie->add_relation(rel__store__2__1__2);
lie->add_relation(rel___dollorinter__head2__3__1__2__3);
lie->add_relation(rel___dollorhead__stratified28__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule79__inter__body1__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head9__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorhead__stratified9__8__8__4);
lie->add_relation(rel___dollorrule53__inter__body__2__1);
lie->add_relation(rel___dollorhead__stratified15__4__1__3__4);
lie->add_relation(rel___dollorhead__stratified20__4__3__4);
lie->add_relation(rel___dollorinter__head50__6__2__4__3__1__5);
lie->add_relation(rel___dollorinter__head12__2__1__2);
lie->add_relation(rel___dollorrule55__inter__body6__3__2);
lie->add_relation(rel___dollorrule3__inter__body1__2__1__2);
lie->add_relation(rel___dollorrule2__inter__body3__4__3);
lie->add_relation(rel__applfk__4__0);
lie->add_relation(rel___dollorlst__2__0__1);
lie->add_relation(rel___dollorinter__head17__3__1__3);
lie->add_relation(rel__fixedarg__1__1);
lie->add_relation(rel___dollorrule60__inter__body7__3__3);
lie->add_relation(rel___dollorrule7__inter__body1__7__7);
lie->add_relation(rel___dollorinter__head62__4__1__2__3__4);
lie->add_relation(rel___dollorlst__split__input__1__1);
lie->add_relation(rel___dollorrule81__inter__body1__5__1__2__3__4__5);
lie->add_relation(rel___dollorinter__head35__6__1__2__3__4__5__6);
lie->add_relation(rel__letk__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorinter__head73__7__3__1);
lie->add_relation(rel__split__at__input__2__2);
lie->add_relation(rel___dollorhir__sub__3__1__2__3);
lie->add_relation(rel___dollorrule9__inter__body__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head59__3__1__2__3);
lie->add_relation(rel__do__tick__2__1);
lie->add_relation(rel___dollorrule1__inter__body1__1__1);
lie->add_relation(rel___dollorinter__head29__2__1);
lie->add_relation(rel___dollorrule71__inter__body5__2__1__2);
lie->add_relation(rel__do__free__let__rhs__2__2);
lie->add_relation(rel___dollorrule55__inter__body12__9__7);
lie->add_relation(rel___dollorrule76__inter__body6__3__3__1);
lie->add_relation(rel___dollorinter__head40__6__4__6__3);
lie->add_relation(rel__saddr__1__0);
lie->add_relation(rel___dollorrule74__inter__body3__4__4);
lie->add_relation(rel___dollorhead__stratified25__3__2__1);
lie->add_relation(rel__appl__2__2);
lie->add_relation(rel__length__2__1__2);
lie->add_relation(rel___dollorrule62__inter__body2__2__1__2);
lie->add_relation(rel___dollorbir__sub16__2__1__2);
lie->add_relation(rel___dollorrule57__inter__body__3__3);
lie->add_relation(rel___dollorrule45__inter__body__4__4);
lie->add_relation(rel__apply__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule61__inter__body5__3__1__2__3);
lie->add_relation(rel___dollorrule2__inter__body2__4__3);
lie->add_relation(rel___dollorsplice__4__1__2__3__4);
lie->add_relation(rel___dollorrule75__inter__body4__4__1__2__3__4);
lie->add_relation(rel___dollorbir__sub13__3__1__2__3);
lie->add_relation(rel__breaks__into__4__1__2__3__4);
lie->add_relation(rel___dollorrule66__inter__body6__2__1__2);
lie->add_relation(rel__split__at__3__1__2__3);
lie->add_relation(rel__free__2__1__2);
lie->add_relation(rel___dollorrule20__inter__body1__3__1__2);
lie->add_relation(rel__addr__1__0);
lie->add_relation(rel___dollorhead__stratified64__3__1__2__3);
lie->add_relation(rel___dollorinter__head43__2__2);
lie->add_relation(rel__do__var__prop__all__h__4__1__2__3__4);
lie->add_relation(rel___dollorhead__stratified4__3__1__2__3);
lie->add_relation(rel___dollorrule35__inter__body__1__1);
lie->add_relation(rel___dollorhead__stratified14__5__2__5);
lie->add_relation(rel___dollorrule66__inter__body4__3__3);
lie->add_relation(rel___dollorinter__head50__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorhead__stratified53__3__1__2__3);
lie->add_relation(rel___dollorhead__stratified9__8__1__2__3__4__5__6__7__8);
lie->add_relation(rel___dollorrule55__inter__body11__4__1__2__3__4);
lie->add_relation(rel___dollorhead__stratified64__3__2__3);
lie->add_relation(rel__let__2__2);
lie->add_relation(rel___dollorinter__head56__3__1__2__3);
lie->add_relation(rel__if__3__2);
lie->add_relation(rel___dollorhead__stratified19__5__4__5);
lie->add_relation(rel___dollorrule2__inter__body1__1__1);
lie->add_relation(rel___dollorbir__sub2__9__1__2__3__4__5__6__7__8__9);
lie->add_relation(rel___dollorrule55__inter__body__1__1);
lie->add_relation(rel___dollorbir__sub__1__1);
lie->add_relation(rel___dollorrule69__inter__body7__4__4);
lie->add_relation(rel___dollorinter__head38__5__1__2__3__4__5);
lie->add_relation(rel__bool__1__1);
lie->add_relation(rel__appl__2__0);
lie->add_relation(rel___dollorrule60__inter__body__3__1__2__3);
lie->add_relation(rel___dollorrule7__inter__body10__3__);
lie->add_relation(rel___dollorrule6__inter__body3__4__);
lie->add_relation(rel___dollorinter__head51__4__3__4);
lie->add_relation(rel___dollorlst__split__3__1__2__3);
lie->add_relation(rel___dollorbir__sub8__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorrule7__inter__body8__1__);
lie->add_relation(rel__if__k__4__1__2__3__4);
lie->add_relation(rel___dollorrule56__inter__body__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorrule75__inter__body2__3__1__2);
lie->add_relation(rel___dollorrule60__inter__body8__4__1);
lie->add_relation(rel___dollorrule9__inter__body3__1__1);
lie->add_relation(rel___dollorrule67__inter__body3__2__2);
lie->add_relation(rel___dollorrule69__inter__body3__1__1);
lie->add_relation(rel___dollorrule55__inter__body3__8__6);
lie->add_relation(rel___dollorbir__sub6__7__1);
lie->add_relation(rel___dollorhead__stratified53__3__2__3);
lie->add_relation(rel___dollorrule47__inter__body7__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorhead__stratified21__3__2__3);
lie->add_relation(rel___dollorinter__head1__3__1__2__3);
lie->add_relation(rel___dollorinter__head70__5__4__2__3__5);
lie->add_relation(rel__eval__3__1);
lie->add_relation(rel___dollorrule46__inter__body5__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorinter__head38__5__5);
lie->add_relation(rel___dollorrule66__inter__body8__1__);
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
lie->add_scc(scc28);
lie->add_scc(scc29);
lie->add_scc(scc30);
lie->add_scc(scc31);
lie->add_scc(scc32);
lie->add_scc(scc33);
lie->add_scc(scc34);
lie->add_scc(scc35);
lie->add_scc(scc36);
lie->add_scc(scc37);
lie->add_scc(scc38);
lie->add_scc(scc39);
lie->add_scc(scc40);
lie->add_scc(scc41);
lie->add_scc(scc42);
lie->add_scc(scc43);
lie->add_scc(scc44);
lie->add_scc(scc45);
lie->add_scc(scc46);
lie->add_scc(scc47);
lie->add_scc(scc48);
lie->add_scc(scc49);
lie->add_scc(scc50);
lie->add_scc(scc51);
lie->add_scc(scc52);
lie->add_scc(scc53);
lie->add_scc(scc54);
lie->add_scc(scc55);
lie->add_scc(scc56);
lie->add_scc(scc57);
lie->add_scc(scc58);
lie->add_scc(scc59);
lie->add_scc(scc60);
lie->add_scc(scc61);
lie->add_scc(scc62);
lie->add_scc(scc63);
lie->add_scc(scc64);
lie->add_scc(scc65);
lie->add_scc(scc66);
lie->add_scc(scc67);
lie->add_scc(scc68);
lie->add_scc(scc69);
lie->add_scc(scc70);
lie->add_scc(scc71);
lie->add_scc(scc72);
lie->add_scc(scc73);
lie->add_scc(scc74);
lie->add_scc(scc75);
lie->add_scc(scc76);
lie->add_scc(scc77);
lie->add_scc(scc78);
lie->add_scc(scc79);
lie->add_scc(scc80);
lie->add_scc(scc81);
lie->add_scc(scc82);
lie->add_scc(scc83);
lie->add_scc(scc84);
lie->add_scc(scc85);
lie->add_scc(scc86);
lie->add_scc(scc87);
lie->add_scc(scc88);
lie->add_scc(scc89);
lie->add_scc(scc90);
lie->add_scc(scc91);
lie->add_scc(scc92);
lie->add_scc(scc93);
lie->add_scc(scc94);
lie->add_scc(scc95);
lie->add_scc(scc96);
lie->add_scc(scc97);
lie->add_scc(scc98);
lie->add_scc(scc99);
lie->add_scc(scc100);
lie->add_scc(scc101);
lie->add_scc(scc102);
lie->add_scc(scc103);
lie->add_scc(scc104);
lie->add_scc(scc105);
lie->add_scc(scc106);
lie->add_scc(scc107);
lie->add_scc(scc108);
lie->add_scc(scc109);
lie->add_scc(scc110);
lie->add_scc(scc111);
lie->add_scc(scc112);
lie->add_scc(scc113);
lie->add_scc(scc114);
lie->add_scc(scc115);
lie->add_scc(scc116);
lie->add_scc(scc117);
lie->add_scc(scc118);
lie->add_scc(scc119);
lie->add_scc(scc120);
lie->add_scc(scc121);
lie->add_scc(scc122);
lie->add_scc(scc123);
lie->add_scc(scc124);
lie->add_scc(scc125);
lie->add_scc(scc126);
lie->add_scc(scc127);
lie->add_scc(scc128);
lie->add_scc(scc129);
lie->add_scc(scc130);
lie->add_scc(scc131);
lie->add_scc(scc132);
lie->add_scc(scc133);
lie->add_scc(scc134);
lie->add_scc(scc135);
lie->add_scc(scc136);
lie->add_scc(scc137);
lie->add_scc(scc138);
lie->add_scc(scc139);
lie->add_scc(scc140);
lie->add_scc(scc141);
lie->add_scc(scc142);
lie->add_scc(scc143);
lie->add_scc(scc144);
lie->add_scc(scc145);
lie->add_scc(scc146);
lie->add_scc(scc147);
lie->add_scc(scc148);
lie->add_scc(scc149);
lie->add_scc(scc150);
lie->add_scc(scc151);
lie->add_scc_dependance(scc0, scc126);
lie->add_scc_dependance(scc16, scc126);
lie->add_scc_dependance(scc32, scc79);
lie->add_scc_dependance(scc32, scc62);
lie->add_scc_dependance(scc32, scc45);
lie->add_scc_dependance(scc32, scc92);
lie->add_scc_dependance(scc32, scc105);
lie->add_scc_dependance(scc32, scc56);
lie->add_scc_dependance(scc32, scc39);
lie->add_scc_dependance(scc32, scc54);
lie->add_scc_dependance(scc32, scc68);
lie->add_scc_dependance(scc32, scc99);
lie->add_scc_dependance(scc32, scc33);
lie->add_scc_dependance(scc48, scc49);
lie->add_scc_dependance(scc64, scc67);
lie->add_scc_dependance(scc64, scc66);
lie->add_scc_dependance(scc64, scc65);
lie->add_scc_dependance(scc80, scc81);
lie->add_scc_dependance(scc96, scc98);
lie->add_scc_dependance(scc96, scc97);
lie->add_scc_dependance(scc112, scc113);
lie->add_scc_dependance(scc128, scc137);
lie->add_scc_dependance(scc144, scc145);
lie->add_scc_dependance(scc1, scc32);
lie->add_scc_dependance(scc17, scc126);
lie->add_scc_dependance(scc33, scc34);
lie->add_scc_dependance(scc49, scc53);
lie->add_scc_dependance(scc49, scc52);
lie->add_scc_dependance(scc49, scc51);
lie->add_scc_dependance(scc49, scc50);
lie->add_scc_dependance(scc65, scc126);
lie->add_scc_dependance(scc81, scc82);
lie->add_scc_dependance(scc97, scc126);
lie->add_scc_dependance(scc113, scc114);
lie->add_scc_dependance(scc129, scc136);
lie->add_scc_dependance(scc2, scc126);
lie->add_scc_dependance(scc18, scc126);
lie->add_scc_dependance(scc34, scc35);
lie->add_scc_dependance(scc50, scc126);
lie->add_scc_dependance(scc50, scc130);
lie->add_scc_dependance(scc66, scc126);
lie->add_scc_dependance(scc66, scc130);
lie->add_scc_dependance(scc82, scc83);
lie->add_scc_dependance(scc98, scc126);
lie->add_scc_dependance(scc114, scc115);
lie->add_scc_dependance(scc130, scc133);
lie->add_scc_dependance(scc146, scc147);
lie->add_scc_dependance(scc3, scc126);
lie->add_scc_dependance(scc19, scc126);
lie->add_scc_dependance(scc35, scc38);
lie->add_scc_dependance(scc35, scc37);
lie->add_scc_dependance(scc35, scc36);
lie->add_scc_dependance(scc51, scc126);
lie->add_scc_dependance(scc51, scc125);
lie->add_scc_dependance(scc51, scc124);
lie->add_scc_dependance(scc67, scc126);
lie->add_scc_dependance(scc83, scc84);
lie->add_scc_dependance(scc99, scc100);
lie->add_scc_dependance(scc115, scc123);
lie->add_scc_dependance(scc115, scc122);
lie->add_scc_dependance(scc115, scc121);
lie->add_scc_dependance(scc115, scc120);
lie->add_scc_dependance(scc115, scc118);
lie->add_scc_dependance(scc115, scc117);
lie->add_scc_dependance(scc115, scc116);
lie->add_scc_dependance(scc131, scc132);
lie->add_scc_dependance(scc147, scc148);
lie->add_scc_dependance(scc4, scc126);
lie->add_scc_dependance(scc20, scc126);
lie->add_scc_dependance(scc36, scc77);
lie->add_scc_dependance(scc36, scc75);
lie->add_scc_dependance(scc36, scc74);
lie->add_scc_dependance(scc52, scc126);
lie->add_scc_dependance(scc68, scc69);
lie->add_scc_dependance(scc84, scc85);
lie->add_scc_dependance(scc100, scc101);
lie->add_scc_dependance(scc116, scc126);
lie->add_scc_dependance(scc116, scc119);
lie->add_scc_dependance(scc132, scc133);
lie->add_scc_dependance(scc148, scc149);
lie->add_scc_dependance(scc5, scc126);
lie->add_scc_dependance(scc21, scc126);
lie->add_scc_dependance(scc37, scc126);
lie->add_scc_dependance(scc37, scc130);
lie->add_scc_dependance(scc53, scc126);
lie->add_scc_dependance(scc69, scc70);
lie->add_scc_dependance(scc85, scc86);
lie->add_scc_dependance(scc101, scc104);
lie->add_scc_dependance(scc101, scc103);
lie->add_scc_dependance(scc101, scc102);
lie->add_scc_dependance(scc117, scc126);
lie->add_scc_dependance(scc117, scc125);
lie->add_scc_dependance(scc117, scc124);
lie->add_scc_dependance(scc133, scc134);
lie->add_scc_dependance(scc149, scc150);
lie->add_scc_dependance(scc6, scc126);
lie->add_scc_dependance(scc22, scc32);
lie->add_scc_dependance(scc38, scc75);
lie->add_scc_dependance(scc54, scc126);
lie->add_scc_dependance(scc54, scc55);
lie->add_scc_dependance(scc70, scc73);
lie->add_scc_dependance(scc70, scc72);
lie->add_scc_dependance(scc70, scc71);
lie->add_scc_dependance(scc86, scc87);
lie->add_scc_dependance(scc102, scc126);
lie->add_scc_dependance(scc102, scc130);
lie->add_scc_dependance(scc118, scc126);
lie->add_scc_dependance(scc118, scc119);
lie->add_scc_dependance(scc134, scc135);
lie->add_scc_dependance(scc150, scc151);
lie->add_scc_dependance(scc7, scc32);
lie->add_scc_dependance(scc23, scc126);
lie->add_scc_dependance(scc39, scc40);
lie->add_scc_dependance(scc55, scc126);
lie->add_scc_dependance(scc71, scc77);
lie->add_scc_dependance(scc87, scc88);
lie->add_scc_dependance(scc103, scc126);
lie->add_scc_dependance(scc119, scc126);
lie->add_scc_dependance(scc8, scc32);
lie->add_scc_dependance(scc24, scc32);
lie->add_scc_dependance(scc40, scc41);
lie->add_scc_dependance(scc56, scc57);
lie->add_scc_dependance(scc72, scc126);
lie->add_scc_dependance(scc72, scc130);
lie->add_scc_dependance(scc88, scc89);
lie->add_scc_dependance(scc104, scc126);
lie->add_scc_dependance(scc120, scc126);
lie->add_scc_dependance(scc9, scc32);
lie->add_scc_dependance(scc25, scc126);
lie->add_scc_dependance(scc41, scc44);
lie->add_scc_dependance(scc41, scc43);
lie->add_scc_dependance(scc41, scc42);
lie->add_scc_dependance(scc57, scc58);
lie->add_scc_dependance(scc73, scc77);
lie->add_scc_dependance(scc73, scc75);
lie->add_scc_dependance(scc73, scc74);
lie->add_scc_dependance(scc89, scc91);
lie->add_scc_dependance(scc89, scc90);
lie->add_scc_dependance(scc105, scc106);
lie->add_scc_dependance(scc121, scc126);
lie->add_scc_dependance(scc137, scc138);
lie->add_scc_dependance(scc10, scc126);
lie->add_scc_dependance(scc26, scc32);
lie->add_scc_dependance(scc42, scc126);
lie->add_scc_dependance(scc58, scc61);
lie->add_scc_dependance(scc58, scc60);
lie->add_scc_dependance(scc58, scc59);
lie->add_scc_dependance(scc74, scc126);
lie->add_scc_dependance(scc90, scc126);
lie->add_scc_dependance(scc106, scc107);
lie->add_scc_dependance(scc122, scc126);
lie->add_scc_dependance(scc122, scc130);
lie->add_scc_dependance(scc138, scc151);
lie->add_scc_dependance(scc11, scc126);
lie->add_scc_dependance(scc27, scc126);
lie->add_scc_dependance(scc43, scc126);
lie->add_scc_dependance(scc59, scc126);
lie->add_scc_dependance(scc75, scc76);
lie->add_scc_dependance(scc91, scc126);
lie->add_scc_dependance(scc107, scc108);
lie->add_scc_dependance(scc123, scc126);
lie->add_scc_dependance(scc123, scc125);
lie->add_scc_dependance(scc123, scc124);
lie->add_scc_dependance(scc139, scc140);
lie->add_scc_dependance(scc12, scc32);
lie->add_scc_dependance(scc28, scc126);
lie->add_scc_dependance(scc44, scc126);
lie->add_scc_dependance(scc44, scc130);
lie->add_scc_dependance(scc60, scc126);
lie->add_scc_dependance(scc60, scc130);
lie->add_scc_dependance(scc76, scc126);
lie->add_scc_dependance(scc92, scc93);
lie->add_scc_dependance(scc108, scc109);
lie->add_scc_dependance(scc124, scc126);
lie->add_scc_dependance(scc140, scc141);
lie->add_scc_dependance(scc13, scc32);
lie->add_scc_dependance(scc29, scc126);
lie->add_scc_dependance(scc45, scc46);
lie->add_scc_dependance(scc61, scc126);
lie->add_scc_dependance(scc77, scc78);
lie->add_scc_dependance(scc93, scc94);
lie->add_scc_dependance(scc109, scc110);
lie->add_scc_dependance(scc125, scc126);
lie->add_scc_dependance(scc141, scc142);
lie->add_scc_dependance(scc14, scc126);
lie->add_scc_dependance(scc14, scc147);
lie->add_scc_dependance(scc30, scc32);
lie->add_scc_dependance(scc46, scc47);
lie->add_scc_dependance(scc62, scc63);
lie->add_scc_dependance(scc78, scc126);
lie->add_scc_dependance(scc94, scc95);
lie->add_scc_dependance(scc110, scc111);
lie->add_scc_dependance(scc126, scc143);
lie->add_scc_dependance(scc126, scc127);
lie->add_scc_dependance(scc126, scc147);
lie->add_scc_dependance(scc126, scc131);
lie->add_scc_dependance(scc126, scc146);
lie->add_scc_dependance(scc126, scc130);
lie->add_scc_dependance(scc126, scc145);
lie->add_scc_dependance(scc126, scc129);
lie->add_scc_dependance(scc126, scc144);
lie->add_scc_dependance(scc126, scc128);
lie->add_scc_dependance(scc126, scc141);
lie->add_scc_dependance(scc126, scc139);
lie->add_scc_dependance(scc126, scc137);
lie->add_scc_dependance(scc126, scc136);
lie->add_scc_dependance(scc126, scc135);
lie->add_scc_dependance(scc126, scc149);
lie->add_scc_dependance(scc142, scc143);
lie->add_scc_dependance(scc15, scc126);
lie->add_scc_dependance(scc31, scc32);
lie->add_scc_dependance(scc47, scc48);
lie->add_scc_dependance(scc63, scc64);
lie->add_scc_dependance(scc79, scc80);
lie->add_scc_dependance(scc95, scc96);
lie->add_scc_dependance(scc111, scc112);
lie->add_scc_dependance(scc127, scc139);
lie->add_scc_dependance(scc127, scc131);



  
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
