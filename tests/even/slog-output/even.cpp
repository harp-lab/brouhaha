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
#include <vector>
#include <string>
#include <cassert>
#include <iostream>
#include <array>
#include <functional>
#include <tuple>
#include <functional>

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
  u32 str_hash = string_hash(str);
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


//////////////////// AGGREGATORS  ////////////////////
using local_agg_res_t = u64;

local_agg_res_t agg_not_reduce(local_agg_res_t x, local_agg_res_t y) {
  return x | y;
}

template<typename TState> TState agg_not_global(u64* data, local_agg_res_t agg_data, u64 agg_data_count, TState init_state, TState (*callback) (TState state)){
  cout << "agg_not_global called with count: " << agg_data_count << ", and res: " << agg_data << "\n";
  if (agg_data_count > 0 && agg_data)  {
    return init_state;
  } else {
    cout << "agg_not_global: calling callback!" << "\n";
    return callback(init_state);
  }
}

local_agg_res_t agg_sum_reduce(local_agg_res_t x, local_agg_res_t y) {
  return x + y;
}

template<typename TState> TState agg_sum_global(u64* data, local_agg_res_t agg_data, u64 agg_data_count, TState init_state, TState (*callback) (u64 res, TState state)){
  return callback(n2d(agg_data), init_state);
}

///////////////// OLD DESIGN ////////////////////////

// struct _BTree_Iterator {
//   virtual u64* operator*() = 0;
//   virtual bool operator!=(const _BTree_Iterator& rhs) = 0;
//   virtual _BTree_Iterator& operator++() = 0;
// };
// struct _BTree {
//   virtual bool has_key(const u64* key) = 0;
//   virtual _BTree_Iterator& begin() = 0;
//   virtual _BTree_Iterator& end() = 0;
// };

// typedef local_agg_res_t *local_agg_func_t (_BTree* agg_rel, const u64* data);

// typedef local_agg_res_t *reduce_agg_func_t (local_agg_res_t x, local_agg_res_t y);

// typedef int *global_agg_func_t (u64* data, local_agg_res_t agg_data, int agg_data_count, u64* output); 

// parallel_copy_aggregate(relation rel, relation agg_rel, relation target_rel, 
//                              local_agg_func_t local_agg_func, reduce_agg_func_t reduce_agg_func, global_agg_func_t global_agg_fun);


// local_agg_res_t agg_not_1_local_OLD(_BTree* rel, const u64* data){
//   return rel->has_key(data)? (u64) true : (u64) false;
// }

// local_agg_res_t agg_not_2_local_OLD(_BTree* rel, const u64* data){
//   return rel->has_key(data)? (u64) true : (u64) false;
// }


// local_agg_res_t agg_sum_local_OLD(_BTree* rel, const u64* data) {
//   u64 sum = 0;
//   for (auto iter = rel->begin(); iter != rel->end(); iter++){
//     auto current = *iter;
//     if (is_number(*current)) {
//       sum += d2n(*current);
//     }
//   }
//   return sum;
// }

// //////////////////// AGGREGATORS Alternative design ////////////////////

// struct RelDataIterator {
//   virtual u64* operator*() = 0;
//   virtual bool operator!=(const RelDataIterator& rhs) = 0;
//   virtual RelDataIterator& operator++() = 0;
// };

// struct ReLData {
//   virtual RelDataIterator& begin() = 0;
//   virtual RelDataIterator& end() = 0;
// };

// enum class SpecialAggregator {
//   none,
//   sum,
// };
// // typedef local_agg_res_t *local_agg_func_t (ReLData& agg_rel, const u64* data);

// // typedef local_agg_res_t *reduce_agg_func_t (local_agg_res_t x, local_agg_res_t y);

// // typedef int *global_agg_func_t (u64* data, local_agg_res_t agg_data, int agg_data_count, u64* output); 

// // void parallel_copy_aggregate(relation rel, relation agg_rel, relation target_rel, 
// //                              local_agg_func_t local_agg_func, 
// //                              SpecialAggregator special_agg, reduce_agg_func_t reduce_agg_func, 
// //                              global_agg_func_t global_agg_fun);

// local_agg_res_t agg_not_1_local(ReLData& rel, const u64* data){
//   auto has_any = rel.begin() != rel.end();
//   return has_any;
// }

// local_agg_res_t agg_not_2_local(ReLData& rel, const u64* data){
//   return agg_not_1_local(rel, data);
// }

// local_agg_res_t agg_sum_local(ReLData& rel, const u64* data) {
//   u64 sum = 0;
//   for (auto iter = rel.begin(); iter != rel.end(); iter++){
//     auto current = *iter;
//     if (is_number(*current)) {
//       sum += d2n(*current);
//     }
//   }
//   return sum;
// }
// // end of builtins.cpp


// global definitions:


int max_rel = 255;
std::map<std::string, int> rel_tag_map;
std::map<std::string, std::unordered_set<std::string>> rel_index_map;

// load all relation inside input database
void load_input_relation(std::string db_dir)
{
  for (const auto & entry : std::filesystem::directory_iterator(db_dir))
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

relation* rel___dollorinter__head42__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$inter-head42","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$inter-head42","1__2__3__4__5__6__7")) + ".$inter-head42.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head42","1__2__3__4__5__6__7")) + ".$inter-head42.7.table", FULL);
relation* rel__ret__2__1 = new relation(1, false, 2, get_tag_for_rel("ret","1"), std::to_string(get_tag_for_rel("ret","1")) + ".ret.2.table",   FULL);
relation* rel___dollorbir__sub19__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$bir-sub19","1__2__3"), std::to_string(get_tag_for_rel("$bir-sub19","1__2__3")) + ".$bir-sub19.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub19","1__2__3")) + ".$bir-sub19.3.table", FULL);
relation* rel___dollorinter__head17__5__5__1 = new relation(2, false, 5, get_tag_for_rel("$inter-head17","5__1"), std::to_string(get_tag_for_rel("$inter-head17","5__1")) + ".$inter-head17.5.table",   FULL);
relation* rel__split__at__input__2__1__2 = new relation(2, true, 2, get_tag_for_rel("split-at-input","1__2"), std::to_string(get_tag_for_rel("split-at-input","1__2")) + ".split-at-input.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("split-at-input","1__2")) + ".split-at-input.2.table", FULL);
relation* rel__varparam__1__0 = new relation(1, false, 1, get_tag_for_rel("varparam","0"), std::to_string(get_tag_for_rel("varparam","0")) + ".varparam.1.table",   FULL);
relation* rel___dollorrule37__inter__body1__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule37-inter-body1","1__2"), std::to_string(get_tag_for_rel("$rule37-inter-body1","1__2")) + ".$rule37-inter-body1.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule37-inter-body1","1__2")) + ".$rule37-inter-body1.2.table", FULL);
relation* rel__env__map__3__2 = new relation(1, false, 3, get_tag_for_rel("env-map","2"), std::to_string(get_tag_for_rel("env-map","2")) + ".env-map.3.table",   FULL);
relation* rel___dollorrule42__inter__body3__4__2 = new relation(1, false, 4, get_tag_for_rel("$rule42-inter-body3","2"), std::to_string(get_tag_for_rel("$rule42-inter-body3","2")) + ".$rule42-inter-body3.4.table",   FULL);
relation* rel___dollorinter__head41__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$inter-head41","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$inter-head41","1__2__3__4__5__6")) + ".$inter-head41.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head41","1__2__3__4__5__6")) + ".$inter-head41.6.table", FULL);
relation* rel___dollorhead__stratified36__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$head-stratified36","1__2__3__4__5"), std::to_string(get_tag_for_rel("$head-stratified36","1__2__3__4__5")) + ".$head-stratified36.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified36","1__2__3__4__5")) + ".$head-stratified36.5.table", FULL);
relation* rel___dollorhead__stratified15__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$head-stratified15","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$head-stratified15","1__2__3__4__5__6")) + ".$head-stratified15.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified15","1__2__3__4__5__6")) + ".$head-stratified15.6.table", FULL);
relation* rel___dollorinter__head36__2__1 = new relation(1, false, 2, get_tag_for_rel("$inter-head36","1"), std::to_string(get_tag_for_rel("$inter-head36","1")) + ".$inter-head36.2.table",   FULL);
relation* rel___dollorrule44__inter__body2__8__5 = new relation(1, false, 8, get_tag_for_rel("$rule44-inter-body2","5"), std::to_string(get_tag_for_rel("$rule44-inter-body2","5")) + ".$rule44-inter-body2.8.table",   FULL);
relation* rel___dollorrule27__inter__body2__2__2 = new relation(1, false, 2, get_tag_for_rel("$rule27-inter-body2","2"), std::to_string(get_tag_for_rel("$rule27-inter-body2","2")) + ".$rule27-inter-body2.2.table",   FULL);
relation* rel___dollorhead__stratified16__5__2__5 = new relation(2, false, 5, get_tag_for_rel("$head-stratified16","2__5"), std::to_string(get_tag_for_rel("$head-stratified16","2__5")) + ".$head-stratified16.5.table",   FULL);
relation* rel___dollorrule17__inter__body__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule17-inter-body","1__2__3"), std::to_string(get_tag_for_rel("$rule17-inter-body","1__2__3")) + ".$rule17-inter-body.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule17-inter-body","1__2__3")) + ".$rule17-inter-body.3.table", FULL);
relation* rel___dollorrule19__inter__body__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule19-inter-body","1__2"), std::to_string(get_tag_for_rel("$rule19-inter-body","1__2")) + ".$rule19-inter-body.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule19-inter-body","1__2")) + ".$rule19-inter-body.2.table", FULL);
relation* rel___dollorrule24__inter__body2__4__1 = new relation(1, false, 4, get_tag_for_rel("$rule24-inter-body2","1"), std::to_string(get_tag_for_rel("$rule24-inter-body2","1")) + ".$rule24-inter-body2.4.table",   FULL);
relation* rel___dollorrule21__inter__body6__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule21-inter-body6","3"), std::to_string(get_tag_for_rel("$rule21-inter-body6","3")) + ".$rule21-inter-body6.3.table",   FULL);
relation* rel___dollorrule2__inter__body__4__3 = new relation(1, false, 4, get_tag_for_rel("$rule2-inter-body","3"), std::to_string(get_tag_for_rel("$rule2-inter-body","3")) + ".$rule2-inter-body.4.table",   FULL);
relation* rel___dollorrule26__inter__body2__5__1 = new relation(1, false, 5, get_tag_for_rel("$rule26-inter-body2","1"), std::to_string(get_tag_for_rel("$rule26-inter-body2","1")) + ".$rule26-inter-body2.5.table",   FULL);
relation* rel___dollorbir__sub5__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$bir-sub5","1__2__3__4__5"), std::to_string(get_tag_for_rel("$bir-sub5","1__2__3__4__5")) + ".$bir-sub5.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub5","1__2__3__4__5")) + ".$bir-sub5.5.table", FULL);
relation* rel___dollorinter__head34__5__1__2 = new relation(2, false, 5, get_tag_for_rel("$inter-head34","1__2"), std::to_string(get_tag_for_rel("$inter-head34","1__2")) + ".$inter-head34.5.table",   FULL);
relation* rel___dollorrule44__inter__body6__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule44-inter-body6","1__2"), std::to_string(get_tag_for_rel("$rule44-inter-body6","1__2")) + ".$rule44-inter-body6.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule44-inter-body6","1__2")) + ".$rule44-inter-body6.2.table", FULL);
relation* rel___dollorrule39__inter__body4__5__5 = new relation(1, false, 5, get_tag_for_rel("$rule39-inter-body4","5"), std::to_string(get_tag_for_rel("$rule39-inter-body4","5")) + ".$rule39-inter-body4.5.table",   FULL);
relation* rel___dollorrule40__inter__body7__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule40-inter-body7","1__2"), std::to_string(get_tag_for_rel("$rule40-inter-body7","1__2")) + ".$rule40-inter-body7.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule40-inter-body7","1__2")) + ".$rule40-inter-body7.2.table", FULL);
relation* rel___dollorhead__stratified8__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$head-stratified8","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$head-stratified8","1__2__3__4__5__6__7")) + ".$head-stratified8.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified8","1__2__3__4__5__6__7")) + ".$head-stratified8.7.table", FULL);
relation* rel___dollorhead__stratified59__4__1__4__3 = new relation(3, false, 4, get_tag_for_rel("$head-stratified59","1__4__3"), std::to_string(get_tag_for_rel("$head-stratified59","1__4__3")) + ".$head-stratified59.4.table",   FULL);
relation* rel___dollorbir__sub6__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$bir-sub6","1__2__3__4__5"), std::to_string(get_tag_for_rel("$bir-sub6","1__2__3__4__5")) + ".$bir-sub6.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub6","1__2__3__4__5")) + ".$bir-sub6.5.table", FULL);
relation* rel___dollorunit__1__1 = new relation(1, true, 1, get_tag_for_rel("$unit","1"), std::to_string(get_tag_for_rel("$unit","1")) + ".$unit.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$unit","1")) + ".$unit.1.table", FULL);
relation* rel___dollorrule25__inter__body5__4__1 = new relation(1, false, 4, get_tag_for_rel("$rule25-inter-body5","1"), std::to_string(get_tag_for_rel("$rule25-inter-body5","1")) + ".$rule25-inter-body5.4.table",   FULL);
relation* rel___dollorrule24__inter__body1__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule24-inter-body1","1__2__3__4"), std::to_string(get_tag_for_rel("$rule24-inter-body1","1__2__3__4")) + ".$rule24-inter-body1.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule24-inter-body1","1__2__3__4")) + ".$rule24-inter-body1.4.table", FULL);
relation* rel___dollorinter__head36__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$inter-head36","1__2"), std::to_string(get_tag_for_rel("$inter-head36","1__2")) + ".$inter-head36.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head36","1__2")) + ".$inter-head36.2.table", FULL);
relation* rel___dollorinter__head15__3__2 = new relation(1, false, 3, get_tag_for_rel("$inter-head15","2"), std::to_string(get_tag_for_rel("$inter-head15","2")) + ".$inter-head15.3.table",   FULL);
relation* rel__ext__all__2__1 = new relation(1, false, 2, get_tag_for_rel("ext-all","1"), std::to_string(get_tag_for_rel("ext-all","1")) + ".ext-all.2.table",   FULL);
relation* rel___dollorrule41__inter__body1__9__1__2__3__4__5__6__7__8__9 = new relation(9, true, 9, get_tag_for_rel("$rule41-inter-body1","1__2__3__4__5__6__7__8__9"), std::to_string(get_tag_for_rel("$rule41-inter-body1","1__2__3__4__5__6__7__8__9")) + ".$rule41-inter-body1.9.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule41-inter-body1","1__2__3__4__5__6__7__8__9")) + ".$rule41-inter-body1.9.table", FULL);
relation* rel___dollorrule38__inter__body1__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule38-inter-body1","1__2__3"), std::to_string(get_tag_for_rel("$rule38-inter-body1","1__2__3")) + ".$rule38-inter-body1.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule38-inter-body1","1__2__3")) + ".$rule38-inter-body1.3.table", FULL);
relation* rel___dollorrule22__inter__body1__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule22-inter-body1","1__2__3"), std::to_string(get_tag_for_rel("$rule22-inter-body1","1__2__3")) + ".$rule22-inter-body1.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule22-inter-body1","1__2__3")) + ".$rule22-inter-body1.3.table", FULL);
relation* rel___dollorinter__head17__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$inter-head17","1__2__3__4__5"), std::to_string(get_tag_for_rel("$inter-head17","1__2__3__4__5")) + ".$inter-head17.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head17","1__2__3__4__5")) + ".$inter-head17.5.table", FULL);
relation* rel__list__of__1__1 = new relation(1, true, 1, get_tag_for_rel("list-of","1"), std::to_string(get_tag_for_rel("list-of","1")) + ".list-of.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("list-of","1")) + ".list-of.1.table", FULL);
relation* rel___dollorbir__sub18__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$bir-sub18","1__2"), std::to_string(get_tag_for_rel("$bir-sub18","1__2")) + ".$bir-sub18.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub18","1__2")) + ".$bir-sub18.2.table", FULL);
relation* rel__apply__prim__2__1__2 = new relation(2, true, 2, get_tag_for_rel("apply-prim","1__2"), std::to_string(get_tag_for_rel("apply-prim","1__2")) + ".apply-prim.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("apply-prim","1__2")) + ".apply-prim.2.table", FULL);
relation* rel___dollorrule13__inter__body__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule13-inter-body","1__2__3"), std::to_string(get_tag_for_rel("$rule13-inter-body","1__2__3")) + ".$rule13-inter-body.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule13-inter-body","1__2__3")) + ".$rule13-inter-body.3.table", FULL);
relation* rel___dollorinter__head13__2__2 = new relation(1, false, 2, get_tag_for_rel("$inter-head13","2"), std::to_string(get_tag_for_rel("$inter-head13","2")) + ".$inter-head13.2.table",   FULL);
relation* rel___dollorrule42__inter__body__5__5 = new relation(1, false, 5, get_tag_for_rel("$rule42-inter-body","5"), std::to_string(get_tag_for_rel("$rule42-inter-body","5")) + ".$rule42-inter-body.5.table",   FULL);
relation* rel___dollorinter__head4__7__4 = new relation(1, false, 7, get_tag_for_rel("$inter-head4","4"), std::to_string(get_tag_for_rel("$inter-head4","4")) + ".$inter-head4.7.table",   FULL);
relation* rel___dollorrule22__inter__body6__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule22-inter-body6","1"), std::to_string(get_tag_for_rel("$rule22-inter-body6","1")) + ".$rule22-inter-body6.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule22-inter-body6","1")) + ".$rule22-inter-body6.1.table", FULL);
relation* rel___dollorrule27__inter__body4__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule27-inter-body4","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule27-inter-body4","1__2__3__4__5")) + ".$rule27-inter-body4.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule27-inter-body4","1__2__3__4__5")) + ".$rule27-inter-body4.5.table", FULL);
relation* rel___dollorrule24__inter__body__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule24-inter-body","1__2__3"), std::to_string(get_tag_for_rel("$rule24-inter-body","1__2__3")) + ".$rule24-inter-body.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule24-inter-body","1__2__3")) + ".$rule24-inter-body.3.table", FULL);
relation* rel___dollorbir__sub19__3__1 = new relation(1, false, 3, get_tag_for_rel("$bir-sub19","1"), std::to_string(get_tag_for_rel("$bir-sub19","1")) + ".$bir-sub19.3.table",   FULL);
relation* rel___dollorhead__splice3__7__4__7 = new relation(2, false, 7, get_tag_for_rel("$head-splice3","4__7"), std::to_string(get_tag_for_rel("$head-splice3","4__7")) + ".$head-splice3.7.table",   FULL);
relation* rel__state__1__1 = new relation(1, true, 1, get_tag_for_rel("state","1"), std::to_string(get_tag_for_rel("state","1")) + ".state.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("state","1")) + ".state.1.table", FULL);
relation* rel___dollorhead__stratified2__5__3__5 = new relation(2, false, 5, get_tag_for_rel("$head-stratified2","3__5"), std::to_string(get_tag_for_rel("$head-stratified2","3__5")) + ".$head-stratified2.5.table",   FULL);
relation* rel___dollorbir__sub7__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$bir-sub7","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$bir-sub7","1__2__3__4__5__6")) + ".$bir-sub7.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub7","1__2__3__4__5__6")) + ".$bir-sub7.6.table", FULL);
relation* rel___dollorrule5__inter__body__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule5-inter-body","3"), std::to_string(get_tag_for_rel("$rule5-inter-body","3")) + ".$rule5-inter-body.3.table",   FULL);
relation* rel__do__var__prop__all__h__3__2 = new relation(1, false, 3, get_tag_for_rel("do-var-prop-all-h","2"), std::to_string(get_tag_for_rel("do-var-prop-all-h","2")) + ".do-var-prop-all-h.3.table",   FULL);
relation* rel___dollorrule22__inter__body4__4__4__2 = new relation(2, false, 4, get_tag_for_rel("$rule22-inter-body4","4__2"), std::to_string(get_tag_for_rel("$rule22-inter-body4","4__2")) + ".$rule22-inter-body4.4.table",   FULL);
relation* rel___dollorrule26__inter__body3__5__ = new relation(0, false, 5, get_tag_for_rel("$rule26-inter-body3",""), std::to_string(get_tag_for_rel("$rule26-inter-body3","")) + ".$rule26-inter-body3.5.table",   FULL);
relation* rel___dollorrule26__inter__body__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule26-inter-body","1__2__3"), std::to_string(get_tag_for_rel("$rule26-inter-body","1__2__3")) + ".$rule26-inter-body.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule26-inter-body","1__2__3")) + ".$rule26-inter-body.3.table", FULL);
relation* rel___dollorrule41__inter__body10__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule41-inter-body10","1__2"), std::to_string(get_tag_for_rel("$rule41-inter-body10","1__2")) + ".$rule41-inter-body10.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule41-inter-body10","1__2")) + ".$rule41-inter-body10.2.table", FULL);
relation* rel___dollorrule44__inter__body7__3__ = new relation(0, false, 3, get_tag_for_rel("$rule44-inter-body7",""), std::to_string(get_tag_for_rel("$rule44-inter-body7","")) + ".$rule44-inter-body7.3.table",   FULL);
relation* rel__top__level__env__1__ = new relation(0, false, 1, get_tag_for_rel("top-level-env",""), std::to_string(get_tag_for_rel("top-level-env","")) + ".top-level-env.1.table",   FULL);
relation* rel___dollorrule41__inter__body3__8__1 = new relation(1, false, 8, get_tag_for_rel("$rule41-inter-body3","1"), std::to_string(get_tag_for_rel("$rule41-inter-body3","1")) + ".$rule41-inter-body3.8.table",   FULL);
relation* rel___dollorrule6__inter__body__4__ = new relation(0, false, 4, get_tag_for_rel("$rule6-inter-body",""), std::to_string(get_tag_for_rel("$rule6-inter-body","")) + ".$rule6-inter-body.4.table",   FULL);
relation* rel__quote__1__1 = new relation(1, true, 1, get_tag_for_rel("quote","1"), std::to_string(get_tag_for_rel("quote","1")) + ".quote.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("quote","1")) + ".quote.1.table", FULL);
relation* rel___dollorrule25__inter__body__6__4__6 = new relation(2, false, 6, get_tag_for_rel("$rule25-inter-body","4__6"), std::to_string(get_tag_for_rel("$rule25-inter-body","4__6")) + ".$rule25-inter-body.6.table",   FULL);
relation* rel__define__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("define","1__2__3"), std::to_string(get_tag_for_rel("define","1__2__3")) + ".define.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("define","1__2__3")) + ".define.3.table", FULL);
relation* rel___dollorinter__head20__3__1 = new relation(1, false, 3, get_tag_for_rel("$inter-head20","1"), std::to_string(get_tag_for_rel("$inter-head20","1")) + ".$inter-head20.3.table",   FULL);
relation* rel__env__set__3__2 = new relation(1, false, 3, get_tag_for_rel("env-set","2"), std::to_string(get_tag_for_rel("env-set","2")) + ".env-set.3.table",   FULL);
relation* rel___dollorhead__stratified11__9__1__2__3__4__5__6__7__8__9 = new relation(9, true, 9, get_tag_for_rel("$head-stratified11","1__2__3__4__5__6__7__8__9"), std::to_string(get_tag_for_rel("$head-stratified11","1__2__3__4__5__6__7__8__9")) + ".$head-stratified11.9.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified11","1__2__3__4__5__6__7__8__9")) + ".$head-stratified11.9.table", FULL);
relation* rel___dollorhead__stratified60__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$head-stratified60","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$head-stratified60","1__2__3__4__5__6")) + ".$head-stratified60.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified60","1__2__3__4__5__6")) + ".$head-stratified60.6.table", FULL);
relation* rel__clo__2__1__2 = new relation(2, true, 2, get_tag_for_rel("clo","1__2"), std::to_string(get_tag_for_rel("clo","1__2")) + ".clo.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("clo","1__2")) + ".clo.2.table", FULL);
relation* rel___dollorinter__head37__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$inter-head37","1__2__3__4__5"), std::to_string(get_tag_for_rel("$inter-head37","1__2__3__4__5")) + ".$inter-head37.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head37","1__2__3__4__5")) + ".$inter-head37.5.table", FULL);
relation* rel___dollorrule22__inter__body7__3__2 = new relation(1, false, 3, get_tag_for_rel("$rule22-inter-body7","2"), std::to_string(get_tag_for_rel("$rule22-inter-body7","2")) + ".$rule22-inter-body7.3.table",   FULL);
relation* rel___dollorhead__stratified55__3__2__3 = new relation(2, false, 3, get_tag_for_rel("$head-stratified55","2__3"), std::to_string(get_tag_for_rel("$head-stratified55","2__3")) + ".$head-stratified55.3.table",   FULL);
relation* rel__prim__2__0 = new relation(1, false, 2, get_tag_for_rel("prim","0"), std::to_string(get_tag_for_rel("prim","0")) + ".prim.2.table",   FULL);
relation* rel___dollorinter__head25__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$inter-head25","1__2__3__4"), std::to_string(get_tag_for_rel("$inter-head25","1__2__3__4")) + ".$inter-head25.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head25","1__2__3__4")) + ".$inter-head25.4.table", FULL);
relation* rel___dollorrule26__inter__body1__4__2 = new relation(1, false, 4, get_tag_for_rel("$rule26-inter-body1","2"), std::to_string(get_tag_for_rel("$rule26-inter-body1","2")) + ".$rule26-inter-body1.4.table",   FULL);
relation* rel___dollorrule27__inter__body__4__2 = new relation(1, false, 4, get_tag_for_rel("$rule27-inter-body","2"), std::to_string(get_tag_for_rel("$rule27-inter-body","2")) + ".$rule27-inter-body.4.table",   FULL);
relation* rel___dollorhead__stratified19__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$head-stratified19","1__2__3__4"), std::to_string(get_tag_for_rel("$head-stratified19","1__2__3__4")) + ".$head-stratified19.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified19","1__2__3__4")) + ".$head-stratified19.4.table", FULL);
relation* rel___dollorinter__head53__5__1 = new relation(1, false, 5, get_tag_for_rel("$inter-head53","1"), std::to_string(get_tag_for_rel("$inter-head53","1")) + ".$inter-head53.5.table",   FULL);
relation* rel___dollorrule21__inter__body4__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule21-inter-body4","1__2__3__4"), std::to_string(get_tag_for_rel("$rule21-inter-body4","1__2__3__4")) + ".$rule21-inter-body4.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule21-inter-body4","1__2__3__4")) + ".$rule21-inter-body4.4.table", FULL);
relation* rel__split__at__3__1 = new relation(1, false, 3, get_tag_for_rel("split-at","1"), std::to_string(get_tag_for_rel("split-at","1")) + ".split-at.3.table",   FULL);
relation* rel___dollorrule27__inter__body2__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule27-inter-body2","1__2"), std::to_string(get_tag_for_rel("$rule27-inter-body2","1__2")) + ".$rule27-inter-body2.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule27-inter-body2","1__2")) + ".$rule27-inter-body2.2.table", FULL);
relation* rel___dollorhead__stratified48__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified48","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified48","1__2__3")) + ".$head-stratified48.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified48","1__2__3")) + ".$head-stratified48.3.table", FULL);
relation* rel___dollorrule42__inter__body2__4__4 = new relation(1, false, 4, get_tag_for_rel("$rule42-inter-body2","4"), std::to_string(get_tag_for_rel("$rule42-inter-body2","4")) + ".$rule42-inter-body2.4.table",   FULL);
relation* rel___dollorinter__head4__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$inter-head4","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$inter-head4","1__2__3__4__5__6__7")) + ".$inter-head4.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head4","1__2__3__4__5__6__7")) + ".$inter-head4.7.table", FULL);
relation* rel___dollorrule1__inter__body3__1__ = new relation(0, false, 1, get_tag_for_rel("$rule1-inter-body3",""), std::to_string(get_tag_for_rel("$rule1-inter-body3","")) + ".$rule1-inter-body3.1.table",   FULL);
relation* rel___dollorhead__stratified56__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$head-stratified56","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$head-stratified56","1__2__3__4__5__6__7")) + ".$head-stratified56.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified56","1__2__3__4__5__6__7")) + ".$head-stratified56.7.table", FULL);
relation* rel___dollorrule27__inter__body3__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule27-inter-body3","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule27-inter-body3","1__2__3__4__5")) + ".$rule27-inter-body3.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule27-inter-body3","1__2__3__4__5")) + ".$rule27-inter-body3.5.table", FULL);
relation* rel___dollorrule40__inter__body2__7__7__2 = new relation(2, false, 7, get_tag_for_rel("$rule40-inter-body2","7__2"), std::to_string(get_tag_for_rel("$rule40-inter-body2","7__2")) + ".$rule40-inter-body2.7.table",   FULL);
relation* rel__length__2__1 = new relation(1, false, 2, get_tag_for_rel("length","1"), std::to_string(get_tag_for_rel("length","1")) + ".length.2.table",   FULL);
relation* rel___dollorhead__stratified1__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$head-stratified1","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$head-stratified1","1__2__3__4__5__6")) + ".$head-stratified1.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified1","1__2__3__4__5__6")) + ".$head-stratified1.6.table", FULL);
relation* rel___dollorhead__stratified22__11__1__2__3__4__5__6__7__8__9__10__11 = new relation(11, true, 11, get_tag_for_rel("$head-stratified22","1__2__3__4__5__6__7__8__9__10__11"), std::to_string(get_tag_for_rel("$head-stratified22","1__2__3__4__5__6__7__8__9__10__11")) + ".$head-stratified22.11.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified22","1__2__3__4__5__6__7__8__9__10__11")) + ".$head-stratified22.11.table", FULL);
relation* rel___dollorrule21__inter__body3__8__1__2__3__4__5__6__7__8 = new relation(8, true, 8, get_tag_for_rel("$rule21-inter-body3","1__2__3__4__5__6__7__8"), std::to_string(get_tag_for_rel("$rule21-inter-body3","1__2__3__4__5__6__7__8")) + ".$rule21-inter-body3.8.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule21-inter-body3","1__2__3__4__5__6__7__8")) + ".$rule21-inter-body3.8.table", FULL);
relation* rel___dollorrule2__inter__body1__4__3 = new relation(1, false, 4, get_tag_for_rel("$rule2-inter-body1","3"), std::to_string(get_tag_for_rel("$rule2-inter-body1","3")) + ".$rule2-inter-body1.4.table",   FULL);
relation* rel___dollorinter__head27__4__4__1 = new relation(2, false, 4, get_tag_for_rel("$inter-head27","4__1"), std::to_string(get_tag_for_rel("$inter-head27","4__1")) + ".$inter-head27.4.table",   FULL);
relation* rel___dollorrule10__inter__body__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule10-inter-body","1__2__3"), std::to_string(get_tag_for_rel("$rule10-inter-body","1__2__3")) + ".$rule10-inter-body.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule10-inter-body","1__2__3")) + ".$rule10-inter-body.3.table", FULL);
relation* rel__halt__0__0 = new relation(1, false, 0, get_tag_for_rel("halt","0"), std::to_string(get_tag_for_rel("halt","0")) + ".halt.0.table",   FULL);
relation* rel___dollorhead__stratified28__4__3__2 = new relation(2, false, 4, get_tag_for_rel("$head-stratified28","3__2"), std::to_string(get_tag_for_rel("$head-stratified28","3__2")) + ".$head-stratified28.4.table",   FULL);
relation* rel__app__2__1__2 = new relation(2, true, 2, get_tag_for_rel("app","1__2"), std::to_string(get_tag_for_rel("app","1__2")) + ".app.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("app","1__2")) + ".app.2.table", FULL);
relation* rel___dollorrule12__inter__body6__5__1 = new relation(1, false, 5, get_tag_for_rel("$rule12-inter-body6","1"), std::to_string(get_tag_for_rel("$rule12-inter-body6","1")) + ".$rule12-inter-body6.5.table",   FULL);
relation* rel___dollorinter__head7__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$inter-head7","1__2"), std::to_string(get_tag_for_rel("$inter-head7","1__2")) + ".$inter-head7.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head7","1__2")) + ".$inter-head7.2.table", FULL);
relation* rel___dollorinter__head21__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$inter-head21","1__2__3__4"), std::to_string(get_tag_for_rel("$inter-head21","1__2__3__4")) + ".$inter-head21.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head21","1__2__3__4")) + ".$inter-head21.4.table", FULL);
relation* rel___dollorrule40__inter__body5__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$rule40-inter-body5","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$rule40-inter-body5","1__2__3__4__5__6")) + ".$rule40-inter-body5.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule40-inter-body5","1__2__3__4__5__6")) + ".$rule40-inter-body5.6.table", FULL);
relation* rel___dollorhead__stratified7__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$head-stratified7","1__2__3__4"), std::to_string(get_tag_for_rel("$head-stratified7","1__2__3__4")) + ".$head-stratified7.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified7","1__2__3__4")) + ".$head-stratified7.4.table", FULL);
relation* rel___dollorbir__sub9__4__1__2 = new relation(2, false, 4, get_tag_for_rel("$bir-sub9","1__2"), std::to_string(get_tag_for_rel("$bir-sub9","1__2")) + ".$bir-sub9.4.table",   FULL);
relation* rel___dollorrule42__inter__body1__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule42-inter-body1","1__2__3__4"), std::to_string(get_tag_for_rel("$rule42-inter-body1","1__2__3__4")) + ".$rule42-inter-body1.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule42-inter-body1","1__2__3__4")) + ".$rule42-inter-body1.4.table", FULL);
relation* rel___dollorinter__head13__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$inter-head13","1__2"), std::to_string(get_tag_for_rel("$inter-head13","1__2")) + ".$inter-head13.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head13","1__2")) + ".$inter-head13.2.table", FULL);
relation* rel___dollorrule25__inter__body1__4__2__4 = new relation(2, false, 4, get_tag_for_rel("$rule25-inter-body1","2__4"), std::to_string(get_tag_for_rel("$rule25-inter-body1","2__4")) + ".$rule25-inter-body1.4.table",   FULL);
relation* rel___dollorhead__stratified1__6__6__2 = new relation(2, false, 6, get_tag_for_rel("$head-stratified1","6__2"), std::to_string(get_tag_for_rel("$head-stratified1","6__2")) + ".$head-stratified1.6.table",   FULL);
relation* rel__app__2__0 = new relation(1, false, 2, get_tag_for_rel("app","0"), std::to_string(get_tag_for_rel("app","0")) + ".app.2.table",   FULL);
relation* rel___dollorrule9__inter__body__4__2 = new relation(1, false, 4, get_tag_for_rel("$rule9-inter-body","2"), std::to_string(get_tag_for_rel("$rule9-inter-body","2")) + ".$rule9-inter-body.4.table",   FULL);
relation* rel__lambda__2__1__2 = new relation(2, true, 2, get_tag_for_rel("lambda","1__2"), std::to_string(get_tag_for_rel("lambda","1__2")) + ".lambda.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("lambda","1__2")) + ".lambda.2.table", FULL);
relation* rel___dollorrule40__inter__body7__2__ = new relation(0, false, 2, get_tag_for_rel("$rule40-inter-body7",""), std::to_string(get_tag_for_rel("$rule40-inter-body7","")) + ".$rule40-inter-body7.2.table",   FULL);
relation* rel___dollorhead__stratified36__5__5__1__2__3 = new relation(4, false, 5, get_tag_for_rel("$head-stratified36","5__1__2__3"), std::to_string(get_tag_for_rel("$head-stratified36","5__1__2__3")) + ".$head-stratified36.5.table",   FULL);
relation* rel___dollorhead__splice2__3__ = new relation(0, false, 3, get_tag_for_rel("$head-splice2",""), std::to_string(get_tag_for_rel("$head-splice2","")) + ".$head-splice2.3.table",   FULL);
relation* rel___dollorinter__head42__7__7__3__6__4__2__5 = new relation(6, false, 7, get_tag_for_rel("$inter-head42","7__3__6__4__2__5"), std::to_string(get_tag_for_rel("$inter-head42","7__3__6__4__2__5")) + ".$inter-head42.7.table",   FULL);
relation* rel___dollorrule40__inter__body1__5__5__1 = new relation(2, false, 5, get_tag_for_rel("$rule40-inter-body1","5__1"), std::to_string(get_tag_for_rel("$rule40-inter-body1","5__1")) + ".$rule40-inter-body1.5.table",   FULL);
relation* rel___dollorrule42__inter__body4__1__ = new relation(0, false, 1, get_tag_for_rel("$rule42-inter-body4",""), std::to_string(get_tag_for_rel("$rule42-inter-body4","")) + ".$rule42-inter-body4.1.table",   FULL);
relation* rel___dollorrule25__inter__body3__6__3 = new relation(1, false, 6, get_tag_for_rel("$rule25-inter-body3","3"), std::to_string(get_tag_for_rel("$rule25-inter-body3","3")) + ".$rule25-inter-body3.6.table",   FULL);
relation* rel___dollorinter__head49__6__4 = new relation(1, false, 6, get_tag_for_rel("$inter-head49","4"), std::to_string(get_tag_for_rel("$inter-head49","4")) + ".$inter-head49.6.table",   FULL);
relation* rel__bool__1__0 = new relation(1, false, 1, get_tag_for_rel("bool","0"), std::to_string(get_tag_for_rel("bool","0")) + ".bool.1.table",   FULL);
relation* rel___dollorhead__stratified29__4__1__4__3 = new relation(3, false, 4, get_tag_for_rel("$head-stratified29","1__4__3"), std::to_string(get_tag_for_rel("$head-stratified29","1__4__3")) + ".$head-stratified29.4.table",   FULL);
relation* rel__clo__2__1 = new relation(1, false, 2, get_tag_for_rel("clo","1"), std::to_string(get_tag_for_rel("clo","1")) + ".clo.2.table",   FULL);
relation* rel___dollorbir__sub8__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$bir-sub8","1__2"), std::to_string(get_tag_for_rel("$bir-sub8","1__2")) + ".$bir-sub8.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub8","1__2")) + ".$bir-sub8.2.table", FULL);
relation* rel___dollorhead__stratified23__9__1__2__3__4__5__6__7__8__9 = new relation(9, true, 9, get_tag_for_rel("$head-stratified23","1__2__3__4__5__6__7__8__9"), std::to_string(get_tag_for_rel("$head-stratified23","1__2__3__4__5__6__7__8__9")) + ".$head-stratified23.9.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified23","1__2__3__4__5__6__7__8__9")) + ".$head-stratified23.9.table", FULL);
relation* rel__store__2__1 = new relation(1, false, 2, get_tag_for_rel("store","1"), std::to_string(get_tag_for_rel("store","1")) + ".store.2.table",   FULL);
relation* rel___dollorhead__stratified53__6__1__6 = new relation(2, false, 6, get_tag_for_rel("$head-stratified53","1__6"), std::to_string(get_tag_for_rel("$head-stratified53","1__6")) + ".$head-stratified53.6.table",   FULL);
relation* rel___dollorrule21__inter__body10__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule21-inter-body10","1__2__3"), std::to_string(get_tag_for_rel("$rule21-inter-body10","1__2__3")) + ".$rule21-inter-body10.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule21-inter-body10","1__2__3")) + ".$rule21-inter-body10.3.table", FULL);
relation* rel__fixedparam__1__1 = new relation(1, true, 1, get_tag_for_rel("fixedparam","1"), std::to_string(get_tag_for_rel("fixedparam","1")) + ".fixedparam.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("fixedparam","1")) + ".fixedparam.1.table", FULL);
relation* rel___dollorhead__stratified26__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified26","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified26","1__2__3")) + ".$head-stratified26.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified26","1__2__3")) + ".$head-stratified26.3.table", FULL);
relation* rel___dollorhead__stratified14__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$head-stratified14","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$head-stratified14","1__2__3__4__5__6__7")) + ".$head-stratified14.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified14","1__2__3__4__5__6__7")) + ".$head-stratified14.7.table", FULL);
relation* rel__fixedparam__1__0 = new relation(1, false, 1, get_tag_for_rel("fixedparam","0"), std::to_string(get_tag_for_rel("fixedparam","0")) + ".fixedparam.1.table",   FULL);
relation* rel___dollorbir__sub3__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$bir-sub3","1__2__3"), std::to_string(get_tag_for_rel("$bir-sub3","1__2__3")) + ".$bir-sub3.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub3","1__2__3")) + ".$bir-sub3.3.table", FULL);
relation* rel___dollorhead__stratified6__4__1__3 = new relation(2, false, 4, get_tag_for_rel("$head-stratified6","1__3"), std::to_string(get_tag_for_rel("$head-stratified6","1__3")) + ".$head-stratified6.4.table",   FULL);
relation* rel___dollorhead__stratified16__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$head-stratified16","1__2__3__4__5"), std::to_string(get_tag_for_rel("$head-stratified16","1__2__3__4__5")) + ".$head-stratified16.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified16","1__2__3__4__5")) + ".$head-stratified16.5.table", FULL);
relation* rel___dollorrule25__inter__body6__5__5 = new relation(1, false, 5, get_tag_for_rel("$rule25-inter-body6","5"), std::to_string(get_tag_for_rel("$rule25-inter-body6","5")) + ".$rule25-inter-body6.5.table",   FULL);
relation* rel___dollorrule22__inter__body1__3__2 = new relation(1, false, 3, get_tag_for_rel("$rule22-inter-body1","2"), std::to_string(get_tag_for_rel("$rule22-inter-body1","2")) + ".$rule22-inter-body1.3.table",   FULL);
relation* rel___dollorunit__1__ = new relation(0, false, 1, get_tag_for_rel("$unit",""), std::to_string(get_tag_for_rel("$unit","")) + ".$unit.1.table",   FULL);
relation* rel___dollorinter__head20__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head20","1__2__3"), std::to_string(get_tag_for_rel("$inter-head20","1__2__3")) + ".$inter-head20.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head20","1__2__3")) + ".$inter-head20.3.table", FULL);
relation* rel___dollorrule21__inter__body8__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule21-inter-body8","1__2__3"), std::to_string(get_tag_for_rel("$rule21-inter-body8","1__2__3")) + ".$rule21-inter-body8.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule21-inter-body8","1__2__3")) + ".$rule21-inter-body8.3.table", FULL);
relation* rel___dollorinter__head10__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$inter-head10","1__2__3__4__5"), std::to_string(get_tag_for_rel("$inter-head10","1__2__3__4__5")) + ".$inter-head10.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head10","1__2__3__4__5")) + ".$inter-head10.5.table", FULL);
relation* rel__let__2__1__2 = new relation(2, true, 2, get_tag_for_rel("let","1__2"), std::to_string(get_tag_for_rel("let","1__2")) + ".let.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("let","1__2")) + ".let.2.table", FULL);
relation* rel___dollorhead__stratified53__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$head-stratified53","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$head-stratified53","1__2__3__4__5__6")) + ".$head-stratified53.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified53","1__2__3__4__5__6")) + ".$head-stratified53.6.table", FULL);
relation* rel___dollorrule21__inter__body4__4__3 = new relation(1, false, 4, get_tag_for_rel("$rule21-inter-body4","3"), std::to_string(get_tag_for_rel("$rule21-inter-body4","3")) + ".$rule21-inter-body4.4.table",   FULL);
relation* rel___dollorrule40__inter__body2__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$rule40-inter-body2","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$rule40-inter-body2","1__2__3__4__5__6__7")) + ".$rule40-inter-body2.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule40-inter-body2","1__2__3__4__5__6__7")) + ".$rule40-inter-body2.7.table", FULL);
relation* rel___dollorlst__append__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$lst-append","1__2"), std::to_string(get_tag_for_rel("$lst-append","1__2")) + ".$lst-append.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$lst-append","1__2")) + ".$lst-append.2.table", FULL);
relation* rel___dollorrule42__inter__body6__3__ = new relation(0, false, 3, get_tag_for_rel("$rule42-inter-body6",""), std::to_string(get_tag_for_rel("$rule42-inter-body6","")) + ".$rule42-inter-body6.3.table",   FULL);
relation* rel___dollorbir__sub20__3__1 = new relation(1, false, 3, get_tag_for_rel("$bir-sub20","1"), std::to_string(get_tag_for_rel("$bir-sub20","1")) + ".$bir-sub20.3.table",   FULL);
relation* rel___dollorbir__sub7__6__2 = new relation(1, false, 6, get_tag_for_rel("$bir-sub7","2"), std::to_string(get_tag_for_rel("$bir-sub7","2")) + ".$bir-sub7.6.table",   FULL);
relation* rel__kaddr__1__1 = new relation(1, true, 1, get_tag_for_rel("kaddr","1"), std::to_string(get_tag_for_rel("kaddr","1")) + ".kaddr.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("kaddr","1")) + ".kaddr.1.table", FULL);
relation* rel__apply__prim__2__0 = new relation(1, false, 2, get_tag_for_rel("apply-prim","0"), std::to_string(get_tag_for_rel("apply-prim","0")) + ".apply-prim.2.table",   FULL);
relation* rel___dollorinter__head11__4__2__4__1 = new relation(3, false, 4, get_tag_for_rel("$inter-head11","2__4__1"), std::to_string(get_tag_for_rel("$inter-head11","2__4__1")) + ".$inter-head11.4.table",   FULL);
relation* rel___dollorrule24__inter__body2__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule24-inter-body2","1__2__3__4"), std::to_string(get_tag_for_rel("$rule24-inter-body2","1__2__3__4")) + ".$rule24-inter-body2.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule24-inter-body2","1__2__3__4")) + ".$rule24-inter-body2.4.table", FULL);
relation* rel___dollorinter__head45__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$inter-head45","1__2__3__4__5"), std::to_string(get_tag_for_rel("$inter-head45","1__2__3__4__5")) + ".$inter-head45.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head45","1__2__3__4__5")) + ".$inter-head45.5.table", FULL);
relation* rel___dollorhead__stratified59__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$head-stratified59","1__2__3__4"), std::to_string(get_tag_for_rel("$head-stratified59","1__2__3__4")) + ".$head-stratified59.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified59","1__2__3__4")) + ".$head-stratified59.4.table", FULL);
relation* rel___dollorinter__head46__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$inter-head46","1__2__3__4"), std::to_string(get_tag_for_rel("$inter-head46","1__2__3__4")) + ".$inter-head46.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head46","1__2__3__4")) + ".$inter-head46.4.table", FULL);
relation* rel___dollorrule25__inter__body6__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule25-inter-body6","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule25-inter-body6","1__2__3__4__5")) + ".$rule25-inter-body6.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule25-inter-body6","1__2__3__4__5")) + ".$rule25-inter-body6.5.table", FULL);
relation* rel___dollorrule39__inter__body__4__4 = new relation(1, false, 4, get_tag_for_rel("$rule39-inter-body","4"), std::to_string(get_tag_for_rel("$rule39-inter-body","4")) + ".$rule39-inter-body.4.table",   FULL);
relation* rel___dollorrule21__inter__body1__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule21-inter-body1","1__2__3__4"), std::to_string(get_tag_for_rel("$rule21-inter-body1","1__2__3__4")) + ".$rule21-inter-body1.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule21-inter-body1","1__2__3__4")) + ".$rule21-inter-body1.4.table", FULL);
relation* rel___dollorrule26__inter__body2__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule26-inter-body2","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule26-inter-body2","1__2__3__4__5")) + ".$rule26-inter-body2.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule26-inter-body2","1__2__3__4__5")) + ".$rule26-inter-body2.5.table", FULL);
relation* rel___dollorrule4__inter__body__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule4-inter-body","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule4-inter-body","1__2__3__4__5")) + ".$rule4-inter-body.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule4-inter-body","1__2__3__4__5")) + ".$rule4-inter-body.5.table", FULL);
relation* rel___dollorrule41__inter__body12__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule41-inter-body12","1__2__3__4"), std::to_string(get_tag_for_rel("$rule41-inter-body12","1__2__3__4")) + ".$rule41-inter-body12.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule41-inter-body12","1__2__3__4")) + ".$rule41-inter-body12.4.table", FULL);
relation* rel___dollorrule12__inter__body2__7__5__1 = new relation(2, false, 7, get_tag_for_rel("$rule12-inter-body2","5__1"), std::to_string(get_tag_for_rel("$rule12-inter-body2","5__1")) + ".$rule12-inter-body2.7.table",   FULL);
relation* rel___dollorhead__stratified4__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$head-stratified4","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$head-stratified4","1__2__3__4__5__6__7")) + ".$head-stratified4.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified4","1__2__3__4__5__6__7")) + ".$head-stratified4.7.table", FULL);
relation* rel___dollorlst__append__2__1 = new relation(1, false, 2, get_tag_for_rel("$lst-append","1"), std::to_string(get_tag_for_rel("$lst-append","1")) + ".$lst-append.2.table",   FULL);
relation* rel__split__at__end__input__2__2 = new relation(1, false, 2, get_tag_for_rel("split-at-end-input","2"), std::to_string(get_tag_for_rel("split-at-end-input","2")) + ".split-at-end-input.2.table",   FULL);
relation* rel__env__map__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("env-map","1__2__3"), std::to_string(get_tag_for_rel("env-map","1__2__3")) + ".env-map.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("env-map","1__2__3")) + ".env-map.3.table", FULL);
relation* rel__store__flow__2__1 = new relation(1, false, 2, get_tag_for_rel("store-flow","1"), std::to_string(get_tag_for_rel("store-flow","1")) + ".store-flow.2.table",   FULL);
relation* rel__split__at__input__2__1 = new relation(1, false, 2, get_tag_for_rel("split-at-input","1"), std::to_string(get_tag_for_rel("split-at-input","1")) + ".split-at-input.2.table",   FULL);
relation* rel___dollorinter__head19__10__1__2__3__4__5__6__7__8__9__10 = new relation(10, true, 10, get_tag_for_rel("$inter-head19","1__2__3__4__5__6__7__8__9__10"), std::to_string(get_tag_for_rel("$inter-head19","1__2__3__4__5__6__7__8__9__10")) + ".$inter-head19.10.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head19","1__2__3__4__5__6__7__8__9__10")) + ".$inter-head19.10.table", FULL);
relation* rel___dollorrule41__inter__body11__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule41-inter-body11","1__2__3"), std::to_string(get_tag_for_rel("$rule41-inter-body11","1__2__3")) + ".$rule41-inter-body11.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule41-inter-body11","1__2__3")) + ".$rule41-inter-body11.3.table", FULL);
relation* rel___dollorrule13__inter__body7__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule13-inter-body7","1__2__3__4"), std::to_string(get_tag_for_rel("$rule13-inter-body7","1__2__3__4")) + ".$rule13-inter-body7.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule13-inter-body7","1__2__3__4")) + ".$rule13-inter-body7.4.table", FULL);
relation* rel___dollorhead__stratified31__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified31","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified31","1__2__3")) + ".$head-stratified31.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified31","1__2__3")) + ".$head-stratified31.3.table", FULL);
relation* rel___dollorrule38__inter__body__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule38-inter-body","1__2"), std::to_string(get_tag_for_rel("$rule38-inter-body","1__2")) + ".$rule38-inter-body.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule38-inter-body","1__2")) + ".$rule38-inter-body.2.table", FULL);
relation* rel___dollorbir__sub5__5__1 = new relation(1, false, 5, get_tag_for_rel("$bir-sub5","1"), std::to_string(get_tag_for_rel("$bir-sub5","1")) + ".$bir-sub5.5.table",   FULL);
relation* rel___dollorrule44__inter__body1__7__1 = new relation(1, false, 7, get_tag_for_rel("$rule44-inter-body1","1"), std::to_string(get_tag_for_rel("$rule44-inter-body1","1")) + ".$rule44-inter-body1.7.table",   FULL);
relation* rel__prim__2__1__2 = new relation(2, true, 2, get_tag_for_rel("prim","1__2"), std::to_string(get_tag_for_rel("prim","1__2")) + ".prim.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("prim","1__2")) + ".prim.2.table", FULL);
relation* rel___dollorrule26__inter__body1__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule26-inter-body1","1__2__3__4"), std::to_string(get_tag_for_rel("$rule26-inter-body1","1__2__3__4")) + ".$rule26-inter-body1.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule26-inter-body1","1__2__3__4")) + ".$rule26-inter-body1.4.table", FULL);
relation* rel___dollorrule41__inter__body5__8__1__2__3__4__5__6__7__8 = new relation(8, true, 8, get_tag_for_rel("$rule41-inter-body5","1__2__3__4__5__6__7__8"), std::to_string(get_tag_for_rel("$rule41-inter-body5","1__2__3__4__5__6__7__8")) + ".$rule41-inter-body5.8.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule41-inter-body5","1__2__3__4__5__6__7__8")) + ".$rule41-inter-body5.8.table", FULL);
relation* rel___dollorinter__head52__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head52","1__2__3"), std::to_string(get_tag_for_rel("$inter-head52","1__2__3")) + ".$inter-head52.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head52","1__2__3")) + ".$inter-head52.3.table", FULL);
relation* rel___dollorhead__splice1__9__6__9 = new relation(2, false, 9, get_tag_for_rel("$head-splice1","6__9"), std::to_string(get_tag_for_rel("$head-splice1","6__9")) + ".$head-splice1.9.table",   FULL);
relation* rel___dollorrule21__inter__body11__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule21-inter-body11","1__2__3__4"), std::to_string(get_tag_for_rel("$rule21-inter-body11","1__2__3__4")) + ".$rule21-inter-body11.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule21-inter-body11","1__2__3__4")) + ".$rule21-inter-body11.4.table", FULL);
relation* rel___dollorrule12__inter__body1__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule12-inter-body1","1__2__3"), std::to_string(get_tag_for_rel("$rule12-inter-body1","1__2__3")) + ".$rule12-inter-body1.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule12-inter-body1","1__2__3")) + ".$rule12-inter-body1.3.table", FULL);
relation* rel___dollorrule43__inter__body3__1__ = new relation(0, false, 1, get_tag_for_rel("$rule43-inter-body3",""), std::to_string(get_tag_for_rel("$rule43-inter-body3","")) + ".$rule43-inter-body3.1.table",   FULL);
relation* rel___dollorrule41__inter__body4__8__6 = new relation(1, false, 8, get_tag_for_rel("$rule41-inter-body4","6"), std::to_string(get_tag_for_rel("$rule41-inter-body4","6")) + ".$rule41-inter-body4.8.table",   FULL);
relation* rel___dollorrule27__inter__body5__3__1 = new relation(1, false, 3, get_tag_for_rel("$rule27-inter-body5","1"), std::to_string(get_tag_for_rel("$rule27-inter-body5","1")) + ".$rule27-inter-body5.3.table",   FULL);
relation* rel__env__set__3__1 = new relation(1, false, 3, get_tag_for_rel("env-set","1"), std::to_string(get_tag_for_rel("env-set","1")) + ".env-set.3.table",   FULL);
relation* rel___dollorrule18__inter__body2__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule18-inter-body2","1__2__3__4"), std::to_string(get_tag_for_rel("$rule18-inter-body2","1__2__3__4")) + ".$rule18-inter-body2.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule18-inter-body2","1__2__3__4")) + ".$rule18-inter-body2.4.table", FULL);
relation* rel___dollorhead__stratified55__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified55","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified55","1__2__3")) + ".$head-stratified55.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified55","1__2__3")) + ".$head-stratified55.3.table", FULL);
relation* rel__appl__2__1__2 = new relation(2, true, 2, get_tag_for_rel("appl","1__2"), std::to_string(get_tag_for_rel("appl","1__2")) + ".appl.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("appl","1__2")) + ".appl.2.table", FULL);
relation* rel___dollorbir__sub2__6__1 = new relation(1, false, 6, get_tag_for_rel("$bir-sub2","1"), std::to_string(get_tag_for_rel("$bir-sub2","1")) + ".$bir-sub2.6.table",   FULL);
relation* rel___dollorhead__stratified5__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$head-stratified5","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$head-stratified5","1__2__3__4__5__6")) + ".$head-stratified5.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified5","1__2__3__4__5__6")) + ".$head-stratified5.6.table", FULL);
relation* rel___dollorinter__head5__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$inter-head5","1__2__3__4__5"), std::to_string(get_tag_for_rel("$inter-head5","1__2__3__4__5")) + ".$inter-head5.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head5","1__2__3__4__5")) + ".$inter-head5.5.table", FULL);
relation* rel___dollorrule44__inter__body__6__6 = new relation(1, false, 6, get_tag_for_rel("$rule44-inter-body","6"), std::to_string(get_tag_for_rel("$rule44-inter-body","6")) + ".$rule44-inter-body.6.table",   FULL);
relation* rel___dollorrule25__inter__body3__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$rule25-inter-body3","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$rule25-inter-body3","1__2__3__4__5__6")) + ".$rule25-inter-body3.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule25-inter-body3","1__2__3__4__5__6")) + ".$rule25-inter-body3.6.table", FULL);
relation* rel___dollorrule41__inter__body8__9__8 = new relation(1, false, 9, get_tag_for_rel("$rule41-inter-body8","8"), std::to_string(get_tag_for_rel("$rule41-inter-body8","8")) + ".$rule41-inter-body8.9.table",   FULL);
relation* rel___dollorlst__append__input__2__0 = new relation(1, false, 2, get_tag_for_rel("$lst-append-input","0"), std::to_string(get_tag_for_rel("$lst-append-input","0")) + ".$lst-append-input.2.table",   FULL);
relation* rel__quote__1__0 = new relation(1, false, 1, get_tag_for_rel("quote","0"), std::to_string(get_tag_for_rel("quote","0")) + ".quote.1.table",   FULL);
relation* rel___dollorinter__head6__7__2__7__3__1__4__5 = new relation(6, false, 7, get_tag_for_rel("$inter-head6","2__7__3__1__4__5"), std::to_string(get_tag_for_rel("$inter-head6","2__7__3__1__4__5")) + ".$inter-head6.7.table",   FULL);
relation* rel___dollorinter__head__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head","1__2__3"), std::to_string(get_tag_for_rel("$inter-head","1__2__3")) + ".$inter-head.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head","1__2__3")) + ".$inter-head.3.table", FULL);
relation* rel___dollorinter__head40__5__5__1 = new relation(2, false, 5, get_tag_for_rel("$inter-head40","5__1"), std::to_string(get_tag_for_rel("$inter-head40","5__1")) + ".$inter-head40.5.table",   FULL);
relation* rel___dollorinter__head44__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head44","1__2__3"), std::to_string(get_tag_for_rel("$inter-head44","1__2__3")) + ".$inter-head44.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head44","1__2__3")) + ".$inter-head44.3.table", FULL);
relation* rel___dollorbir__sub4__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$bir-sub4","1__2__3__4__5"), std::to_string(get_tag_for_rel("$bir-sub4","1__2__3__4__5")) + ".$bir-sub4.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub4","1__2__3__4__5")) + ".$bir-sub4.5.table", FULL);
relation* rel___dollorinter__head22__9__3__5__6__7__4__2__8__1 = new relation(8, false, 9, get_tag_for_rel("$inter-head22","3__5__6__7__4__2__8__1"), std::to_string(get_tag_for_rel("$inter-head22","3__5__6__7__4__2__8__1")) + ".$inter-head22.9.table",   FULL);
relation* rel___dollorrule21__inter__body7__9__ = new relation(0, false, 9, get_tag_for_rel("$rule21-inter-body7",""), std::to_string(get_tag_for_rel("$rule21-inter-body7","")) + ".$rule21-inter-body7.9.table",   FULL);
relation* rel___dollorinter__head9__3__2 = new relation(1, false, 3, get_tag_for_rel("$inter-head9","2"), std::to_string(get_tag_for_rel("$inter-head9","2")) + ".$inter-head9.3.table",   FULL);
relation* rel___dollorrule2__inter__body1__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule2-inter-body1","1__2__3__4"), std::to_string(get_tag_for_rel("$rule2-inter-body1","1__2__3__4")) + ".$rule2-inter-body1.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule2-inter-body1","1__2__3__4")) + ".$rule2-inter-body1.4.table", FULL);
relation* rel___dollorrule16__inter__body__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule16-inter-body","3"), std::to_string(get_tag_for_rel("$rule16-inter-body","3")) + ".$rule16-inter-body.3.table",   FULL);
relation* rel__binding__2__1__2 = new relation(2, true, 2, get_tag_for_rel("binding","1__2"), std::to_string(get_tag_for_rel("binding","1__2")) + ".binding.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("binding","1__2")) + ".binding.2.table", FULL);
relation* rel___dollorrule42__inter__body3__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule42-inter-body3","1__2__3__4"), std::to_string(get_tag_for_rel("$rule42-inter-body3","1__2__3__4")) + ".$rule42-inter-body3.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule42-inter-body3","1__2__3__4")) + ".$rule42-inter-body3.4.table", FULL);
relation* rel___dollorinter__head2__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$inter-head2","1__2__3__4"), std::to_string(get_tag_for_rel("$inter-head2","1__2__3__4")) + ".$inter-head2.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head2","1__2__3__4")) + ".$inter-head2.4.table", FULL);
relation* rel___dollorinter__head12__5__3 = new relation(1, false, 5, get_tag_for_rel("$inter-head12","3"), std::to_string(get_tag_for_rel("$inter-head12","3")) + ".$inter-head12.5.table",   FULL);
relation* rel___dollorhead__splice3__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$head-splice3","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$head-splice3","1__2__3__4__5__6__7")) + ".$head-splice3.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-splice3","1__2__3__4__5__6__7")) + ".$head-splice3.7.table", FULL);
relation* rel___dollorhead__stratified10__9__2__3 = new relation(2, false, 9, get_tag_for_rel("$head-stratified10","2__3"), std::to_string(get_tag_for_rel("$head-stratified10","2__3")) + ".$head-stratified10.9.table",   FULL);
relation* rel___dollorhead__stratified3__4__1__3__4 = new relation(3, false, 4, get_tag_for_rel("$head-stratified3","1__3__4"), std::to_string(get_tag_for_rel("$head-stratified3","1__3__4")) + ".$head-stratified3.4.table",   FULL);
relation* rel___dollorrule39__inter__body6__1__ = new relation(0, false, 1, get_tag_for_rel("$rule39-inter-body6",""), std::to_string(get_tag_for_rel("$rule39-inter-body6","")) + ".$rule39-inter-body6.1.table",   FULL);
relation* rel___dollorhead__stratified18__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified18","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified18","1__2__3")) + ".$head-stratified18.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified18","1__2__3")) + ".$head-stratified18.3.table", FULL);
relation* rel___dollorrule21__inter__body1__4__1__4 = new relation(2, false, 4, get_tag_for_rel("$rule21-inter-body1","1__4"), std::to_string(get_tag_for_rel("$rule21-inter-body1","1__4")) + ".$rule21-inter-body1.4.table",   FULL);
relation* rel___dollorhead__stratified14__7__7__2 = new relation(2, false, 7, get_tag_for_rel("$head-stratified14","7__2"), std::to_string(get_tag_for_rel("$head-stratified14","7__2")) + ".$head-stratified14.7.table",   FULL);
relation* rel___dollorinter__head6__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$inter-head6","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$inter-head6","1__2__3__4__5__6__7")) + ".$inter-head6.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head6","1__2__3__4__5__6__7")) + ".$inter-head6.7.table", FULL);
relation* rel___dollorrule36__inter__body__4__1__2 = new relation(2, false, 4, get_tag_for_rel("$rule36-inter-body","1__2"), std::to_string(get_tag_for_rel("$rule36-inter-body","1__2")) + ".$rule36-inter-body.4.table",   FULL);
relation* rel___dollorinter__head51__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$inter-head51","1__2__3__4"), std::to_string(get_tag_for_rel("$inter-head51","1__2__3__4")) + ".$inter-head51.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head51","1__2__3__4")) + ".$inter-head51.4.table", FULL);
relation* rel___dollorbir__sub3__3__1 = new relation(1, false, 3, get_tag_for_rel("$bir-sub3","1"), std::to_string(get_tag_for_rel("$bir-sub3","1")) + ".$bir-sub3.3.table",   FULL);
relation* rel___dollorrule40__inter__body6__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule40-inter-body6","1"), std::to_string(get_tag_for_rel("$rule40-inter-body6","1")) + ".$rule40-inter-body6.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule40-inter-body6","1")) + ".$rule40-inter-body6.1.table", FULL);
relation* rel___dollorinter__head26__4__1__2 = new relation(2, false, 4, get_tag_for_rel("$inter-head26","1__2"), std::to_string(get_tag_for_rel("$inter-head26","1__2")) + ".$inter-head26.4.table",   FULL);
relation* rel___dollorrule12__inter__body3__6__2 = new relation(1, false, 6, get_tag_for_rel("$rule12-inter-body3","2"), std::to_string(get_tag_for_rel("$rule12-inter-body3","2")) + ".$rule12-inter-body3.6.table",   FULL);
relation* rel___dollorbir__sub10__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$bir-sub10","1__2__3"), std::to_string(get_tag_for_rel("$bir-sub10","1__2__3")) + ".$bir-sub10.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub10","1__2__3")) + ".$bir-sub10.3.table", FULL);
relation* rel__saddr__1__1 = new relation(1, true, 1, get_tag_for_rel("saddr","1"), std::to_string(get_tag_for_rel("saddr","1")) + ".saddr.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("saddr","1")) + ".saddr.1.table", FULL);
relation* rel___dollorrule21__inter__body8__3__2 = new relation(1, false, 3, get_tag_for_rel("$rule21-inter-body8","2"), std::to_string(get_tag_for_rel("$rule21-inter-body8","2")) + ".$rule21-inter-body8.3.table",   FULL);
relation* rel___dollorrule40__inter__body__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule40-inter-body","1__2__3__4"), std::to_string(get_tag_for_rel("$rule40-inter-body","1__2__3__4")) + ".$rule40-inter-body.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule40-inter-body","1__2__3__4")) + ".$rule40-inter-body.4.table", FULL);
relation* rel___dollorrule40__inter__body3__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule40-inter-body3","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule40-inter-body3","1__2__3__4__5")) + ".$rule40-inter-body3.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule40-inter-body3","1__2__3__4__5")) + ".$rule40-inter-body3.5.table", FULL);
relation* rel___dollorinter__head1__4__3 = new relation(1, false, 4, get_tag_for_rel("$inter-head1","3"), std::to_string(get_tag_for_rel("$inter-head1","3")) + ".$inter-head1.4.table",   FULL);
relation* rel___dollorrule41__inter__body13__5__ = new relation(0, false, 5, get_tag_for_rel("$rule41-inter-body13",""), std::to_string(get_tag_for_rel("$rule41-inter-body13","")) + ".$rule41-inter-body13.5.table",   FULL);
relation* rel___dollorrule7__inter__body__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule7-inter-body","1"), std::to_string(get_tag_for_rel("$rule7-inter-body","1")) + ".$rule7-inter-body.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule7-inter-body","1")) + ".$rule7-inter-body.1.table", FULL);
relation* rel___dollorbir__sub14__4__1 = new relation(1, false, 4, get_tag_for_rel("$bir-sub14","1"), std::to_string(get_tag_for_rel("$bir-sub14","1")) + ".$bir-sub14.4.table",   FULL);
relation* rel___dollorrule12__inter__body4__3__2 = new relation(1, false, 3, get_tag_for_rel("$rule12-inter-body4","2"), std::to_string(get_tag_for_rel("$rule12-inter-body4","2")) + ".$rule12-inter-body4.3.table",   FULL);
relation* rel___dollorrule25__inter__body2__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$rule25-inter-body2","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$rule25-inter-body2","1__2__3__4__5__6")) + ".$rule25-inter-body2.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule25-inter-body2","1__2__3__4__5__6")) + ".$rule25-inter-body2.6.table", FULL);
relation* rel___dollorrule39__inter__body1__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule39-inter-body1","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule39-inter-body1","1__2__3__4__5")) + ".$rule39-inter-body1.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule39-inter-body1","1__2__3__4__5")) + ".$rule39-inter-body1.5.table", FULL);
relation* rel___dollorbir__sub__8__1__2 = new relation(2, false, 8, get_tag_for_rel("$bir-sub","1__2"), std::to_string(get_tag_for_rel("$bir-sub","1__2")) + ".$bir-sub.8.table",   FULL);
relation* rel___dollorrule41__inter__body6__8__1__2__3__4__5__6__7__8 = new relation(8, true, 8, get_tag_for_rel("$rule41-inter-body6","1__2__3__4__5__6__7__8"), std::to_string(get_tag_for_rel("$rule41-inter-body6","1__2__3__4__5__6__7__8")) + ".$rule41-inter-body6.8.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule41-inter-body6","1__2__3__4__5__6__7__8")) + ".$rule41-inter-body6.8.table", FULL);
relation* rel___dollorrule39__inter__body3__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule39-inter-body3","1__2__3__4"), std::to_string(get_tag_for_rel("$rule39-inter-body3","1__2__3__4")) + ".$rule39-inter-body3.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule39-inter-body3","1__2__3__4")) + ".$rule39-inter-body3.4.table", FULL);
relation* rel___dollorinter__head5__5__3__2__1__4 = new relation(4, false, 5, get_tag_for_rel("$inter-head5","3__2__1__4"), std::to_string(get_tag_for_rel("$inter-head5","3__2__1__4")) + ".$inter-head5.5.table",   FULL);
relation* rel___dollorrule41__inter__body9__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule41-inter-body9","1"), std::to_string(get_tag_for_rel("$rule41-inter-body9","1")) + ".$rule41-inter-body9.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule41-inter-body9","1")) + ".$rule41-inter-body9.1.table", FULL);
relation* rel___dollorrule41__inter__body8__9__1__2__3__4__5__6__7__8__9 = new relation(9, true, 9, get_tag_for_rel("$rule41-inter-body8","1__2__3__4__5__6__7__8__9"), std::to_string(get_tag_for_rel("$rule41-inter-body8","1__2__3__4__5__6__7__8__9")) + ".$rule41-inter-body8.9.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule41-inter-body8","1__2__3__4__5__6__7__8__9")) + ".$rule41-inter-body8.9.table", FULL);
relation* rel___dollorrule14__inter__body2__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule14-inter-body2","1__2__3__4"), std::to_string(get_tag_for_rel("$rule14-inter-body2","1__2__3__4")) + ".$rule14-inter-body2.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule14-inter-body2","1__2__3__4")) + ".$rule14-inter-body2.4.table", FULL);
relation* rel___dollorhead__stratified29__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$head-stratified29","1__2__3__4"), std::to_string(get_tag_for_rel("$head-stratified29","1__2__3__4")) + ".$head-stratified29.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified29","1__2__3__4")) + ".$head-stratified29.4.table", FULL);
relation* rel___dollorrule19__inter__body1__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule19-inter-body1","1"), std::to_string(get_tag_for_rel("$rule19-inter-body1","1")) + ".$rule19-inter-body1.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule19-inter-body1","1")) + ".$rule19-inter-body1.1.table", FULL);
relation* rel___dollorbir__sub20__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$bir-sub20","1__2__3"), std::to_string(get_tag_for_rel("$bir-sub20","1__2__3")) + ".$bir-sub20.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub20","1__2__3")) + ".$bir-sub20.3.table", FULL);
relation* rel___dollorrule43__inter__body2__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule43-inter-body2","1__2__3"), std::to_string(get_tag_for_rel("$rule43-inter-body2","1__2__3")) + ".$rule43-inter-body2.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule43-inter-body2","1__2__3")) + ".$rule43-inter-body2.3.table", FULL);
relation* rel___dollorrule13__inter__body__3__2 = new relation(1, false, 3, get_tag_for_rel("$rule13-inter-body","2"), std::to_string(get_tag_for_rel("$rule13-inter-body","2")) + ".$rule13-inter-body.3.table",   FULL);
relation* rel___dollorinter__head47__2__2 = new relation(1, false, 2, get_tag_for_rel("$inter-head47","2"), std::to_string(get_tag_for_rel("$inter-head47","2")) + ".$inter-head47.2.table",   FULL);
relation* rel___dollorhead__stratified7__4__1__3__4 = new relation(3, false, 4, get_tag_for_rel("$head-stratified7","1__3__4"), std::to_string(get_tag_for_rel("$head-stratified7","1__3__4")) + ".$head-stratified7.4.table",   FULL);
relation* rel___dollorrule44__inter__body4__10__1__2__3__4__5__6__7__8__9__10 = new relation(10, true, 10, get_tag_for_rel("$rule44-inter-body4","1__2__3__4__5__6__7__8__9__10"), std::to_string(get_tag_for_rel("$rule44-inter-body4","1__2__3__4__5__6__7__8__9__10")) + ".$rule44-inter-body4.10.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule44-inter-body4","1__2__3__4__5__6__7__8__9__10")) + ".$rule44-inter-body4.10.table", FULL);
relation* rel___dollorinter__head28__3__3 = new relation(1, false, 3, get_tag_for_rel("$inter-head28","3"), std::to_string(get_tag_for_rel("$inter-head28","3")) + ".$inter-head28.3.table",   FULL);
relation* rel___dollorinter__head32__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$inter-head32","1__2__3__4__5"), std::to_string(get_tag_for_rel("$inter-head32","1__2__3__4__5")) + ".$inter-head32.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head32","1__2__3__4__5")) + ".$inter-head32.5.table", FULL);
relation* rel___dollorinter__head38__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head38","1__2__3"), std::to_string(get_tag_for_rel("$inter-head38","1__2__3")) + ".$inter-head38.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head38","1__2__3")) + ".$inter-head38.3.table", FULL);
relation* rel___dollorhead__stratified10__9__1__2__3__4__5__6__7__8__9 = new relation(9, true, 9, get_tag_for_rel("$head-stratified10","1__2__3__4__5__6__7__8__9"), std::to_string(get_tag_for_rel("$head-stratified10","1__2__3__4__5__6__7__8__9")) + ".$head-stratified10.9.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified10","1__2__3__4__5__6__7__8__9")) + ".$head-stratified10.9.table", FULL);
relation* rel___dollorrule44__inter__body5__1__ = new relation(0, false, 1, get_tag_for_rel("$rule44-inter-body5",""), std::to_string(get_tag_for_rel("$rule44-inter-body5","")) + ".$rule44-inter-body5.1.table",   FULL);
relation* rel___dollorinter__head21__4__3__4 = new relation(2, false, 4, get_tag_for_rel("$inter-head21","3__4"), std::to_string(get_tag_for_rel("$inter-head21","3__4")) + ".$inter-head21.4.table",   FULL);
relation* rel___dollorbir__sub11__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$bir-sub11","1__2__3__4"), std::to_string(get_tag_for_rel("$bir-sub11","1__2__3__4")) + ".$bir-sub11.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub11","1__2__3__4")) + ".$bir-sub11.4.table", FULL);
relation* rel___dollorrule18__inter__body2__4__2 = new relation(1, false, 4, get_tag_for_rel("$rule18-inter-body2","2"), std::to_string(get_tag_for_rel("$rule18-inter-body2","2")) + ".$rule18-inter-body2.4.table",   FULL);
relation* rel___dollorrule25__inter__body4__3__2 = new relation(1, false, 3, get_tag_for_rel("$rule25-inter-body4","2"), std::to_string(get_tag_for_rel("$rule25-inter-body4","2")) + ".$rule25-inter-body4.3.table",   FULL);
relation* rel___dollorrule13__inter__body6__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule13-inter-body6","1__2__3"), std::to_string(get_tag_for_rel("$rule13-inter-body6","1__2__3")) + ".$rule13-inter-body6.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule13-inter-body6","1__2__3")) + ".$rule13-inter-body6.3.table", FULL);
relation* rel___dollorrule21__inter__body7__9__1__2__3__4__5__6__7__8__9 = new relation(9, true, 9, get_tag_for_rel("$rule21-inter-body7","1__2__3__4__5__6__7__8__9"), std::to_string(get_tag_for_rel("$rule21-inter-body7","1__2__3__4__5__6__7__8__9")) + ".$rule21-inter-body7.9.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule21-inter-body7","1__2__3__4__5__6__7__8__9")) + ".$rule21-inter-body7.9.table", FULL);
relation* rel__addr__1__1 = new relation(1, true, 1, get_tag_for_rel("addr","1"), std::to_string(get_tag_for_rel("addr","1")) + ".addr.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("addr","1")) + ".addr.1.table", FULL);
relation* rel___dollorhead__stratified46__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$head-stratified46","1__2"), std::to_string(get_tag_for_rel("$head-stratified46","1__2")) + ".$head-stratified46.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified46","1__2")) + ".$head-stratified46.2.table", FULL);
relation* rel___dollorinter__head29__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$inter-head29","1__2"), std::to_string(get_tag_for_rel("$inter-head29","1__2")) + ".$inter-head29.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head29","1__2")) + ".$inter-head29.2.table", FULL);
relation* rel___dollorbir__sub2__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$bir-sub2","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$bir-sub2","1__2__3__4__5__6")) + ".$bir-sub2.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub2","1__2__3__4__5__6")) + ".$bir-sub2.6.table", FULL);
relation* rel___dollorrule41__inter__body6__8__8 = new relation(1, false, 8, get_tag_for_rel("$rule41-inter-body6","8"), std::to_string(get_tag_for_rel("$rule41-inter-body6","8")) + ".$rule41-inter-body6.8.table",   FULL);
relation* rel___dollorhead__stratified54__6__5__6 = new relation(2, false, 6, get_tag_for_rel("$head-stratified54","5__6"), std::to_string(get_tag_for_rel("$head-stratified54","5__6")) + ".$head-stratified54.6.table",   FULL);
relation* rel__apply__3__1 = new relation(1, false, 3, get_tag_for_rel("apply","1"), std::to_string(get_tag_for_rel("apply","1")) + ".apply.3.table",   FULL);
relation* rel___dollorinter__head40__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$inter-head40","1__2__3__4__5"), std::to_string(get_tag_for_rel("$inter-head40","1__2__3__4__5")) + ".$inter-head40.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head40","1__2__3__4__5")) + ".$inter-head40.5.table", FULL);
relation* rel___dollorrule9__inter__body2__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$rule9-inter-body2","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$rule9-inter-body2","1__2__3__4__5__6")) + ".$rule9-inter-body2.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule9-inter-body2","1__2__3__4__5__6")) + ".$rule9-inter-body2.6.table", FULL);
relation* rel___dollorbir__sub17__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$bir-sub17","1__2"), std::to_string(get_tag_for_rel("$bir-sub17","1__2")) + ".$bir-sub17.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub17","1__2")) + ".$bir-sub17.2.table", FULL);
relation* rel___dollorinter__head10__5__5__1 = new relation(2, false, 5, get_tag_for_rel("$inter-head10","5__1"), std::to_string(get_tag_for_rel("$inter-head10","5__1")) + ".$inter-head10.5.table",   FULL);
relation* rel___dollorrule42__inter__body6__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule42-inter-body6","1__2__3"), std::to_string(get_tag_for_rel("$rule42-inter-body6","1__2__3")) + ".$rule42-inter-body6.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule42-inter-body6","1__2__3")) + ".$rule42-inter-body6.3.table", FULL);
relation* rel___dollorrule10__inter__body__3__2 = new relation(1, false, 3, get_tag_for_rel("$rule10-inter-body","2"), std::to_string(get_tag_for_rel("$rule10-inter-body","2")) + ".$rule10-inter-body.3.table",   FULL);
relation* rel___dollorbir__sub18__2__2 = new relation(1, false, 2, get_tag_for_rel("$bir-sub18","2"), std::to_string(get_tag_for_rel("$bir-sub18","2")) + ".$bir-sub18.2.table",   FULL);
relation* rel__halt__0__ = new relation(0, true, 0, get_tag_for_rel("halt",""), std::to_string(get_tag_for_rel("halt","")) + ".halt.0.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("halt","")) + ".halt.0.table", FULL);
relation* rel___dollorrule18__inter__body1__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule18-inter-body1","1__2__3__4"), std::to_string(get_tag_for_rel("$rule18-inter-body1","1__2__3__4")) + ".$rule18-inter-body1.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule18-inter-body1","1__2__3__4")) + ".$rule18-inter-body1.4.table", FULL);
relation* rel___dollorinter__head31__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$inter-head31","1__2__3__4"), std::to_string(get_tag_for_rel("$inter-head31","1__2__3__4")) + ".$inter-head31.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head31","1__2__3__4")) + ".$inter-head31.4.table", FULL);
relation* rel__appk__4__1__2 = new relation(2, false, 4, get_tag_for_rel("appk","1__2"), std::to_string(get_tag_for_rel("appk","1__2")) + ".appk.4.table",   FULL);
relation* rel___dollorrule21__inter__body13__8__3 = new relation(1, false, 8, get_tag_for_rel("$rule21-inter-body13","3"), std::to_string(get_tag_for_rel("$rule21-inter-body13","3")) + ".$rule21-inter-body13.8.table",   FULL);
relation* rel___dollorrule39__inter__body3__4__4 = new relation(1, false, 4, get_tag_for_rel("$rule39-inter-body3","4"), std::to_string(get_tag_for_rel("$rule39-inter-body3","4")) + ".$rule39-inter-body3.4.table",   FULL);
relation* rel___dollorrule13__inter__body2__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule13-inter-body2","1__2__3__4"), std::to_string(get_tag_for_rel("$rule13-inter-body2","1__2__3__4")) + ".$rule13-inter-body2.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule13-inter-body2","1__2__3__4")) + ".$rule13-inter-body2.4.table", FULL);
relation* rel___dollorrule26__inter__body__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule26-inter-body","3"), std::to_string(get_tag_for_rel("$rule26-inter-body","3")) + ".$rule26-inter-body.3.table",   FULL);
relation* rel___dollorrule9__inter__body2__6__ = new relation(0, false, 6, get_tag_for_rel("$rule9-inter-body2",""), std::to_string(get_tag_for_rel("$rule9-inter-body2","")) + ".$rule9-inter-body2.6.table",   FULL);
relation* rel___dollorhead__stratified32__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified32","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified32","1__2__3")) + ".$head-stratified32.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified32","1__2__3")) + ".$head-stratified32.3.table", FULL);
relation* rel___dollorrule41__inter__body2__9__1__2__3__4__5__6__7__8__9 = new relation(9, true, 9, get_tag_for_rel("$rule41-inter-body2","1__2__3__4__5__6__7__8__9"), std::to_string(get_tag_for_rel("$rule41-inter-body2","1__2__3__4__5__6__7__8__9")) + ".$rule41-inter-body2.9.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule41-inter-body2","1__2__3__4__5__6__7__8__9")) + ".$rule41-inter-body2.9.table", FULL);
relation* rel___dollorhead__stratified24__7__7__2__5 = new relation(3, false, 7, get_tag_for_rel("$head-stratified24","7__2__5"), std::to_string(get_tag_for_rel("$head-stratified24","7__2__5")) + ".$head-stratified24.7.table",   FULL);
relation* rel___dollorinter__head35__1__1 = new relation(1, true, 1, get_tag_for_rel("$inter-head35","1"), std::to_string(get_tag_for_rel("$inter-head35","1")) + ".$inter-head35.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head35","1")) + ".$inter-head35.1.table", FULL);
relation* rel__varparam__1__1 = new relation(1, true, 1, get_tag_for_rel("varparam","1"), std::to_string(get_tag_for_rel("varparam","1")) + ".varparam.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("varparam","1")) + ".varparam.1.table", FULL);
relation* rel__do__ext__all__2__1__2 = new relation(2, true, 2, get_tag_for_rel("do-ext-all","1__2"), std::to_string(get_tag_for_rel("do-ext-all","1__2")) + ".do-ext-all.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("do-ext-all","1__2")) + ".do-ext-all.2.table", FULL);
relation* rel___dollorrule44__inter__body8__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule44-inter-body8","1__2__3__4"), std::to_string(get_tag_for_rel("$rule44-inter-body8","1__2__3__4")) + ".$rule44-inter-body8.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule44-inter-body8","1__2__3__4")) + ".$rule44-inter-body8.4.table", FULL);
relation* rel___dollorrule14__inter__body3__4__4 = new relation(1, false, 4, get_tag_for_rel("$rule14-inter-body3","4"), std::to_string(get_tag_for_rel("$rule14-inter-body3","4")) + ".$rule14-inter-body3.4.table",   FULL);
relation* rel___dollorrule41__inter__body2__9__7 = new relation(1, false, 9, get_tag_for_rel("$rule41-inter-body2","7"), std::to_string(get_tag_for_rel("$rule41-inter-body2","7")) + ".$rule41-inter-body2.9.table",   FULL);
relation* rel___dollorrule27__inter__body3__5__2 = new relation(1, false, 5, get_tag_for_rel("$rule27-inter-body3","2"), std::to_string(get_tag_for_rel("$rule27-inter-body3","2")) + ".$rule27-inter-body3.5.table",   FULL);
relation* rel___dollorrule21__inter__body9__8__1__2__3__4__5__6__7__8 = new relation(8, true, 8, get_tag_for_rel("$rule21-inter-body9","1__2__3__4__5__6__7__8"), std::to_string(get_tag_for_rel("$rule21-inter-body9","1__2__3__4__5__6__7__8")) + ".$rule21-inter-body9.8.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule21-inter-body9","1__2__3__4__5__6__7__8")) + ".$rule21-inter-body9.8.table", FULL);
relation* rel___dollorrule21__inter__body__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule21-inter-body","1"), std::to_string(get_tag_for_rel("$rule21-inter-body","1")) + ".$rule21-inter-body.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule21-inter-body","1")) + ".$rule21-inter-body.1.table", FULL);
relation* rel__letk__6__0 = new relation(1, false, 6, get_tag_for_rel("letk","0"), std::to_string(get_tag_for_rel("letk","0")) + ".letk.6.table",   FULL);
relation* rel___dollorrule13__inter__body1__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule13-inter-body1","1__2__3__4"), std::to_string(get_tag_for_rel("$rule13-inter-body1","1__2__3__4")) + ".$rule13-inter-body1.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule13-inter-body1","1__2__3__4")) + ".$rule13-inter-body1.4.table", FULL);
relation* rel___dollorhead__stratified__5__3 = new relation(1, false, 5, get_tag_for_rel("$head-stratified","3"), std::to_string(get_tag_for_rel("$head-stratified","3")) + ".$head-stratified.5.table",   FULL);
relation* rel___dollorinter__head11__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$inter-head11","1__2__3__4"), std::to_string(get_tag_for_rel("$inter-head11","1__2__3__4")) + ".$inter-head11.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head11","1__2__3__4")) + ".$inter-head11.4.table", FULL);
relation* rel___dollorinter__head45__5__4__2__3 = new relation(3, false, 5, get_tag_for_rel("$inter-head45","4__2__3"), std::to_string(get_tag_for_rel("$inter-head45","4__2__3")) + ".$inter-head45.5.table",   FULL);
relation* rel___dollorbir__sub12__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$bir-sub12","1__2__3"), std::to_string(get_tag_for_rel("$bir-sub12","1__2__3")) + ".$bir-sub12.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub12","1__2__3")) + ".$bir-sub12.3.table", FULL);
relation* rel___dollorinter__head24__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head24","1__2__3"), std::to_string(get_tag_for_rel("$inter-head24","1__2__3")) + ".$inter-head24.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head24","1__2__3")) + ".$inter-head24.3.table", FULL);
relation* rel___dollorrule20__inter__body__5__4 = new relation(1, false, 5, get_tag_for_rel("$rule20-inter-body","4"), std::to_string(get_tag_for_rel("$rule20-inter-body","4")) + ".$rule20-inter-body.5.table",   FULL);
relation* rel___dollorrule43__inter__body4__2__ = new relation(0, false, 2, get_tag_for_rel("$rule43-inter-body4",""), std::to_string(get_tag_for_rel("$rule43-inter-body4","")) + ".$rule43-inter-body4.2.table",   FULL);
relation* rel___dollorrule25__inter__body__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$rule25-inter-body","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$rule25-inter-body","1__2__3__4__5__6")) + ".$rule25-inter-body.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule25-inter-body","1__2__3__4__5__6")) + ".$rule25-inter-body.6.table", FULL);
relation* rel___dollorinter__head18__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$inter-head18","1__2__3__4"), std::to_string(get_tag_for_rel("$inter-head18","1__2__3__4")) + ".$inter-head18.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head18","1__2__3__4")) + ".$inter-head18.4.table", FULL);
relation* rel___dollorrule43__inter__body4__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule43-inter-body4","1__2"), std::to_string(get_tag_for_rel("$rule43-inter-body4","1__2")) + ".$rule43-inter-body4.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule43-inter-body4","1__2")) + ".$rule43-inter-body4.2.table", FULL);
relation* rel___dollorhead__stratified11__9__9__2 = new relation(2, false, 9, get_tag_for_rel("$head-stratified11","9__2"), std::to_string(get_tag_for_rel("$head-stratified11","9__2")) + ".$head-stratified11.9.table",   FULL);
relation* rel___dollorinter__head30__3__3 = new relation(1, false, 3, get_tag_for_rel("$inter-head30","3"), std::to_string(get_tag_for_rel("$inter-head30","3")) + ".$inter-head30.3.table",   FULL);
relation* rel___dollorrule43__inter__body1__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule43-inter-body1","3"), std::to_string(get_tag_for_rel("$rule43-inter-body1","3")) + ".$rule43-inter-body1.3.table",   FULL);
relation* rel___dollorinter__head23__5__3__5__2__4 = new relation(4, false, 5, get_tag_for_rel("$inter-head23","3__5__2__4"), std::to_string(get_tag_for_rel("$inter-head23","3__5__2__4")) + ".$inter-head23.5.table",   FULL);
relation* rel___dollorrule22__inter__body2__7__7 = new relation(1, false, 7, get_tag_for_rel("$rule22-inter-body2","7"), std::to_string(get_tag_for_rel("$rule22-inter-body2","7")) + ".$rule22-inter-body2.7.table",   FULL);
relation* rel___dollorhead__splice4__4__ = new relation(0, false, 4, get_tag_for_rel("$head-splice4",""), std::to_string(get_tag_for_rel("$head-splice4","")) + ".$head-splice4.4.table",   FULL);
relation* rel___dollorrule31__inter__body__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule31-inter-body","1__2"), std::to_string(get_tag_for_rel("$rule31-inter-body","1__2")) + ".$rule31-inter-body.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule31-inter-body","1__2")) + ".$rule31-inter-body.2.table", FULL);
relation* rel___dollorrule36__inter__body1__3__1 = new relation(1, false, 3, get_tag_for_rel("$rule36-inter-body1","1"), std::to_string(get_tag_for_rel("$rule36-inter-body1","1")) + ".$rule36-inter-body1.3.table",   FULL);
relation* rel___dollorhead__stratified28__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$head-stratified28","1__2__3__4"), std::to_string(get_tag_for_rel("$head-stratified28","1__2__3__4")) + ".$head-stratified28.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified28","1__2__3__4")) + ".$head-stratified28.4.table", FULL);
relation* rel___dollorrule13__inter__body4__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule13-inter-body4","3"), std::to_string(get_tag_for_rel("$rule13-inter-body4","3")) + ".$rule13-inter-body4.3.table",   FULL);
relation* rel___dollorhead__stratified25__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$head-stratified25","1__2__3__4__5"), std::to_string(get_tag_for_rel("$head-stratified25","1__2__3__4__5")) + ".$head-stratified25.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified25","1__2__3__4__5")) + ".$head-stratified25.5.table", FULL);
relation* rel__if__k__4__0 = new relation(1, false, 4, get_tag_for_rel("if-k","0"), std::to_string(get_tag_for_rel("if-k","0")) + ".if-k.4.table",   FULL);
relation* rel___dollorhead__stratified33__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$head-stratified33","1__2"), std::to_string(get_tag_for_rel("$head-stratified33","1__2")) + ".$head-stratified33.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified33","1__2")) + ".$head-stratified33.2.table", FULL);
relation* rel___dollorinter__head2__4__1 = new relation(1, false, 4, get_tag_for_rel("$inter-head2","1"), std::to_string(get_tag_for_rel("$inter-head2","1")) + ".$inter-head2.4.table",   FULL);
relation* rel___dollorrule40__inter__body4__5__5 = new relation(1, false, 5, get_tag_for_rel("$rule40-inter-body4","5"), std::to_string(get_tag_for_rel("$rule40-inter-body4","5")) + ".$rule40-inter-body4.5.table",   FULL);
relation* rel___dollorbir__sub15__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$bir-sub15","1__2__3__4"), std::to_string(get_tag_for_rel("$bir-sub15","1__2__3__4")) + ".$bir-sub15.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub15","1__2__3__4")) + ".$bir-sub15.4.table", FULL);
relation* rel___dollorhead__stratified2__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$head-stratified2","1__2__3__4__5"), std::to_string(get_tag_for_rel("$head-stratified2","1__2__3__4__5")) + ".$head-stratified2.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified2","1__2__3__4__5")) + ".$head-stratified2.5.table", FULL);
relation* rel___dollorbir__sub11__4__2__4 = new relation(2, false, 4, get_tag_for_rel("$bir-sub11","2__4"), std::to_string(get_tag_for_rel("$bir-sub11","2__4")) + ".$bir-sub11.4.table",   FULL);
relation* rel__eval__3__1__2 = new relation(2, false, 3, get_tag_for_rel("eval","1__2"), std::to_string(get_tag_for_rel("eval","1__2")) + ".eval.3.table",   FULL);
relation* rel___dollorhead__stratified39__2__2 = new relation(1, false, 2, get_tag_for_rel("$head-stratified39","2"), std::to_string(get_tag_for_rel("$head-stratified39","2")) + ".$head-stratified39.2.table",   FULL);
relation* rel___dollorrule41__inter__body7__9__8 = new relation(1, false, 9, get_tag_for_rel("$rule41-inter-body7","8"), std::to_string(get_tag_for_rel("$rule41-inter-body7","8")) + ".$rule41-inter-body7.9.table",   FULL);
relation* rel___dollorinter__head26__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$inter-head26","1__2__3__4"), std::to_string(get_tag_for_rel("$inter-head26","1__2__3__4")) + ".$inter-head26.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head26","1__2__3__4")) + ".$inter-head26.4.table", FULL);
relation* rel___dollorrule40__inter__body8__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule40-inter-body8","1__2__3"), std::to_string(get_tag_for_rel("$rule40-inter-body8","1__2__3")) + ".$rule40-inter-body8.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule40-inter-body8","1__2__3")) + ".$rule40-inter-body8.3.table", FULL);
relation* rel__split__at__end__3__1 = new relation(1, false, 3, get_tag_for_rel("split-at-end","1"), std::to_string(get_tag_for_rel("split-at-end","1")) + ".split-at-end.3.table",   FULL);
relation* rel___dollorinter__head9__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head9","1__2__3"), std::to_string(get_tag_for_rel("$inter-head9","1__2__3")) + ".$inter-head9.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head9","1__2__3")) + ".$inter-head9.3.table", FULL);
relation* rel___dollorhead__stratified40__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$head-stratified40","1__2__3__4"), std::to_string(get_tag_for_rel("$head-stratified40","1__2__3__4")) + ".$head-stratified40.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified40","1__2__3__4")) + ".$head-stratified40.4.table", FULL);
relation* rel__breaks__into__input__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("breaks-into-input","1__2__3"), std::to_string(get_tag_for_rel("breaks-into-input","1__2__3")) + ".breaks-into-input.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("breaks-into-input","1__2__3")) + ".breaks-into-input.3.table", FULL);
relation* rel___dollorrule26__inter__body4__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule26-inter-body4","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule26-inter-body4","1__2__3__4__5")) + ".$rule26-inter-body4.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule26-inter-body4","1__2__3__4__5")) + ".$rule26-inter-body4.5.table", FULL);
relation* rel__apply__3__2 = new relation(1, false, 3, get_tag_for_rel("apply","2"), std::to_string(get_tag_for_rel("apply","2")) + ".apply.3.table",   FULL);
relation* rel___dollorrule41__inter__body7__9__1__2__3__4__5__6__7__8__9 = new relation(9, true, 9, get_tag_for_rel("$rule41-inter-body7","1__2__3__4__5__6__7__8__9"), std::to_string(get_tag_for_rel("$rule41-inter-body7","1__2__3__4__5__6__7__8__9")) + ".$rule41-inter-body7.9.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule41-inter-body7","1__2__3__4__5__6__7__8__9")) + ".$rule41-inter-body7.9.table", FULL);
relation* rel__if__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("if","1__2__3"), std::to_string(get_tag_for_rel("if","1__2__3")) + ".if.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("if","1__2__3")) + ".if.3.table", FULL);
relation* rel___dollorrule13__inter__body2__4__3 = new relation(1, false, 4, get_tag_for_rel("$rule13-inter-body2","3"), std::to_string(get_tag_for_rel("$rule13-inter-body2","3")) + ".$rule13-inter-body2.4.table",   FULL);
relation* rel___dollorbir__sub4__5__1 = new relation(1, false, 5, get_tag_for_rel("$bir-sub4","1"), std::to_string(get_tag_for_rel("$bir-sub4","1")) + ".$bir-sub4.5.table",   FULL);
relation* rel__do__fixed__prop__all__2__1__2 = new relation(2, true, 2, get_tag_for_rel("do-fixed-prop-all","1__2"), std::to_string(get_tag_for_rel("do-fixed-prop-all","1__2")) + ".do-fixed-prop-all.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("do-fixed-prop-all","1__2")) + ".do-fixed-prop-all.2.table", FULL);
relation* rel___dollorhead__stratified9__7__5__7__6__3__2__4 = new relation(6, false, 7, get_tag_for_rel("$head-stratified9","5__7__6__3__2__4"), std::to_string(get_tag_for_rel("$head-stratified9","5__7__6__3__2__4")) + ".$head-stratified9.7.table",   FULL);
relation* rel___dollorbir__sub__8__1__2__3__4__5__6__7__8 = new relation(8, true, 8, get_tag_for_rel("$bir-sub","1__2__3__4__5__6__7__8"), std::to_string(get_tag_for_rel("$bir-sub","1__2__3__4__5__6__7__8")) + ".$bir-sub.8.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub","1__2__3__4__5__6__7__8")) + ".$bir-sub.8.table", FULL);
relation* rel___dollorhead__stratified56__7__1__5 = new relation(2, false, 7, get_tag_for_rel("$head-stratified56","1__5"), std::to_string(get_tag_for_rel("$head-stratified56","1__5")) + ".$head-stratified56.7.table",   FULL);
relation* rel___dollorrule37__inter__body__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule37-inter-body","1__2"), std::to_string(get_tag_for_rel("$rule37-inter-body","1__2")) + ".$rule37-inter-body.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule37-inter-body","1__2")) + ".$rule37-inter-body.2.table", FULL);
relation* rel___dollorhead__stratified52__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified52","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified52","1__2__3")) + ".$head-stratified52.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified52","1__2__3")) + ".$head-stratified52.3.table", FULL);
relation* rel___dollorinter__head33__4__2__4 = new relation(2, false, 4, get_tag_for_rel("$inter-head33","2__4"), std::to_string(get_tag_for_rel("$inter-head33","2__4")) + ".$inter-head33.4.table",   FULL);
relation* rel___dollorhead__stratified18__3__2__3 = new relation(2, false, 3, get_tag_for_rel("$head-stratified18","2__3"), std::to_string(get_tag_for_rel("$head-stratified18","2__3")) + ".$head-stratified18.3.table",   FULL);
relation* rel___dollorrule37__inter__body__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule37-inter-body","1"), std::to_string(get_tag_for_rel("$rule37-inter-body","1")) + ".$rule37-inter-body.2.table",   FULL);
relation* rel__if__3__0 = new relation(1, false, 3, get_tag_for_rel("if","0"), std::to_string(get_tag_for_rel("if","0")) + ".if.3.table",   FULL);
relation* rel__applak__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("applak","1__2__3"), std::to_string(get_tag_for_rel("applak","1__2__3")) + ".applak.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("applak","1__2__3")) + ".applak.3.table", FULL);
relation* rel___dollorhead__stratified54__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$head-stratified54","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$head-stratified54","1__2__3__4__5__6")) + ".$head-stratified54.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified54","1__2__3__4__5__6")) + ".$head-stratified54.6.table", FULL);
relation* rel___dollorrule39__inter__body8__3__ = new relation(0, false, 3, get_tag_for_rel("$rule39-inter-body8",""), std::to_string(get_tag_for_rel("$rule39-inter-body8","")) + ".$rule39-inter-body8.3.table",   FULL);
relation* rel___dollorrule17__inter__body__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule17-inter-body","3"), std::to_string(get_tag_for_rel("$rule17-inter-body","3")) + ".$rule17-inter-body.3.table",   FULL);
relation* rel___dollorrule44__inter__body4__10__ = new relation(0, false, 10, get_tag_for_rel("$rule44-inter-body4",""), std::to_string(get_tag_for_rel("$rule44-inter-body4","")) + ".$rule44-inter-body4.10.table",   FULL);
relation* rel___dollorinter__head25__4__3__4 = new relation(2, false, 4, get_tag_for_rel("$inter-head25","3__4"), std::to_string(get_tag_for_rel("$inter-head25","3__4")) + ".$inter-head25.4.table",   FULL);
relation* rel___dollorrule43__inter__body2__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule43-inter-body2","3"), std::to_string(get_tag_for_rel("$rule43-inter-body2","3")) + ".$rule43-inter-body2.3.table",   FULL);
relation* rel___dollorinter__head50__5__1__5__2__3 = new relation(4, false, 5, get_tag_for_rel("$inter-head50","1__5__2__3"), std::to_string(get_tag_for_rel("$inter-head50","1__5__2__3")) + ".$inter-head50.5.table",   FULL);
relation* rel___dollorrule13__inter__body7__4__1 = new relation(1, false, 4, get_tag_for_rel("$rule13-inter-body7","1"), std::to_string(get_tag_for_rel("$rule13-inter-body7","1")) + ".$rule13-inter-body7.4.table",   FULL);
relation* rel___dollorrule13__inter__body3__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule13-inter-body3","1"), std::to_string(get_tag_for_rel("$rule13-inter-body3","1")) + ".$rule13-inter-body3.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule13-inter-body3","1")) + ".$rule13-inter-body3.1.table", FULL);
relation* rel___dollorhead__stratified44__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified44","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified44","1__2__3")) + ".$head-stratified44.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified44","1__2__3")) + ".$head-stratified44.3.table", FULL);
relation* rel__clo__2__0 = new relation(1, false, 2, get_tag_for_rel("clo","0"), std::to_string(get_tag_for_rel("clo","0")) + ".clo.2.table",   FULL);
relation* rel__vararg__1__0 = new relation(1, false, 1, get_tag_for_rel("vararg","0"), std::to_string(get_tag_for_rel("vararg","0")) + ".vararg.1.table",   FULL);
relation* rel__applfk__2__1__2 = new relation(2, true, 2, get_tag_for_rel("applfk","1__2"), std::to_string(get_tag_for_rel("applfk","1__2")) + ".applfk.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("applfk","1__2")) + ".applfk.2.table", FULL);
relation* rel__applfk__2__1 = new relation(1, false, 2, get_tag_for_rel("applfk","1"), std::to_string(get_tag_for_rel("applfk","1")) + ".applfk.2.table",   FULL);
relation* rel___dollornil__1__1 = new relation(1, true, 1, get_tag_for_rel("$nil","1"), std::to_string(get_tag_for_rel("$nil","1")) + ".$nil.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$nil","1")) + ".$nil.1.table", FULL);
relation* rel___dollorrule33__inter__body__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule33-inter-body","1"), std::to_string(get_tag_for_rel("$rule33-inter-body","1")) + ".$rule33-inter-body.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule33-inter-body","1")) + ".$rule33-inter-body.1.table", FULL);
relation* rel__apply__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("apply","1__2__3"), std::to_string(get_tag_for_rel("apply","1__2__3")) + ".apply.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("apply","1__2__3")) + ".apply.3.table", FULL);
relation* rel___dollorrule19__inter__body2__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule19-inter-body2","1"), std::to_string(get_tag_for_rel("$rule19-inter-body2","1")) + ".$rule19-inter-body2.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule19-inter-body2","1")) + ".$rule19-inter-body2.1.table", FULL);
relation* rel__ret__2__1__2 = new relation(2, true, 2, get_tag_for_rel("ret","1__2"), std::to_string(get_tag_for_rel("ret","1__2")) + ".ret.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("ret","1__2")) + ".ret.2.table", FULL);
relation* rel___dollorbir__sub10__3__1 = new relation(1, false, 3, get_tag_for_rel("$bir-sub10","1"), std::to_string(get_tag_for_rel("$bir-sub10","1")) + ".$bir-sub10.3.table",   FULL);
relation* rel___dollorrule41__inter__body__9__4 = new relation(1, false, 9, get_tag_for_rel("$rule41-inter-body","4"), std::to_string(get_tag_for_rel("$rule41-inter-body","4")) + ".$rule41-inter-body.9.table",   FULL);
relation* rel___dollorrule13__inter__body6__3__1 = new relation(1, false, 3, get_tag_for_rel("$rule13-inter-body6","1"), std::to_string(get_tag_for_rel("$rule13-inter-body6","1")) + ".$rule13-inter-body6.3.table",   FULL);
relation* rel__split__at__end__input__2__1__2 = new relation(2, true, 2, get_tag_for_rel("split-at-end-input","1__2"), std::to_string(get_tag_for_rel("split-at-end-input","1__2")) + ".split-at-end-input.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("split-at-end-input","1__2")) + ".split-at-end-input.2.table", FULL);
relation* rel___dollorinter__head48__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$inter-head48","1__2__3__4__5"), std::to_string(get_tag_for_rel("$inter-head48","1__2__3__4__5")) + ".$inter-head48.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head48","1__2__3__4__5")) + ".$inter-head48.5.table", FULL);
relation* rel___dollorrule19__inter__body__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule19-inter-body","1"), std::to_string(get_tag_for_rel("$rule19-inter-body","1")) + ".$rule19-inter-body.2.table",   FULL);
relation* rel___dollorrule24__inter__body__3__2 = new relation(1, false, 3, get_tag_for_rel("$rule24-inter-body","2"), std::to_string(get_tag_for_rel("$rule24-inter-body","2")) + ".$rule24-inter-body.3.table",   FULL);
relation* rel___dollorinter__head28__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head28","1__2__3"), std::to_string(get_tag_for_rel("$inter-head28","1__2__3")) + ".$inter-head28.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head28","1__2__3")) + ".$inter-head28.3.table", FULL);
relation* rel___dollorhead__stratified31__3__2__3 = new relation(2, false, 3, get_tag_for_rel("$head-stratified31","2__3"), std::to_string(get_tag_for_rel("$head-stratified31","2__3")) + ".$head-stratified31.3.table",   FULL);
relation* rel___dollorhead__stratified25__5__5__2__4 = new relation(3, false, 5, get_tag_for_rel("$head-stratified25","5__2__4"), std::to_string(get_tag_for_rel("$head-stratified25","5__2__4")) + ".$head-stratified25.5.table",   FULL);
relation* rel___dollorrule41__inter__body14__6__ = new relation(0, false, 6, get_tag_for_rel("$rule41-inter-body14",""), std::to_string(get_tag_for_rel("$rule41-inter-body14","")) + ".$rule41-inter-body14.6.table",   FULL);
relation* rel___dollorhead__stratified17__4__1__3__4 = new relation(3, false, 4, get_tag_for_rel("$head-stratified17","1__3__4"), std::to_string(get_tag_for_rel("$head-stratified17","1__3__4")) + ".$head-stratified17.4.table",   FULL);
relation* rel___dollorbir__sub6__5__1 = new relation(1, false, 5, get_tag_for_rel("$bir-sub6","1"), std::to_string(get_tag_for_rel("$bir-sub6","1")) + ".$bir-sub6.5.table",   FULL);
relation* rel___dollorrule41__inter__body10__2__ = new relation(0, false, 2, get_tag_for_rel("$rule41-inter-body10",""), std::to_string(get_tag_for_rel("$rule41-inter-body10","")) + ".$rule41-inter-body10.2.table",   FULL);
relation* rel___dollorinter__head46__4__2 = new relation(1, false, 4, get_tag_for_rel("$inter-head46","2"), std::to_string(get_tag_for_rel("$inter-head46","2")) + ".$inter-head46.4.table",   FULL);
relation* rel___dollorhead__stratified6__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$head-stratified6","1__2__3__4"), std::to_string(get_tag_for_rel("$head-stratified6","1__2__3__4")) + ".$head-stratified6.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified6","1__2__3__4")) + ".$head-stratified6.4.table", FULL);
relation* rel___dollorrule25__inter__body4__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule25-inter-body4","1__2__3"), std::to_string(get_tag_for_rel("$rule25-inter-body4","1__2__3")) + ".$rule25-inter-body4.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule25-inter-body4","1__2__3")) + ".$rule25-inter-body4.3.table", FULL);
relation* rel___dollorrule27__inter__body5__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule27-inter-body5","1__2__3"), std::to_string(get_tag_for_rel("$rule27-inter-body5","1__2__3")) + ".$rule27-inter-body5.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule27-inter-body5","1__2__3")) + ".$rule27-inter-body5.3.table", FULL);
relation* rel___dollorrule21__inter__body2__9__9 = new relation(1, false, 9, get_tag_for_rel("$rule21-inter-body2","9"), std::to_string(get_tag_for_rel("$rule21-inter-body2","9")) + ".$rule21-inter-body2.9.table",   FULL);
relation* rel___dollorrule13__inter__body8__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule13-inter-body8","1__2__3"), std::to_string(get_tag_for_rel("$rule13-inter-body8","1__2__3")) + ".$rule13-inter-body8.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule13-inter-body8","1__2__3")) + ".$rule13-inter-body8.3.table", FULL);
relation* rel___dollorrule40__inter__body8__3__ = new relation(0, false, 3, get_tag_for_rel("$rule40-inter-body8",""), std::to_string(get_tag_for_rel("$rule40-inter-body8","")) + ".$rule40-inter-body8.3.table",   FULL);
relation* rel___dollorrule22__inter__body__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule22-inter-body","3"), std::to_string(get_tag_for_rel("$rule22-inter-body","3")) + ".$rule22-inter-body.3.table",   FULL);
relation* rel___dollornil__1__0 = new relation(1, false, 1, get_tag_for_rel("$nil","0"), std::to_string(get_tag_for_rel("$nil","0")) + ".$nil.1.table",   FULL);
relation* rel___dollorrule39__inter__body__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule39-inter-body","1__2__3__4"), std::to_string(get_tag_for_rel("$rule39-inter-body","1__2__3__4")) + ".$rule39-inter-body.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule39-inter-body","1__2__3__4")) + ".$rule39-inter-body.4.table", FULL);
relation* rel___dollorinter__head37__5__1__3 = new relation(2, false, 5, get_tag_for_rel("$inter-head37","1__3"), std::to_string(get_tag_for_rel("$inter-head37","1__3")) + ".$inter-head37.5.table",   FULL);
relation* rel___dollorrule21__inter__body2__9__1__2__3__4__5__6__7__8__9 = new relation(9, true, 9, get_tag_for_rel("$rule21-inter-body2","1__2__3__4__5__6__7__8__9"), std::to_string(get_tag_for_rel("$rule21-inter-body2","1__2__3__4__5__6__7__8__9")) + ".$rule21-inter-body2.9.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule21-inter-body2","1__2__3__4__5__6__7__8__9")) + ".$rule21-inter-body2.9.table", FULL);
relation* rel__binding__2__0 = new relation(1, false, 2, get_tag_for_rel("binding","0"), std::to_string(get_tag_for_rel("binding","0")) + ".binding.2.table",   FULL);
relation* rel___dollorinter__head8__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$inter-head8","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$inter-head8","1__2__3__4__5__6")) + ".$inter-head8.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head8","1__2__3__4__5__6")) + ".$inter-head8.6.table", FULL);
relation* rel___dollorrule40__inter__body1__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule40-inter-body1","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule40-inter-body1","1__2__3__4__5")) + ".$rule40-inter-body1.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule40-inter-body1","1__2__3__4__5")) + ".$rule40-inter-body1.5.table", FULL);
relation* rel___dollorrule44__inter__body3__9__1__2__3__4__5__6__7__8__9 = new relation(9, true, 9, get_tag_for_rel("$rule44-inter-body3","1__2__3__4__5__6__7__8__9"), std::to_string(get_tag_for_rel("$rule44-inter-body3","1__2__3__4__5__6__7__8__9")) + ".$rule44-inter-body3.9.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule44-inter-body3","1__2__3__4__5__6__7__8__9")) + ".$rule44-inter-body3.9.table", FULL);
relation* rel___dollorinter__head31__4__2__3 = new relation(2, false, 4, get_tag_for_rel("$inter-head31","2__3"), std::to_string(get_tag_for_rel("$inter-head31","2__3")) + ".$inter-head31.4.table",   FULL);
relation* rel___dollorrule39__inter__body2__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$rule39-inter-body2","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$rule39-inter-body2","1__2__3__4__5__6__7")) + ".$rule39-inter-body2.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule39-inter-body2","1__2__3__4__5__6__7")) + ".$rule39-inter-body2.7.table", FULL);
relation* rel__ret__2__2 = new relation(1, false, 2, get_tag_for_rel("ret","2"), std::to_string(get_tag_for_rel("ret","2")) + ".ret.2.table",   FULL);
relation* rel___dollorbir__sub15__4__3__4 = new relation(2, false, 4, get_tag_for_rel("$bir-sub15","3__4"), std::to_string(get_tag_for_rel("$bir-sub15","3__4")) + ".$bir-sub15.4.table",   FULL);
relation* rel__split__at__end__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("split-at-end","1__2__3"), std::to_string(get_tag_for_rel("split-at-end","1__2__3")) + ".split-at-end.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("split-at-end","1__2__3")) + ".split-at-end.3.table", FULL);
relation* rel___dollorhead__stratified13__8__4__8 = new relation(2, false, 8, get_tag_for_rel("$head-stratified13","4__8"), std::to_string(get_tag_for_rel("$head-stratified13","4__8")) + ".$head-stratified13.8.table",   FULL);
relation* rel___dollorrule40__inter__body3__5__3 = new relation(1, false, 5, get_tag_for_rel("$rule40-inter-body3","3"), std::to_string(get_tag_for_rel("$rule40-inter-body3","3")) + ".$rule40-inter-body3.5.table",   FULL);
relation* rel___dollorhead__stratified23__9__9__3__7 = new relation(3, false, 9, get_tag_for_rel("$head-stratified23","9__3__7"), std::to_string(get_tag_for_rel("$head-stratified23","9__3__7")) + ".$head-stratified23.9.table",   FULL);
relation* rel___dollorinter__head15__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head15","1__2__3"), std::to_string(get_tag_for_rel("$inter-head15","1__2__3")) + ".$inter-head15.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head15","1__2__3")) + ".$inter-head15.3.table", FULL);
relation* rel___dollorhead__stratified58__4__1__4 = new relation(2, false, 4, get_tag_for_rel("$head-stratified58","1__4"), std::to_string(get_tag_for_rel("$head-stratified58","1__4")) + ".$head-stratified58.4.table",   FULL);
relation* rel___dollorrule14__inter__body3__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule14-inter-body3","1__2__3__4"), std::to_string(get_tag_for_rel("$rule14-inter-body3","1__2__3__4")) + ".$rule14-inter-body3.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule14-inter-body3","1__2__3__4")) + ".$rule14-inter-body3.4.table", FULL);
relation* rel___dollorbir__sub12__3__1 = new relation(1, false, 3, get_tag_for_rel("$bir-sub12","1"), std::to_string(get_tag_for_rel("$bir-sub12","1")) + ".$bir-sub12.3.table",   FULL);
relation* rel___dollorrule1__inter__body1__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule1-inter-body1","1__2__3"), std::to_string(get_tag_for_rel("$rule1-inter-body1","1__2__3")) + ".$rule1-inter-body1.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule1-inter-body1","1__2__3")) + ".$rule1-inter-body1.3.table", FULL);
relation* rel___dollorrule36__inter__body1__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule36-inter-body1","1__2__3"), std::to_string(get_tag_for_rel("$rule36-inter-body1","1__2__3")) + ".$rule36-inter-body1.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule36-inter-body1","1__2__3")) + ".$rule36-inter-body1.3.table", FULL);
relation* rel__ext__all__2__1__2 = new relation(2, true, 2, get_tag_for_rel("ext-all","1__2"), std::to_string(get_tag_for_rel("ext-all","1__2")) + ".ext-all.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("ext-all","1__2")) + ".ext-all.2.table", FULL);
relation* rel___dollorrule38__inter__body1__3__1 = new relation(1, false, 3, get_tag_for_rel("$rule38-inter-body1","1"), std::to_string(get_tag_for_rel("$rule38-inter-body1","1")) + ".$rule38-inter-body1.3.table",   FULL);
relation* rel___dollorhead__stratified57__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$head-stratified57","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$head-stratified57","1__2__3__4__5__6")) + ".$head-stratified57.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified57","1__2__3__4__5__6")) + ".$head-stratified57.6.table", FULL);
relation* rel___dollorhead__stratified30__4__4__3 = new relation(2, false, 4, get_tag_for_rel("$head-stratified30","4__3"), std::to_string(get_tag_for_rel("$head-stratified30","4__3")) + ".$head-stratified30.4.table",   FULL);
relation* rel___dollorhead__stratified17__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$head-stratified17","1__2__3__4"), std::to_string(get_tag_for_rel("$head-stratified17","1__2__3__4")) + ".$head-stratified17.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified17","1__2__3__4")) + ".$head-stratified17.4.table", FULL);
relation* rel___dollorrule22__inter__body7__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule22-inter-body7","1__2__3"), std::to_string(get_tag_for_rel("$rule22-inter-body7","1__2__3")) + ".$rule22-inter-body7.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule22-inter-body7","1__2__3")) + ".$rule22-inter-body7.3.table", FULL);
relation* rel___dollorbir__sub16__2__1 = new relation(1, false, 2, get_tag_for_rel("$bir-sub16","1"), std::to_string(get_tag_for_rel("$bir-sub16","1")) + ".$bir-sub16.2.table",   FULL);
relation* rel__do__fixed__prop__all__2__2 = new relation(1, false, 2, get_tag_for_rel("do-fixed-prop-all","2"), std::to_string(get_tag_for_rel("do-fixed-prop-all","2")) + ".do-fixed-prop-all.2.table",   FULL);
relation* rel___dollorrule39__inter__body5__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$rule39-inter-body5","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$rule39-inter-body5","1__2__3__4__5__6")) + ".$rule39-inter-body5.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule39-inter-body5","1__2__3__4__5__6")) + ".$rule39-inter-body5.6.table", FULL);
relation* rel___dollorrule41__inter__body12__4__ = new relation(0, false, 4, get_tag_for_rel("$rule41-inter-body12",""), std::to_string(get_tag_for_rel("$rule41-inter-body12","")) + ".$rule41-inter-body12.4.table",   FULL);
relation* rel___dollorbir__sub1__9__1__2__3__4__5__6__7__8__9 = new relation(9, true, 9, get_tag_for_rel("$bir-sub1","1__2__3__4__5__6__7__8__9"), std::to_string(get_tag_for_rel("$bir-sub1","1__2__3__4__5__6__7__8__9")) + ".$bir-sub1.9.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub1","1__2__3__4__5__6__7__8__9")) + ".$bir-sub1.9.table", FULL);
relation* rel___dollorrule24__inter__body1__4__3 = new relation(1, false, 4, get_tag_for_rel("$rule24-inter-body1","3"), std::to_string(get_tag_for_rel("$rule24-inter-body1","3")) + ".$rule24-inter-body1.4.table",   FULL);
relation* rel___dollorrule41__inter__body14__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$rule41-inter-body14","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$rule41-inter-body14","1__2__3__4__5__6")) + ".$rule41-inter-body14.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule41-inter-body14","1__2__3__4__5__6")) + ".$rule41-inter-body14.6.table", FULL);
relation* rel___dollorhead__stratified12__9__1__2__3__4__5__6__7__8__9 = new relation(9, true, 9, get_tag_for_rel("$head-stratified12","1__2__3__4__5__6__7__8__9"), std::to_string(get_tag_for_rel("$head-stratified12","1__2__3__4__5__6__7__8__9")) + ".$head-stratified12.9.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified12","1__2__3__4__5__6__7__8__9")) + ".$head-stratified12.9.table", FULL);
relation* rel___dollorinter__head38__3__3 = new relation(1, false, 3, get_tag_for_rel("$inter-head38","3"), std::to_string(get_tag_for_rel("$inter-head38","3")) + ".$inter-head38.3.table",   FULL);
relation* rel___dollorhead__stratified48__3__3__1 = new relation(2, false, 3, get_tag_for_rel("$head-stratified48","3__1"), std::to_string(get_tag_for_rel("$head-stratified48","3__1")) + ".$head-stratified48.3.table",   FULL);
relation* rel___dollorrule44__inter__body2__8__1__2__3__4__5__6__7__8 = new relation(8, true, 8, get_tag_for_rel("$rule44-inter-body2","1__2__3__4__5__6__7__8"), std::to_string(get_tag_for_rel("$rule44-inter-body2","1__2__3__4__5__6__7__8")) + ".$rule44-inter-body2.8.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule44-inter-body2","1__2__3__4__5__6__7__8")) + ".$rule44-inter-body2.8.table", FULL);
relation* rel___dollorhead__stratified15__6__4__6 = new relation(2, false, 6, get_tag_for_rel("$head-stratified15","4__6"), std::to_string(get_tag_for_rel("$head-stratified15","4__6")) + ".$head-stratified15.6.table",   FULL);
relation* rel___dollorrule39__inter__body5__6__5 = new relation(1, false, 6, get_tag_for_rel("$rule39-inter-body5","5"), std::to_string(get_tag_for_rel("$rule39-inter-body5","5")) + ".$rule39-inter-body5.6.table",   FULL);
relation* rel___dollorhead__stratified22__11__11__3__10 = new relation(3, false, 11, get_tag_for_rel("$head-stratified22","11__3__10"), std::to_string(get_tag_for_rel("$head-stratified22","11__3__10")) + ".$head-stratified22.11.table",   FULL);
relation* rel___dollorhead__stratified39__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$head-stratified39","1__2"), std::to_string(get_tag_for_rel("$head-stratified39","1__2")) + ".$head-stratified39.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified39","1__2")) + ".$head-stratified39.2.table", FULL);
relation* rel___dollorrule30__inter__body__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule30-inter-body","1__2"), std::to_string(get_tag_for_rel("$rule30-inter-body","1__2")) + ".$rule30-inter-body.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule30-inter-body","1__2")) + ".$rule30-inter-body.2.table", FULL);
relation* rel___dollorrule23__inter__body__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule23-inter-body","1__2__3__4"), std::to_string(get_tag_for_rel("$rule23-inter-body","1__2__3__4")) + ".$rule23-inter-body.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule23-inter-body","1__2__3__4")) + ".$rule23-inter-body.4.table", FULL);
relation* rel___dollorrule5__inter__body__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule5-inter-body","1__2__3"), std::to_string(get_tag_for_rel("$rule5-inter-body","1__2__3")) + ".$rule5-inter-body.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule5-inter-body","1__2__3")) + ".$rule5-inter-body.3.table", FULL);
relation* rel___dollorhead__splice__10__7__10 = new relation(2, false, 10, get_tag_for_rel("$head-splice","7__10"), std::to_string(get_tag_for_rel("$head-splice","7__10")) + ".$head-splice.10.table",   FULL);
relation* rel___dollorinter__head48__5__3 = new relation(1, false, 5, get_tag_for_rel("$inter-head48","3"), std::to_string(get_tag_for_rel("$inter-head48","3")) + ".$inter-head48.5.table",   FULL);
relation* rel___dollorrule12__inter__body3__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$rule12-inter-body3","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$rule12-inter-body3","1__2__3__4__5__6")) + ".$rule12-inter-body3.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule12-inter-body3","1__2__3__4__5__6")) + ".$rule12-inter-body3.6.table", FULL);
relation* rel___dollorrule43__inter__body3__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule43-inter-body3","1"), std::to_string(get_tag_for_rel("$rule43-inter-body3","1")) + ".$rule43-inter-body3.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule43-inter-body3","1")) + ".$rule43-inter-body3.1.table", FULL);
relation* rel___dollorinter__head24__3__1__3 = new relation(2, false, 3, get_tag_for_rel("$inter-head24","1__3"), std::to_string(get_tag_for_rel("$inter-head24","1__3")) + ".$inter-head24.3.table",   FULL);
relation* rel___dollorlst__2__1 = new relation(1, false, 2, get_tag_for_rel("$lst","1"), std::to_string(get_tag_for_rel("$lst","1")) + ".$lst.2.table",   FULL);
relation* rel___dollorrule33__inter__body1__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule33-inter-body1","1__2"), std::to_string(get_tag_for_rel("$rule33-inter-body1","1__2")) + ".$rule33-inter-body1.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule33-inter-body1","1__2")) + ".$rule33-inter-body1.2.table", FULL);
relation* rel___dollorinter__head32__5__5 = new relation(1, false, 5, get_tag_for_rel("$inter-head32","5"), std::to_string(get_tag_for_rel("$inter-head32","5")) + ".$inter-head32.5.table",   FULL);
relation* rel__env__set__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("env-set","1__2__3"), std::to_string(get_tag_for_rel("env-set","1__2__3")) + ".env-set.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("env-set","1__2__3")) + ".env-set.3.table", FULL);
relation* rel___dollorhead__stratified30__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$head-stratified30","1__2__3__4"), std::to_string(get_tag_for_rel("$head-stratified30","1__2__3__4")) + ".$head-stratified30.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified30","1__2__3__4")) + ".$head-stratified30.4.table", FULL);
relation* rel___dollorrule27__inter__body1__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule27-inter-body1","1__2"), std::to_string(get_tag_for_rel("$rule27-inter-body1","1__2")) + ".$rule27-inter-body1.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule27-inter-body1","1__2")) + ".$rule27-inter-body1.2.table", FULL);
relation* rel___dollorrule12__inter__body6__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule12-inter-body6","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule12-inter-body6","1__2__3__4__5")) + ".$rule12-inter-body6.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule12-inter-body6","1__2__3__4__5")) + ".$rule12-inter-body6.5.table", FULL);
relation* rel___dollorinter__head__3__1__3 = new relation(2, false, 3, get_tag_for_rel("$inter-head","1__3"), std::to_string(get_tag_for_rel("$inter-head","1__3")) + ".$inter-head.3.table",   FULL);
relation* rel___dollorrule22__inter__body4__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule22-inter-body4","1__2__3__4"), std::to_string(get_tag_for_rel("$rule22-inter-body4","1__2__3__4")) + ".$rule22-inter-body4.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule22-inter-body4","1__2__3__4")) + ".$rule22-inter-body4.4.table", FULL);
relation* rel__string__1__1 = new relation(1, true, 1, get_tag_for_rel("string","1"), std::to_string(get_tag_for_rel("string","1")) + ".string.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("string","1")) + ".string.1.table", FULL);
relation* rel___dollorrule40__inter__body__4__1 = new relation(1, false, 4, get_tag_for_rel("$rule40-inter-body","1"), std::to_string(get_tag_for_rel("$rule40-inter-body","1")) + ".$rule40-inter-body.4.table",   FULL);
relation* rel___dollorlst__append__input__2__2 = new relation(1, false, 2, get_tag_for_rel("$lst-append-input","2"), std::to_string(get_tag_for_rel("$lst-append-input","2")) + ".$lst-append-input.2.table",   FULL);
relation* rel___dollorhead__stratified24__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$head-stratified24","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$head-stratified24","1__2__3__4__5__6__7")) + ".$head-stratified24.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified24","1__2__3__4__5__6__7")) + ".$head-stratified24.7.table", FULL);
relation* rel__let__2__0 = new relation(1, false, 2, get_tag_for_rel("let","0"), std::to_string(get_tag_for_rel("let","0")) + ".let.2.table",   FULL);
relation* rel___dollorrule25__inter__body1__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule25-inter-body1","1__2__3__4"), std::to_string(get_tag_for_rel("$rule25-inter-body1","1__2__3__4")) + ".$rule25-inter-body1.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule25-inter-body1","1__2__3__4")) + ".$rule25-inter-body1.4.table", FULL);
relation* rel___dollorrule22__inter__body5__3__3 = new relation(1, false, 3, get_tag_for_rel("$rule22-inter-body5","3"), std::to_string(get_tag_for_rel("$rule22-inter-body5","3")) + ".$rule22-inter-body5.3.table",   FULL);
relation* rel___dollorrule22__inter__body__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule22-inter-body","1__2__3"), std::to_string(get_tag_for_rel("$rule22-inter-body","1__2__3")) + ".$rule22-inter-body.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule22-inter-body","1__2__3")) + ".$rule22-inter-body.3.table", FULL);
relation* rel___dollorrule39__inter__body7__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule39-inter-body7","1__2"), std::to_string(get_tag_for_rel("$rule39-inter-body7","1__2")) + ".$rule39-inter-body7.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule39-inter-body7","1__2")) + ".$rule39-inter-body7.2.table", FULL);
relation* rel___dollorrule20__inter__body__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule20-inter-body","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule20-inter-body","1__2__3__4__5")) + ".$rule20-inter-body.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule20-inter-body","1__2__3__4__5")) + ".$rule20-inter-body.5.table", FULL);
relation* rel___dollorhead__stratified12__9__3__8 = new relation(2, false, 9, get_tag_for_rel("$head-stratified12","3__8"), std::to_string(get_tag_for_rel("$head-stratified12","3__8")) + ".$head-stratified12.9.table",   FULL);
relation* rel__applak__3__0 = new relation(1, false, 3, get_tag_for_rel("applak","0"), std::to_string(get_tag_for_rel("applak","0")) + ".applak.3.table",   FULL);
relation* rel___dollorrule33__inter__body1__2__2 = new relation(1, false, 2, get_tag_for_rel("$rule33-inter-body1","2"), std::to_string(get_tag_for_rel("$rule33-inter-body1","2")) + ".$rule33-inter-body1.2.table",   FULL);
relation* rel___dollorrule27__inter__body__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule27-inter-body","1__2__3__4"), std::to_string(get_tag_for_rel("$rule27-inter-body","1__2__3__4")) + ".$rule27-inter-body.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule27-inter-body","1__2__3__4")) + ".$rule27-inter-body.4.table", FULL);
relation* rel__store__flow__2__1__2 = new relation(2, true, 2, get_tag_for_rel("store-flow","1__2"), std::to_string(get_tag_for_rel("store-flow","1__2")) + ".store-flow.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("store-flow","1__2")) + ".store-flow.2.table", FULL);
relation* rel___dollorrule31__inter__body__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule31-inter-body","1"), std::to_string(get_tag_for_rel("$rule31-inter-body","1")) + ".$rule31-inter-body.2.table",   FULL);
relation* rel__define__3__0 = new relation(1, false, 3, get_tag_for_rel("define","0"), std::to_string(get_tag_for_rel("define","0")) + ".define.3.table",   FULL);
relation* rel___dollorinter__head30__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head30","1__2__3"), std::to_string(get_tag_for_rel("$inter-head30","1__2__3")) + ".$inter-head30.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head30","1__2__3")) + ".$inter-head30.3.table", FULL);
relation* rel___dollorrule12__inter__body5__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$rule12-inter-body5","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$rule12-inter-body5","1__2__3__4__5__6")) + ".$rule12-inter-body5.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule12-inter-body5","1__2__3__4__5__6")) + ".$rule12-inter-body5.6.table", FULL);
relation* rel___dollorlst__append__input__2__1 = new relation(1, false, 2, get_tag_for_rel("$lst-append-input","1"), std::to_string(get_tag_for_rel("$lst-append-input","1")) + ".$lst-append-input.2.table",   FULL);
relation* rel___dollorhead__stratified51__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$head-stratified51","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$head-stratified51","1__2__3__4__5__6__7")) + ".$head-stratified51.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified51","1__2__3__4__5__6__7")) + ".$head-stratified51.7.table", FULL);
relation* rel___dollorhead__splice4__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$head-splice4","1__2__3__4"), std::to_string(get_tag_for_rel("$head-splice4","1__2__3__4")) + ".$head-splice4.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-splice4","1__2__3__4")) + ".$head-splice4.4.table", FULL);
relation* rel__appk__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("appk","1__2__3__4"), std::to_string(get_tag_for_rel("appk","1__2__3__4")) + ".appk.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("appk","1__2__3__4")) + ".appk.4.table", FULL);
relation* rel___dollorrule4__inter__body1__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule4-inter-body1","1__2__3"), std::to_string(get_tag_for_rel("$rule4-inter-body1","1__2__3")) + ".$rule4-inter-body1.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule4-inter-body1","1__2__3")) + ".$rule4-inter-body1.3.table", FULL);
relation* rel___dollorinter__head52__3__3 = new relation(1, false, 3, get_tag_for_rel("$inter-head52","3"), std::to_string(get_tag_for_rel("$inter-head52","3")) + ".$inter-head52.3.table",   FULL);
relation* rel___dollorinter__head49__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$inter-head49","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$inter-head49","1__2__3__4__5__6")) + ".$inter-head49.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head49","1__2__3__4__5__6")) + ".$inter-head49.6.table", FULL);
relation* rel__breaks__into__input__3__1__3 = new relation(2, false, 3, get_tag_for_rel("breaks-into-input","1__3"), std::to_string(get_tag_for_rel("breaks-into-input","1__3")) + ".breaks-into-input.3.table",   FULL);
relation* rel___dollorrule42__inter__body2__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule42-inter-body2","1__2__3__4"), std::to_string(get_tag_for_rel("$rule42-inter-body2","1__2__3__4")) + ".$rule42-inter-body2.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule42-inter-body2","1__2__3__4")) + ".$rule42-inter-body2.4.table", FULL);
relation* rel___dollorlst__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$lst","1__2"), std::to_string(get_tag_for_rel("$lst","1__2")) + ".$lst.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$lst","1__2")) + ".$lst.2.table", FULL);
relation* rel___dollorrule22__inter__body3__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule22-inter-body3","1"), std::to_string(get_tag_for_rel("$rule22-inter-body3","1")) + ".$rule22-inter-body3.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule22-inter-body3","1")) + ".$rule22-inter-body3.1.table", FULL);
relation* rel__appk__4__0 = new relation(1, false, 4, get_tag_for_rel("appk","0"), std::to_string(get_tag_for_rel("appk","0")) + ".appk.4.table",   FULL);
relation* rel___dollorinter__head33__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$inter-head33","1__2__3__4"), std::to_string(get_tag_for_rel("$inter-head33","1__2__3__4")) + ".$inter-head33.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head33","1__2__3__4")) + ".$inter-head33.4.table", FULL);
relation* rel__kaddr__1__0 = new relation(1, false, 1, get_tag_for_rel("kaddr","0"), std::to_string(get_tag_for_rel("kaddr","0")) + ".kaddr.1.table",   FULL);
relation* rel___dollorhead__stratified5__6__3__5 = new relation(2, false, 6, get_tag_for_rel("$head-stratified5","3__5"), std::to_string(get_tag_for_rel("$head-stratified5","3__5")) + ".$head-stratified5.6.table",   FULL);
relation* rel___dollorinter__head27__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$inter-head27","1__2__3__4"), std::to_string(get_tag_for_rel("$inter-head27","1__2__3__4")) + ".$inter-head27.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head27","1__2__3__4")) + ".$inter-head27.4.table", FULL);
relation* rel___dollorhead__stratified37__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$head-stratified37","1__2__3__4"), std::to_string(get_tag_for_rel("$head-stratified37","1__2__3__4")) + ".$head-stratified37.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified37","1__2__3__4")) + ".$head-stratified37.4.table", FULL);
relation* rel___dollorinter__head18__4__2__1__3 = new relation(3, false, 4, get_tag_for_rel("$inter-head18","2__1__3"), std::to_string(get_tag_for_rel("$inter-head18","2__1__3")) + ".$inter-head18.4.table",   FULL);
relation* rel___dollorrule18__inter__body__4__4 = new relation(1, false, 4, get_tag_for_rel("$rule18-inter-body","4"), std::to_string(get_tag_for_rel("$rule18-inter-body","4")) + ".$rule18-inter-body.4.table",   FULL);
relation* rel___dollorinter__head51__4__4 = new relation(1, false, 4, get_tag_for_rel("$inter-head51","4"), std::to_string(get_tag_for_rel("$inter-head51","4")) + ".$inter-head51.4.table",   FULL);
relation* rel__fixedarg__1__0 = new relation(1, false, 1, get_tag_for_rel("fixedarg","0"), std::to_string(get_tag_for_rel("fixedarg","0")) + ".fixedarg.1.table",   FULL);
relation* rel___dollorrule9__inter__body1__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule9-inter-body1","1__2__3__4"), std::to_string(get_tag_for_rel("$rule9-inter-body1","1__2__3__4")) + ".$rule9-inter-body1.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule9-inter-body1","1__2__3__4")) + ".$rule9-inter-body1.4.table", FULL);
relation* rel___dollorrule14__inter__body1__4__1 = new relation(1, false, 4, get_tag_for_rel("$rule14-inter-body1","1"), std::to_string(get_tag_for_rel("$rule14-inter-body1","1")) + ".$rule14-inter-body1.4.table",   FULL);
relation* rel__answer__2__1__2 = new relation(2, true, 2, get_tag_for_rel("answer","1__2"), std::to_string(get_tag_for_rel("answer","1__2")) + ".answer.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("answer","1__2")) + ".answer.2.table", FULL);
relation* rel___dollorrule39__inter__body2__7__4__3 = new relation(2, false, 7, get_tag_for_rel("$rule39-inter-body2","4__3"), std::to_string(get_tag_for_rel("$rule39-inter-body2","4__3")) + ".$rule39-inter-body2.7.table",   FULL);
relation* rel___dollorrule12__inter__body4__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule12-inter-body4","1__2__3"), std::to_string(get_tag_for_rel("$rule12-inter-body4","1__2__3")) + ".$rule12-inter-body4.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule12-inter-body4","1__2__3")) + ".$rule12-inter-body4.3.table", FULL);
relation* rel__lambda__2__0 = new relation(1, false, 2, get_tag_for_rel("lambda","0"), std::to_string(get_tag_for_rel("lambda","0")) + ".lambda.2.table",   FULL);
relation* rel___dollorrule22__inter__body2__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$rule22-inter-body2","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$rule22-inter-body2","1__2__3__4__5__6__7")) + ".$rule22-inter-body2.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule22-inter-body2","1__2__3__4__5__6__7")) + ".$rule22-inter-body2.7.table", FULL);
relation* rel___dollorhead__stratified47__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$head-stratified47","1__2__3__4__5"), std::to_string(get_tag_for_rel("$head-stratified47","1__2__3__4__5")) + ".$head-stratified47.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified47","1__2__3__4__5")) + ".$head-stratified47.5.table", FULL);
relation* rel___dollorrule25__inter__body2__6__1 = new relation(1, false, 6, get_tag_for_rel("$rule25-inter-body2","1"), std::to_string(get_tag_for_rel("$rule25-inter-body2","1")) + ".$rule25-inter-body2.6.table",   FULL);
relation* rel___dollorrule13__inter__body5__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule13-inter-body5","1"), std::to_string(get_tag_for_rel("$rule13-inter-body5","1")) + ".$rule13-inter-body5.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule13-inter-body5","1")) + ".$rule13-inter-body5.1.table", FULL);
relation* rel___dollorrule26__inter__body3__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule26-inter-body3","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule26-inter-body3","1__2__3__4__5")) + ".$rule26-inter-body3.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule26-inter-body3","1__2__3__4__5")) + ".$rule26-inter-body3.5.table", FULL);
relation* rel___dollorinter__head3__7__6 = new relation(1, false, 7, get_tag_for_rel("$inter-head3","6"), std::to_string(get_tag_for_rel("$inter-head3","6")) + ".$inter-head3.7.table",   FULL);
relation* rel___dollorinter__head8__6__3__4__1 = new relation(3, false, 6, get_tag_for_rel("$inter-head8","3__4__1"), std::to_string(get_tag_for_rel("$inter-head8","3__4__1")) + ".$inter-head8.6.table",   FULL);
relation* rel___dollorrule14__inter__body2__4__2 = new relation(1, false, 4, get_tag_for_rel("$rule14-inter-body2","2"), std::to_string(get_tag_for_rel("$rule14-inter-body2","2")) + ".$rule14-inter-body2.4.table",   FULL);
relation* rel___dollorrule38__inter__body__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule38-inter-body","1"), std::to_string(get_tag_for_rel("$rule38-inter-body","1")) + ".$rule38-inter-body.2.table",   FULL);
relation* rel__appk__4__2 = new relation(1, false, 4, get_tag_for_rel("appk","2"), std::to_string(get_tag_for_rel("appk","2")) + ".appk.4.table",   FULL);
relation* rel___dollorrule21__inter__body12__8__3 = new relation(1, false, 8, get_tag_for_rel("$rule21-inter-body12","3"), std::to_string(get_tag_for_rel("$rule21-inter-body12","3")) + ".$rule21-inter-body12.8.table",   FULL);
relation* rel___dollorrule43__inter__body1__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule43-inter-body1","1__2__3"), std::to_string(get_tag_for_rel("$rule43-inter-body1","1__2__3")) + ".$rule43-inter-body1.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule43-inter-body1","1__2__3")) + ".$rule43-inter-body1.3.table", FULL);
relation* rel___dollorrule44__inter__body8__4__ = new relation(0, false, 4, get_tag_for_rel("$rule44-inter-body8",""), std::to_string(get_tag_for_rel("$rule44-inter-body8","")) + ".$rule44-inter-body8.4.table",   FULL);
relation* rel___dollorhead__stratified49__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified49","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified49","1__2__3")) + ".$head-stratified49.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified49","1__2__3")) + ".$head-stratified49.3.table", FULL);
relation* rel___dollorhead__splice1__9__1__2__3__4__5__6__7__8__9 = new relation(9, true, 9, get_tag_for_rel("$head-splice1","1__2__3__4__5__6__7__8__9"), std::to_string(get_tag_for_rel("$head-splice1","1__2__3__4__5__6__7__8__9")) + ".$head-splice1.9.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-splice1","1__2__3__4__5__6__7__8__9")) + ".$head-splice1.9.table", FULL);
relation* rel___dollorinter__head7__2__ = new relation(0, false, 2, get_tag_for_rel("$inter-head7",""), std::to_string(get_tag_for_rel("$inter-head7","")) + ".$inter-head7.2.table",   FULL);
relation* rel___dollorrule40__inter__body4__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule40-inter-body4","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule40-inter-body4","1__2__3__4__5")) + ".$rule40-inter-body4.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule40-inter-body4","1__2__3__4__5")) + ".$rule40-inter-body4.5.table", FULL);
relation* rel___dollorlst__split__input__1__ = new relation(0, false, 1, get_tag_for_rel("$lst-split-input",""), std::to_string(get_tag_for_rel("$lst-split-input","")) + ".$lst-split-input.1.table",   FULL);
relation* rel__store__2__2 = new relation(1, false, 2, get_tag_for_rel("store","2"), std::to_string(get_tag_for_rel("store","2")) + ".store.2.table",   FULL);
relation* rel___dollorhead__stratified51__7__4__1__7 = new relation(3, false, 7, get_tag_for_rel("$head-stratified51","4__1__7"), std::to_string(get_tag_for_rel("$head-stratified51","4__1__7")) + ".$head-stratified51.7.table",   FULL);
relation* rel___dollorinter__head14__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head14","1__2__3"), std::to_string(get_tag_for_rel("$inter-head14","1__2__3")) + ".$inter-head14.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head14","1__2__3")) + ".$inter-head14.3.table", FULL);
relation* rel___dollorlst__2__0 = new relation(1, false, 2, get_tag_for_rel("$lst","0"), std::to_string(get_tag_for_rel("$lst","0")) + ".$lst.2.table",   FULL);
relation* rel__vararg__1__1 = new relation(1, true, 1, get_tag_for_rel("vararg","1"), std::to_string(get_tag_for_rel("vararg","1")) + ".vararg.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("vararg","1")) + ".vararg.1.table", FULL);
relation* rel__do__ext__all__2__2 = new relation(1, false, 2, get_tag_for_rel("do-ext-all","2"), std::to_string(get_tag_for_rel("do-ext-all","2")) + ".do-ext-all.2.table",   FULL);
relation* rel__string__1__0 = new relation(1, false, 1, get_tag_for_rel("string","0"), std::to_string(get_tag_for_rel("string","0")) + ".string.1.table",   FULL);
relation* rel__ref__1__1 = new relation(1, true, 1, get_tag_for_rel("ref","1"), std::to_string(get_tag_for_rel("ref","1")) + ".ref.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("ref","1")) + ".ref.1.table", FULL);
relation* rel___dollorinter__head34__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$inter-head34","1__2__3__4__5"), std::to_string(get_tag_for_rel("$inter-head34","1__2__3__4__5")) + ".$inter-head34.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head34","1__2__3__4__5")) + ".$inter-head34.5.table", FULL);
relation* rel___dollorlst__append__input__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$lst-append-input","1__2"), std::to_string(get_tag_for_rel("$lst-append-input","1__2")) + ".$lst-append-input.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$lst-append-input","1__2")) + ".$lst-append-input.2.table", FULL);
relation* rel___dollorrule1__inter__body2__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule1-inter-body2","1__2"), std::to_string(get_tag_for_rel("$rule1-inter-body2","1__2")) + ".$rule1-inter-body2.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule1-inter-body2","1__2")) + ".$rule1-inter-body2.2.table", FULL);
relation* rel___dollorrule21__inter__body11__4__2__4 = new relation(2, false, 4, get_tag_for_rel("$rule21-inter-body11","2__4"), std::to_string(get_tag_for_rel("$rule21-inter-body11","2__4")) + ".$rule21-inter-body11.4.table",   FULL);
relation* rel___dollorrule1__inter__body1__3__2 = new relation(1, false, 3, get_tag_for_rel("$rule1-inter-body1","2"), std::to_string(get_tag_for_rel("$rule1-inter-body1","2")) + ".$rule1-inter-body1.3.table",   FULL);
relation* rel___dollorinter__head3__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$inter-head3","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$inter-head3","1__2__3__4__5__6__7")) + ".$inter-head3.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head3","1__2__3__4__5__6__7")) + ".$inter-head3.7.table", FULL);
relation* rel___dollorinter__head16__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head16","1__2__3"), std::to_string(get_tag_for_rel("$inter-head16","1__2__3")) + ".$inter-head16.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head16","1__2__3")) + ".$inter-head16.3.table", FULL);
relation* rel___dollorrule41__inter__body__9__1__2__3__4__5__6__7__8__9 = new relation(9, true, 9, get_tag_for_rel("$rule41-inter-body","1__2__3__4__5__6__7__8__9"), std::to_string(get_tag_for_rel("$rule41-inter-body","1__2__3__4__5__6__7__8__9")) + ".$rule41-inter-body.9.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule41-inter-body","1__2__3__4__5__6__7__8__9")) + ".$rule41-inter-body.9.table", FULL);
relation* rel___dollorrule32__inter__body__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule32-inter-body","1__2"), std::to_string(get_tag_for_rel("$rule32-inter-body","1__2")) + ".$rule32-inter-body.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule32-inter-body","1__2")) + ".$rule32-inter-body.2.table", FULL);
relation* rel___dollorrule39__inter__body1__5__1__5 = new relation(2, false, 5, get_tag_for_rel("$rule39-inter-body1","1__5"), std::to_string(get_tag_for_rel("$rule39-inter-body1","1__5")) + ".$rule39-inter-body1.5.table",   FULL);
relation* rel___dollorrule4__inter__body__5__1__4 = new relation(2, false, 5, get_tag_for_rel("$rule4-inter-body","1__4"), std::to_string(get_tag_for_rel("$rule4-inter-body","1__4")) + ".$rule4-inter-body.5.table",   FULL);
relation* rel___dollorinter__head50__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$inter-head50","1__2__3__4__5"), std::to_string(get_tag_for_rel("$inter-head50","1__2__3__4__5")) + ".$inter-head50.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head50","1__2__3__4__5")) + ".$inter-head50.5.table", FULL);
relation* rel___dollorinter__head43__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$inter-head43","1__2__3__4"), std::to_string(get_tag_for_rel("$inter-head43","1__2__3__4")) + ".$inter-head43.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head43","1__2__3__4")) + ".$inter-head43.4.table", FULL);
relation* rel___dollorrule1__inter__body3__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule1-inter-body3","1"), std::to_string(get_tag_for_rel("$rule1-inter-body3","1")) + ".$rule1-inter-body3.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule1-inter-body3","1")) + ".$rule1-inter-body3.1.table", FULL);
relation* rel___dollorrule1__inter__body2__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule1-inter-body2","1"), std::to_string(get_tag_for_rel("$rule1-inter-body2","1")) + ".$rule1-inter-body2.2.table",   FULL);
relation* rel__eval__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("eval","1__2__3"), std::to_string(get_tag_for_rel("eval","1__2__3")) + ".eval.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("eval","1__2__3")) + ".eval.3.table", FULL);
relation* rel___dollorrule40__inter__body6__1__ = new relation(0, false, 1, get_tag_for_rel("$rule40-inter-body6",""), std::to_string(get_tag_for_rel("$rule40-inter-body6","")) + ".$rule40-inter-body6.1.table",   FULL);
relation* rel___dollorrule13__inter__body4__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule13-inter-body4","1__2__3"), std::to_string(get_tag_for_rel("$rule13-inter-body4","1__2__3")) + ".$rule13-inter-body4.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule13-inter-body4","1__2__3")) + ".$rule13-inter-body4.3.table", FULL);
relation* rel___dollorinter__head47__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$inter-head47","1__2"), std::to_string(get_tag_for_rel("$inter-head47","1__2")) + ".$inter-head47.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head47","1__2")) + ".$inter-head47.2.table", FULL);
relation* rel___dollorrule26__inter__body4__5__1 = new relation(1, false, 5, get_tag_for_rel("$rule26-inter-body4","1"), std::to_string(get_tag_for_rel("$rule26-inter-body4","1")) + ".$rule26-inter-body4.5.table",   FULL);
relation* rel___dollorrule41__inter__body1__9__7 = new relation(1, false, 9, get_tag_for_rel("$rule41-inter-body1","7"), std::to_string(get_tag_for_rel("$rule41-inter-body1","7")) + ".$rule41-inter-body1.9.table",   FULL);
relation* rel___dollorlst__split__3__1 = new relation(1, false, 3, get_tag_for_rel("$lst-split","1"), std::to_string(get_tag_for_rel("$lst-split","1")) + ".$lst-split.3.table",   FULL);
relation* rel___dollorinter__head19__10__7__9__6__3__5__4__2__8__1 = new relation(9, false, 10, get_tag_for_rel("$inter-head19","7__9__6__3__5__4__2__8__1"), std::to_string(get_tag_for_rel("$inter-head19","7__9__6__3__5__4__2__8__1")) + ".$inter-head19.10.table",   FULL);
relation* rel___dollorrule12__inter__body__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule12-inter-body","1"), std::to_string(get_tag_for_rel("$rule12-inter-body","1")) + ".$rule12-inter-body.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule12-inter-body","1")) + ".$rule12-inter-body.1.table", FULL);
relation* rel___dollorbir__sub13__3__1 = new relation(1, false, 3, get_tag_for_rel("$bir-sub13","1"), std::to_string(get_tag_for_rel("$bir-sub13","1")) + ".$bir-sub13.3.table",   FULL);
relation* rel___dollorbir__sub17__2__1 = new relation(1, false, 2, get_tag_for_rel("$bir-sub17","1"), std::to_string(get_tag_for_rel("$bir-sub17","1")) + ".$bir-sub17.2.table",   FULL);
relation* rel___dollorrule41__inter__body9__1__ = new relation(0, false, 1, get_tag_for_rel("$rule41-inter-body9",""), std::to_string(get_tag_for_rel("$rule41-inter-body9","")) + ".$rule41-inter-body9.1.table",   FULL);
relation* rel___dollorrule27__inter__body4__5__5 = new relation(1, false, 5, get_tag_for_rel("$rule27-inter-body4","5"), std::to_string(get_tag_for_rel("$rule27-inter-body4","5")) + ".$rule27-inter-body4.5.table",   FULL);
relation* rel___dollorrule44__inter__body__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("$rule44-inter-body","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("$rule44-inter-body","1__2__3__4__5__6")) + ".$rule44-inter-body.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule44-inter-body","1__2__3__4__5__6")) + ".$rule44-inter-body.6.table", FULL);
relation* rel___dollorrule23__inter__body__4__ = new relation(0, false, 4, get_tag_for_rel("$rule23-inter-body",""), std::to_string(get_tag_for_rel("$rule23-inter-body","")) + ".$rule23-inter-body.4.table",   FULL);
relation* rel___dollorrule18__inter__body__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule18-inter-body","1__2__3__4"), std::to_string(get_tag_for_rel("$rule18-inter-body","1__2__3__4")) + ".$rule18-inter-body.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule18-inter-body","1__2__3__4")) + ".$rule18-inter-body.4.table", FULL);
relation* rel___dollorrule40__inter__body5__6__5 = new relation(1, false, 6, get_tag_for_rel("$rule40-inter-body5","5"), std::to_string(get_tag_for_rel("$rule40-inter-body5","5")) + ".$rule40-inter-body5.6.table",   FULL);
relation* rel__empty__0__ = new relation(0, true, 0, get_tag_for_rel("empty",""), std::to_string(get_tag_for_rel("empty","")) + ".empty.0.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("empty","")) + ".empty.0.table", FULL);
relation* rel___dollorinter__head39__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$inter-head39","1__2__3"), std::to_string(get_tag_for_rel("$inter-head39","1__2__3")) + ".$inter-head39.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head39","1__2__3")) + ".$inter-head39.3.table", FULL);
relation* rel___dollorrule42__inter__body5__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$rule42-inter-body5","1__2"), std::to_string(get_tag_for_rel("$rule42-inter-body5","1__2")) + ".$rule42-inter-body5.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule42-inter-body5","1__2")) + ".$rule42-inter-body5.2.table", FULL);
relation* rel__length__input__1__1 = new relation(1, true, 1, get_tag_for_rel("length-input","1"), std::to_string(get_tag_for_rel("length-input","1")) + ".length-input.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("length-input","1")) + ".length-input.1.table", FULL);
relation* rel___dollorrule21__inter__body3__8__6 = new relation(1, false, 8, get_tag_for_rel("$rule21-inter-body3","6"), std::to_string(get_tag_for_rel("$rule21-inter-body3","6")) + ".$rule21-inter-body3.8.table",   FULL);
relation* rel___dollorinter__head41__6__6__3 = new relation(2, false, 6, get_tag_for_rel("$inter-head41","6__3"), std::to_string(get_tag_for_rel("$inter-head41","6__3")) + ".$inter-head41.6.table",   FULL);
relation* rel___dollorrule21__inter__body9__8__ = new relation(0, false, 8, get_tag_for_rel("$rule21-inter-body9",""), std::to_string(get_tag_for_rel("$rule21-inter-body9","")) + ".$rule21-inter-body9.8.table",   FULL);
relation* rel___dollorrule21__inter__body10__3__1 = new relation(1, false, 3, get_tag_for_rel("$rule21-inter-body10","1"), std::to_string(get_tag_for_rel("$rule21-inter-body10","1")) + ".$rule21-inter-body10.3.table",   FULL);
relation* rel___dollorrule9__inter__body1__4__3 = new relation(1, false, 4, get_tag_for_rel("$rule9-inter-body1","3"), std::to_string(get_tag_for_rel("$rule9-inter-body1","3")) + ".$rule9-inter-body1.4.table",   FULL);
relation* rel___dollorinter__head44__3__3__1 = new relation(2, false, 3, get_tag_for_rel("$inter-head44","3__1"), std::to_string(get_tag_for_rel("$inter-head44","3__1")) + ".$inter-head44.3.table",   FULL);
relation* rel__letk__6__4 = new relation(1, false, 6, get_tag_for_rel("letk","4"), std::to_string(get_tag_for_rel("letk","4")) + ".letk.6.table",   FULL);
relation* rel___dollorrule39__inter__body8__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule39-inter-body8","1__2__3"), std::to_string(get_tag_for_rel("$rule39-inter-body8","1__2__3")) + ".$rule39-inter-body8.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule39-inter-body8","1__2__3")) + ".$rule39-inter-body8.3.table", FULL);
relation* rel___dollorrule13__inter__body1__4__1__4 = new relation(2, false, 4, get_tag_for_rel("$rule13-inter-body1","1__4"), std::to_string(get_tag_for_rel("$rule13-inter-body1","1__4")) + ".$rule13-inter-body1.4.table",   FULL);
relation* rel___dollorrule21__inter__body12__8__1__2__3__4__5__6__7__8 = new relation(8, true, 8, get_tag_for_rel("$rule21-inter-body12","1__2__3__4__5__6__7__8"), std::to_string(get_tag_for_rel("$rule21-inter-body12","1__2__3__4__5__6__7__8")) + ".$rule21-inter-body12.8.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule21-inter-body12","1__2__3__4__5__6__7__8")) + ".$rule21-inter-body12.8.table", FULL);
relation* rel___dollorhead__stratified34__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified34","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified34","1__2__3")) + ".$head-stratified34.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified34","1__2__3")) + ".$head-stratified34.3.table", FULL);
relation* rel___dollorrule44__inter__body5__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule44-inter-body5","1"), std::to_string(get_tag_for_rel("$rule44-inter-body5","1")) + ".$rule44-inter-body5.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule44-inter-body5","1")) + ".$rule44-inter-body5.1.table", FULL);
relation* rel___dollorrule43__inter__body__4__4 = new relation(1, false, 4, get_tag_for_rel("$rule43-inter-body","4"), std::to_string(get_tag_for_rel("$rule43-inter-body","4")) + ".$rule43-inter-body.4.table",   FULL);
relation* rel___dollorrule39__inter__body6__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule39-inter-body6","1"), std::to_string(get_tag_for_rel("$rule39-inter-body6","1")) + ".$rule39-inter-body6.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule39-inter-body6","1")) + ".$rule39-inter-body6.1.table", FULL);
relation* rel___dollorrule39__inter__body7__2__ = new relation(0, false, 2, get_tag_for_rel("$rule39-inter-body7",""), std::to_string(get_tag_for_rel("$rule39-inter-body7","")) + ".$rule39-inter-body7.2.table",   FULL);
relation* rel__do__var__prop__all__2__1__2 = new relation(2, true, 2, get_tag_for_rel("do-var-prop-all","1__2"), std::to_string(get_tag_for_rel("do-var-prop-all","1__2")) + ".do-var-prop-all.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("do-var-prop-all","1__2")) + ".do-var-prop-all.2.table", FULL);
relation* rel___dollorrule42__inter__body__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule42-inter-body","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule42-inter-body","1__2__3__4__5")) + ".$rule42-inter-body.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule42-inter-body","1__2__3__4__5")) + ".$rule42-inter-body.5.table", FULL);
relation* rel___dollorrule24__inter__body3__5__4 = new relation(1, false, 5, get_tag_for_rel("$rule24-inter-body3","4"), std::to_string(get_tag_for_rel("$rule24-inter-body3","4")) + ".$rule24-inter-body3.5.table",   FULL);
relation* rel__int__1__1 = new relation(1, true, 1, get_tag_for_rel("int","1"), std::to_string(get_tag_for_rel("int","1")) + ".int.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("int","1")) + ".int.1.table", FULL);
relation* rel___dollorrule30__inter__body1__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule30-inter-body1","1__2__3"), std::to_string(get_tag_for_rel("$rule30-inter-body1","1__2__3")) + ".$rule30-inter-body1.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule30-inter-body1","1__2__3")) + ".$rule30-inter-body1.3.table", FULL);
relation* rel___dollorrule41__inter__body4__8__1__2__3__4__5__6__7__8 = new relation(8, true, 8, get_tag_for_rel("$rule41-inter-body4","1__2__3__4__5__6__7__8"), std::to_string(get_tag_for_rel("$rule41-inter-body4","1__2__3__4__5__6__7__8")) + ".$rule41-inter-body4.8.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule41-inter-body4","1__2__3__4__5__6__7__8")) + ".$rule41-inter-body4.8.table", FULL);
relation* rel___dollorinter__head29__2__2 = new relation(1, false, 2, get_tag_for_rel("$inter-head29","2"), std::to_string(get_tag_for_rel("$inter-head29","2")) + ".$inter-head29.2.table",   FULL);
relation* rel___dollorhead__stratified57__6__1__5 = new relation(2, false, 6, get_tag_for_rel("$head-stratified57","1__5"), std::to_string(get_tag_for_rel("$head-stratified57","1__5")) + ".$head-stratified57.6.table",   FULL);
relation* rel___dollorrule21__inter__body5__9__1__2__3__4__5__6__7__8__9 = new relation(9, true, 9, get_tag_for_rel("$rule21-inter-body5","1__2__3__4__5__6__7__8__9"), std::to_string(get_tag_for_rel("$rule21-inter-body5","1__2__3__4__5__6__7__8__9")) + ".$rule21-inter-body5.9.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule21-inter-body5","1__2__3__4__5__6__7__8__9")) + ".$rule21-inter-body5.9.table", FULL);
relation* rel___dollorrule12__inter__body5__6__ = new relation(0, false, 6, get_tag_for_rel("$rule12-inter-body5",""), std::to_string(get_tag_for_rel("$rule12-inter-body5","")) + ".$rule12-inter-body5.6.table",   FULL);
relation* rel___dollorrule41__inter__body11__3__ = new relation(0, false, 3, get_tag_for_rel("$rule41-inter-body11",""), std::to_string(get_tag_for_rel("$rule41-inter-body11","")) + ".$rule41-inter-body11.3.table",   FULL);
relation* rel___dollorrule32__inter__body1__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule32-inter-body1","1__2__3__4"), std::to_string(get_tag_for_rel("$rule32-inter-body1","1__2__3__4")) + ".$rule32-inter-body1.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule32-inter-body1","1__2__3__4")) + ".$rule32-inter-body1.4.table", FULL);
relation* rel___dollorbir__sub14__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$bir-sub14","1__2__3__4"), std::to_string(get_tag_for_rel("$bir-sub14","1__2__3__4")) + ".$bir-sub14.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub14","1__2__3__4")) + ".$bir-sub14.4.table", FULL);
relation* rel__list__of__1__0 = new relation(1, false, 1, get_tag_for_rel("list-of","0"), std::to_string(get_tag_for_rel("list-of","0")) + ".list-of.1.table",   FULL);
relation* rel___dollorhead__stratified3__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$head-stratified3","1__2__3__4"), std::to_string(get_tag_for_rel("$head-stratified3","1__2__3__4")) + ".$head-stratified3.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified3","1__2__3__4")) + ".$head-stratified3.4.table", FULL);
relation* rel___dollorinter__head12__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$inter-head12","1__2__3__4__5"), std::to_string(get_tag_for_rel("$inter-head12","1__2__3__4__5")) + ".$inter-head12.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head12","1__2__3__4__5")) + ".$inter-head12.5.table", FULL);
relation* rel___dollorrule36__inter__body__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule36-inter-body","1__2__3__4"), std::to_string(get_tag_for_rel("$rule36-inter-body","1__2__3__4")) + ".$rule36-inter-body.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule36-inter-body","1__2__3__4")) + ".$rule36-inter-body.4.table", FULL);
relation* rel___dollorrule12__inter__body2__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$rule12-inter-body2","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$rule12-inter-body2","1__2__3__4__5__6__7")) + ".$rule12-inter-body2.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule12-inter-body2","1__2__3__4__5__6__7")) + ".$rule12-inter-body2.7.table", FULL);
relation* rel___dollorhead__splice__10__1__2__3__4__5__6__7__8__9__10 = new relation(10, true, 10, get_tag_for_rel("$head-splice","1__2__3__4__5__6__7__8__9__10"), std::to_string(get_tag_for_rel("$head-splice","1__2__3__4__5__6__7__8__9__10")) + ".$head-splice.10.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-splice","1__2__3__4__5__6__7__8__9__10")) + ".$head-splice.10.table", FULL);
relation* rel___dollorrule1__inter__body__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule1-inter-body","1"), std::to_string(get_tag_for_rel("$rule1-inter-body","1")) + ".$rule1-inter-body.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule1-inter-body","1")) + ".$rule1-inter-body.1.table", FULL);
relation* rel___dollorhead__stratified21__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-stratified21","1__2__3"), std::to_string(get_tag_for_rel("$head-stratified21","1__2__3")) + ".$head-stratified21.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified21","1__2__3")) + ".$head-stratified21.3.table", FULL);
relation* rel___dollorrule29__inter__body__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule29-inter-body","1"), std::to_string(get_tag_for_rel("$rule29-inter-body","1")) + ".$rule29-inter-body.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule29-inter-body","1")) + ".$rule29-inter-body.1.table", FULL);
relation* rel___dollorrule2__inter__body__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule2-inter-body","1__2__3__4"), std::to_string(get_tag_for_rel("$rule2-inter-body","1__2__3__4")) + ".$rule2-inter-body.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule2-inter-body","1__2__3__4")) + ".$rule2-inter-body.4.table", FULL);
relation* rel___dollorbir__sub16__2__1__2 = new relation(2, true, 2, get_tag_for_rel("$bir-sub16","1__2"), std::to_string(get_tag_for_rel("$bir-sub16","1__2")) + ".$bir-sub16.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub16","1__2")) + ".$bir-sub16.2.table", FULL);
relation* rel___dollorinter__head53__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$inter-head53","1__2__3__4__5"), std::to_string(get_tag_for_rel("$inter-head53","1__2__3__4__5")) + ".$inter-head53.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head53","1__2__3__4__5")) + ".$inter-head53.5.table", FULL);
relation* rel___dollorrule44__inter__body3__9__4 = new relation(1, false, 9, get_tag_for_rel("$rule44-inter-body3","4"), std::to_string(get_tag_for_rel("$rule44-inter-body3","4")) + ".$rule44-inter-body3.9.table",   FULL);
relation* rel___dollorrule41__inter__body5__8__5 = new relation(1, false, 8, get_tag_for_rel("$rule41-inter-body5","5"), std::to_string(get_tag_for_rel("$rule41-inter-body5","5")) + ".$rule41-inter-body5.8.table",   FULL);
relation* rel___dollorhead__splice2__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$head-splice2","1__2__3"), std::to_string(get_tag_for_rel("$head-splice2","1__2__3")) + ".$head-splice2.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-splice2","1__2__3")) + ".$head-splice2.3.table", FULL);
relation* rel__fixedarg__1__1 = new relation(1, true, 1, get_tag_for_rel("fixedarg","1"), std::to_string(get_tag_for_rel("fixedarg","1")) + ".fixedarg.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("fixedarg","1")) + ".fixedarg.1.table", FULL);
relation* rel___dollorlst__2__0__1 = new relation(2, false, 2, get_tag_for_rel("$lst","0__1"), std::to_string(get_tag_for_rel("$lst","0__1")) + ".$lst.2.table",   FULL);
relation* rel___dollorrule4__inter__body1__3__1__2 = new relation(2, false, 3, get_tag_for_rel("$rule4-inter-body1","1__2"), std::to_string(get_tag_for_rel("$rule4-inter-body1","1__2")) + ".$rule4-inter-body1.3.table",   FULL);
relation* rel___dollorrule30__inter__body1__3__2 = new relation(1, false, 3, get_tag_for_rel("$rule30-inter-body1","2"), std::to_string(get_tag_for_rel("$rule30-inter-body1","2")) + ".$rule30-inter-body1.3.table",   FULL);
relation* rel___dollorlst__split__input__1__1 = new relation(1, true, 1, get_tag_for_rel("$lst-split-input","1"), std::to_string(get_tag_for_rel("$lst-split-input","1")) + ".$lst-split-input.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$lst-split-input","1")) + ".$lst-split-input.1.table", FULL);
relation* rel___dollorrule9__inter__body__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule9-inter-body","1__2__3__4"), std::to_string(get_tag_for_rel("$rule9-inter-body","1__2__3__4")) + ".$rule9-inter-body.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule9-inter-body","1__2__3__4")) + ".$rule9-inter-body.4.table", FULL);
relation* rel__split__at__input__2__2 = new relation(1, false, 2, get_tag_for_rel("split-at-input","2"), std::to_string(get_tag_for_rel("split-at-input","2")) + ".split-at-input.2.table",   FULL);
relation* rel___dollorrule25__inter__body5__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule25-inter-body5","1__2__3__4"), std::to_string(get_tag_for_rel("$rule25-inter-body5","1__2__3__4")) + ".$rule25-inter-body5.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule25-inter-body5","1__2__3__4")) + ".$rule25-inter-body5.4.table", FULL);
relation* rel__env__map__3__1 = new relation(1, false, 3, get_tag_for_rel("env-map","1"), std::to_string(get_tag_for_rel("env-map","1")) + ".env-map.3.table",   FULL);
relation* rel___dollorrule18__inter__body1__4__1 = new relation(1, false, 4, get_tag_for_rel("$rule18-inter-body1","1"), std::to_string(get_tag_for_rel("$rule18-inter-body1","1")) + ".$rule18-inter-body1.4.table",   FULL);
relation* rel___dollorrule11__inter__body__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule11-inter-body","1__2__3"), std::to_string(get_tag_for_rel("$rule11-inter-body","1__2__3")) + ".$rule11-inter-body.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule11-inter-body","1__2__3")) + ".$rule11-inter-body.3.table", FULL);
relation* rel___dollorrule6__inter__body__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule6-inter-body","1__2__3__4"), std::to_string(get_tag_for_rel("$rule6-inter-body","1__2__3__4")) + ".$rule6-inter-body.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule6-inter-body","1__2__3__4")) + ".$rule6-inter-body.4.table", FULL);
relation* rel___dollorhead__stratified__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$head-stratified","1__2__3__4__5"), std::to_string(get_tag_for_rel("$head-stratified","1__2__3__4__5")) + ".$head-stratified.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified","1__2__3__4__5")) + ".$head-stratified.5.table", FULL);
relation* rel___dollorrule41__inter__body13__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule41-inter-body13","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule41-inter-body13","1__2__3__4__5")) + ".$rule41-inter-body13.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule41-inter-body13","1__2__3__4__5")) + ".$rule41-inter-body13.5.table", FULL);
relation* rel___dollorrule16__inter__body__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule16-inter-body","1__2__3"), std::to_string(get_tag_for_rel("$rule16-inter-body","1__2__3")) + ".$rule16-inter-body.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule16-inter-body","1__2__3")) + ".$rule16-inter-body.3.table", FULL);
relation* rel___dollorrule14__inter__body__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule14-inter-body","1__2__3"), std::to_string(get_tag_for_rel("$rule14-inter-body","1__2__3")) + ".$rule14-inter-body.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule14-inter-body","1__2__3")) + ".$rule14-inter-body.3.table", FULL);
relation* rel__saddr__1__0 = new relation(1, false, 1, get_tag_for_rel("saddr","0"), std::to_string(get_tag_for_rel("saddr","0")) + ".saddr.1.table",   FULL);
relation* rel___dollorrule14__inter__body1__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule14-inter-body1","1__2__3__4"), std::to_string(get_tag_for_rel("$rule14-inter-body1","1__2__3__4")) + ".$rule14-inter-body1.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule14-inter-body1","1__2__3__4")) + ".$rule14-inter-body1.4.table", FULL);
relation* rel__do__var__prop__all__2__1 = new relation(1, false, 2, get_tag_for_rel("do-var-prop-all","1"), std::to_string(get_tag_for_rel("do-var-prop-all","1")) + ".do-var-prop-all.2.table",   FULL);
relation* rel___dollorhead__stratified47__5__1__2__5 = new relation(3, false, 5, get_tag_for_rel("$head-stratified47","1__2__5"), std::to_string(get_tag_for_rel("$head-stratified47","1__2__5")) + ".$head-stratified47.5.table",   FULL);
relation* rel___dollorrule30__inter__body__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule30-inter-body","1"), std::to_string(get_tag_for_rel("$rule30-inter-body","1")) + ".$rule30-inter-body.2.table",   FULL);
relation* rel___dollorrule44__inter__body6__2__ = new relation(0, false, 2, get_tag_for_rel("$rule44-inter-body6",""), std::to_string(get_tag_for_rel("$rule44-inter-body6","")) + ".$rule44-inter-body6.2.table",   FULL);
relation* rel__length__2__1__2 = new relation(2, true, 2, get_tag_for_rel("length","1__2"), std::to_string(get_tag_for_rel("length","1__2")) + ".length.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("length","1__2")) + ".length.2.table", FULL);
relation* rel___dollorrule24__inter__body3__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule24-inter-body3","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule24-inter-body3","1__2__3__4__5")) + ".$rule24-inter-body3.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule24-inter-body3","1__2__3__4__5")) + ".$rule24-inter-body3.5.table", FULL);
relation* rel___dollorbir__sub9__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$bir-sub9","1__2__3__4"), std::to_string(get_tag_for_rel("$bir-sub9","1__2__3__4")) + ".$bir-sub9.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub9","1__2__3__4")) + ".$bir-sub9.4.table", FULL);
relation* rel__store__2__1__2 = new relation(2, true, 2, get_tag_for_rel("store","1__2"), std::to_string(get_tag_for_rel("store","1__2")) + ".store.2.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("store","1__2")) + ".store.2.table", FULL);
relation* rel___dollorrule44__inter__body1__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$rule44-inter-body1","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$rule44-inter-body1","1__2__3__4__5__6__7")) + ".$rule44-inter-body1.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule44-inter-body1","1__2__3__4__5__6__7")) + ".$rule44-inter-body1.7.table", FULL);
relation* rel__letk__6__1__2__3__4__5__6 = new relation(6, true, 6, get_tag_for_rel("letk","1__2__3__4__5__6"), std::to_string(get_tag_for_rel("letk","1__2__3__4__5__6")) + ".letk.6.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("letk","1__2__3__4__5__6")) + ".letk.6.table", FULL);
relation* rel___dollorrule42__inter__body4__1__1 = new relation(1, true, 1, get_tag_for_rel("$rule42-inter-body4","1"), std::to_string(get_tag_for_rel("$rule42-inter-body4","1")) + ".$rule42-inter-body4.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule42-inter-body4","1")) + ".$rule42-inter-body4.1.table", FULL);
relation* rel__top__level__env__1__1 = new relation(1, true, 1, get_tag_for_rel("top-level-env","1"), std::to_string(get_tag_for_rel("top-level-env","1")) + ".top-level-env.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("top-level-env","1")) + ".top-level-env.1.table", FULL);
relation* rel___dollorrule12__inter__body1__3__1__3 = new relation(2, false, 3, get_tag_for_rel("$rule12-inter-body1","1__3"), std::to_string(get_tag_for_rel("$rule12-inter-body1","1__3")) + ".$rule12-inter-body1.3.table",   FULL);
relation* rel___dollorhead__stratified13__8__1__2__3__4__5__6__7__8 = new relation(8, true, 8, get_tag_for_rel("$head-stratified13","1__2__3__4__5__6__7__8"), std::to_string(get_tag_for_rel("$head-stratified13","1__2__3__4__5__6__7__8")) + ".$head-stratified13.8.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified13","1__2__3__4__5__6__7__8")) + ".$head-stratified13.8.table", FULL);
relation* rel___dollorrule32__inter__body__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule32-inter-body","1"), std::to_string(get_tag_for_rel("$rule32-inter-body","1")) + ".$rule32-inter-body.2.table",   FULL);
relation* rel___dollorrule21__inter__body5__9__5 = new relation(1, false, 9, get_tag_for_rel("$rule21-inter-body5","5"), std::to_string(get_tag_for_rel("$rule21-inter-body5","5")) + ".$rule21-inter-body5.9.table",   FULL);
relation* rel___dollorbir__sub13__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$bir-sub13","1__2__3"), std::to_string(get_tag_for_rel("$bir-sub13","1__2__3")) + ".$bir-sub13.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$bir-sub13","1__2__3")) + ".$bir-sub13.3.table", FULL);
relation* rel__breaks__into__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("breaks-into","1__2__3__4"), std::to_string(get_tag_for_rel("breaks-into","1__2__3__4")) + ".breaks-into.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("breaks-into","1__2__3__4")) + ".breaks-into.4.table", FULL);
relation* rel___dollorrule21__inter__body6__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule21-inter-body6","1__2__3"), std::to_string(get_tag_for_rel("$rule21-inter-body6","1__2__3")) + ".$rule21-inter-body6.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule21-inter-body6","1__2__3")) + ".$rule21-inter-body6.3.table", FULL);
relation* rel___dollorhead__stratified4__7__4__6 = new relation(2, false, 7, get_tag_for_rel("$head-stratified4","4__6"), std::to_string(get_tag_for_rel("$head-stratified4","4__6")) + ".$head-stratified4.7.table",   FULL);
relation* rel___dollorrule44__inter__body7__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule44-inter-body7","1__2__3"), std::to_string(get_tag_for_rel("$rule44-inter-body7","1__2__3")) + ".$rule44-inter-body7.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule44-inter-body7","1__2__3")) + ".$rule44-inter-body7.3.table", FULL);
relation* rel__split__at__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("split-at","1__2__3"), std::to_string(get_tag_for_rel("split-at","1__2__3")) + ".split-at.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("split-at","1__2__3")) + ".split-at.3.table", FULL);
relation* rel___dollorrule39__inter__body4__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$rule39-inter-body4","1__2__3__4__5"), std::to_string(get_tag_for_rel("$rule39-inter-body4","1__2__3__4__5")) + ".$rule39-inter-body4.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule39-inter-body4","1__2__3__4__5")) + ".$rule39-inter-body4.5.table", FULL);
relation* rel___dollorinter__head23__5__1__2__3__4__5 = new relation(5, true, 5, get_tag_for_rel("$inter-head23","1__2__3__4__5"), std::to_string(get_tag_for_rel("$inter-head23","1__2__3__4__5")) + ".$inter-head23.5.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head23","1__2__3__4__5")) + ".$inter-head23.5.table", FULL);
relation* rel___dollorinter__head1__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$inter-head1","1__2__3__4"), std::to_string(get_tag_for_rel("$inter-head1","1__2__3__4")) + ".$inter-head1.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head1","1__2__3__4")) + ".$inter-head1.4.table", FULL);
relation* rel___dollorinter__head22__9__1__2__3__4__5__6__7__8__9 = new relation(9, true, 9, get_tag_for_rel("$inter-head22","1__2__3__4__5__6__7__8__9"), std::to_string(get_tag_for_rel("$inter-head22","1__2__3__4__5__6__7__8__9")) + ".$inter-head22.9.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$inter-head22","1__2__3__4__5__6__7__8__9")) + ".$inter-head22.9.table", FULL);
relation* rel___dollorrule27__inter__body1__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule27-inter-body1","1"), std::to_string(get_tag_for_rel("$rule27-inter-body1","1")) + ".$rule27-inter-body1.2.table",   FULL);
relation* rel___dollorrule42__inter__body1__4__1 = new relation(1, false, 4, get_tag_for_rel("$rule42-inter-body1","1"), std::to_string(get_tag_for_rel("$rule42-inter-body1","1")) + ".$rule42-inter-body1.4.table",   FULL);
relation* rel___dollorrule42__inter__body5__2__ = new relation(0, false, 2, get_tag_for_rel("$rule42-inter-body5",""), std::to_string(get_tag_for_rel("$rule42-inter-body5","")) + ".$rule42-inter-body5.2.table",   FULL);
relation* rel___dollorhead__stratified9__7__1__2__3__4__5__6__7 = new relation(7, true, 7, get_tag_for_rel("$head-stratified9","1__2__3__4__5__6__7"), std::to_string(get_tag_for_rel("$head-stratified9","1__2__3__4__5__6__7")) + ".$head-stratified9.7.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified9","1__2__3__4__5__6__7")) + ".$head-stratified9.7.table", FULL);
relation* rel__addr__1__0 = new relation(1, false, 1, get_tag_for_rel("addr","0"), std::to_string(get_tag_for_rel("addr","0")) + ".addr.1.table",   FULL);
relation* rel___dollorhead__stratified8__7__5__7 = new relation(2, false, 7, get_tag_for_rel("$head-stratified8","5__7"), std::to_string(get_tag_for_rel("$head-stratified8","5__7")) + ".$head-stratified8.7.table",   FULL);
relation* rel___dollorrule37__inter__body1__2__1 = new relation(1, false, 2, get_tag_for_rel("$rule37-inter-body1","1"), std::to_string(get_tag_for_rel("$rule37-inter-body1","1")) + ".$rule37-inter-body1.2.table",   FULL);
relation* rel___dollorinter__head16__3__3 = new relation(1, false, 3, get_tag_for_rel("$inter-head16","3"), std::to_string(get_tag_for_rel("$inter-head16","3")) + ".$inter-head16.3.table",   FULL);
relation* rel___dollorrule14__inter__body__3__2 = new relation(1, false, 3, get_tag_for_rel("$rule14-inter-body","2"), std::to_string(get_tag_for_rel("$rule14-inter-body","2")) + ".$rule14-inter-body.3.table",   FULL);
relation* rel___dollorrule43__inter__body__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$rule43-inter-body","1__2__3__4"), std::to_string(get_tag_for_rel("$rule43-inter-body","1__2__3__4")) + ".$rule43-inter-body.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule43-inter-body","1__2__3__4")) + ".$rule43-inter-body.4.table", FULL);
relation* rel__bool__1__1 = new relation(1, true, 1, get_tag_for_rel("bool","1"), std::to_string(get_tag_for_rel("bool","1")) + ".bool.1.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("bool","1")) + ".bool.1.table", FULL);
relation* rel___dollorhead__stratified32__3__2__3 = new relation(2, false, 3, get_tag_for_rel("$head-stratified32","2__3"), std::to_string(get_tag_for_rel("$head-stratified32","2__3")) + ".$head-stratified32.3.table",   FULL);
relation* rel__appl__2__0 = new relation(1, false, 2, get_tag_for_rel("appl","0"), std::to_string(get_tag_for_rel("appl","0")) + ".appl.2.table",   FULL);
relation* rel__do__var__prop__all__h__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("do-var-prop-all-h","1__2__3"), std::to_string(get_tag_for_rel("do-var-prop-all-h","1__2__3")) + ".do-var-prop-all-h.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("do-var-prop-all-h","1__2__3")) + ".do-var-prop-all-h.3.table", FULL);
relation* rel___dollorhead__stratified58__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("$head-stratified58","1__2__3__4"), std::to_string(get_tag_for_rel("$head-stratified58","1__2__3__4")) + ".$head-stratified58.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$head-stratified58","1__2__3__4")) + ".$head-stratified58.4.table", FULL);
relation* rel___dollorlst__split__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$lst-split","1__2__3"), std::to_string(get_tag_for_rel("$lst-split","1__2__3")) + ".$lst-split.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$lst-split","1__2__3")) + ".$lst-split.3.table", FULL);
relation* rel__if__k__4__1__2__3__4 = new relation(4, true, 4, get_tag_for_rel("if-k","1__2__3__4"), std::to_string(get_tag_for_rel("if-k","1__2__3__4")) + ".if-k.4.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("if-k","1__2__3__4")) + ".if-k.4.table", FULL);
relation* rel__env__set__3__2__3__1 = new relation(3, false, 3, get_tag_for_rel("env-set","2__3__1"), std::to_string(get_tag_for_rel("env-set","2__3__1")) + ".env-set.3.table",   FULL);
relation* rel___dollorbir__sub1__9__1__2 = new relation(2, false, 9, get_tag_for_rel("$bir-sub1","1__2"), std::to_string(get_tag_for_rel("$bir-sub1","1__2")) + ".$bir-sub1.9.table",   FULL);
relation* rel___dollorrule11__inter__body__3__2 = new relation(1, false, 3, get_tag_for_rel("$rule11-inter-body","2"), std::to_string(get_tag_for_rel("$rule11-inter-body","2")) + ".$rule11-inter-body.3.table",   FULL);
relation* rel___dollorrule13__inter__body8__3__2 = new relation(1, false, 3, get_tag_for_rel("$rule13-inter-body8","2"), std::to_string(get_tag_for_rel("$rule13-inter-body8","2")) + ".$rule13-inter-body8.3.table",   FULL);
relation* rel___dollorrule41__inter__body3__8__1__2__3__4__5__6__7__8 = new relation(8, true, 8, get_tag_for_rel("$rule41-inter-body3","1__2__3__4__5__6__7__8"), std::to_string(get_tag_for_rel("$rule41-inter-body3","1__2__3__4__5__6__7__8")) + ".$rule41-inter-body3.8.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule41-inter-body3","1__2__3__4__5__6__7__8")) + ".$rule41-inter-body3.8.table", FULL);
relation* rel___dollorhead__stratified21__3__2__3 = new relation(2, false, 3, get_tag_for_rel("$head-stratified21","2__3"), std::to_string(get_tag_for_rel("$head-stratified21","2__3")) + ".$head-stratified21.3.table",   FULL);
relation* rel___dollorbir__sub8__2__1 = new relation(1, false, 2, get_tag_for_rel("$bir-sub8","1"), std::to_string(get_tag_for_rel("$bir-sub8","1")) + ".$bir-sub8.2.table",   FULL);
relation* rel__eval__3__1 = new relation(1, false, 3, get_tag_for_rel("eval","1"), std::to_string(get_tag_for_rel("eval","1")) + ".eval.3.table",   FULL);
relation* rel__define__3__2 = new relation(1, false, 3, get_tag_for_rel("define","2"), std::to_string(get_tag_for_rel("define","2")) + ".define.3.table",   FULL);
relation* rel___dollorrule21__inter__body13__8__1__2__3__4__5__6__7__8 = new relation(8, true, 8, get_tag_for_rel("$rule21-inter-body13","1__2__3__4__5__6__7__8"), std::to_string(get_tag_for_rel("$rule21-inter-body13","1__2__3__4__5__6__7__8")) + ".$rule21-inter-body13.8.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule21-inter-body13","1__2__3__4__5__6__7__8")) + ".$rule21-inter-body13.8.table", FULL);
relation* rel___dollorrule32__inter__body1__4__3 = new relation(1, false, 4, get_tag_for_rel("$rule32-inter-body1","3"), std::to_string(get_tag_for_rel("$rule32-inter-body1","3")) + ".$rule32-inter-body1.4.table",   FULL);
relation* rel___dollorrule22__inter__body5__3__1__2__3 = new relation(3, true, 3, get_tag_for_rel("$rule22-inter-body5","1__2__3"), std::to_string(get_tag_for_rel("$rule22-inter-body5","1__2__3")) + ".$rule22-inter-body5.3.table", slog_input_dir + "/" + std::to_string(get_tag_for_rel("$rule22-inter-body5","1__2__3")) + ".$rule22-inter-body5.3.table", FULL);

RAM* scc0 = new RAM(false, 0);
scc0->add_relation(rel__appl__2__1__2, true, false);
scc0->add_relation(rel__appl__2__0, true, false);
scc0->add_rule(new parallel_acopy(rel__appl__2__0, rel__appl__2__1__2, DELTA, {2, 0, 1}));

RAM* scc1 = new RAM(false, 1);
scc1->add_relation(rel__string__1__1, true, false);
scc1->add_relation(rel__string__1__0, true, false);
scc1->add_rule(new parallel_acopy(rel__string__1__0, rel__string__1__1, DELTA, {1, 0}));

RAM* scc2 = new RAM(false, 2);
scc2->add_relation(rel___dollorunit__1__1, true, false);
scc2->add_rule(new fact(rel___dollorunit__1__1, {n2d(0)}));

RAM* scc3 = new RAM(false, 3);
scc3->add_relation(rel__breaks__into__input__3__1__2__3, true, false);
scc3->add_relation(rel__breaks__into__input__3__1__3, true, false);
scc3->add_rule(new parallel_acopy(rel__breaks__into__input__3__1__3, rel__breaks__into__input__3__1__2__3, DELTA, {0, 2, 3, 1}));

RAM* scc4 = new RAM(false, 4);
scc4->add_relation(rel___dollorunit__1__1, true, false);
scc4->add_rule(new fact(rel___dollorunit__1__1, {n2d(0)}));

RAM* scc5 = new RAM(false, 5);
scc5->add_relation(rel__bool__1__0, true, false);
scc5->add_relation(rel__bool__1__1, true, false);
scc5->add_rule(new parallel_acopy(rel__bool__1__0, rel__bool__1__1, DELTA, {1, 0}));

RAM* scc6 = new RAM(false, 6);
scc6->add_relation(rel___dollorunit__1__1, true, false);
scc6->add_rule(new fact(rel___dollorunit__1__1, {n2d(0)}));

RAM* scc7 = new RAM(false, 7);
scc7->add_relation(rel__split__at__input__2__1__2, true, false);
scc7->add_relation(rel__breaks__into__input__3__1__2__3, false, false);
scc7->add_rule(new parallel_copy(rel__split__at__input__2__1__2, rel__breaks__into__input__3__1__2__3, FULL, {0, 2}));

RAM* scc8 = new RAM(false, 8);
scc8->add_relation(rel___dollorunit__1__1, true, false);
scc8->add_rule(new fact(rel___dollorunit__1__1, {n2d(0)}));

RAM* scc9 = new RAM(false, 9);
scc9->add_relation(rel___dollorunit__1__1, true, false);
scc9->add_rule(new fact(rel___dollorunit__1__1, {n2d(0)}));

RAM* scc10 = new RAM(false, 10);
scc10->add_relation(rel__if__3__1__2__3, true, false);
scc10->add_relation(rel__if__3__0, true, false);
scc10->add_rule(new parallel_acopy(rel__if__3__0, rel__if__3__1__2__3, DELTA, {3, 0, 1, 2}));

RAM* scc11 = new RAM(false, 11);
scc11->add_relation(rel___dollorunit__1__1, true, false);
scc11->add_rule(new fact(rel___dollorunit__1__1, {n2d(0)}));

RAM* scc12 = new RAM(false, 12);
scc12->add_relation(rel__binding__2__1__2, true, false);
scc12->add_relation(rel__binding__2__0, true, false);
scc12->add_rule(new parallel_acopy(rel__binding__2__0, rel__binding__2__1__2, DELTA, {2, 0, 1}));

RAM* scc13 = new RAM(false, 13);
scc13->add_relation(rel__apply__prim__2__1__2, true, false);
scc13->add_relation(rel__apply__prim__2__0, true, false);
scc13->add_rule(new parallel_acopy(rel__apply__prim__2__0, rel__apply__prim__2__1__2, DELTA, {2, 0, 1}));

RAM* scc14 = new RAM(false, 14);
scc14->add_relation(rel__let__2__1__2, true, false);
scc14->add_relation(rel__let__2__0, true, false);
scc14->add_rule(new parallel_acopy(rel__let__2__0, rel__let__2__1__2, DELTA, {2, 0, 1}));

RAM* scc15 = new RAM(false, 15);
scc15->add_relation(rel__varparam__1__0, true, false);
scc15->add_relation(rel__varparam__1__1, true, false);
scc15->add_rule(new parallel_acopy(rel__varparam__1__0, rel__varparam__1__1, DELTA, {1, 0}));

RAM* scc16 = new RAM(false, 16);
scc16->add_relation(rel___dollorunit__1__1, true, false);
scc16->add_rule(new fact(rel___dollorunit__1__1, {n2d(0)}));

RAM* scc17 = new RAM(false, 17);
scc17->add_relation(rel___dollorunit__1__1, true, false);
scc17->add_relation(rel___dollorunit__1__, true, false);
scc17->add_rule(new parallel_acopy(rel___dollorunit__1__, rel___dollorunit__1__1, DELTA, {1, 0}));

RAM* scc18 = new RAM(false, 18);
scc18->add_relation(rel___dollorunit__1__, false, false);
scc18->add_relation(rel___dollorrule40__inter__body6__1__1, true, false);
scc18->add_rule(new parallel_copy_generate(rel___dollorrule40__inter__body6__1__1, rel___dollorunit__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("x")};
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

RAM* scc19 = new RAM(false, 19);
scc19->add_relation(rel___dollorunit__1__, false, false);
scc19->add_relation(rel___dollorrule43__inter__body3__1__1, true, false);
scc19->add_rule(new parallel_copy_generate(rel___dollorrule43__inter__body3__1__1, rel___dollorunit__1__, FULL, [](const u64* const data, u64* const output) -> int{
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

RAM* scc20 = new RAM(false, 20);
scc20->add_relation(rel___dollorunit__1__, false, false);
scc20->add_relation(rel___dollorrule42__inter__body4__1__1, true, false);
scc20->add_rule(new parallel_copy_generate(rel___dollorrule42__inter__body4__1__1, rel___dollorunit__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("5")};
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

RAM* scc21 = new RAM(false, 21);
scc21->add_relation(rel___dollorrule42__inter__body4__1__, true, false);
scc21->add_relation(rel___dollorrule42__inter__body4__1__1, true, false);
scc21->add_rule(new parallel_acopy(rel___dollorrule42__inter__body4__1__, rel___dollorrule42__inter__body4__1__1, DELTA, {1, 0}));

RAM* scc22 = new RAM(false, 22);
scc22->add_relation(rel___dollorrule42__inter__body4__1__, false, true);
scc22->add_relation(rel___dollorrule42__inter__body5__2__1__2, true, false);
scc22->add_rule(new parallel_copy_generate(rel___dollorrule42__inter__body5__2__1__2, rel___dollorrule42__inter__body4__1__, FULL, [](const u64* const data, u64* const output) -> int{
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

RAM* scc23 = new RAM(false, 23);
scc23->add_relation(rel___dollorrule42__inter__body5__2__1__2, true, false);
scc23->add_relation(rel___dollorrule42__inter__body5__2__, true, false);
scc23->add_rule(new parallel_acopy(rel___dollorrule42__inter__body5__2__, rel___dollorrule42__inter__body5__2__1__2, DELTA, {2, 0, 1}));

RAM* scc24 = new RAM(false, 24);
scc24->add_relation(rel___dollorrule42__inter__body6__3__1__2__3, true, false);
scc24->add_relation(rel___dollorrule42__inter__body5__2__, false, true);
scc24->add_rule(new parallel_copy_generate(rel___dollorrule42__inter__body6__3__1__2__3, rel___dollorrule42__inter__body5__2__, FULL, [](const u64* const data, u64* const output) -> int{
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
        return std::make_tuple(data, output + 3);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 3;
      return tuples_count;
    }));

RAM* scc25 = new RAM(false, 25);
scc25->add_relation(rel___dollorrule42__inter__body6__3__, true, false);
scc25->add_relation(rel___dollorrule42__inter__body6__3__1__2__3, true, false);
scc25->add_rule(new parallel_acopy(rel___dollorrule42__inter__body6__3__, rel___dollorrule42__inter__body6__3__1__2__3, DELTA, {3, 0, 1, 2}));

RAM* scc26 = new RAM(false, 26);
scc26->add_relation(rel___dollorrule42__inter__body6__3__, false, true);
scc26->add_relation(rel___dollorinter__head1__4__1__2__3__4, true, false);
scc26->add_rule(new parallel_copy_generate(rel___dollorinter__head1__4__1__2__3__4, rel___dollorrule42__inter__body6__3__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("even?")};
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
head_tuple[3] = data[3];
        return std::make_tuple(data, output + 4);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 4;
      return tuples_count;
    }));

RAM* scc27 = new RAM(false, 27);
scc27->add_relation(rel___dollornil__1__1, true, false);
scc27->add_relation(rel___dollorinter__head1__4__1__2__3__4, false, false);
scc27->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head1__4__1__2__3__4, FULL, {3}));

RAM* scc28 = new RAM(false, 28);
scc28->add_relation(rel__addr__1__1, true, false);
scc28->add_relation(rel___dollorinter__head1__4__1__2__3__4, false, false);
scc28->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head1__4__1__2__3__4, FULL, {1}));

RAM* scc29 = new RAM(false, 29);
scc29->add_relation(rel__int__1__1, true, false);
scc29->add_relation(rel___dollorinter__head1__4__1__2__3__4, false, false);
scc29->add_rule(new parallel_copy(rel__int__1__1, rel___dollorinter__head1__4__1__2__3__4, FULL, {2}));

RAM* scc30 = new RAM(false, 30);
scc30->add_relation(rel___dollorinter__head1__4__3, true, false);
scc30->add_relation(rel___dollorinter__head1__4__1__2__3__4, true, false);
scc30->add_rule(new parallel_acopy(rel___dollorinter__head1__4__3, rel___dollorinter__head1__4__1__2__3__4, DELTA, {2, 4, 0, 1, 3}));

RAM* scc31 = new RAM(false, 31);
scc31->add_relation(rel___dollorunit__1__, false, false);
scc31->add_relation(rel___dollorrule39__inter__body6__1__1, true, false);
scc31->add_rule(new parallel_copy_generate(rel___dollorrule39__inter__body6__1__1, rel___dollorunit__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("a")};
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

RAM* scc32 = new RAM(false, 32);
scc32->add_relation(rel___dollorunit__1__, false, false);
scc32->add_relation(rel___dollorrule41__inter__body9__1__1, true, false);
scc32->add_rule(new parallel_copy_generate(rel___dollorrule41__inter__body9__1__1, rel___dollorunit__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("x")};
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

RAM* scc33 = new RAM(false, 33);
scc33->add_relation(rel___dollorrule41__inter__body9__1__1, true, false);
scc33->add_relation(rel___dollorrule41__inter__body9__1__, true, false);
scc33->add_rule(new parallel_acopy(rel___dollorrule41__inter__body9__1__, rel___dollorrule41__inter__body9__1__1, DELTA, {1, 0}));

RAM* scc34 = new RAM(false, 34);
scc34->add_relation(rel___dollorrule41__inter__body10__2__1__2, true, false);
scc34->add_relation(rel___dollorrule41__inter__body9__1__, false, true);
scc34->add_rule(new parallel_copy_generate(rel___dollorrule41__inter__body10__2__1__2, rel___dollorrule41__inter__body9__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("0")};
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

RAM* scc35 = new RAM(false, 35);
scc35->add_relation(rel___dollorrule41__inter__body10__2__1__2, true, false);
scc35->add_relation(rel___dollorrule41__inter__body10__2__, true, false);
scc35->add_rule(new parallel_acopy(rel___dollorrule41__inter__body10__2__, rel___dollorrule41__inter__body10__2__1__2, DELTA, {2, 0, 1}));

RAM* scc36 = new RAM(false, 36);
scc36->add_relation(rel___dollorrule41__inter__body11__3__1__2__3, true, false);
scc36->add_relation(rel___dollorrule41__inter__body10__2__, false, true);
scc36->add_rule(new parallel_copy_generate(rel___dollorrule41__inter__body11__3__1__2__3, rel___dollorrule41__inter__body10__2__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("modulo")};
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

RAM* scc37 = new RAM(false, 37);
scc37->add_relation(rel___dollorrule41__inter__body11__3__1__2__3, true, false);
scc37->add_relation(rel___dollorrule41__inter__body11__3__, true, false);
scc37->add_rule(new parallel_acopy(rel___dollorrule41__inter__body11__3__, rel___dollorrule41__inter__body11__3__1__2__3, DELTA, {3, 0, 1, 2}));

RAM* scc38 = new RAM(false, 38);
scc38->add_relation(rel___dollorunit__1__, false, false);
scc38->add_relation(rel___dollorrule44__inter__body5__1__1, true, false);
scc38->add_rule(new parallel_copy_generate(rel___dollorrule44__inter__body5__1__1, rel___dollorunit__1__, FULL, [](const u64* const data, u64* const output) -> int{
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

RAM* scc39 = new RAM(false, 39);
scc39->add_relation(rel___dollorrule39__inter__body6__1__, true, false);
scc39->add_relation(rel___dollorrule39__inter__body6__1__1, true, false);
scc39->add_rule(new parallel_acopy(rel___dollorrule39__inter__body6__1__, rel___dollorrule39__inter__body6__1__1, DELTA, {1, 0}));

RAM* scc40 = new RAM(false, 40);
scc40->add_relation(rel___dollorrule39__inter__body6__1__, false, true);
scc40->add_relation(rel___dollorrule39__inter__body7__2__1__2, true, false);
scc40->add_rule(new parallel_copy_generate(rel___dollorrule39__inter__body7__2__1__2, rel___dollorrule39__inter__body6__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("b")};
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

RAM* scc41 = new RAM(false, 41);
scc41->add_relation(rel___dollorrule39__inter__body7__2__1__2, true, false);
scc41->add_relation(rel___dollorrule39__inter__body7__2__, true, false);
scc41->add_rule(new parallel_acopy(rel___dollorrule39__inter__body7__2__, rel___dollorrule39__inter__body7__2__1__2, DELTA, {2, 0, 1}));

RAM* scc42 = new RAM(false, 42);
scc42->add_relation(rel___dollorrule39__inter__body8__3__1__2__3, true, false);
scc42->add_relation(rel___dollorrule39__inter__body7__2__, false, true);
scc42->add_rule(new parallel_copy_generate(rel___dollorrule39__inter__body8__3__1__2__3, rel___dollorrule39__inter__body7__2__, FULL, [](const u64* const data, u64* const output) -> int{
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
        return std::make_tuple(data, output + 3);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 3;
      return tuples_count;
    }));

RAM* scc43 = new RAM(false, 43);
scc43->add_relation(rel___dollorrule39__inter__body8__3__, true, false);
scc43->add_relation(rel___dollorrule39__inter__body8__3__1__2__3, true, false);
scc43->add_rule(new parallel_acopy(rel___dollorrule39__inter__body8__3__, rel___dollorrule39__inter__body8__3__1__2__3, DELTA, {3, 0, 1, 2}));

RAM* scc44 = new RAM(false, 44);
scc44->add_relation(rel___dollorinter__head51__4__1__2__3__4, true, false);
scc44->add_relation(rel___dollorrule39__inter__body8__3__, false, true);
scc44->add_rule(new parallel_copy_generate(rel___dollorinter__head51__4__1__2__3__4, rel___dollorrule39__inter__body8__3__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("modulo")};
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
        return std::make_tuple(data, output + 4);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 4;
      return tuples_count;
    }));

RAM* scc45 = new RAM(false, 45);
scc45->add_relation(rel___dollorinter__head51__4__1__2__3__4, false, false);
scc45->add_relation(rel__ref__1__1, true, false);
scc45->add_rule(new parallel_copy(rel__ref__1__1, rel___dollorinter__head51__4__1__2__3__4, FULL, {1}));

RAM* scc46 = new RAM(false, 46);
scc46->add_relation(rel___dollorinter__head51__4__1__2__3__4, false, false);
scc46->add_relation(rel__addr__1__1, true, false);
scc46->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head51__4__1__2__3__4, FULL, {2}));

RAM* scc47 = new RAM(false, 47);
scc47->add_relation(rel___dollorinter__head51__4__1__2__3__4, true, false);
scc47->add_relation(rel___dollorinter__head51__4__4, true, false);
scc47->add_rule(new parallel_acopy(rel___dollorinter__head51__4__4, rel___dollorinter__head51__4__1__2__3__4, DELTA, {3, 4, 0, 1, 2}));

RAM* scc48 = new RAM(false, 48);
scc48->add_relation(rel___dollorinter__head51__4__1__2__3__4, false, false);
scc48->add_relation(rel__ref__1__1, true, false);
scc48->add_rule(new parallel_copy(rel__ref__1__1, rel___dollorinter__head51__4__1__2__3__4, FULL, {0}));

RAM* scc49 = new RAM(false, 49);
scc49->add_relation(rel___dollorinter__head51__4__1__2__3__4, false, false);
scc49->add_relation(rel___dollornil__1__1, true, false);
scc49->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head51__4__1__2__3__4, FULL, {3}));

RAM* scc50 = new RAM(false, 50);
scc50->add_relation(rel___dollorrule40__inter__body6__1__1, true, false);
scc50->add_relation(rel___dollorrule40__inter__body6__1__, true, false);
scc50->add_rule(new parallel_acopy(rel___dollorrule40__inter__body6__1__, rel___dollorrule40__inter__body6__1__1, DELTA, {1, 0}));

RAM* scc51 = new RAM(false, 51);
scc51->add_relation(rel___dollorrule44__inter__body5__1__, true, false);
scc51->add_relation(rel___dollorrule44__inter__body5__1__1, true, false);
scc51->add_rule(new parallel_acopy(rel___dollorrule44__inter__body5__1__, rel___dollorrule44__inter__body5__1__1, DELTA, {1, 0}));

RAM* scc52 = new RAM(false, 52);
scc52->add_relation(rel___dollorrule44__inter__body6__2__1__2, true, false);
scc52->add_relation(rel___dollorrule44__inter__body5__1__, false, true);
scc52->add_rule(new parallel_copy_generate(rel___dollorrule44__inter__body6__2__1__2, rel___dollorrule44__inter__body5__1__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("modulo")};
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

RAM* scc53 = new RAM(false, 53);
scc53->add_relation(rel___dollorrule44__inter__body6__2__1__2, true, false);
scc53->add_relation(rel___dollorrule44__inter__body6__2__, true, false);
scc53->add_rule(new parallel_acopy(rel___dollorrule44__inter__body6__2__, rel___dollorrule44__inter__body6__2__1__2, DELTA, {2, 0, 1}));

RAM* scc54 = new RAM(false, 54);
scc54->add_relation(rel___dollorrule41__inter__body12__4__1__2__3__4, true, false);
scc54->add_relation(rel___dollorrule41__inter__body11__3__, false, true);
scc54->add_rule(new parallel_copy_generate(rel___dollorrule41__inter__body12__4__1__2__3__4, rel___dollorrule41__inter__body11__3__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("even?")};
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
head_tuple[3] = data[3];
        return std::make_tuple(data, output + 4);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 4;
      return tuples_count;
    }));

RAM* scc55 = new RAM(false, 55);
scc55->add_relation(rel___dollorrule41__inter__body12__4__1__2__3__4, true, false);
scc55->add_relation(rel___dollorrule41__inter__body12__4__, true, false);
scc55->add_rule(new parallel_acopy(rel___dollorrule41__inter__body12__4__, rel___dollorrule41__inter__body12__4__1__2__3__4, DELTA, {4, 0, 1, 2, 3}));

RAM* scc56 = new RAM(false, 56);
scc56->add_relation(rel___dollorrule41__inter__body12__4__, false, true);
scc56->add_relation(rel___dollorrule41__inter__body13__5__1__2__3__4__5, true, false);
scc56->add_rule(new parallel_copy_generate(rel___dollorrule41__inter__body13__5__1__2__3__4__5, rel___dollorrule41__inter__body12__4__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("2")};
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
head_tuple[3] = data[3];
head_tuple[4] = data[4];
        return std::make_tuple(data, output + 5);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 5;
      return tuples_count;
    }));

RAM* scc57 = new RAM(false, 57);
scc57->add_relation(rel___dollorrule41__inter__body13__5__, true, false);
scc57->add_relation(rel___dollorrule41__inter__body13__5__1__2__3__4__5, true, false);
scc57->add_rule(new parallel_acopy(rel___dollorrule41__inter__body13__5__, rel___dollorrule41__inter__body13__5__1__2__3__4__5, DELTA, {5, 0, 1, 2, 3, 4}));

RAM* scc58 = new RAM(false, 58);
scc58->add_relation(rel___dollorrule41__inter__body13__5__, false, true);
scc58->add_relation(rel___dollorrule41__inter__body14__6__1__2__3__4__5__6, true, false);
scc58->add_rule(new parallel_copy_generate(rel___dollorrule41__inter__body14__6__1__2__3__4__5__6, rel___dollorrule41__inter__body13__5__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("equal?")};
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

RAM* scc59 = new RAM(false, 59);
scc59->add_relation(rel___dollorrule41__inter__body14__6__, true, false);
scc59->add_relation(rel___dollorrule41__inter__body14__6__1__2__3__4__5__6, true, false);
scc59->add_rule(new parallel_acopy(rel___dollorrule41__inter__body14__6__, rel___dollorrule41__inter__body14__6__1__2__3__4__5__6, DELTA, {6, 0, 1, 2, 3, 4, 5}));

RAM* scc60 = new RAM(false, 60);
scc60->add_relation(rel___dollorinter__head4__7__1__2__3__4__5__6__7, true, false);
scc60->add_relation(rel___dollorrule41__inter__body14__6__, false, true);
scc60->add_rule(new parallel_copy_generate(rel___dollorinter__head4__7__1__2__3__4__5__6__7, rel___dollorrule41__inter__body14__6__, FULL, [](const u64* const data, u64* const output) -> int{
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

RAM* scc61 = new RAM(false, 61);
scc61->add_relation(rel___dollorinter__head4__7__1__2__3__4__5__6__7, false, false);
scc61->add_relation(rel__int__1__1, true, false);
scc61->add_rule(new parallel_copy(rel__int__1__1, rel___dollorinter__head4__7__1__2__3__4__5__6__7, FULL, {4}));

RAM* scc62 = new RAM(false, 62);
scc62->add_relation(rel___dollorinter__head4__7__1__2__3__4__5__6__7, false, false);
scc62->add_relation(rel__ref__1__1, true, false);
scc62->add_rule(new parallel_copy(rel__ref__1__1, rel___dollorinter__head4__7__1__2__3__4__5__6__7, FULL, {2}));

RAM* scc63 = new RAM(false, 63);
scc63->add_relation(rel___dollorinter__head4__7__1__2__3__4__5__6__7, false, false);
scc63->add_relation(rel__int__1__1, true, false);
scc63->add_rule(new parallel_copy(rel__int__1__1, rel___dollorinter__head4__7__1__2__3__4__5__6__7, FULL, {1}));

RAM* scc64 = new RAM(false, 64);
scc64->add_relation(rel___dollorrule42__inter__body1__4__1__2__3__4, true, false);
scc64->add_relation(rel___dollorinter__head1__4__3, false, false);
scc64->add_relation(rel__int__1__1, false, false);
scc64->add_rule(new parallel_join(rel___dollorrule42__inter__body1__4__1__2__3__4, rel__int__1__1, FULL, rel___dollorinter__head1__4__3, FULL, {3, 4, 1, 5}));

RAM* scc65 = new RAM(false, 65);
scc65->add_relation(rel___dollorrule42__inter__body1__4__1__2__3__4, true, false);
scc65->add_relation(rel___dollorrule42__inter__body1__4__1, true, false);
scc65->add_rule(new parallel_acopy(rel___dollorrule42__inter__body1__4__1, rel___dollorrule42__inter__body1__4__1__2__3__4, DELTA, {0, 4, 1, 2, 3}));

RAM* scc66 = new RAM(false, 66);
scc66->add_relation(rel___dollorinter__head4__7__1__2__3__4__5__6__7, false, false);
scc66->add_relation(rel__ref__1__1, true, false);
scc66->add_rule(new parallel_copy(rel__ref__1__1, rel___dollorinter__head4__7__1__2__3__4__5__6__7, FULL, {0}));

RAM* scc67 = new RAM(false, 67);
scc67->add_relation(rel___dollorinter__head4__7__4, true, false);
scc67->add_relation(rel___dollorinter__head4__7__1__2__3__4__5__6__7, true, false);
scc67->add_rule(new parallel_acopy(rel___dollorinter__head4__7__4, rel___dollorinter__head4__7__1__2__3__4__5__6__7, DELTA, {3, 7, 0, 1, 2, 4, 5, 6}));

RAM* scc68 = new RAM(false, 68);
scc68->add_relation(rel___dollorinter__head4__7__1__2__3__4__5__6__7, false, false);
scc68->add_relation(rel___dollornil__1__1, true, false);
scc68->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head4__7__1__2__3__4__5__6__7, FULL, {5}));

RAM* scc69 = new RAM(false, 69);
scc69->add_relation(rel___dollorinter__head4__7__1__2__3__4__5__6__7, false, false);
scc69->add_relation(rel__addr__1__1, true, false);
scc69->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head4__7__1__2__3__4__5__6__7, FULL, {3}));

RAM* scc70 = new RAM(false, 70);
scc70->add_relation(rel___dollorinter__head4__7__1__2__3__4__5__6__7, false, false);
scc70->add_relation(rel__ref__1__1, true, false);
scc70->add_rule(new parallel_copy(rel__ref__1__1, rel___dollorinter__head4__7__1__2__3__4__5__6__7, FULL, {6}));

RAM* scc71 = new RAM(false, 71);
scc71->add_relation(rel___dollorrule40__inter__body7__2__1__2, true, false);
scc71->add_relation(rel___dollorrule40__inter__body6__1__, false, true);
scc71->add_rule(new parallel_copy_generate(rel___dollorrule40__inter__body7__2__1__2, rel___dollorrule40__inter__body6__1__, FULL, [](const u64* const data, u64* const output) -> int{
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

RAM* scc72 = new RAM(false, 72);
scc72->add_relation(rel___dollorrule40__inter__body7__2__1__2, true, false);
scc72->add_relation(rel___dollorrule40__inter__body7__2__, true, false);
scc72->add_rule(new parallel_acopy(rel___dollorrule40__inter__body7__2__, rel___dollorrule40__inter__body7__2__1__2, DELTA, {2, 0, 1}));

RAM* scc73 = new RAM(false, 73);
scc73->add_relation(rel___dollorrule40__inter__body7__2__, false, true);
scc73->add_relation(rel___dollorrule40__inter__body8__3__1__2__3, true, false);
scc73->add_rule(new parallel_copy_generate(rel___dollorrule40__inter__body8__3__1__2__3, rel___dollorrule40__inter__body7__2__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("equal?")};
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

RAM* scc74 = new RAM(false, 74);
scc74->add_relation(rel___dollorrule40__inter__body8__3__1__2__3, true, false);
scc74->add_relation(rel___dollorrule40__inter__body8__3__, true, false);
scc74->add_rule(new parallel_acopy(rel___dollorrule40__inter__body8__3__, rel___dollorrule40__inter__body8__3__1__2__3, DELTA, {3, 0, 1, 2}));

RAM* scc75 = new RAM(false, 75);
scc75->add_relation(rel___dollorinter__head2__4__1__2__3__4, true, false);
scc75->add_relation(rel___dollorrule40__inter__body8__3__, false, true);
scc75->add_rule(new parallel_copy_generate(rel___dollorinter__head2__4__1__2__3__4, rel___dollorrule40__inter__body8__3__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("y")};
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

RAM* scc76 = new RAM(false, 76);
scc76->add_relation(rel___dollorinter__head2__4__1__2__3__4, false, false);
scc76->add_relation(rel__ref__1__1, true, false);
scc76->add_rule(new parallel_copy(rel__ref__1__1, rel___dollorinter__head2__4__1__2__3__4, FULL, {2}));

RAM* scc77 = new RAM(false, 77);
scc77->add_relation(rel___dollorinter__head2__4__1__2__3__4, false, false);
scc77->add_relation(rel__addr__1__1, true, false);
scc77->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head2__4__1__2__3__4, FULL, {0}));

RAM* scc78 = new RAM(false, 78);
scc78->add_relation(rel___dollorinter__head2__4__1__2__3__4, true, false);
scc78->add_relation(rel___dollorinter__head2__4__1, true, false);
scc78->add_rule(new parallel_acopy(rel___dollorinter__head2__4__1, rel___dollorinter__head2__4__1__2__3__4, DELTA, {0, 4, 1, 2, 3}));

RAM* scc79 = new RAM(false, 79);
scc79->add_relation(rel___dollorinter__head2__4__1__2__3__4, false, false);
scc79->add_relation(rel___dollornil__1__1, true, false);
scc79->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head2__4__1__2__3__4, FULL, {1}));

RAM* scc80 = new RAM(false, 80);
scc80->add_relation(rel___dollorinter__head2__4__1__2__3__4, false, false);
scc80->add_relation(rel__ref__1__1, true, false);
scc80->add_rule(new parallel_copy(rel__ref__1__1, rel___dollorinter__head2__4__1__2__3__4, FULL, {3}));

RAM* scc81 = new RAM(false, 81);
scc81->add_relation(rel___dollorrule44__inter__body6__2__, false, true);
scc81->add_relation(rel___dollorrule44__inter__body7__3__1__2__3, true, false);
scc81->add_rule(new parallel_copy_generate(rel___dollorrule44__inter__body7__3__1__2__3, rel___dollorrule44__inter__body6__2__, FULL, [](const u64* const data, u64* const output) -> int{
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
head_tuple[2] = data[2];
        return std::make_tuple(data, output + 3);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 3;
      return tuples_count;
    }));

RAM* scc82 = new RAM(false, 82);
scc82->add_relation(rel___dollorrule44__inter__body7__3__, true, false);
scc82->add_relation(rel___dollorrule44__inter__body7__3__1__2__3, true, false);
scc82->add_rule(new parallel_acopy(rel___dollorrule44__inter__body7__3__, rel___dollorrule44__inter__body7__3__1__2__3, DELTA, {3, 0, 1, 2}));

RAM* scc83 = new RAM(false, 83);
scc83->add_relation(rel___dollorrule44__inter__body7__3__, false, true);
scc83->add_relation(rel___dollorrule44__inter__body8__4__1__2__3__4, true, false);
scc83->add_rule(new parallel_copy_generate(rel___dollorrule44__inter__body8__4__1__2__3__4, rel___dollorrule44__inter__body7__3__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("equal?")};
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
head_tuple[3] = data[3];
        return std::make_tuple(data, output + 4);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 4;
      return tuples_count;
    }));

RAM* scc84 = new RAM(false, 84);
scc84->add_relation(rel___dollorrule44__inter__body8__4__1__2__3__4, true, false);
scc84->add_relation(rel___dollorrule44__inter__body8__4__, true, false);
scc84->add_rule(new parallel_acopy(rel___dollorrule44__inter__body8__4__, rel___dollorrule44__inter__body8__4__1__2__3__4, DELTA, {4, 0, 1, 2, 3}));

RAM* scc85 = new RAM(false, 85);
scc85->add_relation(rel___dollorrule44__inter__body8__4__, false, true);
scc85->add_relation(rel___dollorinter__head12__5__1__2__3__4__5, true, false);
scc85->add_rule(new parallel_copy_generate(rel___dollorinter__head12__5__1__2__3__4__5, rel___dollorrule44__inter__body8__4__, FULL, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {s2d("even?")};
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
head_tuple[3] = data[3];
head_tuple[4] = data[4];
        return std::make_tuple(data, output + 5);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 5;
      return tuples_count;
    }));

RAM* scc86 = new RAM(false, 86);
scc86->add_relation(rel__addr__1__1, true, false);
scc86->add_relation(rel___dollorinter__head12__5__1__2__3__4__5, false, false);
scc86->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head12__5__1__2__3__4__5, FULL, {4}));

RAM* scc87 = new RAM(false, 87);
scc87->add_relation(rel__addr__1__1, true, false);
scc87->add_relation(rel___dollorinter__head12__5__1__2__3__4__5, false, false);
scc87->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head12__5__1__2__3__4__5, FULL, {2}));

RAM* scc88 = new RAM(false, 88);
scc88->add_relation(rel___dollorinter__head12__5__3, true, false);
scc88->add_relation(rel___dollorinter__head12__5__1__2__3__4__5, true, false);
scc88->add_rule(new parallel_acopy(rel___dollorinter__head12__5__3, rel___dollorinter__head12__5__1__2__3__4__5, DELTA, {2, 5, 0, 1, 3, 4}));

RAM* scc89 = new RAM(false, 89);
scc89->add_relation(rel__empty__0__, true, false);
scc89->add_relation(rel___dollorinter__head12__5__1__2__3__4__5, false, false);
scc89->add_rule(new parallel_copy(rel__empty__0__, rel___dollorinter__head12__5__1__2__3__4__5, FULL, {}));

RAM* scc90 = new RAM(false, 90);
scc90->add_relation(rel__addr__1__1, true, false);
scc90->add_relation(rel___dollorinter__head12__5__1__2__3__4__5, false, false);
scc90->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head12__5__1__2__3__4__5, FULL, {3}));

RAM* scc91 = new RAM(false, 91);
scc91->add_relation(rel__addr__1__1, true, false);
scc91->add_relation(rel___dollorinter__head12__5__1__2__3__4__5, false, false);
scc91->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head12__5__1__2__3__4__5, FULL, {0}));

RAM* scc92 = new RAM(false, 92);
scc92->add_relation(rel__addr__1__1, true, false);
scc92->add_relation(rel___dollorinter__head12__5__1__2__3__4__5, false, false);
scc92->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head12__5__1__2__3__4__5, FULL, {1}));

RAM* scc93 = new RAM(false, 93);
scc93->add_relation(rel___dollorrule43__inter__body3__1__, true, false);
scc93->add_relation(rel___dollorrule43__inter__body3__1__1, true, false);
scc93->add_rule(new parallel_acopy(rel___dollorrule43__inter__body3__1__, rel___dollorrule43__inter__body3__1__1, DELTA, {1, 0}));

RAM* scc94 = new RAM(false, 94);
scc94->add_relation(rel___dollorrule43__inter__body3__1__, false, true);
scc94->add_relation(rel___dollorrule43__inter__body4__2__1__2, true, false);
scc94->add_rule(new parallel_copy_generate(rel___dollorrule43__inter__body4__2__1__2, rel___dollorrule43__inter__body3__1__, FULL, [](const u64* const data, u64* const output) -> int{
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

RAM* scc95 = new RAM(false, 95);
scc95->add_relation(rel___dollorrule43__inter__body4__2__, true, false);
scc95->add_relation(rel___dollorrule43__inter__body4__2__1__2, true, false);
scc95->add_rule(new parallel_acopy(rel___dollorrule43__inter__body4__2__, rel___dollorrule43__inter__body4__2__1__2, DELTA, {2, 0, 1}));

RAM* scc96 = new RAM(false, 96);
scc96->add_relation(rel___dollorrule43__inter__body4__2__, false, true);
scc96->add_relation(rel___dollorinter__head16__3__1__2__3, true, false);
scc96->add_rule(new parallel_copy_generate(rel___dollorinter__head16__3__1__2__3, rel___dollorrule43__inter__body4__2__, FULL, [](const u64* const data, u64* const output) -> int{
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
head_tuple[2] = data[2];
        return std::make_tuple(data, output + 3);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 3;
      return tuples_count;
    }));

RAM* scc97 = new RAM(false, 97);
scc97->add_relation(rel___dollorinter__head16__3__1__2__3, true, false);
scc97->add_relation(rel___dollorinter__head16__3__3, true, false);
scc97->add_rule(new parallel_acopy(rel___dollorinter__head16__3__3, rel___dollorinter__head16__3__1__2__3, DELTA, {2, 3, 0, 1}));

RAM* scc98 = new RAM(false, 98);
scc98->add_relation(rel__ref__1__1, true, false);
scc98->add_relation(rel___dollorinter__head16__3__1__2__3, false, false);
scc98->add_rule(new parallel_copy(rel__ref__1__1, rel___dollorinter__head16__3__1__2__3, FULL, {2}));

RAM* scc99 = new RAM(false, 99);
scc99->add_relation(rel__addr__1__1, true, false);
scc99->add_relation(rel___dollorinter__head16__3__1__2__3, false, false);
scc99->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head16__3__1__2__3, FULL, {0}));

RAM* scc100 = new RAM(false, 100);
scc100->add_relation(rel___dollornil__1__1, true, false);
scc100->add_relation(rel___dollorinter__head16__3__1__2__3, false, false);
scc100->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head16__3__1__2__3, FULL, {1}));

RAM* scc101 = new RAM(false, 101);
scc101->add_relation(rel__ref__1__1, true, false);
scc101->add_relation(rel___dollorinter__head1__4__1__2__3__4, false, false);
scc101->add_rule(new parallel_copy(rel__ref__1__1, rel___dollorinter__head1__4__1__2__3__4, FULL, {0}));

RAM* scc102 = new RAM(false, 102);
scc102->add_relation(rel___dollorrule42__inter__body2__4__1__2__3__4, true, false);
scc102->add_relation(rel__ref__1__1, false, false);
scc102->add_relation(rel___dollorrule42__inter__body1__4__1, false, true);
scc102->add_rule(new parallel_join(rel___dollorrule42__inter__body2__4__1__2__3__4, rel__ref__1__1, FULL, rel___dollorrule42__inter__body1__4__1, FULL, {1, 3, 4, 5}));

RAM* scc103 = new RAM(false, 103);
scc103->add_relation(rel___dollorrule42__inter__body2__4__4, true, false);
scc103->add_relation(rel___dollorrule42__inter__body2__4__1__2__3__4, true, false);
scc103->add_rule(new parallel_acopy(rel___dollorrule42__inter__body2__4__4, rel___dollorrule42__inter__body2__4__1__2__3__4, DELTA, {3, 4, 0, 1, 2}));

RAM* scc104 = new RAM(false, 104);
scc104->add_relation(rel___dollorrule43__inter__body1__3__1__2__3, true, false);
scc104->add_relation(rel__ref__1__1, false, false);
scc104->add_relation(rel___dollorinter__head16__3__3, false, false);
scc104->add_rule(new parallel_join(rel___dollorrule43__inter__body1__3__1__2__3, rel__ref__1__1, FULL, rel___dollorinter__head16__3__3, FULL, {3, 1, 4}));

RAM* scc105 = new RAM(false, 105);
scc105->add_relation(rel___dollorrule43__inter__body1__3__3, true, false);
scc105->add_relation(rel___dollorrule43__inter__body1__3__1__2__3, true, false);
scc105->add_rule(new parallel_acopy(rel___dollorrule43__inter__body1__3__3, rel___dollorrule43__inter__body1__3__1__2__3, DELTA, {2, 3, 0, 1}));

RAM* scc106 = new RAM(false, 106);
scc106->add_relation(rel___dollorunit__1__, false, false);
scc106->add_relation(rel___dollorinter__head35__1__1, true, false);
scc106->add_rule(new parallel_copy_generate(rel___dollorinter__head35__1__1, rel___dollorunit__1__, FULL, [](const u64* const data, u64* const output) -> int{
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

RAM* scc107 = new RAM(false, 107);
scc107->add_relation(rel___dollorinter__head35__1__1, false, false);
scc107->add_relation(rel___dollornil__1__1, true, false);
scc107->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head35__1__1, FULL, {0}));

RAM* scc108 = new RAM(true, 108);
scc108->add_relation(rel___dollorinter__head42__7__1__2__3__4__5__6__7, true, true);
scc108->add_relation(rel__ret__2__1, true, false);
scc108->add_relation(rel___dollorbir__sub19__3__1__2__3, true, true);
scc108->add_relation(rel___dollorinter__head17__5__5__1, true, true);
scc108->add_relation(rel__split__at__input__2__1__2, true, false);
scc108->add_relation(rel__varparam__1__0, false, false);
scc108->add_relation(rel__env__map__3__2, true, false);
scc108->add_relation(rel___dollorrule42__inter__body3__4__2, true, true);
scc108->add_relation(rel___dollorinter__head41__6__1__2__3__4__5__6, true, true);
scc108->add_relation(rel___dollorhead__stratified36__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorhead__stratified15__6__1__2__3__4__5__6, true, true);
scc108->add_relation(rel___dollorinter__head36__2__1, true, true);
scc108->add_relation(rel___dollorrule44__inter__body2__8__5, true, true);
scc108->add_relation(rel___dollorrule27__inter__body2__2__2, true, true);
scc108->add_relation(rel___dollorhead__stratified16__5__2__5, true, true);
scc108->add_relation(rel___dollorrule17__inter__body__3__1__2__3, true, true);
scc108->add_relation(rel___dollorrule19__inter__body__2__1__2, true, true);
scc108->add_relation(rel___dollorrule24__inter__body2__4__1, true, true);
scc108->add_relation(rel___dollorrule21__inter__body6__3__3, true, true);
scc108->add_relation(rel___dollorrule2__inter__body__4__3, true, true);
scc108->add_relation(rel___dollorrule26__inter__body2__5__1, true, true);
scc108->add_relation(rel___dollorbir__sub5__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorinter__head34__5__1__2, true, true);
scc108->add_relation(rel___dollorrule39__inter__body4__5__5, true, true);
scc108->add_relation(rel___dollorhead__stratified8__7__1__2__3__4__5__6__7, true, true);
scc108->add_relation(rel___dollorhead__stratified59__4__1__4__3, true, true);
scc108->add_relation(rel___dollorbir__sub6__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorrule24__inter__body1__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorinter__head36__2__1__2, true, true);
scc108->add_relation(rel___dollorinter__head15__3__2, true, true);
scc108->add_relation(rel__ext__all__2__1, true, false);
scc108->add_relation(rel___dollorrule41__inter__body1__9__1__2__3__4__5__6__7__8__9, true, true);
scc108->add_relation(rel___dollorrule25__inter__body5__4__1, true, true);
scc108->add_relation(rel___dollorinter__head17__5__1__2__3__4__5, true, true);
scc108->add_relation(rel__list__of__1__1, true, false);
scc108->add_relation(rel___dollorbir__sub18__2__1__2, true, true);
scc108->add_relation(rel___dollorrule13__inter__body__3__1__2__3, true, true);
scc108->add_relation(rel___dollorinter__head13__2__2, true, true);
scc108->add_relation(rel___dollorrule42__inter__body__5__5, true, true);
scc108->add_relation(rel___dollorinter__head4__7__4, false, false);
scc108->add_relation(rel___dollorrule22__inter__body6__1__1, true, true);
scc108->add_relation(rel___dollorrule22__inter__body1__3__1__2__3, true, true);
scc108->add_relation(rel___dollorrule27__inter__body4__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorrule24__inter__body__3__1__2__3, true, true);
scc108->add_relation(rel___dollorbir__sub19__3__1, true, true);
scc108->add_relation(rel___dollorhead__splice3__7__4__7, true, true);
scc108->add_relation(rel__state__1__1, true, false);
scc108->add_relation(rel___dollorhead__stratified2__5__3__5, true, true);
scc108->add_relation(rel___dollorbir__sub7__6__1__2__3__4__5__6, true, true);
scc108->add_relation(rel___dollorrule5__inter__body__3__3, true, true);
scc108->add_relation(rel__do__var__prop__all__h__3__2, true, false);
scc108->add_relation(rel___dollorrule22__inter__body4__4__4__2, true, true);
scc108->add_relation(rel___dollorrule26__inter__body3__5__, true, true);
scc108->add_relation(rel___dollorrule26__inter__body__3__1__2__3, true, true);
scc108->add_relation(rel__top__level__env__1__, true, false);
scc108->add_relation(rel___dollorrule41__inter__body3__8__1, true, true);
scc108->add_relation(rel___dollorrule6__inter__body__4__, true, true);
scc108->add_relation(rel__quote__1__1, true, false);
scc108->add_relation(rel___dollorrule25__inter__body__6__4__6, true, true);
scc108->add_relation(rel__define__3__1__2__3, true, false);
scc108->add_relation(rel___dollorinter__head20__3__1, true, true);
scc108->add_relation(rel__env__set__3__2, true, false);
scc108->add_relation(rel___dollorhead__stratified11__9__1__2__3__4__5__6__7__8__9, true, true);
scc108->add_relation(rel___dollorhead__stratified60__6__1__2__3__4__5__6, true, true);
scc108->add_relation(rel__clo__2__1__2, true, false);
scc108->add_relation(rel___dollorinter__head37__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorrule22__inter__body7__3__2, true, true);
scc108->add_relation(rel___dollorhead__stratified55__3__2__3, true, true);
scc108->add_relation(rel__prim__2__0, true, false);
scc108->add_relation(rel___dollorinter__head25__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorrule26__inter__body1__4__2, true, true);
scc108->add_relation(rel___dollorrule27__inter__body__4__2, true, true);
scc108->add_relation(rel___dollorhead__stratified19__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorinter__head53__5__1, true, true);
scc108->add_relation(rel___dollorrule21__inter__body4__4__1__2__3__4, true, true);
scc108->add_relation(rel__split__at__3__1, true, false);
scc108->add_relation(rel___dollorrule27__inter__body2__2__1__2, true, true);
scc108->add_relation(rel___dollorhead__stratified48__3__1__2__3, true, true);
scc108->add_relation(rel___dollorrule42__inter__body2__4__4, false, true);
scc108->add_relation(rel___dollorhead__stratified56__7__1__2__3__4__5__6__7, true, true);
scc108->add_relation(rel___dollorrule1__inter__body3__1__, true, true);
scc108->add_relation(rel___dollorrule27__inter__body3__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorrule40__inter__body2__7__7__2, true, true);
scc108->add_relation(rel__length__2__1, true, false);
scc108->add_relation(rel___dollorhead__stratified1__6__1__2__3__4__5__6, true, true);
scc108->add_relation(rel___dollorhead__stratified22__11__1__2__3__4__5__6__7__8__9__10__11, true, true);
scc108->add_relation(rel___dollorrule21__inter__body3__8__1__2__3__4__5__6__7__8, true, true);
scc108->add_relation(rel___dollorrule2__inter__body1__4__3, true, true);
scc108->add_relation(rel___dollorinter__head27__4__4__1, true, true);
scc108->add_relation(rel___dollorrule10__inter__body__3__1__2__3, true, true);
scc108->add_relation(rel___dollorhead__stratified28__4__3__2, true, true);
scc108->add_relation(rel__app__2__1__2, true, false);
scc108->add_relation(rel___dollorrule12__inter__body6__5__1, true, true);
scc108->add_relation(rel___dollorinter__head7__2__1__2, true, true);
scc108->add_relation(rel___dollorinter__head21__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorrule40__inter__body5__6__1__2__3__4__5__6, true, true);
scc108->add_relation(rel___dollorhead__stratified7__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorbir__sub9__4__1__2, true, true);
scc108->add_relation(rel___dollorinter__head13__2__1__2, true, true);
scc108->add_relation(rel___dollorrule25__inter__body1__4__2__4, true, true);
scc108->add_relation(rel___dollorhead__stratified1__6__6__2, true, true);
scc108->add_relation(rel__app__2__0, true, false);
scc108->add_relation(rel___dollorrule9__inter__body__4__2, true, true);
scc108->add_relation(rel__lambda__2__1__2, true, false);
scc108->add_relation(rel___dollorhead__stratified36__5__5__1__2__3, true, true);
scc108->add_relation(rel___dollorhead__splice2__3__, true, true);
scc108->add_relation(rel___dollorinter__head42__7__7__3__6__4__2__5, true, true);
scc108->add_relation(rel___dollorrule40__inter__body1__5__5__1, true, true);
scc108->add_relation(rel___dollorinter__head49__6__4, true, true);
scc108->add_relation(rel___dollorrule25__inter__body3__6__3, true, true);
scc108->add_relation(rel__bool__1__0, false, false);
scc108->add_relation(rel___dollorhead__stratified29__4__1__4__3, true, true);
scc108->add_relation(rel__clo__2__1, true, false);
scc108->add_relation(rel___dollorbir__sub8__2__1__2, true, true);
scc108->add_relation(rel___dollorhead__stratified23__9__1__2__3__4__5__6__7__8__9, true, true);
scc108->add_relation(rel__store__2__1, true, false);
scc108->add_relation(rel___dollorhead__stratified53__6__1__6, true, true);
scc108->add_relation(rel___dollorrule21__inter__body10__3__1__2__3, true, true);
scc108->add_relation(rel__fixedparam__1__1, true, false);
scc108->add_relation(rel___dollorhead__stratified26__3__1__2__3, true, true);
scc108->add_relation(rel___dollorhead__stratified14__7__1__2__3__4__5__6__7, true, true);
scc108->add_relation(rel__fixedparam__1__0, true, false);
scc108->add_relation(rel___dollorbir__sub3__3__1__2__3, true, true);
scc108->add_relation(rel___dollorhead__stratified6__4__1__3, true, true);
scc108->add_relation(rel___dollorhead__stratified16__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorrule25__inter__body6__5__5, true, true);
scc108->add_relation(rel___dollorrule22__inter__body1__3__2, true, true);
scc108->add_relation(rel___dollorinter__head20__3__1__2__3, true, true);
scc108->add_relation(rel___dollorrule21__inter__body8__3__1__2__3, true, true);
scc108->add_relation(rel___dollorinter__head10__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorhead__stratified53__6__1__2__3__4__5__6, true, true);
scc108->add_relation(rel___dollorrule21__inter__body4__4__3, true, true);
scc108->add_relation(rel___dollorrule40__inter__body2__7__1__2__3__4__5__6__7, true, true);
scc108->add_relation(rel___dollorlst__append__2__1__2, true, true);
scc108->add_relation(rel___dollorbir__sub20__3__1, true, true);
scc108->add_relation(rel___dollorbir__sub7__6__2, true, true);
scc108->add_relation(rel__kaddr__1__1, true, false);
scc108->add_relation(rel__apply__prim__2__0, false, false);
scc108->add_relation(rel___dollorinter__head11__4__2__4__1, true, true);
scc108->add_relation(rel___dollorrule24__inter__body2__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorinter__head45__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorhead__stratified59__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorinter__head46__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorrule25__inter__body6__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorrule39__inter__body__4__4, true, true);
scc108->add_relation(rel___dollorrule21__inter__body1__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorrule26__inter__body2__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorrule4__inter__body__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorrule12__inter__body2__7__5__1, true, true);
scc108->add_relation(rel___dollorhead__stratified4__7__1__2__3__4__5__6__7, true, true);
scc108->add_relation(rel___dollorlst__append__2__1, true, true);
scc108->add_relation(rel__split__at__end__input__2__2, true, false);
scc108->add_relation(rel__env__map__3__1__2__3, true, false);
scc108->add_relation(rel__store__flow__2__1, true, false);
scc108->add_relation(rel__split__at__input__2__1, true, false);
scc108->add_relation(rel___dollorinter__head19__10__1__2__3__4__5__6__7__8__9__10, true, true);
scc108->add_relation(rel___dollorrule13__inter__body7__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorhead__stratified31__3__1__2__3, true, true);
scc108->add_relation(rel___dollorbir__sub5__5__1, true, true);
scc108->add_relation(rel___dollorrule44__inter__body1__7__1, true, true);
scc108->add_relation(rel__prim__2__1__2, true, false);
scc108->add_relation(rel___dollorrule26__inter__body1__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorrule41__inter__body5__8__1__2__3__4__5__6__7__8, true, true);
scc108->add_relation(rel___dollorinter__head52__3__1__2__3, true, true);
scc108->add_relation(rel___dollorhead__splice1__9__6__9, true, true);
scc108->add_relation(rel___dollorrule21__inter__body11__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorrule12__inter__body1__3__1__2__3, true, true);
scc108->add_relation(rel___dollorrule41__inter__body4__8__6, true, true);
scc108->add_relation(rel___dollorrule27__inter__body5__3__1, true, true);
scc108->add_relation(rel__env__set__3__1, true, false);
scc108->add_relation(rel___dollorrule18__inter__body2__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorhead__stratified55__3__1__2__3, true, true);
scc108->add_relation(rel___dollorbir__sub2__6__1, true, true);
scc108->add_relation(rel___dollorhead__stratified5__6__1__2__3__4__5__6, true, true);
scc108->add_relation(rel___dollorinter__head5__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorrule44__inter__body__6__6, true, true);
scc108->add_relation(rel___dollorrule25__inter__body3__6__1__2__3__4__5__6, true, true);
scc108->add_relation(rel___dollorrule41__inter__body8__9__8, true, true);
scc108->add_relation(rel___dollorlst__append__input__2__0, true, true);
scc108->add_relation(rel__quote__1__0, true, false);
scc108->add_relation(rel___dollorinter__head6__7__2__7__3__1__4__5, true, true);
scc108->add_relation(rel___dollorinter__head__3__1__2__3, true, false);
scc108->add_relation(rel___dollorinter__head40__5__5__1, true, true);
scc108->add_relation(rel___dollorinter__head44__3__1__2__3, true, true);
scc108->add_relation(rel___dollorbir__sub4__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorinter__head22__9__3__5__6__7__4__2__8__1, true, true);
scc108->add_relation(rel___dollorrule21__inter__body7__9__, true, true);
scc108->add_relation(rel___dollorinter__head9__3__2, true, true);
scc108->add_relation(rel___dollorrule2__inter__body1__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorrule16__inter__body__3__3, true, true);
scc108->add_relation(rel___dollorrule42__inter__body3__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorhead__splice3__7__1__2__3__4__5__6__7, true, true);
scc108->add_relation(rel___dollorhead__stratified10__9__2__3, true, true);
scc108->add_relation(rel___dollorhead__stratified18__3__1__2__3, true, true);
scc108->add_relation(rel___dollorhead__stratified3__4__1__3__4, true, true);
scc108->add_relation(rel___dollorrule21__inter__body1__4__1__4, true, true);
scc108->add_relation(rel___dollorhead__stratified14__7__7__2, true, true);
scc108->add_relation(rel___dollorinter__head6__7__1__2__3__4__5__6__7, true, true);
scc108->add_relation(rel___dollorbir__sub3__3__1, true, true);
scc108->add_relation(rel___dollorinter__head26__4__1__2, true, true);
scc108->add_relation(rel___dollorrule12__inter__body3__6__2, true, true);
scc108->add_relation(rel___dollorbir__sub10__3__1__2__3, true, true);
scc108->add_relation(rel__saddr__1__1, true, false);
scc108->add_relation(rel___dollorrule21__inter__body8__3__2, true, true);
scc108->add_relation(rel___dollorrule40__inter__body__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorrule40__inter__body3__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorrule7__inter__body__1__1, true, true);
scc108->add_relation(rel___dollorbir__sub14__4__1, true, true);
scc108->add_relation(rel___dollorrule12__inter__body4__3__2, true, true);
scc108->add_relation(rel___dollorrule25__inter__body2__6__1__2__3__4__5__6, true, true);
scc108->add_relation(rel___dollorrule39__inter__body1__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorbir__sub__8__1__2, true, true);
scc108->add_relation(rel___dollorrule41__inter__body6__8__1__2__3__4__5__6__7__8, true, true);
scc108->add_relation(rel___dollorrule39__inter__body3__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorrule41__inter__body8__9__1__2__3__4__5__6__7__8__9, true, true);
scc108->add_relation(rel___dollorrule14__inter__body2__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorhead__stratified29__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorrule19__inter__body1__1__1, true, true);
scc108->add_relation(rel___dollorbir__sub20__3__1__2__3, true, true);
scc108->add_relation(rel___dollorrule43__inter__body2__3__1__2__3, true, true);
scc108->add_relation(rel___dollorrule13__inter__body__3__2, true, true);
scc108->add_relation(rel___dollorinter__head47__2__2, true, true);
scc108->add_relation(rel___dollorhead__stratified7__4__1__3__4, true, true);
scc108->add_relation(rel___dollorrule44__inter__body4__10__1__2__3__4__5__6__7__8__9__10, true, true);
scc108->add_relation(rel___dollorinter__head28__3__3, true, true);
scc108->add_relation(rel___dollorinter__head32__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorinter__head38__3__1__2__3, true, true);
scc108->add_relation(rel___dollorhead__stratified10__9__1__2__3__4__5__6__7__8__9, true, true);
scc108->add_relation(rel___dollorinter__head12__5__3, false, false);
scc108->add_relation(rel___dollorrule36__inter__body__4__1__2, true, true);
scc108->add_relation(rel___dollorinter__head5__5__3__2__1__4, true, true);
scc108->add_relation(rel___dollorinter__head21__4__3__4, true, true);
scc108->add_relation(rel___dollorbir__sub11__4__1__2__3__4, true, false);
scc108->add_relation(rel___dollorrule18__inter__body2__4__2, true, true);
scc108->add_relation(rel___dollorrule25__inter__body4__3__2, true, true);
scc108->add_relation(rel___dollorrule13__inter__body6__3__1__2__3, true, true);
scc108->add_relation(rel___dollorrule21__inter__body7__9__1__2__3__4__5__6__7__8__9, true, true);
scc108->add_relation(rel__addr__1__1, true, false);
scc108->add_relation(rel___dollorhead__stratified46__2__1__2, true, true);
scc108->add_relation(rel___dollorinter__head29__2__1__2, true, true);
scc108->add_relation(rel___dollorbir__sub2__6__1__2__3__4__5__6, true, true);
scc108->add_relation(rel___dollorrule41__inter__body6__8__8, true, true);
scc108->add_relation(rel___dollorhead__stratified54__6__5__6, true, true);
scc108->add_relation(rel__apply__3__1, true, false);
scc108->add_relation(rel___dollorinter__head40__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorrule9__inter__body2__6__1__2__3__4__5__6, true, true);
scc108->add_relation(rel___dollorbir__sub17__2__1__2, true, true);
scc108->add_relation(rel___dollorinter__head10__5__5__1, true, true);
scc108->add_relation(rel___dollorrule10__inter__body__3__2, true, true);
scc108->add_relation(rel___dollorbir__sub18__2__2, true, true);
scc108->add_relation(rel__halt__0__, true, false);
scc108->add_relation(rel___dollorrule18__inter__body1__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorinter__head31__4__1__2__3__4, true, true);
scc108->add_relation(rel__appk__4__1__2, true, false);
scc108->add_relation(rel___dollorrule21__inter__body13__8__3, true, true);
scc108->add_relation(rel___dollorrule39__inter__body3__4__4, true, true);
scc108->add_relation(rel___dollorrule13__inter__body2__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorrule26__inter__body__3__3, true, true);
scc108->add_relation(rel___dollorrule9__inter__body2__6__, true, true);
scc108->add_relation(rel___dollorhead__stratified32__3__1__2__3, true, true);
scc108->add_relation(rel___dollorrule41__inter__body2__9__1__2__3__4__5__6__7__8__9, true, true);
scc108->add_relation(rel___dollorhead__stratified24__7__7__2__5, true, true);
scc108->add_relation(rel___dollorinter__head35__1__1, false, false);
scc108->add_relation(rel__do__ext__all__2__1__2, true, false);
scc108->add_relation(rel___dollorrule14__inter__body3__4__4, true, true);
scc108->add_relation(rel___dollorrule41__inter__body2__9__7, true, true);
scc108->add_relation(rel___dollorrule27__inter__body3__5__2, true, true);
scc108->add_relation(rel___dollorrule21__inter__body9__8__1__2__3__4__5__6__7__8, true, true);
scc108->add_relation(rel___dollorrule21__inter__body__1__1, true, true);
scc108->add_relation(rel__letk__6__0, true, false);
scc108->add_relation(rel___dollorrule13__inter__body1__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorhead__stratified__5__3, true, true);
scc108->add_relation(rel___dollorinter__head11__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorinter__head45__5__4__2__3, true, true);
scc108->add_relation(rel___dollorrule20__inter__body__5__4, true, true);
scc108->add_relation(rel___dollorrule25__inter__body__6__1__2__3__4__5__6, true, true);
scc108->add_relation(rel___dollorhead__stratified11__9__9__2, true, true);
scc108->add_relation(rel___dollorinter__head18__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorinter__head30__3__3, true, true);
scc108->add_relation(rel___dollorrule43__inter__body1__3__3, false, true);
scc108->add_relation(rel___dollorinter__head23__5__3__5__2__4, true, true);
scc108->add_relation(rel___dollorrule22__inter__body2__7__7, true, true);
scc108->add_relation(rel___dollorhead__splice4__4__, true, true);
scc108->add_relation(rel___dollorrule31__inter__body__2__1__2, true, true);
scc108->add_relation(rel___dollorrule36__inter__body1__3__1, true, true);
scc108->add_relation(rel___dollorhead__stratified28__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorrule13__inter__body4__3__3, true, true);
scc108->add_relation(rel___dollorhead__stratified25__5__1__2__3__4__5, true, true);
scc108->add_relation(rel__if__k__4__0, true, false);
scc108->add_relation(rel___dollorhead__stratified33__2__1__2, true, true);
scc108->add_relation(rel___dollorinter__head2__4__1, false, false);
scc108->add_relation(rel___dollorrule40__inter__body4__5__5, true, true);
scc108->add_relation(rel___dollorbir__sub15__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorhead__stratified2__5__1__2__3__4__5, true, true);
scc108->add_relation(rel__eval__3__1__2, true, false);
scc108->add_relation(rel___dollorhead__stratified39__2__2, true, true);
scc108->add_relation(rel___dollorrule41__inter__body7__9__8, true, true);
scc108->add_relation(rel___dollorinter__head26__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorinter__head9__3__1__2__3, true, true);
scc108->add_relation(rel___dollorrule26__inter__body4__5__1__2__3__4__5, true, true);
scc108->add_relation(rel__apply__3__2, true, false);
scc108->add_relation(rel___dollorinter__head24__3__1__2__3, true, true);
scc108->add_relation(rel___dollorrule41__inter__body7__9__1__2__3__4__5__6__7__8__9, true, true);
scc108->add_relation(rel___dollorhead__stratified40__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorrule13__inter__body2__4__3, true, true);
scc108->add_relation(rel___dollorbir__sub4__5__1, true, true);
scc108->add_relation(rel__do__fixed__prop__all__2__1__2, true, false);
scc108->add_relation(rel___dollorhead__stratified9__7__5__7__6__3__2__4, true, true);
scc108->add_relation(rel___dollorbir__sub__8__1__2__3__4__5__6__7__8, true, true);
scc108->add_relation(rel___dollorhead__stratified56__7__1__5, true, true);
scc108->add_relation(rel___dollorhead__stratified52__3__1__2__3, true, true);
scc108->add_relation(rel___dollorinter__head33__4__2__4, true, true);
scc108->add_relation(rel___dollorhead__stratified18__3__2__3, true, true);
scc108->add_relation(rel__if__3__0, false, false);
scc108->add_relation(rel__applak__3__1__2__3, true, false);
scc108->add_relation(rel___dollorhead__stratified54__6__1__2__3__4__5__6, true, true);
scc108->add_relation(rel___dollorrule17__inter__body__3__3, true, true);
scc108->add_relation(rel___dollorrule44__inter__body4__10__, true, true);
scc108->add_relation(rel___dollorinter__head25__4__3__4, true, true);
scc108->add_relation(rel___dollorrule43__inter__body2__3__3, true, true);
scc108->add_relation(rel___dollorinter__head50__5__1__5__2__3, true, true);
scc108->add_relation(rel___dollorrule13__inter__body7__4__1, true, true);
scc108->add_relation(rel___dollorrule13__inter__body3__1__1, true, true);
scc108->add_relation(rel___dollorhead__stratified44__3__1__2__3, true, true);
scc108->add_relation(rel__clo__2__0, true, false);
scc108->add_relation(rel__vararg__1__0, true, false);
scc108->add_relation(rel__applfk__2__1__2, true, false);
scc108->add_relation(rel__applfk__2__1, true, false);
scc108->add_relation(rel___dollornil__1__1, true, false);
scc108->add_relation(rel___dollorrule33__inter__body__1__1, true, true);
scc108->add_relation(rel__apply__3__1__2__3, true, false);
scc108->add_relation(rel___dollorrule19__inter__body2__1__1, true, true);
scc108->add_relation(rel__ret__2__1__2, true, false);
scc108->add_relation(rel___dollorbir__sub10__3__1, true, true);
scc108->add_relation(rel___dollorrule41__inter__body__9__4, true, true);
scc108->add_relation(rel___dollorrule13__inter__body6__3__1, true, true);
scc108->add_relation(rel__split__at__end__input__2__1__2, true, false);
scc108->add_relation(rel___dollorinter__head48__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorrule19__inter__body__2__1, true, true);
scc108->add_relation(rel___dollorrule24__inter__body__3__2, true, true);
scc108->add_relation(rel___dollorinter__head28__3__1__2__3, true, true);
scc108->add_relation(rel___dollorhead__stratified31__3__2__3, true, true);
scc108->add_relation(rel___dollorhead__stratified17__4__1__3__4, true, true);
scc108->add_relation(rel___dollorbir__sub6__5__1, true, true);
scc108->add_relation(rel___dollorinter__head46__4__2, true, true);
scc108->add_relation(rel___dollorhead__stratified6__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorrule25__inter__body4__3__1__2__3, true, true);
scc108->add_relation(rel___dollorrule27__inter__body5__3__1__2__3, true, true);
scc108->add_relation(rel___dollorrule21__inter__body2__9__9, true, true);
scc108->add_relation(rel___dollorrule13__inter__body8__3__1__2__3, true, true);
scc108->add_relation(rel___dollorrule22__inter__body__3__3, true, true);
scc108->add_relation(rel___dollornil__1__0, true, false);
scc108->add_relation(rel___dollorrule39__inter__body__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorinter__head37__5__1__3, true, true);
scc108->add_relation(rel___dollorrule21__inter__body2__9__1__2__3__4__5__6__7__8__9, true, true);
scc108->add_relation(rel__binding__2__0, false, false);
scc108->add_relation(rel___dollorinter__head8__6__1__2__3__4__5__6, true, true);
scc108->add_relation(rel___dollorrule40__inter__body1__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorrule44__inter__body3__9__1__2__3__4__5__6__7__8__9, true, true);
scc108->add_relation(rel___dollorinter__head31__4__2__3, true, true);
scc108->add_relation(rel___dollorrule39__inter__body2__7__1__2__3__4__5__6__7, true, true);
scc108->add_relation(rel__ret__2__2, true, false);
scc108->add_relation(rel___dollorbir__sub15__4__3__4, true, true);
scc108->add_relation(rel___dollorrule40__inter__body3__5__3, true, true);
scc108->add_relation(rel___dollorhead__stratified23__9__9__3__7, true, true);
scc108->add_relation(rel___dollorinter__head15__3__1__2__3, true, true);
scc108->add_relation(rel___dollorhead__stratified58__4__1__4, true, true);
scc108->add_relation(rel___dollorrule14__inter__body3__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorhead__stratified13__8__4__8, true, true);
scc108->add_relation(rel___dollorrule1__inter__body1__3__1__2__3, true, true);
scc108->add_relation(rel___dollorrule36__inter__body1__3__1__2__3, true, true);
scc108->add_relation(rel__ext__all__2__1__2, true, false);
scc108->add_relation(rel___dollorhead__stratified25__5__5__2__4, true, true);
scc108->add_relation(rel___dollorhead__stratified57__6__1__2__3__4__5__6, true, true);
scc108->add_relation(rel___dollorhead__stratified30__4__4__3, true, true);
scc108->add_relation(rel___dollorhead__stratified17__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorrule22__inter__body7__3__1__2__3, true, true);
scc108->add_relation(rel___dollorrule39__inter__body5__6__1__2__3__4__5__6, true, true);
scc108->add_relation(rel___dollorbir__sub1__9__1__2__3__4__5__6__7__8__9, true, true);
scc108->add_relation(rel___dollorhead__stratified12__9__1__2__3__4__5__6__7__8__9, true, true);
scc108->add_relation(rel___dollorrule24__inter__body1__4__3, true, true);
scc108->add_relation(rel___dollorinter__head38__3__3, true, true);
scc108->add_relation(rel___dollorhead__stratified48__3__3__1, true, true);
scc108->add_relation(rel___dollorrule44__inter__body2__8__1__2__3__4__5__6__7__8, true, true);
scc108->add_relation(rel___dollorhead__stratified15__6__4__6, true, true);
scc108->add_relation(rel___dollorrule39__inter__body5__6__5, true, true);
scc108->add_relation(rel___dollorhead__stratified22__11__11__3__10, true, true);
scc108->add_relation(rel___dollorhead__stratified39__2__1__2, true, true);
scc108->add_relation(rel___dollorrule30__inter__body__2__1__2, true, true);
scc108->add_relation(rel___dollorrule23__inter__body__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorrule5__inter__body__3__1__2__3, true, true);
scc108->add_relation(rel___dollorhead__splice__10__7__10, true, true);
scc108->add_relation(rel___dollorinter__head48__5__3, true, true);
scc108->add_relation(rel___dollorrule12__inter__body3__6__1__2__3__4__5__6, true, true);
scc108->add_relation(rel___dollorinter__head24__3__1__3, true, true);
scc108->add_relation(rel___dollorlst__2__1, true, false);
scc108->add_relation(rel___dollorrule33__inter__body1__2__1__2, true, true);
scc108->add_relation(rel___dollorinter__head32__5__5, true, true);
scc108->add_relation(rel__env__set__3__1__2__3, true, false);
scc108->add_relation(rel___dollorhead__stratified30__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorrule27__inter__body1__2__1__2, true, true);
scc108->add_relation(rel___dollorrule12__inter__body6__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorrule22__inter__body4__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorrule40__inter__body__4__1, true, true);
scc108->add_relation(rel___dollorlst__append__input__2__2, true, true);
scc108->add_relation(rel___dollorhead__stratified24__7__1__2__3__4__5__6__7, true, true);
scc108->add_relation(rel__let__2__0, false, false);
scc108->add_relation(rel___dollorrule25__inter__body1__4__1__2__3__4, true, true);
scc108->add_relation(rel__do__fixed__prop__all__2__2, true, false);
scc108->add_relation(rel___dollorrule22__inter__body5__3__3, true, true);
scc108->add_relation(rel___dollorrule22__inter__body__3__1__2__3, true, true);
scc108->add_relation(rel___dollorrule20__inter__body__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorhead__stratified12__9__3__8, true, true);
scc108->add_relation(rel__applak__3__0, true, false);
scc108->add_relation(rel___dollorrule33__inter__body1__2__2, true, true);
scc108->add_relation(rel___dollorrule27__inter__body__4__1__2__3__4, true, true);
scc108->add_relation(rel__store__flow__2__1__2, true, false);
scc108->add_relation(rel___dollorrule31__inter__body__2__1, true, true);
scc108->add_relation(rel__define__3__0, true, false);
scc108->add_relation(rel___dollorinter__head30__3__1__2__3, true, true);
scc108->add_relation(rel___dollorrule12__inter__body5__6__1__2__3__4__5__6, true, true);
scc108->add_relation(rel___dollorlst__append__input__2__1, true, true);
scc108->add_relation(rel___dollorhead__stratified51__7__1__2__3__4__5__6__7, true, true);
scc108->add_relation(rel___dollorhead__splice4__4__1__2__3__4, true, true);
scc108->add_relation(rel__appk__4__1__2__3__4, true, false);
scc108->add_relation(rel___dollorrule4__inter__body1__3__1__2__3, true, true);
scc108->add_relation(rel___dollorinter__head52__3__3, true, true);
scc108->add_relation(rel___dollorinter__head49__6__1__2__3__4__5__6, true, true);
scc108->add_relation(rel___dollorlst__2__1__2, true, false);
scc108->add_relation(rel__breaks__into__input__3__1__3, false, false);
scc108->add_relation(rel___dollorrule22__inter__body3__1__1, true, true);
scc108->add_relation(rel__appk__4__0, true, false);
scc108->add_relation(rel___dollorinter__head33__4__1__2__3__4, true, true);
scc108->add_relation(rel__kaddr__1__0, true, false);
scc108->add_relation(rel___dollorhead__stratified5__6__3__5, true, true);
scc108->add_relation(rel___dollorinter__head27__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorhead__stratified37__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorinter__head18__4__2__1__3, true, true);
scc108->add_relation(rel___dollorrule18__inter__body__4__4, true, true);
scc108->add_relation(rel___dollorinter__head51__4__4, false, false);
scc108->add_relation(rel__fixedarg__1__0, true, false);
scc108->add_relation(rel___dollorrule9__inter__body1__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorrule14__inter__body1__4__1, true, true);
scc108->add_relation(rel___dollorrule39__inter__body2__7__4__3, true, true);
scc108->add_relation(rel___dollorrule12__inter__body4__3__1__2__3, true, true);
scc108->add_relation(rel__lambda__2__0, true, false);
scc108->add_relation(rel___dollorrule22__inter__body2__7__1__2__3__4__5__6__7, true, true);
scc108->add_relation(rel___dollorhead__stratified47__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorrule25__inter__body2__6__1, true, true);
scc108->add_relation(rel___dollorrule13__inter__body5__1__1, true, true);
scc108->add_relation(rel___dollorrule26__inter__body3__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorinter__head3__7__6, true, true);
scc108->add_relation(rel___dollorinter__head8__6__3__4__1, true, true);
scc108->add_relation(rel__appk__4__2, true, false);
scc108->add_relation(rel___dollorrule21__inter__body12__8__3, true, true);
scc108->add_relation(rel___dollorrule14__inter__body2__4__2, true, true);
scc108->add_relation(rel___dollorhead__stratified49__3__1__2__3, true, true);
scc108->add_relation(rel___dollorhead__splice1__9__1__2__3__4__5__6__7__8__9, true, true);
scc108->add_relation(rel___dollorinter__head7__2__, true, true);
scc108->add_relation(rel___dollorrule40__inter__body4__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorlst__split__input__1__, true, true);
scc108->add_relation(rel__store__2__2, true, false);
scc108->add_relation(rel___dollorhead__stratified51__7__4__1__7, true, true);
scc108->add_relation(rel___dollorinter__head14__3__1__2__3, true, true);
scc108->add_relation(rel___dollorlst__2__0, true, false);
scc108->add_relation(rel__vararg__1__1, true, false);
scc108->add_relation(rel__do__ext__all__2__2, true, false);
scc108->add_relation(rel__string__1__0, false, false);
scc108->add_relation(rel__ref__1__1, false, false);
scc108->add_relation(rel___dollorinter__head34__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorlst__append__input__2__1__2, true, true);
scc108->add_relation(rel___dollorrule1__inter__body2__2__1__2, true, true);
scc108->add_relation(rel___dollorrule21__inter__body11__4__2__4, true, true);
scc108->add_relation(rel___dollorrule1__inter__body1__3__2, true, true);
scc108->add_relation(rel___dollorinter__head3__7__1__2__3__4__5__6__7, true, true);
scc108->add_relation(rel___dollorrule41__inter__body__9__1__2__3__4__5__6__7__8__9, true, true);
scc108->add_relation(rel___dollorrule32__inter__body__2__1__2, true, true);
scc108->add_relation(rel___dollorrule39__inter__body1__5__1__5, true, true);
scc108->add_relation(rel___dollorrule4__inter__body__5__1__4, true, true);
scc108->add_relation(rel___dollorinter__head50__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorinter__head43__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorrule1__inter__body3__1__1, true, true);
scc108->add_relation(rel___dollorrule1__inter__body2__2__1, true, true);
scc108->add_relation(rel__eval__3__1__2__3, true, false);
scc108->add_relation(rel___dollorrule13__inter__body4__3__1__2__3, true, true);
scc108->add_relation(rel___dollorinter__head47__2__1__2, true, true);
scc108->add_relation(rel___dollorrule26__inter__body4__5__1, true, true);
scc108->add_relation(rel___dollorrule41__inter__body1__9__7, true, true);
scc108->add_relation(rel___dollorlst__split__3__1, true, true);
scc108->add_relation(rel___dollorinter__head19__10__7__9__6__3__5__4__2__8__1, true, true);
scc108->add_relation(rel___dollorrule12__inter__body__1__1, true, true);
scc108->add_relation(rel___dollorbir__sub13__3__1, true, true);
scc108->add_relation(rel___dollorbir__sub17__2__1, true, true);
scc108->add_relation(rel___dollorrule27__inter__body4__5__5, true, true);
scc108->add_relation(rel___dollorrule44__inter__body__6__1__2__3__4__5__6, true, true);
scc108->add_relation(rel___dollorrule23__inter__body__4__, true, true);
scc108->add_relation(rel___dollorrule18__inter__body__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorrule40__inter__body5__6__5, true, true);
scc108->add_relation(rel__empty__0__, false, false);
scc108->add_relation(rel___dollorinter__head39__3__1__2__3, true, true);
scc108->add_relation(rel___dollorrule21__inter__body3__8__6, true, true);
scc108->add_relation(rel___dollorinter__head41__6__6__3, true, true);
scc108->add_relation(rel__length__input__1__1, true, false);
scc108->add_relation(rel___dollorrule21__inter__body9__8__, true, true);
scc108->add_relation(rel___dollorrule21__inter__body10__3__1, true, true);
scc108->add_relation(rel___dollorrule9__inter__body1__4__3, true, true);
scc108->add_relation(rel___dollorinter__head44__3__3__1, true, true);
scc108->add_relation(rel__letk__6__4, true, false);
scc108->add_relation(rel___dollorrule13__inter__body1__4__1__4, true, true);
scc108->add_relation(rel___dollorrule21__inter__body12__8__1__2__3__4__5__6__7__8, true, true);
scc108->add_relation(rel___dollorhead__stratified34__3__1__2__3, true, true);
scc108->add_relation(rel___dollorrule43__inter__body__4__4, true, true);
scc108->add_relation(rel__do__var__prop__all__2__1__2, true, false);
scc108->add_relation(rel___dollorrule42__inter__body__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorrule24__inter__body3__5__4, true, true);
scc108->add_relation(rel__int__1__1, false, false);
scc108->add_relation(rel___dollorrule30__inter__body1__3__1__2__3, true, true);
scc108->add_relation(rel___dollorrule41__inter__body4__8__1__2__3__4__5__6__7__8, true, true);
scc108->add_relation(rel___dollorinter__head29__2__2, true, true);
scc108->add_relation(rel___dollorhead__stratified57__6__1__5, true, true);
scc108->add_relation(rel___dollorrule21__inter__body5__9__1__2__3__4__5__6__7__8__9, true, true);
scc108->add_relation(rel___dollorrule12__inter__body5__6__, true, true);
scc108->add_relation(rel___dollorrule32__inter__body1__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorbir__sub14__4__1__2__3__4, true, true);
scc108->add_relation(rel__list__of__1__0, true, false);
scc108->add_relation(rel___dollorhead__stratified3__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorrule36__inter__body__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorrule12__inter__body2__7__1__2__3__4__5__6__7, true, true);
scc108->add_relation(rel___dollorhead__splice__10__1__2__3__4__5__6__7__8__9__10, true, true);
scc108->add_relation(rel___dollorrule1__inter__body__1__1, true, true);
scc108->add_relation(rel___dollorhead__stratified21__3__1__2__3, true, true);
scc108->add_relation(rel___dollorrule29__inter__body__1__1, true, true);
scc108->add_relation(rel___dollorrule2__inter__body__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorinter__head53__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorrule44__inter__body3__9__4, true, true);
scc108->add_relation(rel___dollorrule41__inter__body5__8__5, true, true);
scc108->add_relation(rel___dollorhead__splice2__3__1__2__3, true, true);
scc108->add_relation(rel__fixedarg__1__1, true, false);
scc108->add_relation(rel___dollorlst__2__0__1, true, false);
scc108->add_relation(rel___dollorrule4__inter__body1__3__1__2, true, true);
scc108->add_relation(rel___dollorrule30__inter__body1__3__2, true, true);
scc108->add_relation(rel___dollorlst__split__input__1__1, true, true);
scc108->add_relation(rel___dollorrule9__inter__body__4__1__2__3__4, true, true);
scc108->add_relation(rel__split__at__input__2__2, true, false);
scc108->add_relation(rel___dollorrule25__inter__body5__4__1__2__3__4, true, true);
scc108->add_relation(rel__env__map__3__1, true, false);
scc108->add_relation(rel___dollorrule18__inter__body1__4__1, true, true);
scc108->add_relation(rel___dollorrule11__inter__body__3__1__2__3, true, true);
scc108->add_relation(rel___dollorrule6__inter__body__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorhead__stratified__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorrule16__inter__body__3__1__2__3, true, true);
scc108->add_relation(rel___dollorrule14__inter__body__3__1__2__3, true, true);
scc108->add_relation(rel__saddr__1__0, true, false);
scc108->add_relation(rel___dollorrule14__inter__body1__4__1__2__3__4, true, true);
scc108->add_relation(rel__do__var__prop__all__2__1, true, false);
scc108->add_relation(rel___dollorhead__stratified47__5__1__2__5, true, true);
scc108->add_relation(rel___dollorrule30__inter__body__2__1, true, true);
scc108->add_relation(rel___dollorrule24__inter__body3__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorbir__sub9__4__1__2__3__4, true, true);
scc108->add_relation(rel__length__2__1__2, true, false);
scc108->add_relation(rel__store__2__1__2, true, false);
scc108->add_relation(rel___dollorrule44__inter__body1__7__1__2__3__4__5__6__7, true, true);
scc108->add_relation(rel__letk__6__1__2__3__4__5__6, true, false);
scc108->add_relation(rel___dollorrule12__inter__body1__3__1__3, true, true);
scc108->add_relation(rel___dollorhead__stratified13__8__1__2__3__4__5__6__7__8, true, true);
scc108->add_relation(rel___dollorrule32__inter__body__2__1, true, true);
scc108->add_relation(rel___dollorrule21__inter__body5__9__5, true, true);
scc108->add_relation(rel___dollorbir__sub13__3__1__2__3, true, true);
scc108->add_relation(rel___dollorrule21__inter__body6__3__1__2__3, true, true);
scc108->add_relation(rel__split__at__3__1__2__3, true, false);
scc108->add_relation(rel___dollorrule39__inter__body4__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorinter__head23__5__1__2__3__4__5, true, true);
scc108->add_relation(rel___dollorhead__stratified4__7__4__6, true, true);
scc108->add_relation(rel___dollorinter__head22__9__1__2__3__4__5__6__7__8__9, true, true);
scc108->add_relation(rel___dollorrule27__inter__body1__2__1, true, true);
scc108->add_relation(rel___dollorhead__stratified9__7__1__2__3__4__5__6__7, true, true);
scc108->add_relation(rel___dollorhead__stratified8__7__5__7, true, true);
scc108->add_relation(rel___dollorrule14__inter__body__3__2, true, true);
scc108->add_relation(rel___dollorrule43__inter__body__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorhead__stratified32__3__2__3, true, true);
scc108->add_relation(rel__appl__2__0, false, false);
scc108->add_relation(rel__do__var__prop__all__h__3__1__2__3, true, false);
scc108->add_relation(rel___dollorhead__stratified58__4__1__2__3__4, true, true);
scc108->add_relation(rel___dollorlst__split__3__1__2__3, true, true);
scc108->add_relation(rel__if__k__4__1__2__3__4, true, false);
scc108->add_relation(rel__env__set__3__2__3__1, true, false);
scc108->add_relation(rel___dollorbir__sub1__9__1__2, true, true);
scc108->add_relation(rel___dollorrule11__inter__body__3__2, true, true);
scc108->add_relation(rel___dollorrule13__inter__body8__3__2, true, true);
scc108->add_relation(rel___dollorrule41__inter__body3__8__1__2__3__4__5__6__7__8, true, true);
scc108->add_relation(rel___dollorhead__stratified21__3__2__3, true, true);
scc108->add_relation(rel___dollorbir__sub8__2__1, true, true);
scc108->add_relation(rel__eval__3__1, true, false);
scc108->add_relation(rel__top__level__env__1__1, true, false);
scc108->add_relation(rel__define__3__2, true, false);
scc108->add_relation(rel___dollorrule21__inter__body13__8__1__2__3__4__5__6__7__8, true, true);
scc108->add_relation(rel___dollorrule32__inter__body1__4__3, true, true);
scc108->add_relation(rel___dollorrule22__inter__body5__3__1__2__3, true, true);
scc108->add_rule(new parallel_join(rel___dollorrule40__inter__body__4__1__2__3__4, rel__prim__2__1__2, DELTA, rel___dollorhead__stratified6__4__1__3, FULL, {5, 2, 0, 4}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub14__4__1__2__3__4, rel__length__input__1__1, DELTA, rel__split__at__end__input__2__2, DELTA, {1, 0, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule1__inter__body1__3__1__2__3, rel__fixedparam__1__0, FULL, rel__define__3__2, DELTA, {3, 1, 4}));
scc108->add_rule(new parallel_join(rel___dollorinter__head37__5__1__2__3__4__5, rel__ext__all__2__1, DELTA, rel___dollorbir__sub4__5__1, FULL, {4, 2, 7, 6, 5}));
scc108->add_rule(new parallel_copy(rel__list__of__1__1, rel___dollorinter__head48__5__1__2__3__4__5, DELTA, {0}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub6__5__1__2__3__4__5, rel__do__ext__all__2__1__2, DELTA, rel___dollorinter__head10__5__5__1, DELTA, {2, 1, 4, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorhead__splice3__7__1__2__3__4__5__6__7, rel___dollorlst__2__0, FULL, rel___dollorrule12__inter__body6__5__1, DELTA, {6, 7, 2, 5, 4, 1, 5}));
scc108->add_rule(new parallel_join(rel__store__2__1__2, rel__define__3__1__2__3, DELTA, rel___dollorhead__stratified59__4__1__4__3, DELTA, {5, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified48__3__1__2__3, rel__env__set__3__1__2__3, DELTA, rel___dollorhead__stratified47__5__1__2__5, DELTA, {5, 6, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified15__6__1__2__3__4__5__6, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified14__7__7__2, DELTA, {4, 5, 6, 7, 8, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified__5__3, rel___dollorhead__stratified__5__1__2__3__4__5, DELTA, {2, 5, 0, 1, 3, 4}));
scc108->add_rule(new parallel_join(rel___dollorinter__head17__5__1__2__3__4__5, rel__top__level__env__1__, DELTA, rel___dollorrule23__inter__body__4__, DELTA, {3, 4, 5, 1, 6}));
scc108->add_rule(new parallel_acopy(rel__clo__2__1, rel__clo__2__1__2, DELTA, {0, 2, 1}));
scc108->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__applak__3__1__2__3, DELTA, rel___dollorinter__head18__4__2__1__3, DELTA, {5, 1, 3}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub5__5__1__2__3__4__5, rel__do__ext__all__2__1__2, DELTA, rel___dollorhead__stratified54__6__5__6, FULL, {2, 4, 6, 7, 5}));
scc108->add_rule(new parallel_join(rel__do__fixed__prop__all__2__1__2, rel___dollorrule22__inter__body6__1__1, DELTA, rel___dollorrule22__inter__body7__3__2, DELTA, {3, 4}));
scc108->add_rule(new parallel_copy_generate(rel___dollorrule33__inter__body__1__1, rel___dollornil__1__1, DELTA, [](const u64* const data, u64* const output) -> int{
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
scc108->add_rule(new parallel_join(rel__split__at__3__1__2__3, rel___dollornil__1__1, FULL, rel___dollorinter__head15__3__2, DELTA, {4, 1, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorrule21__inter__body4__4__3, rel___dollorrule21__inter__body4__4__1__2__3__4, DELTA, {2, 4, 0, 1, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified__5__1__2__3__4__5, rel__addr__1__1, DELTA, rel___dollorrule42__inter__body3__4__2, DELTA, {0, 5, 4, 1, 3}));
scc108->add_rule(new parallel_copy_generate(rel___dollorrule21__inter__body9__8__1__2__3__4__5__6__7__8, rel___dollorhead__splice1__9__6__9, DELTA, [](const u64* const data, u64* const output) -> int{
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
scc108->add_rule(new parallel_copy(rel__eval__3__1__2__3, rel___dollorinter__head43__4__1__2__3__4, DELTA, {3, 0, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__splice4__4__1__2__3__4, rel__ret__2__2, FULL, rel___dollorrule13__inter__body7__4__1, DELTA, {4, 2, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorinter__head30__3__1__2__3, rel___dollorlst__split__input__1__1, DELTA, rel___dollorlst__2__0, FULL, {2, 1, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorrule13__inter__body1__4__1__4, rel___dollorrule13__inter__body1__4__1__2__3__4, DELTA, {0, 3, 4, 1, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule41__inter__body1__9__1__2__3__4__5__6__7__8__9, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified10__9__2__3, FULL, {6, 1, 9, 2, 4, 7, 8, 5, 10}));
scc108->add_rule(new parallel_join(rel___dollorrule41__inter__body1__9__1__2__3__4__5__6__7__8__9, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified10__9__2__3, DELTA, {6, 1, 9, 2, 4, 7, 8, 5, 10}));
scc108->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorinter__head31__4__1__2__3__4, DELTA, {1, 2}));
scc108->add_rule(new parallel_join(rel__apply__3__1__2__3, rel__fixedarg__1__1, DELTA, rel___dollorinter__head9__3__2, DELTA, {4, 1, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified51__7__4__1__7, rel___dollorhead__stratified51__7__1__2__3__4__5__6__7, DELTA, {3, 0, 6, 7, 1, 2, 4, 5}));
scc108->add_rule(new parallel_join(rel__do__fixed__prop__all__2__1__2, rel___dollorrule22__inter__body6__1__1, FULL, rel___dollorrule22__inter__body7__3__2, DELTA, {3, 4}));
scc108->add_rule(new parallel_copy(rel__env__set__3__1__2__3, rel___dollorhead__stratified23__9__1__2__3__4__5__6__7__8__9, DELTA, {8, 2, 6}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified28__4__3__2, rel___dollorhead__stratified28__4__1__2__3__4, DELTA, {2, 1, 4, 0, 3}));
scc108->add_rule(new parallel_copy_generate(rel___dollorrule19__inter__body1__1__1, rel___dollorrule19__inter__body__2__1, DELTA, [](const u64* const data, u64* const output) -> int{
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
scc108->add_rule(new parallel_join(rel___dollorhead__stratified55__3__1__2__3, rel___dollornil__1__1, FULL, rel___dollorrule13__inter__body8__3__2, DELTA, {3, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body2__9__1__2__3__4__5__6__7__8__9, rel___dollorrule21__inter__body1__4__1__4, DELTA, rel___dollorbir__sub1__9__1__2, FULL, {12, 10, 7, 9, 11, 4, 8, 6, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body2__9__1__2__3__4__5__6__7__8__9, rel___dollorrule21__inter__body1__4__1__4, DELTA, rel___dollorbir__sub1__9__1__2, DELTA, {12, 10, 7, 9, 11, 4, 8, 6, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified34__3__1__2__3, rel__state__1__1, FULL, rel___dollorrule11__inter__body__3__2, DELTA, {3, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule17__inter__body__3__1__2__3, rel__store__2__1, DELTA, rel__ret__2__2, DELTA, {4, 2, 0}));
scc108->add_rule(new parallel_acopy(rel___dollorrule41__inter__body1__9__7, rel___dollorrule41__inter__body1__9__1__2__3__4__5__6__7__8__9, DELTA, {6, 9, 0, 1, 2, 3, 4, 5, 7, 8}));
scc108->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head46__4__1__2__3__4, DELTA, {1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule27__inter__body5__3__1, rel___dollorrule27__inter__body5__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorrule9__inter__body1__4__3, rel___dollorrule9__inter__body1__4__1__2__3__4, DELTA, {2, 4, 0, 1, 3}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub11__4__1__2__3__4, rel__split__at__3__1, DELTA, rel___dollorbir__sub10__3__1, FULL, {5, 6, 2, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorbir__sub3__3__1, rel___dollorbir__sub3__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc108->add_rule(new parallel_join(rel__store__2__1__2, rel__define__3__1__2__3, DELTA, rel___dollorhead__stratified59__4__1__4__3, FULL, {5, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorrule19__inter__body__2__1, rel___dollorrule19__inter__body__2__1__2, DELTA, {0, 2, 1}));
scc108->add_rule(new parallel_copy(rel__env__map__3__1__2__3, rel__env__set__3__1__2__3, DELTA, {3, 1, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule12__inter__body1__3__1__2__3, rel___dollorlst__append__2__1, FULL, rel___dollorlst__append__input__2__0, DELTA, {4, 2, 3}));
scc108->add_rule(new parallel_copy(rel__fixedparam__1__1, rel___dollorhead__stratified__5__1__2__3__4__5, DELTA, {1}));
scc108->add_rule(new parallel_join(rel___dollorrule22__inter__body7__3__1__2__3, rel___dollorlst__append__2__1, DELTA, rel___dollorrule22__inter__body5__3__3, DELTA, {4, 5, 2}));
scc108->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified4__7__1__2__3__4__5__6__7, DELTA, {3, 5}));
scc108->add_rule(new parallel_acopy(rel___dollorrule22__inter__body2__7__7, rel___dollorrule22__inter__body2__7__1__2__3__4__5__6__7, DELTA, {6, 7, 0, 1, 2, 3, 4, 5}));
scc108->add_rule(new parallel_copy_generate(rel___dollorinter__head19__10__1__2__3__4__5__6__7__8__9__10, rel___dollorrule21__inter__body7__9__, DELTA, [](const u64* const data, u64* const output) -> int{
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
scc108->add_rule(new parallel_join(rel__apply__3__1__2__3, rel__clo__2__1__2, DELTA, rel___dollorhead__stratified30__4__4__3, FULL, {2, 4, 5}));
scc108->add_rule(new parallel_join(rel___dollorlst__append__input__2__1__2, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified32__3__2__3, FULL, {4, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorrule27__inter__body1__2__1, rel___dollorrule27__inter__body1__2__1__2, DELTA, {0, 2, 1}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified57__6__1__2__3__4__5__6, rel___dollorlst__2__1__2, FULL, rel___dollorrule39__inter__body2__7__4__3, DELTA, {8, 5, 4, 7, 6, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head18__4__2__1__3, rel___dollorinter__head18__4__1__2__3__4, DELTA, {1, 0, 2, 4, 3}));
scc108->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorinter__head14__3__1__2__3, DELTA, {2, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule39__inter__body2__7__1__2__3__4__5__6__7, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified56__7__1__5, DELTA, {6, 5, 1, 7, 2, 8, 4}));
scc108->add_rule(new parallel_join(rel___dollorrule6__inter__body__4__1__2__3__4, rel__app__2__0, DELTA, rel__eval__3__1, DELTA, {2, 4, 5, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head11__4__2__4__1, rel___dollorinter__head11__4__1__2__3__4, DELTA, {1, 3, 0, 4, 2}));
scc108->add_rule(new parallel_join(rel__do__var__prop__all__h__3__1__2__3, rel___dollorlst__2__0, DELTA, rel___dollorrule33__inter__body1__2__2, FULL, {2, 4, 4}));
scc108->add_rule(new parallel_acopy(rel___dollorrule32__inter__body__2__1, rel___dollorrule32__inter__body__2__1__2, DELTA, {0, 2, 1}));
scc108->add_rule(new parallel_join(rel___dollorinter__head44__3__1__2__3, rel__lambda__2__0, DELTA, rel__eval__3__1, DELTA, {4, 5, 0}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified16__5__1__2__3__4__5, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified15__6__4__6, DELTA, {4, 5, 6, 7, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified26__3__1__2__3, rel__env__set__3__1__2__3, DELTA, rel___dollorhead__stratified25__5__5__2__4, DELTA, {5, 6, 3}));
scc108->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__appk__4__1__2__3__4, DELTA, rel___dollorinter__head5__5__3__2__1__4, DELTA, {6, 2, 4}));
scc108->add_rule(new parallel_acopy(rel___dollorrule12__inter__body6__5__1, rel___dollorrule12__inter__body6__5__1__2__3__4__5, DELTA, {0, 5, 1, 2, 3, 4}));
scc108->add_rule(new parallel_join(rel___dollorlst__append__input__2__1__2, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified31__3__2__3, DELTA, {4, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule13__inter__body1__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel___dollorrule13__inter__body__3__2, FULL, {4, 2, 5, 1}));
scc108->add_rule(new parallel_copy(rel__eval__3__1__2__3, rel___dollorhead__stratified60__6__1__2__3__4__5__6, DELTA, {0, 2, 5}));
scc108->add_rule(new parallel_join(rel___dollorrule13__inter__body4__3__1__2__3, rel__store__2__1, FULL, rel___dollorlst__2__1, DELTA, {4, 2, 3}));
scc108->add_rule(new parallel_copy(rel___dollorlst__split__input__1__1, rel___dollorinter__head30__3__1__2__3, DELTA, {2}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub14__4__1__2__3__4, rel__length__input__1__1, FULL, rel__split__at__end__input__2__2, DELTA, {1, 0, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorinter__head34__5__1__2__3__4__5, rel__ext__all__2__1, DELTA, rel___dollorbir__sub6__5__1, FULL, {4, 5, 6, 7, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified58__4__1__2__3__4, rel___dollorlst__2__1__2, DELTA, rel___dollorrule39__inter__body1__5__1__5, DELTA, {6, 5, 4, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified44__3__1__2__3, rel__addr__1__1, FULL, rel___dollorrule5__inter__body__3__3, DELTA, {4, 1, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule12__inter__body1__3__1__2__3, rel___dollorlst__append__2__1, DELTA, rel___dollorlst__append__input__2__0, FULL, {4, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule22__inter__body1__3__1__2__3, rel___dollorbir__sub3__3__1__2__3, FULL, rel___dollorinter__head11__4__2__4__1, DELTA, {0, 5, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule18__inter__body1__4__1, rel___dollorrule18__inter__body1__4__1__2__3__4, DELTA, {0, 4, 1, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule13__inter__body1__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel___dollorrule13__inter__body__3__2, DELTA, {4, 2, 5, 1}));
scc108->add_rule(new parallel_copy(rel__fixedarg__1__1, rel___dollorinter__head9__3__1__2__3, DELTA, {1}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified19__4__1__2__3__4, rel__kaddr__1__1, FULL, rel___dollorrule22__inter__body__3__3, DELTA, {0, 3, 4, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head30__3__3, rel___dollorinter__head30__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorbir__sub15__4__3__4, rel___dollorbir__sub15__4__1__2__3__4, DELTA, {2, 3, 4, 0, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule40__inter__body1__5__5__1, rel___dollorrule40__inter__body1__5__1__2__3__4__5, DELTA, {4, 0, 5, 1, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule12__inter__body1__3__1__2__3, rel___dollorlst__append__2__1, DELTA, rel___dollorlst__append__input__2__0, DELTA, {4, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorinter__head9__3__1__2__3, rel___dollorrule13__inter__body3__1__1, DELTA, rel___dollorrule13__inter__body2__4__3, FULL, {3, 4, 5}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified47__5__1__2__3__4__5, rel__addr__1__1, DELTA, rel___dollorinter__head46__4__2, DELTA, {3, 0, 4, 5, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule26__inter__body2__5__1__2__3__4__5, rel__lambda__2__0, FULL, rel___dollorrule26__inter__body1__4__2, DELTA, {1, 2, 5, 6, 4}));
scc108->add_rule(new parallel_acopy(rel__if__k__4__0, rel__if__k__4__1__2__3__4, DELTA, {4, 0, 1, 2, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorrule25__inter__body2__6__1, rel___dollorrule25__inter__body2__6__1__2__3__4__5__6, DELTA, {0, 6, 1, 2, 3, 4, 5}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head21__4__3__4, rel___dollorinter__head21__4__1__2__3__4, DELTA, {2, 3, 4, 0, 1}));
scc108->add_rule(new parallel_join(rel__store__2__1__2, rel__define__3__1__2__3, DELTA, rel___dollorhead__stratified17__4__1__3__4, DELTA, {5, 3}));
scc108->add_rule(new parallel_copy(rel__saddr__1__1, rel___dollorinter__head29__2__1__2, DELTA, {1}));
scc108->add_rule(new parallel_copy_generate(rel___dollorinter__head50__5__1__2__3__4__5, rel___dollorhead__splice4__4__, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {n2d(0)};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = data[1];
head_tuple[1] = data[3];
head_tuple[2] = data[4];
head_tuple[3] = res_0;
head_tuple[4] = data[2];
        return std::make_tuple(data, output + 5);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 5;
      return tuples_count;
    }));
scc108->add_rule(new parallel_acopy(rel__appk__4__2, rel__appk__4__1__2__3__4, DELTA, {1, 4, 0, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule26__inter__body4__5__1__2__3__4__5, rel__addr__1__1, FULL, rel___dollorinter__head53__5__1, DELTA, {3, 4, 1, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified29__4__1__2__3__4, rel__fixedparam__1__1, FULL, rel___dollorrule43__inter__body__4__4, DELTA, {4, 5, 3, 1}));
scc108->add_rule(new parallel_join(rel__apply__3__1__2__3, rel__clo__2__1__2, FULL, rel___dollorhead__stratified30__4__4__3, DELTA, {2, 4, 5}));
scc108->add_rule(new parallel_join(rel___dollorrule19__inter__body__2__1__2, rel__bool__1__0, FULL, rel__store__2__2, DELTA, {1, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified9__7__5__7__6__3__2__4, rel___dollorhead__stratified9__7__1__2__3__4__5__6__7, DELTA, {4, 6, 5, 2, 1, 3, 7, 0}));
scc108->add_rule(new parallel_join(rel___dollorrule9__inter__body__4__1__2__3__4, rel__let__2__0, FULL, rel__eval__3__1, DELTA, {4, 1, 5, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorrule26__inter__body1__4__2, rel___dollorrule26__inter__body1__4__1__2__3__4, DELTA, {1, 4, 0, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorlst__append__2__1__2, rel___dollorlst__2__1__2, FULL, rel___dollorinter__head24__3__1__3, DELTA, {4, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified29__4__1__4__3, rel___dollorhead__stratified29__4__1__2__3__4, DELTA, {0, 3, 2, 4, 1}));
scc108->add_rule(new parallel_acopy(rel__clo__2__0, rel__clo__2__1__2, DELTA, {2, 0, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule1__inter__body1__3__1__2__3, rel__fixedparam__1__0, DELTA, rel__define__3__2, DELTA, {3, 1, 4}));
scc108->add_rule(new parallel_copy(rel__do__ext__all__2__1__2, rel___dollorinter__head41__6__1__2__3__4__5__6, DELTA, {5, 2}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub2__6__1__2__3__4__5__6, rel__do__ext__all__2__1__2, DELTA, rel___dollorinter__head41__6__6__3, DELTA, {2, 1, 4, 5, 6, 7}));
scc108->add_rule(new parallel_join(rel__store__2__1__2, rel__store__flow__2__1, DELTA, rel__store__2__1, DELTA, {2, 4}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified56__7__1__5, rel___dollorhead__stratified56__7__1__2__3__4__5__6__7, DELTA, {0, 4, 7, 1, 2, 3, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified25__5__1__2__3__4__5, rel__env__set__3__1__2__3, DELTA, rel___dollorhead__stratified24__7__7__2__5, DELTA, {5, 6, 7, 8, 3}));
scc108->add_rule(new parallel_copy(rel__store__flow__2__1__2, rel___dollorhead__stratified46__2__1__2, DELTA, {0, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule41__inter__body7__9__8, rel___dollorrule41__inter__body7__9__1__2__3__4__5__6__7__8__9, DELTA, {7, 9, 0, 1, 2, 3, 4, 5, 6, 8}));
scc108->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified57__6__1__2__3__4__5__6, DELTA, {0, 4}));
scc108->add_rule(new parallel_acopy(rel___dollorrule20__inter__body__5__4, rel___dollorrule20__inter__body__5__1__2__3__4__5, DELTA, {3, 5, 0, 1, 2, 4}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified31__3__1__2__3, rel___dollornil__1__1, DELTA, rel___dollorrule21__inter__body6__3__3, FULL, {3, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorinter__head33__4__1__2__3__4, rel__ret__2__2, DELTA, rel__applak__3__0, FULL, {3, 2, 4, 5}));
scc108->add_rule(new parallel_acopy(rel___dollorrule32__inter__body1__4__3, rel___dollorrule32__inter__body1__4__1__2__3__4, DELTA, {2, 4, 0, 1, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified58__4__1__4, rel___dollorhead__stratified58__4__1__2__3__4, DELTA, {0, 3, 4, 1, 2}));
scc108->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__appk__4__1__2__3__4, DELTA, rel___dollorinter__head5__5__3__2__1__4, FULL, {6, 2, 4}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified5__6__3__5, rel___dollorhead__stratified5__6__1__2__3__4__5__6, DELTA, {2, 4, 6, 0, 1, 3, 5}));
scc108->add_rule(new parallel_acopy(rel___dollorlst__2__0__1, rel___dollorlst__2__1__2, DELTA, {2, 0, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule27__inter__body__4__1__2__3__4, rel__clo__2__1, FULL, rel__lambda__2__0, DELTA, {4, 1, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule39__inter__body1__5__1__2__3__4__5, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified57__6__1__5, DELTA, {6, 2, 5, 4, 7}));
scc108->add_rule(new parallel_copy(rel__fixedarg__1__1, rel___dollorinter__head20__3__1__2__3, DELTA, {0}));
scc108->add_rule(new parallel_copy(rel__prim__2__1__2, rel___dollorhead__stratified6__4__1__2__3__4, DELTA, {0, 2}));
scc108->add_rule(new parallel_join(rel___dollorinter__head53__5__1__2__3__4__5, rel__ext__all__2__1, DELTA, rel___dollorbir__sub5__5__1, DELTA, {4, 7, 5, 2, 6}));
scc108->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified55__3__1__2__3, DELTA, {1, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified39__2__1__2, rel___dollornil__1__1, DELTA, rel___dollorinter__head35__1__1, FULL, {0, 1}));
scc108->add_rule(new parallel_copy(rel___dollorbir__sub9__4__1__2__3__4, rel___dollorinter__head50__5__1__2__3__4__5, DELTA, {0, 4, 1, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorrule27__inter__body__4__2, rel___dollorrule27__inter__body__4__1__2__3__4, DELTA, {1, 4, 0, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified25__5__1__2__3__4__5, rel__env__set__3__1__2__3, DELTA, rel___dollorhead__stratified24__7__7__2__5, FULL, {5, 6, 7, 8, 3}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub19__3__1__2__3, rel___dollorlst__append__input__2__1__2, DELTA, rel___dollorinter__head21__4__3__4, DELTA, {2, 5, 4}));
scc108->add_rule(new parallel_copy_generate(rel___dollorrule22__inter__body3__1__1, rel___dollornil__1__1, DELTA, [](const u64* const data, u64* const output) -> int{
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
scc108->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__applak__3__1__2__3, FULL, rel___dollorinter__head18__4__2__1__3, DELTA, {5, 1, 3}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub13__3__1__2__3, rel__split__at__input__2__1__2, DELTA, rel___dollorinter__head27__4__4__1, DELTA, {2, 4, 5}));
scc108->add_rule(new parallel_join(rel___dollorrule36__inter__body__4__1__2__3__4, rel__env__set__3__1, DELTA, rel__env__map__3__1, DELTA, {2, 5, 1, 6}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified31__3__2__3, rel___dollorhead__stratified31__3__1__2__3, DELTA, {1, 2, 3, 0}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub8__2__1__2, rel__do__ext__all__2__1__2, FULL, rel___dollorhead__stratified48__3__3__1, DELTA, {2, 4}));
scc108->add_rule(new parallel_join(rel___dollorinter__head33__4__1__2__3__4, rel__ret__2__2, DELTA, rel__applak__3__0, DELTA, {3, 2, 4, 5}));
scc108->add_rule(new parallel_join(rel___dollorinter__head9__3__1__2__3, rel___dollorrule13__inter__body3__1__1, DELTA, rel___dollorrule13__inter__body2__4__3, DELTA, {3, 4, 5}));
scc108->add_rule(new parallel_copy(rel__kaddr__1__1, rel___dollorinter__head48__5__1__2__3__4__5, DELTA, {2}));
scc108->add_rule(new parallel_join(rel___dollorlst__append__2__1__2, rel___dollorlst__2__1__2, DELTA, rel___dollorinter__head24__3__1__3, DELTA, {4, 2}));
scc108->add_rule(new parallel_join(rel___dollorlst__append__input__2__1__2, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified32__3__2__3, DELTA, {4, 2}));
scc108->add_rule(new parallel_join(rel___dollorlst__append__input__2__1__2, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified31__3__2__3, FULL, {4, 2}));
scc108->add_rule(new parallel_join(rel__store__2__1__2, rel__define__3__1__2__3, FULL, rel___dollorhead__stratified17__4__1__3__4, DELTA, {5, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified1__6__1__2__3__4__5__6, rel__fixedparam__1__1, FULL, rel___dollorrule42__inter__body__5__5, DELTA, {4, 0, 5, 3, 1, 6}));
scc108->add_rule(new parallel_acopy(rel___dollorrule13__inter__body__3__2, rel___dollorrule13__inter__body__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc108->add_rule(new parallel_join(rel__ext__all__2__1__2, rel___dollorrule29__inter__body__1__1, DELTA, rel__do__ext__all__2__2, DELTA, {2, 3}));
scc108->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified15__6__1__2__3__4__5__6, DELTA, {3, 5}));
scc108->add_rule(new parallel_join(rel___dollorrule10__inter__body__3__1__2__3, rel__state__1__1, DELTA, rel___dollorinter__head47__2__2, DELTA, {3, 0, 1}));
scc108->add_rule(new parallel_join(rel__do__var__prop__all__h__3__1__2__3, rel___dollorlst__2__0, FULL, rel___dollorrule31__inter__body__2__1, DELTA, {4, 0, 0}));
scc108->add_rule(new parallel_copy(rel__eval__3__1__2__3, rel___dollorhead__stratified52__3__1__2__3, DELTA, {0, 2, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule10__inter__body__3__1__2__3, rel__state__1__1, DELTA, rel___dollorinter__head47__2__2, FULL, {3, 0, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head27__4__4__1, rel___dollorinter__head27__4__1__2__3__4, DELTA, {3, 0, 4, 1, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorrule39__inter__body__4__4, rel___dollorrule39__inter__body__4__1__2__3__4, DELTA, {3, 4, 0, 1, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule32__inter__body__2__1__2, rel__do__var__prop__all__h__3__1__2__3, FULL, rel___dollorinter__head45__5__4__2__3, DELTA, {5, 6}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified54__6__1__2__3__4__5__6, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified53__6__1__6, FULL, {0, 4, 5, 6, 7, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified23__9__1__2__3__4__5__6__7__8__9, rel__env__set__3__1__2__3, FULL, rel___dollorhead__stratified22__11__11__3__10, DELTA, {5, 6, 7, 8, 9, 10, 11, 12, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified15__6__4__6, rel___dollorhead__stratified15__6__1__2__3__4__5__6, DELTA, {3, 5, 6, 0, 1, 2, 4}));
scc108->add_rule(new parallel_copy(rel__ret__2__1__2, rel___dollorhead__stratified49__3__1__2__3, DELTA, {2, 0}));
scc108->add_rule(new parallel_acopy(rel___dollorrule2__inter__body1__4__3, rel___dollorrule2__inter__body1__4__1__2__3__4, DELTA, {2, 4, 0, 1, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified29__4__1__2__3__4, rel__fixedparam__1__1, DELTA, rel___dollorrule43__inter__body__4__4, FULL, {4, 5, 3, 1}));
scc108->add_rule(new parallel_join(rel___dollorinter__head41__6__1__2__3__4__5__6, rel___dollorrule22__inter__body3__1__1, DELTA, rel___dollorrule22__inter__body2__7__7, FULL, {3, 4, 5, 6, 7, 8}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified6__4__1__3, rel___dollorhead__stratified6__4__1__2__3__4, DELTA, {0, 2, 4, 1, 3}));
scc108->add_rule(new parallel_copy(rel__state__1__1, rel___dollorinter__head29__2__1__2, DELTA, {1}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified47__5__1__2__5, rel___dollorhead__stratified47__5__1__2__3__4__5, DELTA, {0, 1, 4, 5, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorinter__head34__5__1__2__3__4__5, rel__ext__all__2__1, FULL, rel___dollorbir__sub6__5__1, DELTA, {4, 5, 6, 7, 2}));
scc108->add_rule(new parallel_join(rel___dollorinter__head46__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel__do__ext__all__2__2, FULL, {4, 1, 2, 3}));
scc108->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head11__4__1__2__3__4, DELTA, {2}));
scc108->add_rule(new parallel_join(rel___dollorinter__head46__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel__do__ext__all__2__2, DELTA, {4, 1, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified53__6__1__2__3__4__5__6, rel___dollornil__1__1, DELTA, rel___dollorinter__head49__6__4, DELTA, {3, 4, 5, 6, 7, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule41__inter__body8__9__1__2__3__4__5__6__7__8__9, rel___dollornil__1__1, FULL, rel___dollorrule41__inter__body7__9__8, DELTA, {5, 1, 3, 4, 6, 7, 8, 9, 10}));
scc108->add_rule(new parallel_join(rel___dollorrule31__inter__body__2__1__2, rel___dollorlst__2__0, FULL, rel__do__var__prop__all__2__1, DELTA, {4, 0}));
scc108->add_rule(new parallel_join(rel___dollorrule26__inter__body1__4__1__2__3__4, rel__clo__2__0, DELTA, rel___dollorrule26__inter__body__3__3, DELTA, {2, 1, 4, 5}));
scc108->add_rule(new parallel_copy_generate(rel___dollorrule36__inter__body1__3__1__2__3, rel___dollorrule36__inter__body__4__1__2, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 2> {data[0], data[1]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = []( TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true;
        if (! compatible) return state;

        head_tuple[0] = data[1];
head_tuple[1] = data[3];
head_tuple[2] = data[4];
        return std::make_tuple(data, output + 3);
      };
      auto [_,new_ptr] = builtin_neq<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 3;
      return tuples_count;
    }));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified24__7__1__2__3__4__5__6__7, rel__env__set__3__1__2__3, DELTA, rel___dollorhead__stratified23__9__9__3__7, FULL, {5, 6, 7, 8, 9, 10, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified24__7__1__2__3__4__5__6__7, rel__env__set__3__1__2__3, DELTA, rel___dollorhead__stratified23__9__9__3__7, DELTA, {5, 6, 7, 8, 9, 10, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorrule26__inter__body3__5__, rel___dollorrule26__inter__body3__5__1__2__3__4__5, DELTA, {5, 0, 1, 2, 3, 4}));
scc108->add_rule(new parallel_join(rel___dollorinter__head45__5__1__2__3__4__5, rel___dollorlst__2__0, DELTA, rel___dollorrule32__inter__body1__4__3, DELTA, {1, 4, 5, 0, 6}));
scc108->add_rule(new parallel_copy(rel__applfk__2__1__2, rel___dollorinter__head33__4__1__2__3__4, DELTA, {1, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified40__4__1__2__3__4, rel__kaddr__1__1, DELTA, rel___dollorrule24__inter__body__3__2, FULL, {3, 0, 4, 1}));
scc108->add_rule(new parallel_copy(rel__define__3__1__2__3, rel___dollorhead__stratified7__4__1__2__3__4, DELTA, {0, 2, 3}));
scc108->add_rule(new parallel_copy_generate(rel___dollorrule13__inter__body5__1__1, rel___dollornil__1__1, DELTA, [](const u64* const data, u64* const output) -> int{
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
scc108->add_rule(new parallel_join(rel___dollorinter__head21__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel___dollorlst__append__input__2__1, DELTA, {1, 3, 2, 4}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified3__4__1__2__3__4, rel__app__2__1__2, DELTA, rel___dollorhead__stratified2__5__3__5, DELTA, {4, 5, 6, 2}));
scc108->add_rule(new parallel_acopy(rel__eval__3__1, rel__eval__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__splice3__7__1__2__3__4__5__6__7, rel___dollorlst__2__0, DELTA, rel___dollorrule12__inter__body6__5__1, FULL, {6, 7, 2, 5, 4, 1, 5}));
scc108->add_rule(new parallel_join(rel___dollorhead__splice3__7__1__2__3__4__5__6__7, rel___dollorlst__2__0, DELTA, rel___dollorrule12__inter__body6__5__1, DELTA, {6, 7, 2, 5, 4, 1, 5}));
scc108->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head22__9__1__2__3__4__5__6__7__8__9, DELTA, {8}));
scc108->add_rule(new parallel_acopy(rel___dollorrule26__inter__body4__5__1, rel___dollorrule26__inter__body4__5__1__2__3__4__5, DELTA, {0, 5, 1, 2, 3, 4}));
scc108->add_rule(new parallel_join(rel___dollorrule5__inter__body__3__1__2__3, rel__clo__2__1__2, FULL, rel___dollorinter__head44__3__3__1, DELTA, {2, 4, 0}));
scc108->add_rule(new parallel_join(rel___dollorhead__splice4__4__1__2__3__4, rel__ret__2__2, DELTA, rel___dollorrule13__inter__body7__4__1, FULL, {4, 2, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified34__3__1__2__3, rel__state__1__1, DELTA, rel___dollorrule11__inter__body__3__2, FULL, {3, 4, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head23__5__3__5__2__4, rel___dollorinter__head23__5__1__2__3__4__5, DELTA, {2, 4, 1, 3, 5, 0}));
scc108->add_rule(new parallel_join(rel___dollorrule11__inter__body__3__1__2__3, rel__saddr__1__1, DELTA, rel___dollorinter__head29__2__2, DELTA, {3, 0, 1}));
scc108->add_rule(new parallel_join(rel___dollorinter__head31__4__1__2__3__4, rel___dollorlst__split__3__1, DELTA, rel___dollorbir__sub20__3__1, FULL, {3, 5, 2, 6}));
scc108->add_rule(new parallel_join(rel___dollorinter__head38__3__1__2__3, rel__quote__1__0, FULL, rel__eval__3__1, DELTA, {1, 4, 0}));
scc108->add_rule(new parallel_acopy(rel___dollorrule27__inter__body4__5__5, rel___dollorrule27__inter__body4__5__1__2__3__4__5, DELTA, {4, 5, 0, 1, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule20__inter__body__5__1__2__3__4__5, rel__ret__2__2, DELTA, rel__if__k__4__0, DELTA, {5, 3, 6, 2, 4}));
scc108->add_rule(new parallel_join(rel___dollorinter__head43__4__1__2__3__4, rel__saddr__1__0, DELTA, rel___dollorrule20__inter__body__5__4, FULL, {3, 4, 5, 6}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified1__6__6__2, rel___dollorhead__stratified1__6__1__2__3__4__5__6, DELTA, {5, 1, 6, 0, 2, 3, 4}));
scc108->add_rule(new parallel_acopy(rel___dollorrule18__inter__body2__4__2, rel___dollorrule18__inter__body2__4__1__2__3__4, DELTA, {1, 4, 0, 2, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorrule13__inter__body7__4__1, rel___dollorrule13__inter__body7__4__1__2__3__4, DELTA, {0, 4, 1, 2, 3}));
scc108->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__applfk__2__1__2, FULL, rel___dollorinter__head33__4__2__4, DELTA, {4, 5, 2}));
scc108->add_rule(new parallel_copy_generate(rel___dollorinter__head28__3__1__2__3, rel___dollorlst__split__input__1__, DELTA, [](const u64* const data, u64* const output) -> int{
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
scc108->add_rule(new parallel_join(rel___dollorhead__stratified30__4__1__2__3__4, rel__lambda__2__1__2, FULL, rel___dollorinter__head17__5__5__1, DELTA, {4, 5, 6, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule24__inter__body2__4__1__2__3__4, rel__fixedarg__1__0, DELTA, rel___dollorrule24__inter__body1__4__3, FULL, {3, 1, 4, 5}));
scc108->add_rule(new parallel_join(rel__do__var__prop__all__h__3__1__2__3, rel___dollorlst__2__0, FULL, rel___dollorrule33__inter__body1__2__2, DELTA, {2, 4, 4}));
scc108->add_rule(new parallel_acopy(rel__split__at__3__1, rel__split__at__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc108->add_rule(new parallel_join(rel__ext__all__2__1__2, rel___dollorrule29__inter__body__1__1, DELTA, rel__do__ext__all__2__2, FULL, {2, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule26__inter__body4__5__1__2__3__4__5, rel__addr__1__1, DELTA, rel___dollorinter__head53__5__1, FULL, {3, 4, 1, 5, 6}));
scc108->add_rule(new parallel_join(rel__ret__2__1__2, rel__kaddr__1__0, DELTA, rel___dollorrule17__inter__body__3__3, FULL, {3, 4}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head42__7__7__3__6__4__2__5, rel___dollorinter__head42__7__1__2__3__4__5__6__7, DELTA, {6, 2, 5, 3, 1, 4, 7, 0}));
scc108->add_rule(new parallel_join(rel___dollorrule30__inter__body__2__1__2, rel__do__fixed__prop__all__2__1__2, DELTA, rel___dollorinter__head26__4__1__2, DELTA, {4, 5}));
scc108->add_rule(new parallel_copy(rel__quote__1__1, rel___dollorhead__stratified10__9__1__2__3__4__5__6__7__8__9, DELTA, {3}));
scc108->add_rule(new parallel_join(rel___dollorrule41__inter__body__9__1__2__3__4__5__6__7__8__9, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified11__9__9__2, DELTA, {5, 1, 7, 9, 4, 6, 2, 8, 10}));
scc108->add_rule(new parallel_join(rel___dollorlst__append__input__2__1__2, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified18__3__2__3, DELTA, {4, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule24__inter__body1__4__1__2__3__4, rel__clo__2__0, DELTA, rel__apply__3__1, DELTA, {1, 5, 4, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule25__inter__body4__3__1__2__3, rel__fixedarg__1__0, DELTA, rel__apply__3__2, DELTA, {1, 3, 4}));
scc108->add_rule(new parallel_join(rel___dollorinter__head5__5__1__2__3__4__5, rel___dollorrule12__inter__body__1__1, FULL, rel___dollorrule12__inter__body3__6__2, DELTA, {3, 4, 5, 6, 7}));
scc108->add_rule(new parallel_acopy(rel__env__map__3__1, rel__env__map__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc108->add_rule(new parallel_acopy(rel__split__at__input__2__1, rel__split__at__input__2__1__2, DELTA, {0, 2, 1}));
scc108->add_rule(new parallel_join(rel___dollorinter__head8__6__1__2__3__4__5__6, rel__ext__all__2__1, DELTA, rel___dollorbir__sub2__6__1, FULL, {5, 6, 4, 7, 8, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified6__4__1__2__3__4, rel___dollorlst__2__1__2, DELTA, rel___dollorrule40__inter__body1__5__5__1, FULL, {5, 6, 4, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorbir__sub5__5__1, rel___dollorbir__sub5__5__1__2__3__4__5, DELTA, {0, 5, 1, 2, 3, 4}));
scc108->add_rule(new parallel_join(rel___dollorrule22__inter__body4__4__1__2__3__4, rel___dollorlst__append__input__2__1, DELTA, rel___dollorbir__sub3__3__1, FULL, {1, 4, 5, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified9__7__1__2__3__4__5__6__7, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified8__7__5__7, FULL, {4, 5, 6, 7, 8, 1, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified9__7__1__2__3__4__5__6__7, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified8__7__5__7, DELTA, {4, 5, 6, 7, 8, 1, 2}));
scc108->add_rule(new parallel_acopy(rel__letk__6__0, rel__letk__6__1__2__3__4__5__6, DELTA, {6, 0, 1, 2, 3, 4, 5}));
scc108->add_rule(new parallel_join(rel___dollorrule12__inter__body2__7__1__2__3__4__5__6__7, rel___dollorlst__2__1, FULL, rel___dollorbir__sub7__6__2, DELTA, {4, 2, 6, 5, 1, 7, 8}));
scc108->add_rule(new parallel_acopy(rel___dollorrule21__inter__body10__3__1, rel___dollorrule21__inter__body10__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc108->add_rule(new parallel_join(rel__split__at__3__1__2__3, rel___dollorlst__2__1__2, DELTA, rel___dollorinter__head25__4__3__4, FULL, {5, 2, 4}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head15__3__2, rel___dollorinter__head15__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified39__2__2, rel___dollorhead__stratified39__2__1__2, DELTA, {1, 2, 0}));
scc108->add_rule(new parallel_join(rel___dollorrule22__inter__body5__3__1__2__3, rel___dollorlst__2__0__1, DELTA, rel___dollorrule22__inter__body4__4__4__2, FULL, {5, 2, 4}));
scc108->add_rule(new parallel_copy(rel__lambda__2__1__2, rel___dollorinter__head17__5__1__2__3__4__5, DELTA, {4, 0}));
scc108->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head50__5__1__2__3__4__5, DELTA, {3}));
scc108->add_rule(new parallel_copy_generate(rel___dollorrule1__inter__body__1__1, rel___dollornil__1__1, DELTA, [](const u64* const data, u64* const output) -> int{
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
scc108->add_rule(new parallel_acopy(rel___dollorinter__head9__3__2, rel___dollorinter__head9__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc108->add_rule(new parallel_acopy(rel__do__var__prop__all__2__1, rel__do__var__prop__all__2__1__2, DELTA, {0, 2, 1}));
scc108->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head53__5__1__2__3__4__5, DELTA, {0}));
scc108->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__appk__4__1__2__3__4, FULL, rel___dollorinter__head5__5__3__2__1__4, DELTA, {6, 2, 4}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified32__3__1__2__3, rel___dollornil__1__1, FULL, rel___dollorrule21__inter__body8__3__2, DELTA, {3, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule10__inter__body__3__1__2__3, rel__state__1__1, FULL, rel___dollorinter__head47__2__2, DELTA, {3, 0, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule41__inter__body8__9__8, rel___dollorrule41__inter__body8__9__1__2__3__4__5__6__7__8__9, DELTA, {7, 9, 0, 1, 2, 3, 4, 5, 6, 8}));
scc108->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head45__5__1__2__3__4__5, DELTA, {0}));
scc108->add_rule(new parallel_copy_generate(rel___dollorrule21__inter__body7__9__1__2__3__4__5__6__7__8__9, rel___dollorhead__splice__10__7__10, DELTA, [](const u64* const data, u64* const output) -> int{
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
scc108->add_rule(new parallel_join(rel___dollorrule13__inter__body__3__1__2__3, rel___dollorlst__append__input__2__0, FULL, rel___dollorlst__append__2__1, DELTA, {1, 2, 4}));
scc108->add_rule(new parallel_copy_generate(rel___dollorrule21__inter__body__1__1, rel___dollornil__1__1, DELTA, [](const u64* const data, u64* const output) -> int{
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
scc108->add_rule(new parallel_join(rel__split__at__3__1__2__3, rel___dollorlst__2__1__2, DELTA, rel___dollorinter__head25__4__3__4, DELTA, {5, 2, 4}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified5__6__1__2__3__4__5__6, rel___dollorlst__2__1__2, FULL, rel___dollorrule40__inter__body2__7__7__2, DELTA, {4, 8, 6, 7, 5, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorrule1__inter__body3__1__, rel___dollorrule1__inter__body3__1__1, DELTA, {1, 0}));
scc108->add_rule(new parallel_join(rel___dollorrule14__inter__body2__4__1__2__3__4, rel__ret__2__2, FULL, rel___dollorrule14__inter__body1__4__1, DELTA, {4, 2, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified60__6__1__2__3__4__5__6, rel__kaddr__1__1, FULL, rel___dollorrule26__inter__body4__5__1, DELTA, {0, 3, 5, 6, 4, 1}));
scc108->add_rule(new parallel_join(rel__ext__all__2__1__2, rel__ext__all__2__1, DELTA, rel___dollorbir__sub8__2__1, DELTA, {4, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule39__inter__body1__5__1__2__3__4__5, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified57__6__1__5, FULL, {6, 2, 5, 4, 7}));
scc108->add_rule(new parallel_copy_generate(rel___dollorinter__head27__4__1__2__3__4, rel___dollorrule2__inter__body1__4__3, DELTA, [](const u64* const data, u64* const output) -> int{
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
scc108->add_rule(new parallel_join(rel___dollorrule27__inter__body5__3__1__2__3, rel__do__var__prop__all__2__1__2, FULL, rel___dollorinter__head34__5__1__2, DELTA, {4, 5, 6}));
scc108->add_rule(new parallel_join(rel__store__2__1__2, rel__define__3__1__2__3, DELTA, rel___dollorhead__stratified17__4__1__3__4, FULL, {5, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule2__inter__body__4__1__2__3__4, rel___dollorlst__2__0, FULL, rel__split__at__input__2__2, DELTA, {2, 1, 4, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule13__inter__body8__3__1__2__3, rel___dollorbir__sub9__4__1__2__3__4, FULL, rel___dollorinter__head50__5__1__5__2__3, DELTA, {0, 6, 1}));
scc108->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorhead__stratified49__3__1__2__3, DELTA, {2, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule26__inter__body1__4__1__2__3__4, rel__clo__2__0, FULL, rel___dollorrule26__inter__body__3__3, DELTA, {2, 1, 4, 5}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body2__9__1__2__3__4__5__6__7__8__9, rel___dollorrule21__inter__body1__4__1__4, FULL, rel___dollorbir__sub1__9__1__2, DELTA, {12, 10, 7, 9, 11, 4, 8, 6, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule11__inter__body__3__1__2__3, rel__saddr__1__1, FULL, rel___dollorinter__head29__2__2, DELTA, {3, 0, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule41__inter__body__9__4, rel___dollorrule41__inter__body__9__1__2__3__4__5__6__7__8__9, DELTA, {3, 9, 0, 1, 2, 4, 5, 6, 7, 8}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified60__6__1__2__3__4__5__6, rel__kaddr__1__1, DELTA, rel___dollorrule26__inter__body4__5__1, DELTA, {0, 3, 5, 6, 4, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule24__inter__body__3__2, rel___dollorrule24__inter__body__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc108->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__halt__0__, DELTA, rel___dollorinter__head7__2__, FULL, {3, 2, 0}));
scc108->add_rule(new parallel_copy(rel__do__var__prop__all__2__1__2, rel___dollorinter__head34__5__1__2__3__4__5, DELTA, {0, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule42__inter__body__5__1__2__3__4__5, rel__quote__1__1, FULL, rel___dollorhead__stratified__5__3, DELTA, {6, 3, 5, 1, 4}));
scc108->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__appk__4__1__2__3__4, DELTA, rel___dollorhead__stratified36__5__5__1__2__3, FULL, {6, 2, 4}));
scc108->add_rule(new parallel_join(rel___dollorrule40__inter__body__4__1__2__3__4, rel__prim__2__1__2, DELTA, rel___dollorhead__stratified6__4__1__3, DELTA, {5, 2, 0, 4}));
scc108->add_rule(new parallel_acopy(rel__do__var__prop__all__h__3__2, rel__do__var__prop__all__h__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorrule39__inter__body4__5__5, rel___dollorrule39__inter__body4__5__1__2__3__4__5, DELTA, {4, 5, 0, 1, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified16__5__1__2__3__4__5, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified15__6__4__6, DELTA, {4, 5, 6, 7, 2}));
scc108->add_rule(new parallel_join(rel__store__2__1__2, rel__define__3__1__2__3, DELTA, rel___dollorhead__stratified3__4__1__3__4, DELTA, {5, 3}));
scc108->add_rule(new parallel_copy_generate(rel___dollorrule4__inter__body__5__1__2__3__4__5, rel___dollorbir__sub15__4__3__4, DELTA, [](const u64* const data, u64* const output) -> int{
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
scc108->add_rule(new parallel_join(rel___dollorhead__stratified2__5__1__2__3__4__5, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified1__6__6__2, DELTA, {4, 5, 6, 7, 2}));
scc108->add_rule(new parallel_acopy(rel__list__of__1__0, rel__list__of__1__1, DELTA, {1, 0}));
scc108->add_rule(new parallel_join(rel___dollorrule30__inter__body1__3__1__2__3, rel___dollorlst__2__0, FULL, rel__do__fixed__prop__all__2__2, DELTA, {2, 4, 1}));
scc108->add_rule(new parallel_join(rel__env__map__3__1__2__3, rel__env__set__3__2, FULL, rel___dollorrule36__inter__body1__3__1, DELTA, {5, 0, 6}));
scc108->add_rule(new parallel_join(rel___dollorrule26__inter__body__3__1__2__3, rel__vararg__1__0, FULL, rel__apply__3__2, DELTA, {4, 1, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorrule25__inter__body5__4__1, rel___dollorrule25__inter__body5__4__1__2__3__4, DELTA, {0, 4, 1, 2, 3}));
scc108->add_rule(new parallel_copy_generate(rel___dollorinter__head22__9__1__2__3__4__5__6__7__8__9, rel___dollorrule21__inter__body9__8__, DELTA, [](const u64* const data, u64* const output) -> int{
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
scc108->add_rule(new parallel_join(rel___dollorinter__head14__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorinter__head13__2__2, FULL, {3, 0, 1}));
scc108->add_rule(new parallel_join(rel___dollorinter__head36__2__1__2, rel__length__input__1__1, FULL, rel___dollorlst__2__0, DELTA, {3, 1}));
scc108->add_rule(new parallel_join(rel___dollorinter__head45__5__1__2__3__4__5, rel___dollorlst__2__0, DELTA, rel___dollorrule32__inter__body1__4__3, FULL, {1, 4, 5, 0, 6}));
scc108->add_rule(new parallel_acopy(rel___dollorrule13__inter__body2__4__3, rel___dollorrule13__inter__body2__4__1__2__3__4, DELTA, {2, 4, 0, 1, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body4__4__1__2__3__4, rel__binding__2__0, FULL, rel___dollorlst__2__1, DELTA, {2, 4, 3, 1}));
scc108->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__applfk__2__1__2, DELTA, rel___dollorinter__head33__4__2__4, FULL, {4, 5, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule1__inter__body2__2__1__2, rel___dollorrule1__inter__body__1__1, FULL, rel___dollorrule1__inter__body1__3__2, DELTA, {3, 4}));
scc108->add_rule(new parallel_join(rel___dollorinter__head14__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorinter__head13__2__2, DELTA, {3, 0, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule42__inter__body__5__1__2__3__4__5, rel__quote__1__1, DELTA, rel___dollorhead__stratified__5__3, DELTA, {6, 3, 5, 1, 4}));
scc108->add_rule(new parallel_join(rel___dollorrule40__inter__body5__6__1__2__3__4__5__6, rel__ref__1__1, FULL, rel___dollorrule40__inter__body4__5__5, DELTA, {3, 4, 1, 5, 6, 0}));
scc108->add_rule(new parallel_join(rel__env__map__3__1__2__3, rel__env__set__3__2, DELTA, rel___dollorrule36__inter__body1__3__1, DELTA, {5, 0, 6}));
scc108->add_rule(new parallel_join(rel___dollorinter__head29__2__1__2, rel__prim__2__0, FULL, rel__eval__3__1, DELTA, {5, 3}));
scc108->add_rule(new parallel_copy(rel__vararg__1__1, rel___dollorinter__head52__3__1__2__3, DELTA, {2}));
scc108->add_rule(new parallel_acopy(rel___dollorrule44__inter__body1__7__1, rel___dollorrule44__inter__body1__7__1__2__3__4__5__6__7, DELTA, {0, 7, 1, 2, 3, 4, 5, 6}));
scc108->add_rule(new parallel_acopy(rel___dollorrule42__inter__body__5__5, rel___dollorrule42__inter__body__5__1__2__3__4__5, DELTA, {4, 5, 0, 1, 2, 3}));
scc108->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__appk__4__1__2__3__4, FULL, rel___dollorhead__stratified36__5__5__1__2__3, DELTA, {6, 2, 4}));
scc108->add_rule(new parallel_join(rel__length__2__1__2, rel__length__input__1__1, DELTA, rel___dollorhead__stratified39__2__2, FULL, {1, 3}));
scc108->add_rule(new parallel_copy(rel__kaddr__1__1, rel___dollorinter__head37__5__1__2__3__4__5, DELTA, {3}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head52__3__3, rel___dollorinter__head52__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head46__4__2, rel___dollorinter__head46__4__1__2__3__4, DELTA, {1, 4, 0, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub20__3__1__2__3, rel___dollorlst__split__input__1__1, DELTA, rel___dollorinter__head30__3__3, DELTA, {1, 3, 4}));
scc108->add_rule(new parallel_acopy(rel___dollorbir__sub7__6__2, rel___dollorbir__sub7__6__1__2__3__4__5__6, DELTA, {1, 6, 0, 2, 3, 4, 5}));
scc108->add_rule(new parallel_join(rel___dollorrule19__inter__body2__1__1, rel___dollorrule19__inter__body1__1__1, FULL, rel__ret__2__1, DELTA, {3}));
scc108->add_rule(new parallel_acopy(rel___dollorrule22__inter__body__3__3, rel___dollorrule22__inter__body__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified28__4__1__2__3__4, rel__addr__1__1, DELTA, rel___dollorrule43__inter__body2__3__3, FULL, {0, 4, 3, 1}));
scc108->add_rule(new parallel_copy(rel__ret__2__1__2, rel___dollorhead__stratified34__3__1__2__3, DELTA, {1, 0}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head24__3__1__3, rel___dollorinter__head24__3__1__2__3, DELTA, {0, 2, 3, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule39__inter__body3__4__4, rel___dollorrule39__inter__body3__4__1__2__3__4, DELTA, {3, 4, 0, 1, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule32__inter__body1__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel__do__var__prop__all__h__3__2, FULL, {2, 5, 4, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule22__inter__body5__3__3, rel___dollorrule22__inter__body5__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule23__inter__body__4__1__2__3__4, rel__define__3__0, FULL, rel__apply__3__1, DELTA, {3, 5, 6, 2}));
scc108->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified57__6__1__2__3__4__5__6, DELTA, {3, 5}));
scc108->add_rule(new parallel_join(rel___dollorinter__head44__3__1__2__3, rel__lambda__2__0, DELTA, rel__eval__3__1, FULL, {4, 5, 0}));
scc108->add_rule(new parallel_join(rel___dollorrule1__inter__body2__2__1__2, rel___dollorrule1__inter__body__1__1, DELTA, rel___dollorrule1__inter__body1__3__2, FULL, {3, 4}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body1__4__1__2__3__4, rel___dollorlst__append__input__2__2, FULL, rel___dollorlst__2__0, DELTA, {2, 4, 1, 3}));
scc108->add_rule(new parallel_copy(rel__split__at__input__2__1__2, rel___dollorinter__head__3__1__2__3, DELTA, {0, 2}));
scc108->add_rule(new parallel_copy(rel___dollorbir__sub__8__1__2__3__4__5__6__7__8, rel___dollorinter__head22__9__1__2__3__4__5__6__7__8__9, DELTA, {2, 4, 5, 6, 3, 1, 7, 0}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified36__5__1__2__3__4__5, rel___dollornil__1__1, DELTA, rel___dollorinter__head32__5__5, DELTA, {3, 4, 5, 6, 1}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified24__7__1__2__3__4__5__6__7, rel__env__set__3__1__2__3, FULL, rel___dollorhead__stratified23__9__9__3__7, DELTA, {5, 6, 7, 8, 9, 10, 3}));
scc108->add_rule(new parallel_acopy(rel__define__3__0, rel__define__3__1__2__3, DELTA, {3, 0, 1, 2}));
scc108->add_rule(new parallel_join(rel___dollorinter__head40__5__1__2__3__4__5, rel__fixedparam__1__0, FULL, rel___dollorrule24__inter__body3__5__4, DELTA, {1, 3, 4, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorrule5__inter__body__3__1__2__3, rel__clo__2__1__2, DELTA, rel___dollorinter__head44__3__3__1, FULL, {2, 4, 0}));
scc108->add_rule(new parallel_join(rel___dollorlst__append__2__1__2, rel___dollorrule7__inter__body__1__1, DELTA, rel___dollorlst__append__input__2__1, DELTA, {2, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule44__inter__body2__8__1__2__3__4__5__6__7__8, rel__addr__1__1, FULL, rel___dollorrule44__inter__body1__7__1, DELTA, {0, 3, 4, 5, 6, 7, 8, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorbir__sub6__5__1, rel___dollorbir__sub6__5__1__2__3__4__5, DELTA, {0, 5, 1, 2, 3, 4}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified9__7__1__2__3__4__5__6__7, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified8__7__5__7, DELTA, {4, 5, 6, 7, 8, 1, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule27__inter__body4__5__1__2__3__4__5, rel___dollorrule27__inter__body2__2__2, DELTA, rel___dollorrule27__inter__body3__5__2, DELTA, {2, 5, 6, 4, 7}));
scc108->add_rule(new parallel_join(rel___dollorrule14__inter__body1__4__1__2__3__4, rel___dollornil__1__0, FULL, rel___dollorrule14__inter__body__3__2, DELTA, {3, 0, 4, 1}));
scc108->add_rule(new parallel_copy_generate(rel___dollorrule12__inter__body__1__1, rel___dollornil__1__1, DELTA, [](const u64* const data, u64* const output) -> int{
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
scc108->add_rule(new parallel_join(rel___dollorrule27__inter__body2__2__1__2, rel__list__of__1__0, DELTA, rel___dollorrule27__inter__body1__2__1, DELTA, {1, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified52__3__1__2__3, rel__store__2__1__2, FULL, rel___dollorrule25__inter__body1__4__2__4, DELTA, {4, 0, 5}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified11__9__1__2__3__4__5__6__7__8__9, rel__quote__1__1, DELTA, rel___dollorrule41__inter__body2__9__7, FULL, {7, 4, 3, 8, 5, 9, 6, 10, 1}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified11__9__1__2__3__4__5__6__7__8__9, rel__quote__1__1, DELTA, rel___dollorrule41__inter__body2__9__7, DELTA, {7, 4, 3, 8, 5, 9, 6, 10, 1}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified40__4__1__2__3__4, rel__kaddr__1__1, FULL, rel___dollorrule24__inter__body__3__2, DELTA, {3, 0, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorinter__head36__2__1__2, rel__length__input__1__1, DELTA, rel___dollorlst__2__0, DELTA, {3, 1}));
scc108->add_rule(new parallel_acopy(rel__do__fixed__prop__all__2__2, rel__do__fixed__prop__all__2__1__2, DELTA, {1, 2, 0}));
scc108->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorhead__stratified34__3__1__2__3, DELTA, {1, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified13__8__1__2__3__4__5__6__7__8, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified12__9__3__8, FULL, {4, 5, 6, 7, 8, 9, 10, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified13__8__1__2__3__4__5__6__7__8, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified12__9__3__8, DELTA, {4, 5, 6, 7, 8, 9, 10, 2}));
scc108->add_rule(new parallel_copy(rel__length__input__1__1, rel___dollorinter__head36__2__1__2, DELTA, {0}));
scc108->add_rule(new parallel_join(rel___dollorrule24__inter__body3__5__1__2__3__4__5, rel__lambda__2__0, DELTA, rel___dollorrule24__inter__body2__4__1, FULL, {4, 2, 5, 1, 6}));
scc108->add_rule(new parallel_join(rel___dollorlst__split__3__1__2__3, rel___dollorlst__2__1__2, DELTA, rel___dollorinter__head31__4__2__3, FULL, {5, 2, 4}));
scc108->add_rule(new parallel_join(rel___dollorinter__head52__3__1__2__3, rel__ret__2__2, FULL, rel___dollorrule16__inter__body__3__3, DELTA, {4, 5, 2}));
scc108->add_rule(new parallel_copy(rel__kaddr__1__1, rel___dollorinter__head8__6__1__2__3__4__5__6, DELTA, {1}));
scc108->add_rule(new parallel_join(rel___dollorinter__head43__4__1__2__3__4, rel__saddr__1__0, DELTA, rel___dollorrule20__inter__body__5__4, DELTA, {3, 4, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified5__6__1__2__3__4__5__6, rel___dollorlst__2__1__2, DELTA, rel___dollorrule40__inter__body2__7__7__2, DELTA, {4, 8, 6, 7, 5, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__splice2__3__, rel___dollorhead__splice2__3__1__2__3, DELTA, {3, 0, 1, 2}));
scc108->add_rule(new parallel_acopy(rel__env__set__3__2__3__1, rel__env__set__3__1__2__3, DELTA, {1, 2, 0, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorrule41__inter__body2__9__7, rel___dollorrule41__inter__body2__9__1__2__3__4__5__6__7__8__9, DELTA, {6, 9, 0, 1, 2, 3, 4, 5, 7, 8}));
scc108->add_rule(new parallel_acopy(rel__apply__3__1, rel__apply__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule12__inter__body4__3__1__2__3, rel___dollorbir__sub7__6__1__2__3__4__5__6, DELTA, rel___dollorinter__head6__7__2__7__3__1__4__5, FULL, {0, 8, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule12__inter__body4__3__1__2__3, rel___dollorbir__sub7__6__1__2__3__4__5__6, DELTA, rel___dollorinter__head6__7__2__7__3__1__4__5, DELTA, {0, 8, 1}));
scc108->add_rule(new parallel_acopy(rel__app__2__0, rel__app__2__1__2, DELTA, {2, 0, 1}));
scc108->add_rule(new parallel_copy(rel__fixedparam__1__1, rel___dollorhead__stratified11__9__1__2__3__4__5__6__7__8__9, DELTA, {6}));
scc108->add_rule(new parallel_acopy(rel___dollorbir__sub14__4__1, rel___dollorbir__sub14__4__1__2__3__4, DELTA, {0, 4, 1, 2, 3}));
scc108->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorhead__stratified40__4__1__2__3__4, DELTA, {3, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__splice1__9__1__2__3__4__5__6__7__8__9, rel___dollorlst__append__2__1, DELTA, rel___dollorrule21__inter__body3__8__6, FULL, {10, 2, 6, 9, 7, 5, 8, 4, 5}));
scc108->add_rule(new parallel_join(rel___dollorhead__splice1__9__1__2__3__4__5__6__7__8__9, rel___dollorlst__append__2__1, DELTA, rel___dollorrule21__inter__body3__8__6, DELTA, {10, 2, 6, 9, 7, 5, 8, 4, 5}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub8__2__1__2, rel__do__ext__all__2__1__2, DELTA, rel___dollorhead__stratified48__3__3__1, FULL, {2, 4}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified49__3__1__2__3, rel__saddr__1__1, DELTA, rel___dollorrule10__inter__body__3__2, FULL, {3, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule22__inter__body1__3__1__2__3, rel___dollorbir__sub3__3__1__2__3, DELTA, rel___dollorinter__head11__4__2__4__1, DELTA, {0, 5, 1}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified__5__1__2__3__4__5, rel__addr__1__1, FULL, rel___dollorrule42__inter__body3__4__2, DELTA, {0, 5, 4, 1, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified48__3__1__2__3, rel__env__set__3__1__2__3, DELTA, rel___dollorhead__stratified47__5__1__2__5, FULL, {5, 6, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule27__inter__body5__3__1__2__3, rel__do__var__prop__all__2__1__2, DELTA, rel___dollorinter__head34__5__1__2, FULL, {4, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorrule13__inter__body6__3__1__2__3, rel___dollorrule13__inter__body5__1__1, FULL, rel__appk__4__2, DELTA, {3, 5, 2}));
scc108->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head38__3__1__2__3, DELTA, {2}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified4__7__4__6, rel___dollorhead__stratified4__7__1__2__3__4__5__6__7, DELTA, {3, 5, 7, 0, 1, 2, 4, 6}));
scc108->add_rule(new parallel_join(rel___dollorrule27__inter__body3__5__1__2__3__4__5, rel__apply__3__1, DELTA, rel___dollorrule27__inter__body__4__2, DELTA, {6, 2, 5, 3, 7}));
scc108->add_rule(new parallel_copy(rel__saddr__1__1, rel___dollorinter__head47__2__1__2, DELTA, {1}));
scc108->add_rule(new parallel_copy(rel__split__at__input__2__1__2, rel___dollorinter__head27__4__1__2__3__4, DELTA, {3, 0}));
scc108->add_rule(new parallel_join(rel___dollorlst__append__input__2__1__2, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified21__3__2__3, DELTA, {4, 2}));
scc108->add_rule(new parallel_copy_generate(rel___dollorinter__head11__4__1__2__3__4, rel___dollorhead__splice2__3__, DELTA, [](const u64* const data, u64* const output) -> int{
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
        return std::make_tuple(data, output + 4);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 4;
      return tuples_count;
    }));
scc108->add_rule(new parallel_copy(rel__eval__3__1__2__3, rel___dollorhead__stratified19__4__1__2__3__4, DELTA, {0, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule26__inter__body3__5__1__2__3__4__5, rel__varparam__1__0, FULL, rel___dollorrule26__inter__body2__5__1, DELTA, {1, 3, 4, 5, 6}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified12__9__3__8, rel___dollorhead__stratified12__9__1__2__3__4__5__6__7__8__9, DELTA, {2, 7, 9, 0, 1, 3, 4, 5, 6, 8}));
scc108->add_rule(new parallel_join(rel___dollorrule2__inter__body__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel__split__at__input__2__2, DELTA, {2, 1, 4, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorrule25__inter__body3__6__3, rel___dollorrule25__inter__body3__6__1__2__3__4__5__6, DELTA, {2, 6, 0, 1, 3, 4, 5}));
scc108->add_rule(new parallel_join(rel__apply__3__1__2__3, rel__fixedarg__1__1, FULL, rel___dollorinter__head9__3__2, DELTA, {4, 1, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule18__inter__body__4__1__2__3__4, rel__ret__2__2, FULL, rel__if__k__4__0, DELTA, {5, 3, 6, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule39__inter__body4__5__1__2__3__4__5, rel__addr__1__1, DELTA, rel___dollorrule39__inter__body3__4__4, FULL, {1, 0, 3, 4, 5}));
scc108->add_rule(new parallel_acopy(rel___dollorrule41__inter__body3__8__1, rel___dollorrule41__inter__body3__8__1__2__3__4__5__6__7__8, DELTA, {0, 8, 1, 2, 3, 4, 5, 6, 7}));
scc108->add_rule(new parallel_join(rel___dollorinter__head24__3__1__2__3, rel___dollorlst__append__2__1, DELTA, rel___dollorbir__sub19__3__1, DELTA, {5, 4, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified58__4__1__2__3__4, rel___dollorlst__2__1__2, FULL, rel___dollorrule39__inter__body1__5__1__5, DELTA, {6, 5, 4, 2}));
scc108->add_rule(new parallel_join(rel___dollorinter__head52__3__1__2__3, rel__ret__2__2, DELTA, rel___dollorrule16__inter__body__3__3, DELTA, {4, 5, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule14__inter__body3__4__1__2__3__4, rel__store__2__1, FULL, rel___dollorrule14__inter__body2__4__2, DELTA, {4, 2, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub19__3__1__2__3, rel___dollorlst__append__input__2__1__2, DELTA, rel___dollorinter__head21__4__3__4, FULL, {2, 5, 4}));
scc108->add_rule(new parallel_join(rel___dollorrule41__inter__body3__8__1__2__3__4__5__6__7__8, rel__addr__1__1, DELTA, rel___dollorinter__head4__7__4, FULL, {3, 1, 4, 5, 0, 6, 7, 8}));
scc108->add_rule(new parallel_join(rel___dollorrule14__inter__body3__4__1__2__3__4, rel__store__2__1, DELTA, rel___dollorrule14__inter__body2__4__2, DELTA, {4, 2, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified36__5__1__2__3__4__5, rel___dollornil__1__1, FULL, rel___dollorinter__head32__5__5, DELTA, {3, 4, 5, 6, 1}));
scc108->add_rule(new parallel_copy(rel__app__2__1__2, rel___dollorhead__stratified28__4__1__2__3__4, DELTA, {2, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorbir__sub4__5__1, rel___dollorbir__sub4__5__1__2__3__4__5, DELTA, {0, 5, 1, 2, 3, 4}));
scc108->add_rule(new parallel_join(rel___dollorrule27__inter__body__4__1__2__3__4, rel__clo__2__1, DELTA, rel__lambda__2__0, FULL, {4, 1, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorinter__head25__4__1__2__3__4, rel___dollorbir__sub13__3__1, FULL, rel__split__at__3__1, DELTA, {6, 3, 2, 5}));
scc108->add_rule(new parallel_copy(rel__ret__2__1__2, rel___dollorhead__stratified44__3__1__2__3, DELTA, {1, 0}));
scc108->add_rule(new parallel_join(rel___dollorrule13__inter__body2__4__1__2__3__4, rel___dollorrule13__inter__body1__4__1__4, DELTA, rel___dollorbir__sub9__4__1__2, DELTA, {7, 4, 3, 6}));
scc108->add_rule(new parallel_join(rel___dollorinter__head39__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorinter__head38__3__3, FULL, {3, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule43__inter__body__4__1__2__3__4, rel__app__2__1__2, FULL, rel___dollorhead__stratified28__4__3__2, DELTA, {2, 4, 5, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule16__inter__body__3__1__2__3, rel__store__2__1, FULL, rel__applfk__2__1, DELTA, {2, 4, 3}));
scc108->add_rule(new parallel_copy(rel__applak__3__1__2__3, rel___dollorinter__head18__4__1__2__3__4, DELTA, {1, 0, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorrule42__inter__body3__4__2, rel___dollorrule42__inter__body3__4__1__2__3__4, DELTA, {1, 4, 0, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule27__inter__body2__2__1__2, rel__list__of__1__0, DELTA, rel___dollorrule27__inter__body1__2__1, FULL, {1, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule40__inter__body3__5__1__2__3__4__5, rel__addr__1__1, DELTA, rel___dollorinter__head2__4__1, FULL, {0, 1, 3, 4, 5}));
scc108->add_rule(new parallel_acopy(rel___dollorrule24__inter__body2__4__1, rel___dollorrule24__inter__body2__4__1__2__3__4, DELTA, {0, 4, 1, 2, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head34__5__1__2, rel___dollorinter__head34__5__1__2__3__4__5, DELTA, {0, 1, 5, 2, 3, 4}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified15__6__1__2__3__4__5__6, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified14__7__7__2, FULL, {4, 5, 6, 7, 8, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified54__6__5__6, rel___dollorhead__stratified54__6__1__2__3__4__5__6, DELTA, {4, 5, 6, 0, 1, 2, 3}));
scc108->add_rule(new parallel_copy(rel__env__set__3__1__2__3, rel___dollorhead__stratified51__7__1__2__3__4__5__6__7, DELTA, {3, 0, 6}));
scc108->add_rule(new parallel_join(rel___dollorhead__splice1__9__1__2__3__4__5__6__7__8__9, rel___dollorlst__append__2__1, FULL, rel___dollorrule21__inter__body3__8__6, DELTA, {10, 2, 6, 9, 7, 5, 8, 4, 5}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head49__6__4, rel___dollorinter__head49__6__1__2__3__4__5__6, DELTA, {3, 6, 0, 1, 2, 4, 5}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub20__3__1__2__3, rel___dollorlst__split__input__1__1, FULL, rel___dollorinter__head30__3__3, DELTA, {1, 3, 4}));
scc108->add_rule(new parallel_join(rel___dollorinter__head26__4__1__2__3__4, rel___dollorlst__2__0, FULL, rel___dollorrule30__inter__body1__3__2, DELTA, {2, 4, 1, 5}));
scc108->add_rule(new parallel_join(rel___dollorrule4__inter__body1__3__1__2__3, rel__ref__1__1, FULL, rel__env__map__3__2, DELTA, {1, 3, 4}));
scc108->add_rule(new parallel_copy(rel__define__3__1__2__3, rel___dollorhead__stratified59__4__1__2__3__4, DELTA, {0, 3, 2}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub4__5__1__2__3__4__5, rel__do__ext__all__2__1__2, DELTA, rel___dollorinter__head40__5__5__1, DELTA, {2, 1, 6, 5, 4}));
scc108->add_rule(new parallel_acopy(rel___dollorrule33__inter__body1__2__2, rel___dollorrule33__inter__body1__2__1__2, DELTA, {1, 2, 0}));
scc108->add_rule(new parallel_acopy(rel___dollorbir__sub1__9__1__2, rel___dollorbir__sub1__9__1__2__3__4__5__6__7__8__9, DELTA, {0, 1, 9, 2, 3, 4, 5, 6, 7, 8}));
scc108->add_rule(new parallel_join(rel___dollorrule40__inter__body1__5__1__2__3__4__5, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified5__6__3__5, DELTA, {7, 2, 4, 6, 5}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified32__3__1__2__3, rel___dollornil__1__1, DELTA, rel___dollorrule21__inter__body8__3__2, DELTA, {3, 4, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule13__inter__body8__3__2, rel___dollorrule13__inter__body8__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified8__7__1__2__3__4__5__6__7, rel___dollornil__1__1, DELTA, rel___dollorinter__head3__7__6, DELTA, {3, 4, 5, 6, 7, 8, 1}));
scc108->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorinter__head39__3__1__2__3, DELTA, {2, 0}));
scc108->add_rule(new parallel_join(rel___dollorrule22__inter__body5__3__1__2__3, rel___dollorlst__2__0__1, DELTA, rel___dollorrule22__inter__body4__4__4__2, DELTA, {5, 2, 4}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub8__2__1__2, rel__do__ext__all__2__1__2, DELTA, rel___dollorhead__stratified48__3__3__1, DELTA, {2, 4}));
scc108->add_rule(new parallel_copy(rel__ret__2__1__2, rel___dollorinter__head39__3__1__2__3, DELTA, {2, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head33__4__2__4, rel___dollorinter__head33__4__1__2__3__4, DELTA, {1, 3, 4, 0, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorbir__sub17__2__1, rel___dollorbir__sub17__2__1__2, DELTA, {0, 2, 1}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified16__5__1__2__3__4__5, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified15__6__4__6, FULL, {4, 5, 6, 7, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule32__inter__body__2__1__2, rel__do__var__prop__all__h__3__1__2__3, DELTA, rel___dollorinter__head45__5__4__2__3, DELTA, {5, 6}));
scc108->add_rule(new parallel_join(rel__ext__all__2__1__2, rel__ext__all__2__1, FULL, rel___dollorbir__sub8__2__1, DELTA, {4, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule32__inter__body1__4__1__2__3__4, rel___dollorlst__2__0, FULL, rel__do__var__prop__all__h__3__2, DELTA, {2, 5, 4, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified2__5__3__5, rel___dollorhead__stratified2__5__1__2__3__4__5, DELTA, {2, 4, 5, 0, 1, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified21__3__1__2__3, rel___dollornil__1__1, DELTA, rel___dollorrule22__inter__body1__3__2, DELTA, {3, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule33__inter__body1__2__1__2, rel___dollorrule33__inter__body__1__1, DELTA, rel__do__var__prop__all__h__3__2, DELTA, {4, 3}));
scc108->add_rule(new parallel_join(rel___dollorlst__split__3__1__2__3, rel___dollornil__1__1, DELTA, rel___dollorinter__head28__3__3, DELTA, {3, 1, 4}));
scc108->add_rule(new parallel_join(rel___dollorrule6__inter__body__4__1__2__3__4, rel__app__2__0, FULL, rel__eval__3__1, DELTA, {2, 4, 5, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head44__3__3__1, rel___dollorinter__head44__3__1__2__3, DELTA, {2, 0, 3, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule25__inter__body5__4__1__2__3__4, rel__clo__2__0, DELTA, rel___dollorrule25__inter__body4__3__2, DELTA, {1, 4, 5, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorrule39__inter__body2__7__4__3, rel___dollorrule39__inter__body2__7__1__2__3__4__5__6__7, DELTA, {3, 2, 7, 0, 1, 4, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorlst__append__2__1__2, rel___dollorlst__2__1__2, DELTA, rel___dollorinter__head24__3__1__3, FULL, {4, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified51__7__1__2__3__4__5__6__7, rel__addr__1__1, FULL, rel___dollorrule25__inter__body3__6__3, DELTA, {0, 3, 5, 7, 6, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body11__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel___dollorrule21__inter__body10__3__1, FULL, {2, 4, 5, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule27__inter__body4__5__1__2__3__4__5, rel___dollorrule27__inter__body2__2__2, DELTA, rel___dollorrule27__inter__body3__5__2, FULL, {2, 5, 6, 4, 7}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub6__5__1__2__3__4__5, rel__do__ext__all__2__1__2, DELTA, rel___dollorinter__head10__5__5__1, FULL, {2, 1, 4, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub13__3__1__2__3, rel__split__at__input__2__1__2, DELTA, rel___dollorinter__head27__4__4__1, FULL, {2, 4, 5}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified46__2__1__2, rel__addr__1__1, FULL, rel___dollorrule32__inter__body__2__1, DELTA, {3, 1}));
scc108->add_rule(new parallel_join(rel__store__2__1__2, rel__define__3__1__2__3, FULL, rel___dollorhead__stratified29__4__1__4__3, DELTA, {5, 3}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub15__4__1__2__3__4, rel__length__2__1, DELTA, rel___dollorbir__sub14__4__1, FULL, {4, 5, 6, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified17__4__1__2__3__4, rel__app__2__1__2, FULL, rel___dollorhead__stratified16__5__2__5, DELTA, {4, 5, 6, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorrule30__inter__body1__3__2, rel___dollorrule30__inter__body1__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc108->add_rule(new parallel_join(rel___dollorinter__head53__5__1__2__3__4__5, rel__ext__all__2__1, FULL, rel___dollorbir__sub5__5__1, DELTA, {4, 7, 5, 2, 6}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body8__3__1__2__3, rel___dollorbir__sub__8__1__2__3__4__5__6__7__8, DELTA, rel___dollorinter__head22__9__3__5__6__7__4__2__8__1, FULL, {0, 10, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body8__3__1__2__3, rel___dollorbir__sub__8__1__2__3__4__5__6__7__8, DELTA, rel___dollorinter__head22__9__3__5__6__7__4__2__8__1, DELTA, {0, 10, 1}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified7__4__1__2__3__4, rel__fixedparam__1__1, DELTA, rel___dollorrule40__inter__body__4__1, DELTA, {4, 5, 1, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule24__inter__body2__4__1__2__3__4, rel__fixedarg__1__0, FULL, rel___dollorrule24__inter__body1__4__3, DELTA, {3, 1, 4, 5}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified44__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorrule5__inter__body__3__3, DELTA, {4, 1, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule26__inter__body2__5__1__2__3__4__5, rel__lambda__2__0, DELTA, rel___dollorrule26__inter__body1__4__2, FULL, {1, 2, 5, 6, 4}));
scc108->add_rule(new parallel_copy(rel__env__set__3__1__2__3, rel___dollorhead__stratified24__7__1__2__3__4__5__6__7, DELTA, {6, 1, 4}));
scc108->add_rule(new parallel_acopy(rel___dollorrule12__inter__body5__6__, rel___dollorrule12__inter__body5__6__1__2__3__4__5__6, DELTA, {6, 0, 1, 2, 3, 4, 5}));
scc108->add_rule(new parallel_join(rel___dollorrule30__inter__body1__3__1__2__3, rel___dollorlst__2__0, DELTA, rel__do__fixed__prop__all__2__2, DELTA, {2, 4, 1}));
scc108->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorhead__stratified60__6__1__2__3__4__5__6, DELTA, {5, 1}));
scc108->add_rule(new parallel_join(rel__store__2__1__2, rel__define__3__1__2__3, FULL, rel___dollorhead__stratified3__4__1__3__4, DELTA, {5, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified28__4__1__2__3__4, rel__addr__1__1, DELTA, rel___dollorrule43__inter__body2__3__3, DELTA, {0, 4, 3, 1}));
scc108->add_rule(new parallel_copy(rel__state__1__1, rel___dollorinter__head47__2__1__2, DELTA, {1}));
scc108->add_rule(new parallel_join(rel___dollorrule20__inter__body__5__1__2__3__4__5, rel__ret__2__2, DELTA, rel__if__k__4__0, FULL, {5, 3, 6, 2, 4}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified17__4__1__3__4, rel___dollorhead__stratified17__4__1__2__3__4, DELTA, {0, 2, 3, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorinter__head39__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorinter__head38__3__3, DELTA, {3, 4, 1}));
scc108->add_rule(new parallel_acopy(rel__store__flow__2__1, rel__store__flow__2__1__2, DELTA, {0, 2, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule43__inter__body2__3__3, rel___dollorrule43__inter__body2__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc108->add_rule(new parallel_join(rel___dollorlst__append__input__2__1__2, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified55__3__2__3, DELTA, {4, 2}));
scc108->add_rule(new parallel_join(rel__do__fixed__prop__all__2__1__2, rel___dollorrule22__inter__body6__1__1, DELTA, rel___dollorrule22__inter__body7__3__2, FULL, {3, 4}));
scc108->add_rule(new parallel_acopy(rel___dollorrule40__inter__body5__6__5, rel___dollorrule40__inter__body5__6__1__2__3__4__5__6, DELTA, {4, 6, 0, 1, 2, 3, 5}));
scc108->add_rule(new parallel_acopy(rel___dollorrule4__inter__body__5__1__4, rel___dollorrule4__inter__body__5__1__2__3__4__5, DELTA, {0, 3, 5, 1, 2, 4}));
scc108->add_rule(new parallel_join(rel___dollorrule39__inter__body5__6__1__2__3__4__5__6, rel__ref__1__1, FULL, rel___dollorrule39__inter__body4__5__5, DELTA, {3, 4, 5, 1, 6, 0}));
scc108->add_rule(new parallel_join(rel___dollorrule24__inter__body3__5__1__2__3__4__5, rel__lambda__2__0, FULL, rel___dollorrule24__inter__body2__4__1, DELTA, {4, 2, 5, 1, 6}));
scc108->add_rule(new parallel_join(rel___dollorrule39__inter__body4__5__1__2__3__4__5, rel__addr__1__1, FULL, rel___dollorrule39__inter__body3__4__4, DELTA, {1, 0, 3, 4, 5}));
scc108->add_rule(new parallel_join(rel___dollorinter__head53__5__1__2__3__4__5, rel__ext__all__2__1, DELTA, rel___dollorbir__sub5__5__1, FULL, {4, 7, 5, 2, 6}));
scc108->add_rule(new parallel_join(rel___dollorrule14__inter__body3__4__1__2__3__4, rel__store__2__1, DELTA, rel___dollorrule14__inter__body2__4__2, FULL, {4, 2, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorinter__head38__3__1__2__3, rel__quote__1__0, DELTA, rel__eval__3__1, DELTA, {1, 4, 0}));
scc108->add_rule(new parallel_copy(rel__store__flow__2__1__2, rel___dollorhead__stratified60__6__1__2__3__4__5__6, DELTA, {3, 4}));
scc108->add_rule(new parallel_join(rel___dollorrule44__inter__body1__7__1__2__3__4__5__6__7, rel__addr__1__1, DELTA, rel___dollorrule44__inter__body__6__6, DELTA, {7, 1, 3, 4, 5, 6, 0}));
scc108->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__letk__6__1__2__3__4__5__6, FULL, rel___dollorinter__head42__7__7__3__6__4__2__5, DELTA, {8, 4, 6}));
scc108->add_rule(new parallel_acopy(rel___dollorrule30__inter__body__2__1, rel___dollorrule30__inter__body__2__1__2, DELTA, {0, 2, 1}));
scc108->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified4__7__1__2__3__4__5__6__7, DELTA, {2, 5}));
scc108->add_rule(new parallel_join(rel__store__2__1__2, rel__define__3__1__2__3, DELTA, rel___dollorhead__stratified3__4__1__3__4, FULL, {5, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule41__inter__body2__9__1__2__3__4__5__6__7__8__9, rel__quote__1__1, FULL, rel___dollorrule41__inter__body1__9__7, DELTA, {3, 4, 5, 6, 7, 8, 9, 10, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule9__inter__body2__6__, rel___dollorrule9__inter__body2__6__1__2__3__4__5__6, DELTA, {6, 0, 1, 2, 3, 4, 5}));
scc108->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified5__6__1__2__3__4__5__6, DELTA, {2, 4}));
scc108->add_rule(new parallel_acopy(rel___dollorrule44__inter__body__6__6, rel___dollorrule44__inter__body__6__1__2__3__4__5__6, DELTA, {5, 6, 0, 1, 2, 3, 4}));
scc108->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head15__3__1__2__3, DELTA, {1}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body1__4__1__2__3__4, rel___dollorlst__append__input__2__2, DELTA, rel___dollorlst__2__0, DELTA, {2, 4, 1, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorbir__sub10__3__1, rel___dollorbir__sub10__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc108->add_rule(new parallel_copy(rel__letk__6__1__2__3__4__5__6, rel___dollorhead__stratified9__7__1__2__3__4__5__6__7, DELTA, {4, 6, 5, 2, 1, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body8__3__1__2__3, rel___dollorbir__sub__8__1__2__3__4__5__6__7__8, FULL, rel___dollorinter__head22__9__3__5__6__7__4__2__8__1, DELTA, {0, 10, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorlst__append__2__1, rel___dollorlst__append__2__1__2, DELTA, {0, 2, 1}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified18__3__1__2__3, rel___dollornil__1__1, DELTA, rel___dollorrule12__inter__body4__3__2, DELTA, {3, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified44__3__1__2__3, rel__addr__1__1, DELTA, rel___dollorrule5__inter__body__3__3, FULL, {4, 1, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule42__inter__body__5__1__2__3__4__5, rel__quote__1__1, DELTA, rel___dollorhead__stratified__5__3, FULL, {6, 3, 5, 1, 4}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified5__6__1__2__3__4__5__6, rel___dollorlst__2__1__2, DELTA, rel___dollorrule40__inter__body2__7__7__2, FULL, {4, 8, 6, 7, 5, 2}));
scc108->add_rule(new parallel_copy_generate(rel___dollorrule12__inter__body5__6__1__2__3__4__5__6, rel___dollorhead__splice3__7__4__7, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == data[1];
        if (! compatible) return state;

        head_tuple[0] = data[0];
head_tuple[1] = data[3];
head_tuple[2] = data[5];
head_tuple[3] = data[6];
head_tuple[4] = data[7];
head_tuple[5] = data[4];
        return std::make_tuple(data, output + 6);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 6;
      return tuples_count;
    }));
scc108->add_rule(new parallel_join(rel__split__at__3__1__2__3, rel___dollorlst__2__1__2, FULL, rel___dollorinter__head25__4__3__4, DELTA, {5, 2, 4}));
scc108->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified31__3__1__2__3, DELTA, {1, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorrule27__inter__body3__5__2, rel___dollorrule27__inter__body3__5__1__2__3__4__5, DELTA, {1, 5, 0, 2, 3, 4}));
scc108->add_rule(new parallel_copy_generate(rel___dollorinter__head3__7__1__2__3__4__5__6__7, rel___dollorrule9__inter__body2__6__, DELTA, [](const u64* const data, u64* const output) -> int{
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
scc108->add_rule(new parallel_join(rel___dollorrule12__inter__body3__6__1__2__3__4__5__6, rel___dollorrule12__inter__body1__3__1__3, FULL, rel___dollorrule12__inter__body2__7__5__1, DELTA, {6, 5, 7, 3, 8, 9}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body6__3__1__2__3, rel___dollorbir__sub1__9__1__2__3__4__5__6__7__8__9, DELTA, rel___dollorinter__head19__10__7__9__6__3__5__4__2__8__1, FULL, {0, 1, 11}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body6__3__1__2__3, rel___dollorbir__sub1__9__1__2__3__4__5__6__7__8__9, DELTA, rel___dollorinter__head19__10__7__9__6__3__5__4__2__8__1, DELTA, {0, 1, 11}));
scc108->add_rule(new parallel_join(rel___dollorrule17__inter__body__3__1__2__3, rel__store__2__1, FULL, rel__ret__2__2, DELTA, {4, 2, 0}));
scc108->add_rule(new parallel_copy_generate(rel___dollorinter__head49__6__1__2__3__4__5__6, rel___dollorrule26__inter__body3__5__, DELTA, [](const u64* const data, u64* const output) -> int{
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
head_tuple[5] = data[5];
        return std::make_tuple(data, output + 6);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 6;
      return tuples_count;
    }));
scc108->add_rule(new parallel_join(rel___dollorrule41__inter__body5__8__1__2__3__4__5__6__7__8, rel__int__1__1, FULL, rel___dollorrule41__inter__body4__8__6, DELTA, {3, 1, 4, 5, 6, 7, 8, 9}));
scc108->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head13__2__1__2, DELTA, {1}));
scc108->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorhead__stratified37__4__1__2__3__4, DELTA, {3, 1}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified3__4__1__2__3__4, rel__app__2__1__2, DELTA, rel___dollorhead__stratified2__5__3__5, FULL, {4, 5, 6, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule24__inter__body__3__1__2__3, rel__do__fixed__prop__all__2__1__2, DELTA, rel___dollorinter__head37__5__1__3, DELTA, {4, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorrule26__inter__body2__5__1__2__3__4__5, rel__lambda__2__0, DELTA, rel___dollorrule26__inter__body1__4__2, DELTA, {1, 2, 5, 6, 4}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head38__3__3, rel___dollorinter__head38__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc108->add_rule(new parallel_copy(rel__app__2__1__2, rel___dollorhead__stratified13__8__1__2__3__4__5__6__7__8, DELTA, {3, 7}));
scc108->add_rule(new parallel_copy_generate(rel__eval__3__1__2__3, rel___dollorrule18__inter__body2__4__2, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == s2d("t");
        if (! compatible) return state;

        head_tuple[0] = data[3];
head_tuple[1] = data[2];
head_tuple[2] = data[4];
        return std::make_tuple(data, output + 3);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 3;
      return tuples_count;
    }));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified15__6__1__2__3__4__5__6, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified14__7__7__2, DELTA, {4, 5, 6, 7, 8, 2}));
scc108->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__letk__6__1__2__3__4__5__6, DELTA, rel___dollorinter__head42__7__7__3__6__4__2__5, FULL, {8, 4, 6}));
scc108->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__letk__6__1__2__3__4__5__6, DELTA, rel___dollorinter__head42__7__7__3__6__4__2__5, DELTA, {8, 4, 6}));
scc108->add_rule(new parallel_join(rel___dollorrule26__inter__body4__5__1__2__3__4__5, rel__addr__1__1, DELTA, rel___dollorinter__head53__5__1, DELTA, {3, 4, 1, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorrule24__inter__body__3__1__2__3, rel__do__fixed__prop__all__2__1__2, DELTA, rel___dollorinter__head37__5__1__3, FULL, {4, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorrule20__inter__body__5__1__2__3__4__5, rel__ret__2__2, FULL, rel__if__k__4__0, DELTA, {5, 3, 6, 2, 4}));
scc108->add_rule(new parallel_join(rel___dollorrule32__inter__body__2__1__2, rel__do__var__prop__all__h__3__1__2__3, DELTA, rel___dollorinter__head45__5__4__2__3, FULL, {5, 6}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified31__3__1__2__3, rel___dollornil__1__1, DELTA, rel___dollorrule21__inter__body6__3__3, DELTA, {3, 4, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorlst__split__input__1__, rel___dollorlst__split__input__1__1, DELTA, {1, 0}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified3__4__1__3__4, rel___dollorhead__stratified3__4__1__2__3__4, DELTA, {0, 2, 3, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified33__2__1__2, rel__addr__1__1, DELTA, rel___dollorrule30__inter__body__2__1, FULL, {3, 1}));
scc108->add_rule(new parallel_copy(rel__kaddr__1__1, rel___dollorinter__head34__5__1__2__3__4__5, DELTA, {2}));
scc108->add_rule(new parallel_join(rel___dollorrule12__inter__body4__3__1__2__3, rel___dollorbir__sub7__6__1__2__3__4__5__6, FULL, rel___dollorinter__head6__7__2__7__3__1__4__5, DELTA, {0, 8, 1}));
scc108->add_rule(new parallel_join(rel___dollorinter__head8__6__1__2__3__4__5__6, rel__ext__all__2__1, FULL, rel___dollorbir__sub2__6__1, DELTA, {5, 6, 4, 7, 8, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule13__inter__body6__3__1__2__3, rel___dollorrule13__inter__body5__1__1, DELTA, rel__appk__4__2, DELTA, {3, 5, 2}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub5__5__1__2__3__4__5, rel__do__ext__all__2__1__2, FULL, rel___dollorhead__stratified54__6__5__6, DELTA, {2, 4, 6, 7, 5}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified37__4__1__2__3__4, rel__kaddr__1__1, DELTA, rel___dollorrule27__inter__body5__3__1, DELTA, {0, 3, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub18__2__1__2, rel__length__2__1, DELTA, rel___dollorbir__sub17__2__1, FULL, {4, 2}));
scc108->add_rule(new parallel_join(rel__apply__3__1__2__3, rel__vararg__1__1, DELTA, rel___dollorinter__head52__3__3, FULL, {3, 1, 4}));
scc108->add_rule(new parallel_copy(rel__store__flow__2__1__2, rel___dollorhead__stratified33__2__1__2, DELTA, {0, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule40__inter__body4__5__5, rel___dollorrule40__inter__body4__5__1__2__3__4__5, DELTA, {4, 5, 0, 1, 2, 3}));
scc108->add_rule(new parallel_acopy(rel__letk__6__4, rel__letk__6__1__2__3__4__5__6, DELTA, {3, 6, 0, 1, 2, 4, 5}));
scc108->add_rule(new parallel_join(rel___dollorrule43__inter__body__4__1__2__3__4, rel__app__2__1__2, DELTA, rel___dollorhead__stratified28__4__3__2, FULL, {2, 4, 5, 1}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified46__2__1__2, rel__addr__1__1, DELTA, rel___dollorrule32__inter__body__2__1, DELTA, {3, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified21__3__2__3, rel___dollorhead__stratified21__3__1__2__3, DELTA, {1, 2, 3, 0}));
scc108->add_rule(new parallel_acopy(rel__fixedparam__1__0, rel__fixedparam__1__1, DELTA, {1, 0}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head20__3__1, rel___dollorinter__head20__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorrule25__inter__body__6__4__6, rel___dollorrule25__inter__body__6__1__2__3__4__5__6, DELTA, {3, 5, 6, 0, 1, 2, 4}));
scc108->add_rule(new parallel_acopy(rel___dollorlst__2__0, rel___dollorlst__2__1__2, DELTA, {2, 0, 1}));
scc108->add_rule(new parallel_join(rel___dollorinter__head43__4__1__2__3__4, rel__saddr__1__0, FULL, rel___dollorrule20__inter__body__5__4, DELTA, {3, 4, 5, 6}));
scc108->add_rule(new parallel_join(rel__apply__3__1__2__3, rel__fixedarg__1__1, FULL, rel___dollorinter__head20__3__1, DELTA, {3, 1, 4}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified23__9__9__3__7, rel___dollorhead__stratified23__9__1__2__3__4__5__6__7__8__9, DELTA, {8, 2, 6, 9, 0, 1, 3, 4, 5, 7}));
scc108->add_rule(new parallel_copy(rel__app__2__1__2, rel___dollorhead__stratified16__5__1__2__3__4__5, DELTA, {1, 4}));
scc108->add_rule(new parallel_join(rel__apply__3__1__2__3, rel__vararg__1__1, DELTA, rel___dollorinter__head52__3__3, DELTA, {3, 1, 4}));
scc108->add_rule(new parallel_join(rel___dollorlst__append__input__2__1__2, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified18__3__2__3, DELTA, {4, 2}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub17__2__1__2, rel__length__input__1__1, DELTA, rel___dollorinter__head36__2__1, DELTA, {1, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule16__inter__body__3__1__2__3, rel__store__2__1, DELTA, rel__applfk__2__1, FULL, {2, 4, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule44__inter__body3__9__1__2__3__4__5__6__7__8__9, rel__addr__1__1, FULL, rel___dollorrule44__inter__body2__8__5, DELTA, {3, 4, 5, 6, 0, 7, 8, 9, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorlst__append__input__2__0, rel___dollorlst__append__input__2__1__2, DELTA, {2, 0, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule25__inter__body1__4__1__2__3__4, rel__store__2__1__2, DELTA, rel___dollorrule25__inter__body__6__4__6, DELTA, {4, 5, 6, 7}));
scc108->add_rule(new parallel_join(rel___dollorlst__split__3__1__2__3, rel___dollornil__1__1, FULL, rel___dollorinter__head28__3__3, DELTA, {3, 1, 4}));
scc108->add_rule(new parallel_acopy(rel__vararg__1__0, rel__vararg__1__1, DELTA, {1, 0}));
scc108->add_rule(new parallel_acopy(rel___dollorrule1__inter__body2__2__1, rel___dollorrule1__inter__body2__2__1__2, DELTA, {0, 2, 1}));
scc108->add_rule(new parallel_copy(rel__clo__2__1__2, rel___dollorinter__head44__3__1__2__3, DELTA, {2, 0}));
scc108->add_rule(new parallel_copy(rel__fixedparam__1__1, rel___dollorhead__stratified58__4__1__2__3__4, DELTA, {2}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__splice4__4__, rel___dollorhead__splice4__4__1__2__3__4, DELTA, {4, 0, 1, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body10__3__1__2__3, rel___dollorlst__append__2__1, FULL, rel___dollorlst__append__input__2__0, DELTA, {4, 3, 2}));
scc108->add_rule(new parallel_copy(rel__split__at__end__input__2__1__2, rel___dollorbir__sub11__4__1__2__3__4, DELTA, {1, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorrule40__inter__body3__5__3, rel___dollorrule40__inter__body3__5__1__2__3__4__5, DELTA, {2, 5, 0, 1, 3, 4}));
scc108->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__if__k__4__1__2__3__4, DELTA, rel___dollorinter__head23__5__3__5__2__4, DELTA, {6, 2, 4}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub17__2__1__2, rel__length__input__1__1, FULL, rel___dollorinter__head36__2__1, DELTA, {1, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified30__4__1__2__3__4, rel__lambda__2__1__2, DELTA, rel___dollorinter__head17__5__5__1, DELTA, {4, 5, 6, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule14__inter__body1__4__1__2__3__4, rel___dollornil__1__0, DELTA, rel___dollorrule14__inter__body__3__2, FULL, {3, 0, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule39__inter__body3__4__1__2__3__4, rel___dollornil__1__1, DELTA, rel___dollorinter__head51__4__4, FULL, {1, 3, 4, 5}));
scc108->add_rule(new parallel_copy(rel__do__ext__all__2__1__2, rel___dollorinter__head40__5__1__2__3__4__5, DELTA, {4, 0}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head48__5__3, rel___dollorinter__head48__5__1__2__3__4__5, DELTA, {2, 5, 0, 1, 3, 4}));
scc108->add_rule(new parallel_join(rel___dollorrule40__inter__body2__7__1__2__3__4__5__6__7, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified4__7__4__6, DELTA, {4, 1, 2, 7, 8, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorinter__head39__3__1__2__3, rel__addr__1__1, FULL, rel___dollorinter__head38__3__3, DELTA, {3, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body11__4__1__2__3__4, rel___dollorlst__2__0, FULL, rel___dollorrule21__inter__body10__3__1, DELTA, {2, 4, 5, 1}));
scc108->add_rule(new parallel_join(rel__ext__all__2__1__2, rel___dollorrule29__inter__body__1__1, FULL, rel__do__ext__all__2__2, DELTA, {2, 3}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub19__3__1__2__3, rel___dollorlst__append__input__2__1__2, FULL, rel___dollorinter__head21__4__3__4, DELTA, {2, 5, 4}));
scc108->add_rule(new parallel_join(rel___dollorinter__head38__3__1__2__3, rel__quote__1__0, DELTA, rel__eval__3__1, FULL, {1, 4, 0}));
scc108->add_rule(new parallel_copy_generate(rel___dollorinter__head__3__1__2__3, rel___dollorrule4__inter__body__5__1__4, DELTA, [](const u64* const data, u64* const output) -> int{
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
scc108->add_rule(new parallel_join(rel___dollorrule24__inter__body1__4__1__2__3__4, rel__clo__2__0, DELTA, rel__apply__3__1, FULL, {1, 5, 4, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule16__inter__body__3__1__2__3, rel__store__2__1, DELTA, rel__applfk__2__1, DELTA, {2, 4, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__splice1__9__6__9, rel___dollorhead__splice1__9__1__2__3__4__5__6__7__8__9, DELTA, {5, 8, 9, 0, 1, 2, 3, 4, 6, 7}));
scc108->add_rule(new parallel_join(rel___dollorrule25__inter__body6__5__1__2__3__4__5, rel__lambda__2__0, DELTA, rel___dollorrule25__inter__body5__4__1, DELTA, {4, 2, 5, 6, 1}));
scc108->add_rule(new parallel_copy(rel__letk__6__1__2__3__4__5__6, rel___dollorinter__head42__7__1__2__3__4__5__6__7, DELTA, {6, 2, 5, 3, 1, 4}));
scc108->add_rule(new parallel_join(rel___dollorrule13__inter__body1__4__1__2__3__4, rel___dollorlst__2__0, FULL, rel___dollorrule13__inter__body__3__2, DELTA, {4, 2, 5, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule26__inter__body2__5__1, rel___dollorrule26__inter__body2__5__1__2__3__4__5, DELTA, {0, 5, 1, 2, 3, 4}));
scc108->add_rule(new parallel_join(rel___dollorrule26__inter__body__3__1__2__3, rel__vararg__1__0, DELTA, rel__apply__3__2, DELTA, {4, 1, 3}));
scc108->add_rule(new parallel_copy(rel__do__fixed__prop__all__2__1__2, rel___dollorinter__head26__4__1__2__3__4, DELTA, {0, 1}));
scc108->add_rule(new parallel_copy(rel__eval__3__1__2__3, rel___dollorhead__stratified37__4__1__2__3__4, DELTA, {0, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule23__inter__body__4__1__2__3__4, rel__define__3__0, DELTA, rel__apply__3__1, DELTA, {3, 5, 6, 2}));
scc108->add_rule(new parallel_copy(rel___dollorbir__sub3__3__1__2__3, rel___dollorinter__head11__4__1__2__3__4, DELTA, {1, 3, 0}));
scc108->add_rule(new parallel_join(rel___dollorrule27__inter__body1__2__1__2, rel__vararg__1__1, FULL, rel__store__2__1, DELTA, {3, 1}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified10__9__1__2__3__4__5__6__7__8__9, rel__int__1__1, FULL, rel___dollorrule41__inter__body8__9__8, DELTA, {5, 10, 4, 1, 3, 6, 8, 7, 9}));
scc108->add_rule(new parallel_join(rel___dollorlst__append__2__1__2, rel___dollorrule7__inter__body__1__1, FULL, rel___dollorlst__append__input__2__1, DELTA, {2, 3}));
scc108->add_rule(new parallel_acopy(rel___dollornil__1__0, rel___dollornil__1__1, DELTA, {1, 0}));
scc108->add_rule(new parallel_join(rel___dollorrule44__inter__body__6__1__2__3__4__5__6, rel__addr__1__1, DELTA, rel___dollorinter__head12__5__3, FULL, {1, 3, 4, 0, 5, 6}));
scc108->add_rule(new parallel_acopy(rel___dollorrule22__inter__body7__3__2, rel___dollorrule22__inter__body7__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc108->add_rule(new parallel_join(rel__do__var__prop__all__h__3__1__2__3, rel___dollorlst__2__0, DELTA, rel___dollorrule31__inter__body__2__1, DELTA, {4, 0, 0}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body10__3__1__2__3, rel___dollorlst__append__2__1, DELTA, rel___dollorlst__append__input__2__0, DELTA, {4, 3, 2}));
scc108->add_rule(new parallel_copy(rel__env__set__3__1__2__3, rel___dollorhead__stratified47__5__1__2__3__4__5, DELTA, {0, 1, 4}));
scc108->add_rule(new parallel_acopy(rel___dollorrule25__inter__body4__3__2, rel___dollorrule25__inter__body4__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule2__inter__body__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel__split__at__input__2__2, FULL, {2, 1, 4, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified11__9__9__2, rel___dollorhead__stratified11__9__1__2__3__4__5__6__7__8__9, DELTA, {8, 1, 9, 0, 2, 3, 4, 5, 6, 7}));
scc108->add_rule(new parallel_acopy(rel___dollorrule9__inter__body__4__2, rel___dollorrule9__inter__body__4__1__2__3__4, DELTA, {1, 4, 0, 2, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorbir__sub2__6__1, rel___dollorbir__sub2__6__1__2__3__4__5__6, DELTA, {0, 6, 1, 2, 3, 4, 5}));
scc108->add_rule(new parallel_join(rel___dollorinter__head45__5__1__2__3__4__5, rel___dollorlst__2__0, FULL, rel___dollorrule32__inter__body1__4__3, DELTA, {1, 4, 5, 0, 6}));
scc108->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head44__3__1__2__3, DELTA, {2}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified26__3__1__2__3, rel__env__set__3__1__2__3, FULL, rel___dollorhead__stratified25__5__5__2__4, DELTA, {5, 6, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified18__3__1__2__3, rel___dollornil__1__1, DELTA, rel___dollorrule12__inter__body4__3__2, FULL, {3, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule25__inter__body3__6__1__2__3__4__5__6, rel__list__of__1__1, DELTA, rel___dollorrule25__inter__body2__6__1, FULL, {4, 5, 3, 6, 1, 7}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified12__9__1__2__3__4__5__6__7__8__9, rel__fixedparam__1__1, FULL, rel___dollorrule41__inter__body__9__4, DELTA, {6, 4, 3, 7, 5, 9, 10, 8, 1}));
scc108->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorinter__head25__4__1__2__3__4, DELTA, {2, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule25__inter__body3__6__1__2__3__4__5__6, rel__list__of__1__1, FULL, rel___dollorrule25__inter__body2__6__1, DELTA, {4, 5, 3, 6, 1, 7}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified4__7__1__2__3__4__5__6__7, rel__ref__1__1, FULL, rel___dollorrule40__inter__body5__6__5, DELTA, {3, 0, 7, 5, 1, 4, 6}));
scc108->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified53__6__1__2__3__4__5__6, DELTA, {0, 5}));
scc108->add_rule(new parallel_join(rel___dollorinter__head5__5__1__2__3__4__5, rel___dollorrule12__inter__body__1__1, DELTA, rel___dollorrule12__inter__body3__6__2, DELTA, {3, 4, 5, 6, 7}));
scc108->add_rule(new parallel_join(rel___dollorrule13__inter__body8__3__1__2__3, rel___dollorbir__sub9__4__1__2__3__4, DELTA, rel___dollorinter__head50__5__1__5__2__3, DELTA, {0, 6, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head37__5__1__3, rel___dollorinter__head37__5__1__2__3__4__5, DELTA, {0, 2, 5, 1, 3, 4}));
scc108->add_rule(new parallel_join(rel___dollorrule39__inter__body2__7__1__2__3__4__5__6__7, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified56__7__1__5, FULL, {6, 5, 1, 7, 2, 8, 4}));
scc108->add_rule(new parallel_join(rel___dollorrule39__inter__body2__7__1__2__3__4__5__6__7, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified56__7__1__5, DELTA, {6, 5, 1, 7, 2, 8, 4}));
scc108->add_rule(new parallel_acopy(rel__lambda__2__0, rel__lambda__2__1__2, DELTA, {2, 0, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule13__inter__body6__3__1, rel___dollorrule13__inter__body6__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc108->add_rule(new parallel_join(rel___dollorinter__head10__5__1__2__3__4__5, rel__fixedparam__1__0, DELTA, rel___dollorrule27__inter__body4__5__5, FULL, {1, 3, 4, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorhead__splice__10__1__2__3__4__5__6__7__8__9__10, rel__ret__2__2, FULL, rel___dollorrule21__inter__body5__9__5, DELTA, {11, 8, 10, 6, 2, 7, 5, 9, 4, 5}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub18__2__1__2, rel__length__2__1, DELTA, rel___dollorbir__sub17__2__1, DELTA, {4, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorrule21__inter__body3__8__6, rel___dollorrule21__inter__body3__8__1__2__3__4__5__6__7__8, DELTA, {5, 8, 0, 1, 2, 3, 4, 6, 7}));
scc108->add_rule(new parallel_acopy(rel__define__3__2, rel__define__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc108->add_rule(new parallel_join(rel__apply__3__1__2__3, rel__vararg__1__1, FULL, rel___dollorinter__head52__3__3, DELTA, {3, 1, 4}));
scc108->add_rule(new parallel_join(rel___dollorrule41__inter__body__9__1__2__3__4__5__6__7__8__9, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified11__9__9__2, FULL, {5, 1, 7, 9, 4, 6, 2, 8, 10}));
scc108->add_rule(new parallel_join(rel___dollorrule41__inter__body__9__1__2__3__4__5__6__7__8__9, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified11__9__9__2, DELTA, {5, 1, 7, 9, 4, 6, 2, 8, 10}));
scc108->add_rule(new parallel_join(rel___dollorinter__head10__5__1__2__3__4__5, rel__fixedparam__1__0, DELTA, rel___dollorrule27__inter__body4__5__5, DELTA, {1, 3, 4, 5, 6}));
scc108->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head3__7__1__2__3__4__5__6__7, DELTA, {5}));
scc108->add_rule(new parallel_join(rel___dollorhead__splice4__4__1__2__3__4, rel__ret__2__2, DELTA, rel___dollorrule13__inter__body7__4__1, DELTA, {4, 2, 5, 6}));
scc108->add_rule(new parallel_join(rel__ext__all__2__1__2, rel__ext__all__2__1, DELTA, rel___dollorbir__sub8__2__1, FULL, {4, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified52__3__1__2__3, rel__store__2__1__2, DELTA, rel___dollorrule25__inter__body1__4__2__4, FULL, {4, 0, 5}));
scc108->add_rule(new parallel_acopy(rel___dollorrule5__inter__body__3__3, rel___dollorrule5__inter__body__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule13__inter__body__3__1__2__3, rel___dollorlst__append__input__2__0, DELTA, rel___dollorlst__append__2__1, FULL, {1, 2, 4}));
scc108->add_rule(new parallel_acopy(rel___dollorrule14__inter__body__3__2, rel___dollorrule14__inter__body__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc108->add_rule(new parallel_join(rel___dollorinter__head17__5__1__2__3__4__5, rel__top__level__env__1__, DELTA, rel___dollorrule23__inter__body__4__, FULL, {3, 4, 5, 1, 6}));
scc108->add_rule(new parallel_join(rel___dollorinter__head17__5__1__2__3__4__5, rel__top__level__env__1__, FULL, rel___dollorrule23__inter__body__4__, DELTA, {3, 4, 5, 1, 6}));
scc108->add_rule(new parallel_join(rel__eval__3__1__2__3, rel___dollorrule19__inter__body2__1__1, DELTA, rel__if__k__4__0, DELTA, {3, 4, 5}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub6__5__1__2__3__4__5, rel__do__ext__all__2__1__2, FULL, rel___dollorinter__head10__5__5__1, DELTA, {2, 1, 4, 5, 6}));
scc108->add_rule(new parallel_copy(rel__kaddr__1__1, rel___dollorinter__head53__5__1__2__3__4__5, DELTA, {1}));
scc108->add_rule(new parallel_join(rel___dollorinter__head34__5__1__2__3__4__5, rel__ext__all__2__1, DELTA, rel___dollorbir__sub6__5__1, DELTA, {4, 5, 6, 7, 2}));
scc108->add_rule(new parallel_acopy(rel__store__2__1, rel__store__2__1__2, DELTA, {0, 2, 1}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub13__3__1__2__3, rel__split__at__input__2__1__2, FULL, rel___dollorinter__head27__4__4__1, DELTA, {2, 4, 5}));
scc108->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__applfk__2__1__2, DELTA, rel___dollorinter__head33__4__2__4, DELTA, {4, 5, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorrule6__inter__body__4__, rel___dollorrule6__inter__body__4__1__2__3__4, DELTA, {4, 0, 1, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule18__inter__body1__4__1__2__3__4, rel__store__2__1, DELTA, rel___dollorrule18__inter__body__4__4, DELTA, {2, 4, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified57__6__1__2__3__4__5__6, rel___dollorlst__2__1__2, DELTA, rel___dollorrule39__inter__body2__7__4__3, FULL, {8, 5, 4, 7, 6, 2}));
scc108->add_rule(new parallel_join(rel___dollorinter__head13__2__1__2, rel__string__1__0, FULL, rel__eval__3__1, DELTA, {4, 0}));
scc108->add_rule(new parallel_join(rel___dollorrule22__inter__body5__3__1__2__3, rel___dollorlst__2__0__1, FULL, rel___dollorrule22__inter__body4__4__4__2, DELTA, {5, 2, 4}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified51__7__1__2__3__4__5__6__7, rel__addr__1__1, DELTA, rel___dollorrule25__inter__body3__6__3, FULL, {0, 3, 5, 7, 6, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule24__inter__body3__5__1__2__3__4__5, rel__lambda__2__0, DELTA, rel___dollorrule24__inter__body2__4__1, DELTA, {4, 2, 5, 1, 6}));
scc108->add_rule(new parallel_join(rel___dollorinter__head33__4__1__2__3__4, rel__ret__2__2, FULL, rel__applak__3__0, DELTA, {3, 2, 4, 5}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified59__4__1__4__3, rel___dollorhead__stratified59__4__1__2__3__4, DELTA, {0, 3, 2, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body12__8__1__2__3__4__5__6__7__8, rel___dollorrule21__inter__body11__4__2__4, DELTA, rel___dollorbir__sub__8__1__2, FULL, {11, 9, 3, 7, 8, 10, 4, 6}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body12__8__1__2__3__4__5__6__7__8, rel___dollorrule21__inter__body11__4__2__4, DELTA, rel___dollorbir__sub__8__1__2, DELTA, {11, 9, 3, 7, 8, 10, 4, 6}));
scc108->add_rule(new parallel_copy(rel__do__var__prop__all__h__3__1__2__3, rel___dollorinter__head45__5__1__2__3__4__5, DELTA, {3, 1, 2}));
scc108->add_rule(new parallel_join(rel___dollorinter__head29__2__1__2, rel__prim__2__0, DELTA, rel__eval__3__1, FULL, {5, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified49__3__1__2__3, rel__saddr__1__1, FULL, rel___dollorrule10__inter__body__3__2, DELTA, {3, 4, 1}));
scc108->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__if__k__4__1__2__3__4, FULL, rel___dollorinter__head23__5__3__5__2__4, DELTA, {6, 2, 4}));
scc108->add_rule(new parallel_join(rel___dollorinter__head41__6__1__2__3__4__5__6, rel___dollorrule22__inter__body3__1__1, FULL, rel___dollorrule22__inter__body2__7__7, DELTA, {3, 4, 5, 6, 7, 8}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head45__5__4__2__3, rel___dollorinter__head45__5__1__2__3__4__5, DELTA, {3, 1, 2, 5, 0, 4}));
scc108->add_rule(new parallel_join(rel___dollorlst__append__2__1__2, rel___dollorrule7__inter__body__1__1, DELTA, rel___dollorlst__append__input__2__1, FULL, {2, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head28__3__3, rel___dollorinter__head28__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc108->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified56__7__1__2__3__4__5__6__7, DELTA, {5, 4}));
scc108->add_rule(new parallel_join(rel___dollorrule39__inter__body__4__1__2__3__4, rel__prim__2__1__2, DELTA, rel___dollorhead__stratified58__4__1__4, DELTA, {4, 0, 2, 5}));
scc108->add_rule(new parallel_join(rel___dollorrule12__inter__body6__5__1__2__3__4__5, rel__ret__2__2, DELTA, rel__appk__4__0, DELTA, {4, 6, 5, 3, 2}));
scc108->add_rule(new parallel_copy(rel__quote__1__1, rel___dollorhead__stratified10__9__1__2__3__4__5__6__7__8__9, DELTA, {6}));
scc108->add_rule(new parallel_join(rel___dollorrule40__inter__body1__5__1__2__3__4__5, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified5__6__3__5, DELTA, {7, 2, 4, 6, 5}));
scc108->add_rule(new parallel_acopy(rel__appk__4__1__2, rel__appk__4__1__2__3__4, DELTA, {0, 1, 4, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub15__4__1__2__3__4, rel__length__2__1, DELTA, rel___dollorbir__sub14__4__1, DELTA, {4, 5, 6, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified8__7__1__2__3__4__5__6__7, rel___dollornil__1__1, FULL, rel___dollorinter__head3__7__6, DELTA, {3, 4, 5, 6, 7, 8, 1}));
scc108->add_rule(new parallel_join(rel__split__at__3__1__2__3, rel___dollornil__1__1, DELTA, rel___dollorinter__head15__3__2, FULL, {4, 1, 3}));
scc108->add_rule(new parallel_acopy(rel__kaddr__1__0, rel__kaddr__1__1, DELTA, {1, 0}));
scc108->add_rule(new parallel_acopy(rel__do__ext__all__2__2, rel__do__ext__all__2__1__2, DELTA, {1, 2, 0}));
scc108->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head32__5__1__2__3__4__5, DELTA, {4}));
scc108->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified32__3__1__2__3, DELTA, {1, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified55__3__1__2__3, rel___dollornil__1__1, DELTA, rel___dollorrule13__inter__body8__3__2, DELTA, {3, 4, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorlst__2__1, rel___dollorlst__2__1__2, DELTA, {0, 2, 1}));
scc108->add_rule(new parallel_join(rel___dollorinter__head26__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel___dollorrule30__inter__body1__3__2, DELTA, {2, 4, 1, 5}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified57__6__1__2__3__4__5__6, rel___dollorlst__2__1__2, DELTA, rel___dollorrule39__inter__body2__7__4__3, DELTA, {8, 5, 4, 7, 6, 2}));
scc108->add_rule(new parallel_join(rel__apply__3__1__2__3, rel__clo__2__1__2, DELTA, rel___dollorhead__stratified30__4__4__3, DELTA, {2, 4, 5}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified55__3__2__3, rel___dollorhead__stratified55__3__1__2__3, DELTA, {1, 2, 3, 0}));
scc108->add_rule(new parallel_copy(rel__eval__3__1__2__3, rel___dollorhead__stratified40__4__1__2__3__4, DELTA, {1, 0, 3}));
scc108->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified18__3__1__2__3, DELTA, {1, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified7__4__1__2__3__4, rel__fixedparam__1__1, FULL, rel___dollorrule40__inter__body__4__1, DELTA, {4, 5, 1, 3}));
scc108->add_rule(new parallel_join(rel___dollorinter__head26__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel___dollorrule30__inter__body1__3__2, FULL, {2, 4, 1, 5}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified21__3__1__2__3, rel___dollornil__1__1, DELTA, rel___dollorrule22__inter__body1__3__2, FULL, {3, 4, 1}));
scc108->add_rule(new parallel_join(rel__ret__2__1__2, rel__kaddr__1__0, DELTA, rel___dollorrule17__inter__body__3__3, DELTA, {3, 4}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified7__4__1__2__3__4, rel__fixedparam__1__1, DELTA, rel___dollorrule40__inter__body__4__1, FULL, {4, 5, 1, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified19__4__1__2__3__4, rel__kaddr__1__1, DELTA, rel___dollorrule22__inter__body__3__3, DELTA, {0, 3, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule39__inter__body1__5__1__2__3__4__5, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified57__6__1__5, DELTA, {6, 2, 5, 4, 7}));
scc108->add_rule(new parallel_acopy(rel___dollorbir__sub20__3__1, rel___dollorbir__sub20__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc108->add_rule(new parallel_copy_generate(rel___dollorinter__head42__7__1__2__3__4__5__6__7, rel___dollorrule21__inter__body13__8__3, DELTA, [](const u64* const data, u64* const output) -> int{
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
head_tuple[2] = data[5];
head_tuple[3] = data[6];
head_tuple[4] = data[7];
head_tuple[5] = data[4];
head_tuple[6] = data[8];
        return std::make_tuple(data, output + 7);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 7;
      return tuples_count;
    }));
scc108->add_rule(new parallel_join(rel__ret__2__1__2, rel__eval__3__1__2, DELTA, rel___dollorrule4__inter__body1__3__1__2, FULL, {5, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorrule14__inter__body1__4__1, rel___dollorrule14__inter__body1__4__1__2__3__4, DELTA, {0, 4, 1, 2, 3}));
scc108->add_rule(new parallel_copy_generate(rel___dollorrule1__inter__body3__1__1, rel___dollorrule1__inter__body2__2__1, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == s2d("brouhaha_main");
        if (! compatible) return state;

        head_tuple[0] = data[2];
        return std::make_tuple(data, output + 1);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 1;
      return tuples_count;
    }));
scc108->add_rule(new parallel_join(rel___dollorrule41__inter__body8__9__1__2__3__4__5__6__7__8__9, rel___dollornil__1__1, DELTA, rel___dollorrule41__inter__body7__9__8, FULL, {5, 1, 3, 4, 6, 7, 8, 9, 10}));
scc108->add_rule(new parallel_join(rel___dollorrule41__inter__body8__9__1__2__3__4__5__6__7__8__9, rel___dollornil__1__1, DELTA, rel___dollorrule41__inter__body7__9__8, DELTA, {5, 1, 3, 4, 6, 7, 8, 9, 10}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified51__7__1__2__3__4__5__6__7, rel__addr__1__1, DELTA, rel___dollorrule25__inter__body3__6__3, DELTA, {0, 3, 5, 7, 6, 4, 1}));
scc108->add_rule(new parallel_join(rel__top__level__env__1__1, rel___dollorhead__stratified26__3__1__2__3, DELTA, rel__env__set__3__2__3__1, DELTA, {4}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head53__5__1, rel___dollorinter__head53__5__1__2__3__4__5, DELTA, {0, 5, 1, 2, 3, 4}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head6__7__2__7__3__1__4__5, rel___dollorinter__head6__7__1__2__3__4__5__6__7, DELTA, {1, 6, 2, 0, 3, 4, 7, 5}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified30__4__4__3, rel___dollorhead__stratified30__4__1__2__3__4, DELTA, {3, 2, 4, 0, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule2__inter__body__4__3, rel___dollorrule2__inter__body__4__1__2__3__4, DELTA, {2, 4, 0, 1, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule27__inter__body3__5__1__2__3__4__5, rel__apply__3__1, DELTA, rel___dollorrule27__inter__body__4__2, FULL, {6, 2, 5, 3, 7}));
scc108->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head28__3__1__2__3, DELTA, {2}));
scc108->add_rule(new parallel_join(rel___dollorrule27__inter__body3__5__1__2__3__4__5, rel__apply__3__1, FULL, rel___dollorrule27__inter__body__4__2, DELTA, {6, 2, 5, 3, 7}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified14__7__7__2, rel___dollorhead__stratified14__7__1__2__3__4__5__6__7, DELTA, {6, 1, 7, 0, 2, 3, 4, 5}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified49__3__1__2__3, rel__saddr__1__1, DELTA, rel___dollorrule10__inter__body__3__2, DELTA, {3, 4, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule40__inter__body__4__1, rel___dollorrule40__inter__body__4__1__2__3__4, DELTA, {0, 4, 1, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule41__inter__body4__8__1__2__3__4__5__6__7__8, rel__ref__1__1, FULL, rel___dollorrule41__inter__body3__8__1, DELTA, {1, 3, 4, 5, 6, 7, 8, 9}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified17__4__1__2__3__4, rel__app__2__1__2, DELTA, rel___dollorhead__stratified16__5__2__5, DELTA, {4, 5, 6, 2}));
scc108->add_rule(new parallel_join(rel__apply__3__1__2__3, rel__fixedarg__1__1, DELTA, rel___dollorinter__head20__3__1, FULL, {3, 1, 4}));
scc108->add_rule(new parallel_join(rel__store__2__1__2, rel__define__3__1__2__3, DELTA, rel___dollorhead__stratified29__4__1__4__3, FULL, {5, 3}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub18__2__1__2, rel__length__2__1, FULL, rel___dollorbir__sub17__2__1, DELTA, {4, 2}));
scc108->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__if__k__4__1__2__3__4, DELTA, rel___dollorinter__head23__5__3__5__2__4, FULL, {6, 2, 4}));
scc108->add_rule(new parallel_join(rel___dollorrule25__inter__body5__4__1__2__3__4, rel__clo__2__0, FULL, rel___dollorrule25__inter__body4__3__2, DELTA, {1, 4, 5, 2}));
scc108->add_rule(new parallel_copy(rel__fixedparam__1__1, rel___dollorhead__stratified6__4__1__2__3__4, DELTA, {3}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head5__5__3__2__1__4, rel___dollorinter__head5__5__1__2__3__4__5, DELTA, {2, 1, 0, 3, 5, 4}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head26__4__1__2, rel___dollorinter__head26__4__1__2__3__4, DELTA, {0, 1, 4, 2, 3}));
scc108->add_rule(new parallel_copy(rel__define__3__1__2__3, rel___dollorhead__stratified29__4__1__2__3__4, DELTA, {0, 3, 2}));
scc108->add_rule(new parallel_copy(rel__define__3__1__2__3, rel___dollorhead__stratified3__4__1__2__3__4, DELTA, {0, 2, 3}));
scc108->add_rule(new parallel_copy_generate(rel___dollorrule7__inter__body__1__1, rel___dollornil__1__1, DELTA, [](const u64* const data, u64* const output) -> int{
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
scc108->add_rule(new parallel_copy(rel__prim__2__1__2, rel___dollorhead__stratified58__4__1__2__3__4, DELTA, {0, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified31__3__1__2__3, rel___dollornil__1__1, FULL, rel___dollorrule21__inter__body6__3__3, DELTA, {3, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule40__inter__body__4__1__2__3__4, rel__prim__2__1__2, FULL, rel___dollorhead__stratified6__4__1__3, DELTA, {5, 2, 0, 4}));
scc108->add_rule(new parallel_join(rel___dollorrule27__inter__body1__2__1__2, rel__vararg__1__1, DELTA, rel__store__2__1, FULL, {3, 1}));
scc108->add_rule(new parallel_join(rel___dollorlst__append__input__2__1__2, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified55__3__2__3, DELTA, {4, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule18__inter__body__4__1__2__3__4, rel__ret__2__2, DELTA, rel__if__k__4__0, FULL, {5, 3, 6, 2}));
scc108->add_rule(new parallel_copy(rel__eval__3__1__2__3, rel___dollorinter__head43__4__1__2__3__4, DELTA, {1, 0, 2}));
scc108->add_rule(new parallel_acopy(rel__quote__1__0, rel__quote__1__1, DELTA, {1, 0}));
scc108->add_rule(new parallel_join(rel___dollorrule22__inter__body2__7__1__2__3__4__5__6__7, rel__ret__2__2, FULL, rel__letk__6__0, DELTA, {2, 3, 4, 5, 8, 7, 6}));
scc108->add_rule(new parallel_acopy(rel___dollorrule21__inter__body2__9__9, rel___dollorrule21__inter__body2__9__1__2__3__4__5__6__7__8__9, DELTA, {8, 9, 0, 1, 2, 3, 4, 5, 6, 7}));
scc108->add_rule(new parallel_join(rel__store__2__1__2, rel__store__flow__2__1, FULL, rel__store__2__1, DELTA, {2, 4}));
scc108->add_rule(new parallel_acopy(rel___dollorrule13__inter__body4__3__3, rel___dollorrule13__inter__body4__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified14__7__1__2__3__4__5__6__7, rel__app__2__1__2, DELTA, rel___dollorhead__stratified13__8__4__8, FULL, {4, 5, 6, 7, 8, 9, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified14__7__1__2__3__4__5__6__7, rel__app__2__1__2, DELTA, rel___dollorhead__stratified13__8__4__8, DELTA, {4, 5, 6, 7, 8, 9, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified60__6__1__2__3__4__5__6, rel__kaddr__1__1, DELTA, rel___dollorrule26__inter__body4__5__1, FULL, {0, 3, 5, 6, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified33__2__1__2, rel__addr__1__1, DELTA, rel___dollorrule30__inter__body__2__1, DELTA, {3, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule5__inter__body__3__1__2__3, rel__clo__2__1__2, DELTA, rel___dollorinter__head44__3__3__1, DELTA, {2, 4, 0}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified36__5__1__2__3__4__5, rel___dollornil__1__1, DELTA, rel___dollorinter__head32__5__5, FULL, {3, 4, 5, 6, 1}));
scc108->add_rule(new parallel_join(rel___dollorinter__head7__2__1__2, rel___dollorrule1__inter__body3__1__, DELTA, rel__top__level__env__1__, DELTA, {3, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule22__inter__body4__4__4__2, rel___dollorrule22__inter__body4__4__1__2__3__4, DELTA, {3, 1, 4, 0, 2}));
scc108->add_rule(new parallel_acopy(rel__split__at__input__2__2, rel__split__at__input__2__1__2, DELTA, {1, 2, 0}));
scc108->add_rule(new parallel_join(rel___dollorrule27__inter__body2__2__1__2, rel__list__of__1__0, FULL, rel___dollorrule27__inter__body1__2__1, DELTA, {1, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified52__3__1__2__3, rel__store__2__1__2, DELTA, rel___dollorrule25__inter__body1__4__2__4, DELTA, {4, 0, 5}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified6__4__1__2__3__4, rel___dollorlst__2__1__2, DELTA, rel___dollorrule40__inter__body1__5__5__1, DELTA, {5, 6, 4, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule22__inter__body4__4__1__2__3__4, rel___dollorlst__append__input__2__1, FULL, rel___dollorbir__sub3__3__1, DELTA, {1, 4, 5, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified37__4__1__2__3__4, rel__kaddr__1__1, DELTA, rel___dollorrule27__inter__body5__3__1, FULL, {0, 3, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule30__inter__body__2__1__2, rel__do__fixed__prop__all__2__1__2, FULL, rel___dollorinter__head26__4__1__2, DELTA, {4, 5}));
scc108->add_rule(new parallel_acopy(rel___dollorrule31__inter__body__2__1, rel___dollorrule31__inter__body__2__1__2, DELTA, {0, 2, 1}));
scc108->add_rule(new parallel_join(rel___dollorinter__head37__5__1__2__3__4__5, rel__ext__all__2__1, FULL, rel___dollorbir__sub4__5__1, DELTA, {4, 2, 7, 6, 5}));
scc108->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified5__6__1__2__3__4__5__6, DELTA, {1, 5}));
scc108->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified11__9__1__2__3__4__5__6__7__8__9, DELTA, {8, 1}));
scc108->add_rule(new parallel_copy(rel___dollorlst__append__input__2__1__2, rel___dollorinter__head21__4__1__2__3__4, DELTA, {2, 3}));
scc108->add_rule(new parallel_copy(rel__clo__2__1__2, rel___dollorhead__stratified30__4__1__2__3__4, DELTA, {3, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule40__inter__body4__5__1__2__3__4__5, rel___dollornil__1__1, DELTA, rel___dollorrule40__inter__body3__5__3, DELTA, {3, 1, 4, 5, 6}));
scc108->add_rule(new parallel_join(rel__ret__2__1__2, rel__eval__3__1__2, DELTA, rel___dollorrule4__inter__body1__3__1__2, DELTA, {5, 3}));
scc108->add_rule(new parallel_join(rel__env__map__3__1__2__3, rel__env__set__3__2, DELTA, rel___dollorrule36__inter__body1__3__1, FULL, {5, 0, 6}));
scc108->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head48__5__1__2__3__4__5, DELTA, {1}));
scc108->add_rule(new parallel_join(rel__store__2__1__2, rel__define__3__1__2__3, DELTA, rel___dollorhead__stratified29__4__1__4__3, DELTA, {5, 3}));
scc108->add_rule(new parallel_copy_generate(rel___dollorrule14__inter__body__3__1__2__3, rel__appk__4__1__2, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == data[1];
        if (! compatible) return state;

        head_tuple[0] = data[2];
head_tuple[1] = data[0];
head_tuple[2] = data[4];
        return std::make_tuple(data, output + 3);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 3;
      return tuples_count;
    }));
scc108->add_rule(new parallel_join(rel___dollorrule33__inter__body1__2__1__2, rel___dollorrule33__inter__body__1__1, FULL, rel__do__var__prop__all__h__3__2, DELTA, {4, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified37__4__1__2__3__4, rel__kaddr__1__1, FULL, rel___dollorrule27__inter__body5__3__1, DELTA, {0, 3, 4, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule21__inter__body1__4__1__4, rel___dollorrule21__inter__body1__4__1__2__3__4, DELTA, {0, 3, 4, 1, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule25__inter__body4__3__1__2__3, rel__fixedarg__1__0, DELTA, rel__apply__3__2, FULL, {1, 3, 4}));
scc108->add_rule(new parallel_acopy(rel___dollorrule25__inter__body1__4__2__4, rel___dollorrule25__inter__body1__4__1__2__3__4, DELTA, {1, 3, 4, 0, 2}));
scc108->add_rule(new parallel_copy(rel__addr__1__1, rel___dollorinter__head26__4__1__2__3__4, DELTA, {2}));
scc108->add_rule(new parallel_join(rel___dollorlst__append__input__2__1__2, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified21__3__2__3, DELTA, {4, 2}));
scc108->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorhead__stratified19__4__1__2__3__4, DELTA, {3, 1}));
scc108->add_rule(new parallel_join(rel___dollorinter__head40__5__1__2__3__4__5, rel__fixedparam__1__0, DELTA, rel___dollorrule24__inter__body3__5__4, DELTA, {1, 3, 4, 5, 6}));
scc108->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorinter__head24__3__1__2__3, DELTA, {0, 2}));
scc108->add_rule(new parallel_join(rel___dollorinter__head31__4__1__2__3__4, rel___dollorlst__split__3__1, FULL, rel___dollorbir__sub20__3__1, DELTA, {3, 5, 2, 6}));
scc108->add_rule(new parallel_acopy(rel___dollorrule21__inter__body5__9__5, rel___dollorrule21__inter__body5__9__1__2__3__4__5__6__7__8__9, DELTA, {4, 9, 0, 1, 2, 3, 5, 6, 7, 8}));
scc108->add_rule(new parallel_join(rel___dollorrule13__inter__body8__3__1__2__3, rel___dollorbir__sub9__4__1__2__3__4, DELTA, rel___dollorinter__head50__5__1__5__2__3, FULL, {0, 6, 1}));
scc108->add_rule(new parallel_acopy(rel__env__set__3__1, rel__env__set__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc108->add_rule(new parallel_join(rel__split__at__3__1__2__3, rel___dollornil__1__1, DELTA, rel___dollorinter__head15__3__2, DELTA, {4, 1, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorrule44__inter__body4__10__, rel___dollorrule44__inter__body4__10__1__2__3__4__5__6__7__8__9__10, DELTA, {10, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9}));
scc108->add_rule(new parallel_join(rel___dollorinter__head47__2__1__2, rel__apply__prim__2__0, FULL, rel__eval__3__1, DELTA, {5, 3}));
scc108->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified56__7__1__2__3__4__5__6__7, DELTA, {0, 4}));
scc108->add_rule(new parallel_join(rel___dollorrule25__inter__body5__4__1__2__3__4, rel__clo__2__0, DELTA, rel___dollorrule25__inter__body4__3__2, FULL, {1, 4, 5, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorrule41__inter__body5__8__5, rel___dollorrule41__inter__body5__8__1__2__3__4__5__6__7__8, DELTA, {4, 8, 0, 1, 2, 3, 5, 6, 7}));
scc108->add_rule(new parallel_join(rel___dollorinter__head24__3__1__2__3, rel___dollorlst__append__2__1, DELTA, rel___dollorbir__sub19__3__1, FULL, {5, 4, 2}));
scc108->add_rule(new parallel_acopy(rel__ret__2__2, rel__ret__2__1__2, DELTA, {1, 2, 0}));
scc108->add_rule(new parallel_acopy(rel___dollorlst__split__3__1, rel___dollorlst__split__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc108->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorhead__stratified51__7__1__2__3__4__5__6__7, DELTA, {6, 4}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head36__2__1, rel___dollorinter__head36__2__1__2, DELTA, {0, 2, 1}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified40__4__1__2__3__4, rel__kaddr__1__1, DELTA, rel___dollorrule24__inter__body__3__2, DELTA, {3, 0, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorinter__head14__3__1__2__3, rel__addr__1__1, FULL, rel___dollorinter__head13__2__2, DELTA, {3, 0, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule12__inter__body1__3__1__3, rel___dollorrule12__inter__body1__3__1__2__3, DELTA, {0, 2, 3, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule25__inter__body1__4__1__2__3__4, rel__store__2__1__2, DELTA, rel___dollorrule25__inter__body__6__4__6, FULL, {4, 5, 6, 7}));
scc108->add_rule(new parallel_acopy(rel__fixedarg__1__0, rel__fixedarg__1__1, DELTA, {1, 0}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified2__5__1__2__3__4__5, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified1__6__6__2, DELTA, {4, 5, 6, 7, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule39__inter__body__4__1__2__3__4, rel__prim__2__1__2, DELTA, rel___dollorhead__stratified58__4__1__4, FULL, {4, 0, 2, 5}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body12__8__1__2__3__4__5__6__7__8, rel___dollorrule21__inter__body11__4__2__4, FULL, rel___dollorbir__sub__8__1__2, DELTA, {11, 9, 3, 7, 8, 10, 4, 6}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified53__6__1__6, rel___dollorhead__stratified53__6__1__2__3__4__5__6, DELTA, {0, 5, 6, 1, 2, 3, 4}));
scc108->add_rule(new parallel_acopy(rel___dollorrule41__inter__body6__8__8, rel___dollorrule41__inter__body6__8__1__2__3__4__5__6__7__8, DELTA, {7, 8, 0, 1, 2, 3, 4, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorinter__head8__6__1__2__3__4__5__6, rel__ext__all__2__1, DELTA, rel___dollorbir__sub2__6__1, DELTA, {5, 6, 4, 7, 8, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified46__2__1__2, rel__addr__1__1, DELTA, rel___dollorrule32__inter__body__2__1, FULL, {3, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule44__inter__body4__10__1__2__3__4__5__6__7__8__9__10, rel__addr__1__1, DELTA, rel___dollorrule44__inter__body3__9__4, FULL, {5, 1, 3, 4, 0, 6, 7, 8, 9, 10}));
scc108->add_rule(new parallel_join(rel___dollorrule44__inter__body4__10__1__2__3__4__5__6__7__8__9__10, rel__addr__1__1, DELTA, rel___dollorrule44__inter__body3__9__4, DELTA, {5, 1, 3, 4, 0, 6, 7, 8, 9, 10}));
scc108->add_rule(new parallel_join(rel___dollorrule44__inter__body3__9__1__2__3__4__5__6__7__8__9, rel__addr__1__1, DELTA, rel___dollorrule44__inter__body2__8__5, FULL, {3, 4, 5, 6, 0, 7, 8, 9, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule44__inter__body3__9__1__2__3__4__5__6__7__8__9, rel__addr__1__1, DELTA, rel___dollorrule44__inter__body2__8__5, DELTA, {3, 4, 5, 6, 0, 7, 8, 9, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule36__inter__body__4__1__2, rel___dollorrule36__inter__body__4__1__2__3__4, DELTA, {0, 1, 4, 2, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__splice__10__7__10, rel___dollorhead__splice__10__1__2__3__4__5__6__7__8__9__10, DELTA, {6, 9, 10, 0, 1, 2, 3, 4, 5, 7, 8}));
scc108->add_rule(new parallel_join(rel___dollorrule13__inter__body2__4__1__2__3__4, rel___dollorrule13__inter__body1__4__1__4, DELTA, rel___dollorbir__sub9__4__1__2, FULL, {7, 4, 3, 6}));
scc108->add_rule(new parallel_join(rel___dollorinter__head5__5__1__2__3__4__5, rel___dollorrule12__inter__body__1__1, DELTA, rel___dollorrule12__inter__body3__6__2, FULL, {3, 4, 5, 6, 7}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified10__9__2__3, rel___dollorhead__stratified10__9__1__2__3__4__5__6__7__8__9, DELTA, {1, 2, 9, 0, 3, 4, 5, 6, 7, 8}));
scc108->add_rule(new parallel_acopy(rel___dollorrule16__inter__body__3__3, rel___dollorrule16__inter__body__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc108->add_rule(new parallel_join(rel___dollorinter__head30__3__1__2__3, rel___dollorlst__split__input__1__1, DELTA, rel___dollorlst__2__0, DELTA, {2, 1, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule30__inter__body1__3__1__2__3, rel___dollorlst__2__0, DELTA, rel__do__fixed__prop__all__2__2, FULL, {2, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule13__inter__body__3__1__2__3, rel___dollorlst__append__input__2__0, DELTA, rel___dollorlst__append__2__1, DELTA, {1, 2, 4}));
scc108->add_rule(new parallel_join(rel__length__2__1__2, rel__length__input__1__1, FULL, rel___dollorhead__stratified39__2__2, DELTA, {1, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body3__8__1__2__3__4__5__6__7__8, rel___dollorrule21__inter__body__1__1, FULL, rel___dollorrule21__inter__body2__9__9, DELTA, {3, 4, 5, 6, 7, 8, 9, 10}));
scc108->add_rule(new parallel_join(rel___dollorrule17__inter__body__3__1__2__3, rel__store__2__1, DELTA, rel__ret__2__2, FULL, {4, 2, 0}));
scc108->add_rule(new parallel_acopy(rel___dollorlst__append__input__2__2, rel___dollorlst__append__input__2__1__2, DELTA, {1, 2, 0}));
scc108->add_rule(new parallel_copy(rel__quote__1__1, rel___dollorhead__stratified__5__1__2__3__4__5, DELTA, {2}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified32__3__2__3, rel___dollorhead__stratified32__3__1__2__3, DELTA, {1, 2, 3, 0}));
scc108->add_rule(new parallel_join(rel__store__2__1__2, rel__define__3__1__2__3, FULL, rel___dollorhead__stratified7__4__1__3__4, DELTA, {5, 3}));
scc108->add_rule(new parallel_join(rel___dollorinter__head25__4__1__2__3__4, rel___dollorbir__sub13__3__1, DELTA, rel__split__at__3__1, FULL, {6, 3, 2, 5}));
scc108->add_rule(new parallel_join(rel___dollorinter__head48__5__1__2__3__4__5, rel__varparam__1__0, FULL, rel___dollorrule25__inter__body6__5__5, DELTA, {3, 1, 4, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorhead__splice__10__1__2__3__4__5__6__7__8__9__10, rel__ret__2__2, DELTA, rel___dollorrule21__inter__body5__9__5, FULL, {11, 8, 10, 6, 2, 7, 5, 9, 4, 5}));
scc108->add_rule(new parallel_join(rel___dollorhead__splice__10__1__2__3__4__5__6__7__8__9__10, rel__ret__2__2, DELTA, rel___dollorrule21__inter__body5__9__5, DELTA, {11, 8, 10, 6, 2, 7, 5, 9, 4, 5}));
scc108->add_rule(new parallel_join(rel___dollorinter__head46__4__1__2__3__4, rel___dollorlst__2__0, FULL, rel__do__ext__all__2__2, DELTA, {4, 1, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule9__inter__body2__6__1__2__3__4__5__6, rel___dollorrule9__inter__body1__4__3, FULL, rel___dollorrule9__inter__body__4__2, DELTA, {2, 6, 3, 7, 4, 8}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body13__8__1__2__3__4__5__6__7__8, rel___dollornil__1__0, DELTA, rel___dollorrule21__inter__body12__8__3, FULL, {3, 4, 1, 8, 5, 6, 7, 9}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body13__8__1__2__3__4__5__6__7__8, rel___dollornil__1__0, DELTA, rel___dollorrule21__inter__body12__8__3, DELTA, {3, 4, 1, 8, 5, 6, 7, 9}));
scc108->add_rule(new parallel_acopy(rel___dollorrule21__inter__body7__9__, rel___dollorrule21__inter__body7__9__1__2__3__4__5__6__7__8__9, DELTA, {9, 0, 1, 2, 3, 4, 5, 6, 7, 8}));
scc108->add_rule(new parallel_acopy(rel___dollorrule44__inter__body2__8__5, rel___dollorrule44__inter__body2__8__1__2__3__4__5__6__7__8, DELTA, {4, 8, 0, 1, 2, 3, 5, 6, 7}));
scc108->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__letk__6__1__2__3__4__5__6, DELTA, rel___dollorhead__stratified9__7__5__7__6__3__2__4, FULL, {8, 4, 6}));
scc108->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__letk__6__1__2__3__4__5__6, DELTA, rel___dollorhead__stratified9__7__5__7__6__3__2__4, DELTA, {8, 4, 6}));
scc108->add_rule(new parallel_copy_generate(rel__length__2__1__2, rel___dollorbir__sub18__2__2, DELTA, [](const u64* const data, u64* const output) -> int{
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
scc108->add_rule(new parallel_acopy(rel___dollorrule36__inter__body1__3__1, rel___dollorrule36__inter__body1__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc108->add_rule(new parallel_join(rel___dollorlst__append__input__2__1__2, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified21__3__2__3, FULL, {4, 2}));
scc108->add_rule(new parallel_join(rel__do__var__prop__all__h__3__1__2__3, rel___dollorlst__2__0, DELTA, rel___dollorrule31__inter__body__2__1, FULL, {4, 0, 0}));
scc108->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified21__3__1__2__3, DELTA, {1, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule13__inter__body7__4__1__2__3__4, rel___dollorrule13__inter__body4__3__3, DELTA, rel___dollorrule13__inter__body6__3__1, DELTA, {6, 2, 3, 5}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified6__4__1__2__3__4, rel___dollorlst__2__1__2, FULL, rel___dollorrule40__inter__body1__5__5__1, DELTA, {5, 6, 4, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified25__5__1__2__3__4__5, rel__env__set__3__1__2__3, FULL, rel___dollorhead__stratified24__7__7__2__5, DELTA, {5, 6, 7, 8, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule14__inter__body2__4__1__2__3__4, rel__ret__2__2, DELTA, rel___dollorrule14__inter__body1__4__1, FULL, {4, 2, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified53__6__1__2__3__4__5__6, rel___dollornil__1__1, FULL, rel___dollorinter__head49__6__4, DELTA, {3, 4, 5, 6, 7, 1}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub11__4__1__2__3__4, rel__split__at__3__1, FULL, rel___dollorbir__sub10__3__1, DELTA, {5, 6, 2, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified8__7__5__7, rel___dollorhead__stratified8__7__1__2__3__4__5__6__7, DELTA, {4, 6, 7, 0, 1, 2, 3, 5}));
scc108->add_rule(new parallel_copy(rel__do__fixed__prop__all__2__1__2, rel___dollorinter__head37__5__1__2__3__4__5, DELTA, {0, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule13__inter__body7__4__1__2__3__4, rel___dollorrule13__inter__body4__3__3, FULL, rel___dollorrule13__inter__body6__3__1, DELTA, {6, 2, 3, 5}));
scc108->add_rule(new parallel_copy(rel__do__ext__all__2__1__2, rel___dollorhead__stratified48__3__1__2__3, DELTA, {2, 0}));
scc108->add_rule(new parallel_join(rel___dollorrule22__inter__body__3__1__2__3, rel___dollorhead__splice2__3__1__2__3, FULL, rel___dollorinter__head8__6__3__4__1, DELTA, {6, 7, 5}));
scc108->add_rule(new parallel_join(rel___dollorrule23__inter__body__4__1__2__3__4, rel__define__3__0, DELTA, rel__apply__3__1, FULL, {3, 5, 6, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule25__inter__body2__6__1__2__3__4__5__6, rel__kaddr__1__1, FULL, rel___dollorinter__head48__5__3, DELTA, {3, 4, 0, 1, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub11__4__1__2__3__4, rel__split__at__3__1, DELTA, rel___dollorbir__sub10__3__1, DELTA, {5, 6, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified59__4__1__2__3__4, rel__fixedparam__1__1, DELTA, rel___dollorrule39__inter__body__4__4, DELTA, {4, 3, 5, 1}));
scc108->add_rule(new parallel_copy_generate(rel___dollorinter__head20__3__1__2__3, rel___dollorrule14__inter__body3__4__4, DELTA, [](const u64* const data, u64* const output) -> int{
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
scc108->add_rule(new parallel_join(rel__apply__3__1__2__3, rel__fixedarg__1__1, DELTA, rel___dollorinter__head9__3__2, FULL, {4, 1, 3}));
scc108->add_rule(new parallel_copy(rel__do__ext__all__2__1__2, rel___dollorhead__stratified54__6__1__2__3__4__5__6, DELTA, {4, 5}));
scc108->add_rule(new parallel_join(rel___dollorrule13__inter__body4__3__1__2__3, rel__store__2__1, DELTA, rel___dollorlst__2__1, DELTA, {4, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified18__3__1__2__3, rel___dollornil__1__1, FULL, rel___dollorrule12__inter__body4__3__2, DELTA, {3, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule33__inter__body1__2__1__2, rel___dollorrule33__inter__body__1__1, DELTA, rel__do__var__prop__all__h__3__2, FULL, {4, 3}));
scc108->add_rule(new parallel_acopy(rel__eval__3__1__2, rel__eval__3__1__2__3, DELTA, {0, 1, 3, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorbir__sub8__2__1, rel___dollorbir__sub8__2__1__2, DELTA, {0, 2, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head41__6__6__3, rel___dollorinter__head41__6__1__2__3__4__5__6, DELTA, {5, 2, 6, 0, 1, 3, 4}));
scc108->add_rule(new parallel_copy(rel___dollorbir__sub1__9__1__2__3__4__5__6__7__8__9, rel___dollorinter__head19__10__1__2__3__4__5__6__7__8__9__10, DELTA, {6, 8, 5, 2, 4, 3, 1, 7, 0}));
scc108->add_rule(new parallel_join(rel__top__level__env__1__1, rel___dollorhead__stratified26__3__1__2__3, FULL, rel__env__set__3__2__3__1, DELTA, {4}));
scc108->add_rule(new parallel_copy_generate(rel___dollorinter__head15__3__1__2__3, rel__split__at__input__2__1, DELTA, [](const u64* const data, u64* const output) -> int{
      auto args_for_old_bi = std::array<u64, 1> {data[0]};
      using TState = std::tuple<const u64*,u64*>;
      TState state = std::make_tuple(data, output);
      auto callback = [](u64 res_0,  TState state) -> TState{
        auto [data, output] = state;
        auto head_tuple = output;
         
        bool compatible = true && res_0 == n2d(0);
        if (! compatible) return state;

        head_tuple[0] = data[2];
head_tuple[1] = data[0];
head_tuple[2] = data[1];
        return std::make_tuple(data, output + 3);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 3;
      return tuples_count;
    }));
scc108->add_rule(new parallel_acopy(rel___dollorrule1__inter__body1__3__2, rel___dollorrule1__inter__body1__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule24__inter__body2__4__1__2__3__4, rel__fixedarg__1__0, DELTA, rel___dollorrule24__inter__body1__4__3, DELTA, {3, 1, 4, 5}));
scc108->add_rule(new parallel_join(rel___dollorlst__split__3__1__2__3, rel___dollornil__1__1, DELTA, rel___dollorinter__head28__3__3, FULL, {3, 1, 4}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified17__4__1__2__3__4, rel__app__2__1__2, DELTA, rel___dollorhead__stratified16__5__2__5, FULL, {4, 5, 6, 2}));
scc108->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorhead__stratified44__3__1__2__3, DELTA, {1, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body6__3__1__2__3, rel___dollorbir__sub1__9__1__2__3__4__5__6__7__8__9, FULL, rel___dollorinter__head19__10__7__9__6__3__5__4__2__8__1, DELTA, {0, 1, 11}));
scc108->add_rule(new parallel_acopy(rel___dollorrule44__inter__body3__9__4, rel___dollorrule44__inter__body3__9__1__2__3__4__5__6__7__8__9, DELTA, {3, 9, 0, 1, 2, 4, 5, 6, 7, 8}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified16__5__2__5, rel___dollorhead__stratified16__5__1__2__3__4__5, DELTA, {1, 4, 5, 0, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorinter__head36__2__1__2, rel__length__input__1__1, DELTA, rel___dollorlst__2__0, FULL, {3, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule19__inter__body2__1__1, rel___dollorrule19__inter__body1__1__1, DELTA, rel__ret__2__1, DELTA, {3}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body11__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel___dollorrule21__inter__body10__3__1, DELTA, {2, 4, 5, 1}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified11__9__1__2__3__4__5__6__7__8__9, rel__quote__1__1, FULL, rel___dollorrule41__inter__body2__9__7, DELTA, {7, 4, 3, 8, 5, 9, 6, 10, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule21__inter__body9__8__, rel___dollorrule21__inter__body9__8__1__2__3__4__5__6__7__8, DELTA, {8, 0, 1, 2, 3, 4, 5, 6, 7}));
scc108->add_rule(new parallel_join(rel___dollorrule44__inter__body2__8__1__2__3__4__5__6__7__8, rel__addr__1__1, DELTA, rel___dollorrule44__inter__body1__7__1, FULL, {0, 3, 4, 5, 6, 7, 8, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule44__inter__body2__8__1__2__3__4__5__6__7__8, rel__addr__1__1, DELTA, rel___dollorrule44__inter__body1__7__1, DELTA, {0, 3, 4, 5, 6, 7, 8, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule25__inter__body__6__1__2__3__4__5__6, rel__env__set__3__1__2__3, DELTA, rel___dollorhead__stratified51__7__4__1__7, FULL, {5, 8, 3, 2, 6, 7}));
scc108->add_rule(new parallel_join(rel___dollorrule25__inter__body__6__1__2__3__4__5__6, rel__env__set__3__1__2__3, DELTA, rel___dollorhead__stratified51__7__4__1__7, DELTA, {5, 8, 3, 2, 6, 7}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub4__5__1__2__3__4__5, rel__do__ext__all__2__1__2, DELTA, rel___dollorinter__head40__5__5__1, FULL, {2, 1, 6, 5, 4}));
scc108->add_rule(new parallel_join(rel___dollorrule18__inter__body__4__1__2__3__4, rel__ret__2__2, DELTA, rel__if__k__4__0, DELTA, {5, 3, 6, 2}));
scc108->add_rule(new parallel_copy(rel__define__3__1__2__3, rel___dollorhead__stratified17__4__1__2__3__4, DELTA, {0, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule9__inter__body1__4__1__2__3__4, rel___dollorlst__2__1, DELTA, rel__binding__2__0, FULL, {4, 2, 1, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule36__inter__body__4__1__2__3__4, rel__env__set__3__1, DELTA, rel__env__map__3__1, FULL, {2, 5, 1, 6}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified25__5__5__2__4, rel___dollorhead__stratified25__5__1__2__3__4__5, DELTA, {4, 1, 3, 5, 0, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorrule12__inter__body2__7__5__1, rel___dollorrule12__inter__body2__7__1__2__3__4__5__6__7, DELTA, {4, 0, 7, 1, 2, 3, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorrule12__inter__body2__7__1__2__3__4__5__6__7, rel___dollorlst__2__1, DELTA, rel___dollorbir__sub7__6__2, FULL, {4, 2, 6, 5, 1, 7, 8}));
scc108->add_rule(new parallel_join(rel___dollorrule12__inter__body2__7__1__2__3__4__5__6__7, rel___dollorlst__2__1, DELTA, rel___dollorbir__sub7__6__2, DELTA, {4, 2, 6, 5, 1, 7, 8}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head29__2__2, rel___dollorinter__head29__2__1__2, DELTA, {1, 2, 0}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified28__4__1__2__3__4, rel__addr__1__1, FULL, rel___dollorrule43__inter__body2__3__3, DELTA, {0, 4, 3, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head47__2__2, rel___dollorinter__head47__2__1__2, DELTA, {1, 2, 0}));
scc108->add_rule(new parallel_join(rel___dollorrule13__inter__body4__3__1__2__3, rel__store__2__1, DELTA, rel___dollorlst__2__1, FULL, {4, 2, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorrule39__inter__body5__6__5, rel___dollorrule39__inter__body5__6__1__2__3__4__5__6, DELTA, {4, 6, 0, 1, 2, 3, 5}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub2__6__1__2__3__4__5__6, rel__do__ext__all__2__1__2, DELTA, rel___dollorinter__head41__6__6__3, FULL, {2, 1, 4, 5, 6, 7}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified59__4__1__2__3__4, rel__fixedparam__1__1, DELTA, rel___dollorrule39__inter__body__4__4, FULL, {4, 3, 5, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule12__inter__body3__6__2, rel___dollorrule12__inter__body3__6__1__2__3__4__5__6, DELTA, {1, 6, 0, 2, 3, 4, 5}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body3__8__1__2__3__4__5__6__7__8, rel___dollorrule21__inter__body__1__1, DELTA, rel___dollorrule21__inter__body2__9__9, FULL, {3, 4, 5, 6, 7, 8, 9, 10}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body3__8__1__2__3__4__5__6__7__8, rel___dollorrule21__inter__body__1__1, DELTA, rel___dollorrule21__inter__body2__9__9, DELTA, {3, 4, 5, 6, 7, 8, 9, 10}));
scc108->add_rule(new parallel_join(rel___dollorrule27__inter__body1__2__1__2, rel__vararg__1__1, DELTA, rel__store__2__1, DELTA, {3, 1}));
scc108->add_rule(new parallel_join(rel___dollorinter__head52__3__1__2__3, rel__ret__2__2, DELTA, rel___dollorrule16__inter__body__3__3, FULL, {4, 5, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorrule23__inter__body__4__, rel___dollorrule23__inter__body__4__1__2__3__4, DELTA, {4, 0, 1, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule22__inter__body7__3__1__2__3, rel___dollorlst__append__2__1, FULL, rel___dollorrule22__inter__body5__3__3, DELTA, {4, 5, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified47__5__1__2__3__4__5, rel__addr__1__1, FULL, rel___dollorinter__head46__4__2, DELTA, {3, 0, 4, 5, 1}));
scc108->add_rule(new parallel_join(rel__store__2__1__2, rel__define__3__1__2__3, DELTA, rel___dollorhead__stratified7__4__1__3__4, DELTA, {5, 3}));
scc108->add_rule(new parallel_join(rel___dollorinter__head41__6__1__2__3__4__5__6, rel___dollorrule22__inter__body3__1__1, DELTA, rel___dollorrule22__inter__body2__7__7, DELTA, {3, 4, 5, 6, 7, 8}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head25__4__3__4, rel___dollorinter__head25__4__1__2__3__4, DELTA, {2, 3, 4, 0, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule41__inter__body2__9__1__2__3__4__5__6__7__8__9, rel__quote__1__1, DELTA, rel___dollorrule41__inter__body1__9__7, FULL, {3, 4, 5, 6, 7, 8, 9, 10, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule41__inter__body2__9__1__2__3__4__5__6__7__8__9, rel__quote__1__1, DELTA, rel___dollorrule41__inter__body1__9__7, DELTA, {3, 4, 5, 6, 7, 8, 9, 10, 1}));
scc108->add_rule(new parallel_join(rel__store__2__1__2, rel__define__3__1__2__3, FULL, rel___dollorhead__stratified59__4__1__4__3, DELTA, {5, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified33__2__1__2, rel__addr__1__1, FULL, rel___dollorrule30__inter__body__2__1, DELTA, {3, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head31__4__2__3, rel___dollorinter__head31__4__1__2__3__4, DELTA, {1, 2, 4, 0, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified34__3__1__2__3, rel__state__1__1, DELTA, rel___dollorrule11__inter__body__3__2, DELTA, {3, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorinter__head18__4__1__2__3__4, rel__appl__2__0, FULL, rel__eval__3__1, DELTA, {4, 2, 5, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule43__inter__body__4__4, rel___dollorrule43__inter__body__4__1__2__3__4, DELTA, {3, 4, 0, 1, 2}));
scc108->add_rule(new parallel_acopy(rel__saddr__1__0, rel__saddr__1__1, DELTA, {1, 0}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified14__7__1__2__3__4__5__6__7, rel__app__2__1__2, FULL, rel___dollorhead__stratified13__8__4__8, DELTA, {4, 5, 6, 7, 8, 9, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule25__inter__body2__6__1__2__3__4__5__6, rel__kaddr__1__1, DELTA, rel___dollorinter__head48__5__3, DELTA, {3, 4, 0, 1, 5, 6}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head17__5__5__1, rel___dollorinter__head17__5__1__2__3__4__5, DELTA, {4, 0, 5, 1, 2, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorbir__sub19__3__1, rel___dollorbir__sub19__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub5__5__1__2__3__4__5, rel__do__ext__all__2__1__2, DELTA, rel___dollorhead__stratified54__6__5__6, DELTA, {2, 4, 6, 7, 5}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head22__9__3__5__6__7__4__2__8__1, rel___dollorinter__head22__9__1__2__3__4__5__6__7__8__9, DELTA, {2, 4, 5, 6, 3, 1, 7, 0, 9, 8}));
scc108->add_rule(new parallel_acopy(rel__apply__3__2, rel__apply__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule25__inter__body6__5__1__2__3__4__5, rel__lambda__2__0, FULL, rel___dollorrule25__inter__body5__4__1, DELTA, {4, 2, 5, 6, 1}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified29__4__1__2__3__4, rel__fixedparam__1__1, DELTA, rel___dollorrule43__inter__body__4__4, DELTA, {4, 5, 3, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule12__inter__body4__3__2, rel___dollorrule12__inter__body4__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule18__inter__body2__4__1__2__3__4, rel__bool__1__0, FULL, rel___dollorrule18__inter__body1__4__1, DELTA, {3, 1, 4, 5}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head10__5__5__1, rel___dollorinter__head10__5__1__2__3__4__5, DELTA, {4, 0, 5, 1, 2, 3}));
scc108->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__appk__4__1__2__3__4, DELTA, rel___dollorhead__stratified36__5__5__1__2__3, DELTA, {6, 2, 4}));
scc108->add_rule(new parallel_join(rel___dollorrule27__inter__body5__3__1__2__3, rel__do__var__prop__all__2__1__2, DELTA, rel___dollorinter__head34__5__1__2, DELTA, {4, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorrule42__inter__body3__4__1__2__3__4, rel___dollornil__1__1, DELTA, rel___dollorrule42__inter__body2__4__4, FULL, {3, 4, 5, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule14__inter__body2__4__2, rel___dollorrule14__inter__body2__4__1__2__3__4, DELTA, {1, 4, 0, 2, 3}));
scc108->add_rule(new parallel_acopy(rel__applfk__2__1, rel__applfk__2__1__2, DELTA, {0, 2, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule13__inter__body7__4__1__2__3__4, rel___dollorrule13__inter__body4__3__3, DELTA, rel___dollorrule13__inter__body6__3__1, FULL, {6, 2, 3, 5}));
scc108->add_rule(new parallel_copy_generate(rel___dollorrule13__inter__body3__1__1, rel___dollornil__1__1, DELTA, [](const u64* const data, u64* const output) -> int{
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
scc108->add_rule(new parallel_join(rel___dollorhead__stratified54__6__1__2__3__4__5__6, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified53__6__1__6, DELTA, {0, 4, 5, 6, 7, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule25__inter__body3__6__1__2__3__4__5__6, rel__list__of__1__1, DELTA, rel___dollorrule25__inter__body2__6__1, DELTA, {4, 5, 3, 6, 1, 7}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head13__2__2, rel___dollorinter__head13__2__1__2, DELTA, {1, 2, 0}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head50__5__1__5__2__3, rel___dollorinter__head50__5__1__2__3__4__5, DELTA, {0, 4, 1, 2, 5, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified30__4__1__2__3__4, rel__lambda__2__1__2, DELTA, rel___dollorinter__head17__5__5__1, FULL, {4, 5, 6, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head7__2__, rel___dollorinter__head7__2__1__2, DELTA, {2, 0, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule26__inter__body__3__3, rel___dollorrule26__inter__body__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule30__inter__body__2__1__2, rel__do__fixed__prop__all__2__1__2, DELTA, rel___dollorinter__head26__4__1__2, FULL, {4, 5}));
scc108->add_rule(new parallel_join(rel___dollorinter__head7__2__1__2, rel___dollorrule1__inter__body3__1__, FULL, rel__top__level__env__1__, DELTA, {3, 1}));
scc108->add_rule(new parallel_copy(rel__env__set__3__1__2__3, rel___dollorhead__stratified26__3__1__2__3, DELTA, {2, 0, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorbir__sub18__2__2, rel___dollorbir__sub18__2__1__2, DELTA, {1, 2, 0}));
scc108->add_rule(new parallel_copy(rel__halt__0__, rel___dollorinter__head7__2__1__2, DELTA, {}));
scc108->add_rule(new parallel_acopy(rel___dollorrule14__inter__body3__4__4, rel___dollorrule14__inter__body3__4__1__2__3__4, DELTA, {3, 4, 0, 1, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorlst__append__input__2__1, rel___dollorlst__append__input__2__1__2, DELTA, {0, 2, 1}));
scc108->add_rule(new parallel_join(rel___dollorinter__head31__4__1__2__3__4, rel___dollorlst__split__3__1, DELTA, rel___dollorbir__sub20__3__1, DELTA, {3, 5, 2, 6}));
scc108->add_rule(new parallel_acopy(rel__top__level__env__1__, rel__top__level__env__1__1, DELTA, {1, 0}));
scc108->add_rule(new parallel_join(rel___dollorinter__head7__2__1__2, rel___dollorrule1__inter__body3__1__, DELTA, rel__top__level__env__1__, FULL, {3, 1}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified19__4__1__2__3__4, rel__kaddr__1__1, DELTA, rel___dollorrule22__inter__body__3__3, FULL, {0, 3, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule9__inter__body2__6__1__2__3__4__5__6, rel___dollorrule9__inter__body1__4__3, DELTA, rel___dollorrule9__inter__body__4__2, FULL, {2, 6, 3, 7, 4, 8}));
scc108->add_rule(new parallel_join(rel___dollorrule9__inter__body2__6__1__2__3__4__5__6, rel___dollorrule9__inter__body1__4__3, DELTA, rel___dollorrule9__inter__body__4__2, DELTA, {2, 6, 3, 7, 4, 8}));
scc108->add_rule(new parallel_join(rel___dollorlst__append__input__2__1__2, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified18__3__2__3, FULL, {4, 2}));
scc108->add_rule(new parallel_join(rel__eval__3__1__2__3, rel___dollorrule19__inter__body2__1__1, FULL, rel__if__k__4__0, DELTA, {3, 4, 5}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub10__3__1__2__3, rel__split__at__input__2__1__2, DELTA, rel__breaks__into__input__3__1__3, FULL, {2, 3, 4}));
scc108->add_rule(new parallel_join(rel___dollorinter__head37__5__1__2__3__4__5, rel__ext__all__2__1, DELTA, rel___dollorbir__sub4__5__1, DELTA, {4, 2, 7, 6, 5}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head19__10__7__9__6__3__5__4__2__8__1, rel___dollorinter__head19__10__1__2__3__4__5__6__7__8__9__10, DELTA, {6, 8, 5, 2, 4, 3, 1, 7, 0, 10, 9}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head32__5__5, rel___dollorinter__head32__5__1__2__3__4__5, DELTA, {4, 5, 0, 1, 2, 3}));
scc108->add_rule(new parallel_join(rel__apply__3__1__2__3, rel__fixedarg__1__1, DELTA, rel___dollorinter__head20__3__1, DELTA, {3, 1, 4}));
scc108->add_rule(new parallel_join(rel___dollorrule13__inter__body6__3__1__2__3, rel___dollorrule13__inter__body5__1__1, DELTA, rel__appk__4__2, FULL, {3, 5, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__splice3__7__4__7, rel___dollorhead__splice3__7__1__2__3__4__5__6__7, DELTA, {3, 6, 7, 0, 1, 2, 4, 5}));
scc108->add_rule(new parallel_copy(rel__env__set__3__1__2__3, rel___dollorhead__stratified25__5__1__2__3__4__5, DELTA, {4, 1, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule14__inter__body1__4__1__2__3__4, rel___dollornil__1__0, DELTA, rel___dollorrule14__inter__body__3__2, DELTA, {3, 0, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified13__8__1__2__3__4__5__6__7__8, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified12__9__3__8, DELTA, {4, 5, 6, 7, 8, 9, 10, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorrule18__inter__body__4__4, rel___dollorrule18__inter__body__4__1__2__3__4, DELTA, {3, 4, 0, 1, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule22__inter__body__3__1__2__3, rel___dollorhead__splice2__3__1__2__3, DELTA, rel___dollorinter__head8__6__3__4__1, DELTA, {6, 7, 5}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified26__3__1__2__3, rel__env__set__3__1__2__3, DELTA, rel___dollorhead__stratified25__5__5__2__4, FULL, {5, 6, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head3__7__6, rel___dollorinter__head3__7__1__2__3__4__5__6__7, DELTA, {5, 7, 0, 1, 2, 3, 4, 6}));
scc108->add_rule(new parallel_join(rel___dollorrule22__inter__body2__7__1__2__3__4__5__6__7, rel__ret__2__2, DELTA, rel__letk__6__0, FULL, {2, 3, 4, 5, 8, 7, 6}));
scc108->add_rule(new parallel_join(rel___dollorrule22__inter__body2__7__1__2__3__4__5__6__7, rel__ret__2__2, DELTA, rel__letk__6__0, DELTA, {2, 3, 4, 5, 8, 7, 6}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified53__6__1__2__3__4__5__6, rel___dollornil__1__1, DELTA, rel___dollorinter__head49__6__4, FULL, {3, 4, 5, 6, 7, 1}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified__5__1__2__3__4__5, rel__addr__1__1, DELTA, rel___dollorrule42__inter__body3__4__2, FULL, {0, 5, 4, 1, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule13__inter__body2__4__1__2__3__4, rel___dollorrule13__inter__body1__4__1__4, FULL, rel___dollorbir__sub9__4__1__2, DELTA, {7, 4, 3, 6}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified18__3__2__3, rel___dollorhead__stratified18__3__1__2__3, DELTA, {1, 2, 3, 0}));
scc108->add_rule(new parallel_join(rel___dollorrule43__inter__body2__3__1__2__3, rel___dollornil__1__1, DELTA, rel___dollorrule43__inter__body1__3__3, FULL, {4, 1, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule18__inter__body1__4__1__2__3__4, rel__store__2__1, FULL, rel___dollorrule18__inter__body__4__4, DELTA, {2, 4, 5, 6}));
scc108->add_rule(new parallel_copy(rel__if__k__4__1__2__3__4, rel___dollorinter__head23__5__1__2__3__4__5, DELTA, {2, 4, 1, 3}));
scc108->add_rule(new parallel_join(rel___dollorinter__head24__3__1__2__3, rel___dollorlst__append__2__1, FULL, rel___dollorbir__sub19__3__1, DELTA, {5, 4, 2}));
scc108->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified14__7__1__2__3__4__5__6__7, DELTA, {6, 1}));
scc108->add_rule(new parallel_copy(rel___dollorhead__splice2__3__1__2__3, rel___dollorinter__head8__6__1__2__3__4__5__6, DELTA, {2, 3, 0}));
scc108->add_rule(new parallel_join(rel___dollorrule25__inter__body2__6__1__2__3__4__5__6, rel__kaddr__1__1, DELTA, rel___dollorinter__head48__5__3, FULL, {3, 4, 0, 1, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified12__9__1__2__3__4__5__6__7__8__9, rel__fixedparam__1__1, DELTA, rel___dollorrule41__inter__body__9__4, FULL, {6, 4, 3, 7, 5, 9, 10, 8, 1}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified12__9__1__2__3__4__5__6__7__8__9, rel__fixedparam__1__1, DELTA, rel___dollorrule41__inter__body__9__4, DELTA, {6, 4, 3, 7, 5, 9, 10, 8, 1}));
scc108->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head6__7__1__2__3__4__5__6__7, DELTA, {5}));
scc108->add_rule(new parallel_join(rel___dollorinter__head21__4__1__2__3__4, rel___dollorlst__2__0, FULL, rel___dollorlst__append__input__2__1, DELTA, {1, 3, 2, 4}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub20__3__1__2__3, rel___dollorlst__split__input__1__1, DELTA, rel___dollorinter__head30__3__3, FULL, {1, 3, 4}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified22__11__1__2__3__4__5__6__7__8__9__10__11, rel__empty__0__, FULL, rel___dollorrule44__inter__body4__10__, DELTA, {6, 7, 8, 4, 9, 3, 11, 10, 5, 2, 0}));
scc108->add_rule(new parallel_acopy(rel___dollorrule21__inter__body12__8__3, rel___dollorrule21__inter__body12__8__1__2__3__4__5__6__7__8, DELTA, {2, 8, 0, 1, 3, 4, 5, 6, 7}));
scc108->add_rule(new parallel_join(rel___dollorrule40__inter__body1__5__1__2__3__4__5, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified5__6__3__5, FULL, {7, 2, 4, 6, 5}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified48__3__3__1, rel___dollorhead__stratified48__3__1__2__3, DELTA, {2, 0, 3, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified13__8__4__8, rel___dollorhead__stratified13__8__1__2__3__4__5__6__7__8, DELTA, {3, 7, 8, 0, 1, 2, 4, 5, 6}));
scc108->add_rule(new parallel_acopy(rel__env__map__3__2, rel__env__map__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule41__inter__body7__9__1__2__3__4__5__6__7__8__9, rel__ref__1__1, FULL, rel___dollorrule41__inter__body6__8__8, DELTA, {3, 4, 1, 5, 6, 7, 8, 9, 0}));
scc108->add_rule(new parallel_join(rel___dollorrule27__inter__body4__5__1__2__3__4__5, rel___dollorrule27__inter__body2__2__2, FULL, rel___dollorrule27__inter__body3__5__2, DELTA, {2, 5, 6, 4, 7}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified1__6__1__2__3__4__5__6, rel__fixedparam__1__1, DELTA, rel___dollorrule42__inter__body__5__5, FULL, {4, 0, 5, 3, 1, 6}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head40__5__5__1, rel___dollorinter__head40__5__1__2__3__4__5, DELTA, {4, 0, 5, 1, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule24__inter__body__3__1__2__3, rel__do__fixed__prop__all__2__1__2, FULL, rel___dollorinter__head37__5__1__3, DELTA, {4, 5, 6}));
scc108->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified1__6__1__2__3__4__5__6, DELTA, {5, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule22__inter__body7__3__1__2__3, rel___dollorlst__append__2__1, DELTA, rel___dollorrule22__inter__body5__3__3, FULL, {4, 5, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule6__inter__body__4__1__2__3__4, rel__app__2__0, DELTA, rel__eval__3__1, FULL, {2, 4, 5, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule19__inter__body2__1__1, rel___dollorrule19__inter__body1__1__1, DELTA, rel__ret__2__1, FULL, {3}));
scc108->add_rule(new parallel_join(rel___dollorrule32__inter__body1__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel__do__var__prop__all__h__3__2, DELTA, {2, 5, 4, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule39__inter__body1__5__1__5, rel___dollorrule39__inter__body1__5__1__2__3__4__5, DELTA, {0, 4, 5, 1, 2, 3}));
scc108->add_rule(new parallel_join(rel__ret__2__1__2, rel__eval__3__1__2, FULL, rel___dollorrule4__inter__body1__3__1__2, DELTA, {5, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule26__inter__body1__4__1__2__3__4, rel__clo__2__0, DELTA, rel___dollorrule26__inter__body__3__3, FULL, {2, 1, 4, 5}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body5__9__1__2__3__4__5__6__7__8__9, rel___dollorrule21__inter__body4__4__3, DELTA, rel__letk__6__4, FULL, {2, 9, 8, 3, 5, 7, 10, 4, 6}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body5__9__1__2__3__4__5__6__7__8__9, rel___dollorrule21__inter__body4__4__3, DELTA, rel__letk__6__4, DELTA, {2, 9, 8, 3, 5, 7, 10, 4, 6}));
scc108->add_rule(new parallel_join(rel___dollorrule44__inter__body4__10__1__2__3__4__5__6__7__8__9__10, rel__addr__1__1, FULL, rel___dollorrule44__inter__body3__9__4, DELTA, {5, 1, 3, 4, 0, 6, 7, 8, 9, 10}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified59__4__1__2__3__4, rel__fixedparam__1__1, FULL, rel___dollorrule39__inter__body__4__4, DELTA, {4, 3, 5, 1}));
scc108->add_rule(new parallel_join(rel___dollorinter__head29__2__1__2, rel__prim__2__0, DELTA, rel__eval__3__1, DELTA, {5, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorrule40__inter__body2__7__7__2, rel___dollorrule40__inter__body2__7__1__2__3__4__5__6__7, DELTA, {6, 1, 7, 0, 2, 3, 4, 5}));
scc108->add_rule(new parallel_join(rel__do__var__prop__all__h__3__1__2__3, rel___dollorlst__2__0, DELTA, rel___dollorrule33__inter__body1__2__2, DELTA, {2, 4, 4}));
scc108->add_rule(new parallel_join(rel___dollorrule39__inter__body__4__1__2__3__4, rel__prim__2__1__2, FULL, rel___dollorhead__stratified58__4__1__4, DELTA, {4, 0, 2, 5}));
scc108->add_rule(new parallel_copy(rel___dollorbir__sub7__6__1__2__3__4__5__6, rel___dollorinter__head6__7__1__2__3__4__5__6__7, DELTA, {1, 6, 2, 0, 3, 4}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified8__7__1__2__3__4__5__6__7, rel___dollornil__1__1, DELTA, rel___dollorinter__head3__7__6, FULL, {3, 4, 5, 6, 7, 8, 1}));
scc108->add_rule(new parallel_acopy(rel__split__at__end__input__2__2, rel__split__at__end__input__2__1__2, DELTA, {1, 2, 0}));
scc108->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__letk__6__1__2__3__4__5__6, FULL, rel___dollorhead__stratified9__7__5__7__6__3__2__4, DELTA, {8, 4, 6}));
scc108->add_rule(new parallel_join(rel___dollorrule25__inter__body__6__1__2__3__4__5__6, rel__env__set__3__1__2__3, FULL, rel___dollorhead__stratified51__7__4__1__7, DELTA, {5, 8, 3, 2, 6, 7}));
scc108->add_rule(new parallel_join(rel___dollorinter__head25__4__1__2__3__4, rel___dollorbir__sub13__3__1, DELTA, rel__split__at__3__1, DELTA, {6, 3, 2, 5}));
scc108->add_rule(new parallel_join(rel___dollorinter__head9__3__1__2__3, rel___dollorrule13__inter__body3__1__1, FULL, rel___dollorrule13__inter__body2__4__3, DELTA, {3, 4, 5}));
scc108->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__applak__3__1__2__3, DELTA, rel___dollorinter__head18__4__2__1__3, FULL, {5, 1, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorrule10__inter__body__3__2, rel___dollorrule10__inter__body__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified2__5__1__2__3__4__5, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified1__6__6__2, FULL, {4, 5, 6, 7, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body5__9__1__2__3__4__5__6__7__8__9, rel___dollorrule21__inter__body4__4__3, FULL, rel__letk__6__4, DELTA, {2, 9, 8, 3, 5, 7, 10, 4, 6}));
scc108->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified12__9__1__2__3__4__5__6__7__8__9, DELTA, {2, 7}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified23__9__1__2__3__4__5__6__7__8__9, rel__env__set__3__1__2__3, DELTA, rel___dollorhead__stratified22__11__11__3__10, FULL, {5, 6, 7, 8, 9, 10, 11, 12, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified23__9__1__2__3__4__5__6__7__8__9, rel__env__set__3__1__2__3, DELTA, rel___dollorhead__stratified22__11__11__3__10, DELTA, {5, 6, 7, 8, 9, 10, 11, 12, 3}));
scc108->add_rule(new parallel_join(rel___dollorlst__split__3__1__2__3, rel___dollorlst__2__1__2, FULL, rel___dollorinter__head31__4__2__3, DELTA, {5, 2, 4}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub17__2__1__2, rel__length__input__1__1, DELTA, rel___dollorinter__head36__2__1, FULL, {1, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorrule21__inter__body6__3__3, rel___dollorrule21__inter__body6__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule1__inter__body2__2__1__2, rel___dollorrule1__inter__body__1__1, DELTA, rel___dollorrule1__inter__body1__3__2, DELTA, {3, 4}));
scc108->add_rule(new parallel_join(rel___dollorinter__head21__4__1__2__3__4, rel___dollorlst__2__0, DELTA, rel___dollorlst__append__input__2__1, FULL, {1, 3, 2, 4}));
scc108->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__halt__0__, FULL, rel___dollorinter__head7__2__, DELTA, {3, 2, 0}));
scc108->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified8__7__1__2__3__4__5__6__7, DELTA, {4, 6}));
scc108->add_rule(new parallel_acopy(rel__applak__3__0, rel__applak__3__1__2__3, DELTA, {3, 0, 1, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule14__inter__body2__4__1__2__3__4, rel__ret__2__2, DELTA, rel___dollorrule14__inter__body1__4__1, DELTA, {4, 2, 5, 6}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified36__5__5__1__2__3, rel___dollorhead__stratified36__5__1__2__3__4__5, DELTA, {4, 0, 1, 2, 5, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body13__8__1__2__3__4__5__6__7__8, rel___dollornil__1__0, FULL, rel___dollorrule21__inter__body12__8__3, DELTA, {3, 4, 1, 8, 5, 6, 7, 9}));
scc108->add_rule(new parallel_join(rel__length__2__1__2, rel__length__input__1__1, DELTA, rel___dollorhead__stratified39__2__2, DELTA, {1, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorbir__sub__8__1__2, rel___dollorbir__sub__8__1__2__3__4__5__6__7__8, DELTA, {0, 1, 8, 2, 3, 4, 5, 6, 7}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub14__4__1__2__3__4, rel__length__input__1__1, DELTA, rel__split__at__end__input__2__2, FULL, {1, 0, 2, 3}));
scc108->add_rule(new parallel_acopy(rel__ret__2__1, rel__ret__2__1__2, DELTA, {0, 2, 1}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub2__6__1__2__3__4__5__6, rel__do__ext__all__2__1__2, FULL, rel___dollorinter__head41__6__6__3, DELTA, {2, 1, 4, 5, 6, 7}));
scc108->add_rule(new parallel_join(rel___dollorrule31__inter__body__2__1__2, rel___dollorlst__2__0, DELTA, rel__do__var__prop__all__2__1, DELTA, {4, 0}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified54__6__1__2__3__4__5__6, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified53__6__1__6, DELTA, {0, 4, 5, 6, 7, 2}));
scc108->add_rule(new parallel_join(rel___dollorinter__head23__5__1__2__3__4__5, rel__eval__3__1, DELTA, rel__if__3__0, FULL, {4, 2, 5, 3, 6}));
scc108->add_rule(new parallel_join(rel___dollorrule24__inter__body1__4__1__2__3__4, rel__clo__2__0, FULL, rel__apply__3__1, DELTA, {1, 5, 4, 2}));
scc108->add_rule(new parallel_copy(rel___dollorlst__2__1__2, rel___dollorhead__stratified10__9__1__2__3__4__5__6__7__8__9, DELTA, {1, 2}));
scc108->add_rule(new parallel_acopy(rel__appk__4__0, rel__appk__4__1__2__3__4, DELTA, {4, 0, 1, 2, 3}));
scc108->add_rule(new parallel_acopy(rel___dollorrule22__inter__body1__3__2, rel___dollorrule22__inter__body1__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorrule41__inter__body4__8__6, rel___dollorrule41__inter__body4__8__1__2__3__4__5__6__7__8, DELTA, {5, 8, 0, 1, 2, 3, 4, 6, 7}));
scc108->add_rule(new parallel_join(rel__top__level__env__1__1, rel___dollorhead__stratified26__3__1__2__3, DELTA, rel__env__set__3__2__3__1, FULL, {4}));
scc108->add_rule(new parallel_join(rel___dollorinter__head44__3__1__2__3, rel__lambda__2__0, FULL, rel__eval__3__1, DELTA, {4, 5, 0}));
scc108->add_rule(new parallel_join(rel___dollorrule12__inter__body3__6__1__2__3__4__5__6, rel___dollorrule12__inter__body1__3__1__3, DELTA, rel___dollorrule12__inter__body2__7__5__1, FULL, {6, 5, 7, 3, 8, 9}));
scc108->add_rule(new parallel_join(rel___dollorrule12__inter__body3__6__1__2__3__4__5__6, rel___dollorrule12__inter__body1__3__1__3, DELTA, rel___dollorrule12__inter__body2__7__5__1, DELTA, {6, 5, 7, 3, 8, 9}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified58__4__1__2__3__4, rel___dollorlst__2__1__2, DELTA, rel___dollorrule39__inter__body1__5__1__5, FULL, {6, 5, 4, 2}));
scc108->add_rule(new parallel_copy_generate(rel___dollorinter__head6__7__1__2__3__4__5__6__7, rel___dollorrule12__inter__body5__6__, DELTA, [](const u64* const data, u64* const output) -> int{
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
scc108->add_rule(new parallel_join(rel___dollorrule18__inter__body1__4__1__2__3__4, rel__store__2__1, DELTA, rel___dollorrule18__inter__body__4__4, FULL, {2, 4, 5, 6}));
scc108->add_rule(new parallel_copy(rel__app__2__1__2, rel___dollorhead__stratified2__5__1__2__3__4__5, DELTA, {2, 4}));
scc108->add_rule(new parallel_join(rel___dollorrule31__inter__body__2__1__2, rel___dollorlst__2__0, DELTA, rel__do__var__prop__all__2__1, FULL, {4, 0}));
scc108->add_rule(new parallel_join(rel___dollorrule25__inter__body1__4__1__2__3__4, rel__store__2__1__2, FULL, rel___dollorrule25__inter__body__6__4__6, DELTA, {4, 5, 6, 7}));
scc108->add_rule(new parallel_join(rel___dollorrule11__inter__body__3__1__2__3, rel__saddr__1__1, DELTA, rel___dollorinter__head29__2__2, FULL, {3, 0, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule24__inter__body3__5__4, rel___dollorrule24__inter__body3__5__1__2__3__4__5, DELTA, {3, 5, 0, 1, 2, 4}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body1__4__1__2__3__4, rel___dollorlst__append__input__2__2, DELTA, rel___dollorlst__2__0, FULL, {2, 4, 1, 3}));
scc108->add_rule(new parallel_acopy(rel__prim__2__0, rel__prim__2__1__2, DELTA, {2, 0, 1}));
scc108->add_rule(new parallel_join(rel__eval__3__1__2__3, rel___dollorrule19__inter__body2__1__1, DELTA, rel__if__k__4__0, FULL, {3, 4, 5}));
scc108->add_rule(new parallel_copy(rel__length__input__1__1, rel__split__at__end__input__2__1__2, DELTA, {1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule27__inter__body2__2__2, rel___dollorrule27__inter__body2__2__1__2, DELTA, {1, 2, 0}));
scc108->add_rule(new parallel_join(rel___dollorrule21__inter__body10__3__1__2__3, rel___dollorlst__append__2__1, DELTA, rel___dollorlst__append__input__2__0, FULL, {4, 3, 2}));
scc108->add_rule(new parallel_join(rel___dollorlst__append__input__2__1__2, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified55__3__2__3, FULL, {4, 2}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub4__5__1__2__3__4__5, rel__do__ext__all__2__1__2, FULL, rel___dollorinter__head40__5__5__1, DELTA, {2, 1, 6, 5, 4}));
scc108->add_rule(new parallel_join(rel___dollorlst__append__input__2__1__2, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified31__3__2__3, DELTA, {4, 2}));
scc108->add_rule(new parallel_acopy(rel___dollorrule21__inter__body8__3__2, rel___dollorrule21__inter__body8__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule12__inter__body6__5__1__2__3__4__5, rel__ret__2__2, FULL, rel__appk__4__0, DELTA, {4, 6, 5, 3, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule25__inter__body4__3__1__2__3, rel__fixedarg__1__0, FULL, rel__apply__3__2, DELTA, {1, 3, 4}));
scc108->add_rule(new parallel_acopy(rel___dollorbir__sub9__4__1__2, rel___dollorbir__sub9__4__1__2__3__4, DELTA, {0, 1, 4, 2, 3}));
scc108->add_rule(new parallel_acopy(rel__env__set__3__2, rel__env__set__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc108->add_rule(new parallel_copy(rel__appk__4__1__2__3__4, rel___dollorhead__stratified36__5__1__2__3__4__5, DELTA, {4, 0, 1, 2}));
scc108->add_rule(new parallel_join(rel__eval__3__1__2__3, rel__halt__0__, DELTA, rel___dollorinter__head7__2__, DELTA, {3, 2, 0}));
scc108->add_rule(new parallel_join(rel___dollorrule1__inter__body1__3__1__2__3, rel__fixedparam__1__0, DELTA, rel__define__3__2, FULL, {3, 1, 4}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified57__6__1__5, rel___dollorhead__stratified57__6__1__2__3__4__5__6, DELTA, {0, 4, 6, 1, 2, 3, 5}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified21__3__1__2__3, rel___dollornil__1__1, FULL, rel___dollorrule22__inter__body1__3__2, DELTA, {3, 4, 1}));
scc108->add_rule(new parallel_join(rel__store__2__1__2, rel__store__flow__2__1, DELTA, rel__store__2__1, FULL, {2, 4}));
scc108->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head19__10__1__2__3__4__5__6__7__8__9__10, DELTA, {9}));
scc108->add_rule(new parallel_join(rel___dollorrule41__inter__body1__9__1__2__3__4__5__6__7__8__9, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified10__9__2__3, DELTA, {6, 1, 9, 2, 4, 7, 8, 5, 10}));
scc108->add_rule(new parallel_copy_generate(rel___dollorrule29__inter__body__1__1, rel___dollornil__1__1, DELTA, [](const u64* const data, u64* const output) -> int{
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
scc108->add_rule(new parallel_acopy(rel___dollorrule4__inter__body1__3__1__2, rel___dollorrule4__inter__body1__3__1__2__3, DELTA, {0, 1, 3, 2}));
scc108->add_rule(new parallel_join(rel___dollorbir__sub15__4__1__2__3__4, rel__length__2__1, FULL, rel___dollorbir__sub14__4__1, DELTA, {4, 5, 6, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule22__inter__body4__4__1__2__3__4, rel___dollorlst__append__input__2__1, DELTA, rel___dollorbir__sub3__3__1, DELTA, {1, 4, 5, 2}));
scc108->add_rule(new parallel_join(rel___dollorinter__head40__5__1__2__3__4__5, rel__fixedparam__1__0, DELTA, rel___dollorrule24__inter__body3__5__4, FULL, {1, 3, 4, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorrule39__inter__body4__5__1__2__3__4__5, rel__addr__1__1, DELTA, rel___dollorrule39__inter__body3__4__4, DELTA, {1, 0, 3, 4, 5}));
scc108->add_rule(new parallel_join(rel___dollorrule40__inter__body2__7__1__2__3__4__5__6__7, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified4__7__4__6, FULL, {4, 1, 2, 7, 8, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorrule40__inter__body2__7__1__2__3__4__5__6__7, rel___dollorlst__2__1__2, DELTA, rel___dollorhead__stratified4__7__4__6, DELTA, {4, 1, 2, 7, 8, 5, 6}));
scc108->add_rule(new parallel_join(rel__ret__2__1__2, rel__kaddr__1__0, FULL, rel___dollorrule17__inter__body__3__3, DELTA, {3, 4}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified24__7__7__2__5, rel___dollorhead__stratified24__7__1__2__3__4__5__6__7, DELTA, {6, 1, 4, 7, 0, 2, 3, 5}));
scc108->add_rule(new parallel_copy(rel__ret__2__1__2, rel___dollorinter__head14__3__1__2__3, DELTA, {2, 0}));
scc108->add_rule(new parallel_copy_generate(rel___dollorrule2__inter__body1__4__1__2__3__4, rel___dollorrule2__inter__body__4__3, DELTA, [](const u64* const data, u64* const output) -> int{
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
scc108->add_rule(new parallel_copy_generate(rel___dollorrule22__inter__body6__1__1, rel___dollornil__1__1, DELTA, [](const u64* const data, u64* const output) -> int{
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
scc108->add_rule(new parallel_join(rel___dollorhead__stratified48__3__1__2__3, rel__env__set__3__1__2__3, FULL, rel___dollorhead__stratified47__5__1__2__5, DELTA, {5, 6, 3}));
scc108->add_rule(new parallel_copy(rel__appk__4__1__2__3__4, rel___dollorinter__head5__5__1__2__3__4__5, DELTA, {2, 1, 0, 3}));
scc108->add_rule(new parallel_join(rel___dollorinter__head10__5__1__2__3__4__5, rel__fixedparam__1__0, FULL, rel___dollorrule27__inter__body4__5__5, DELTA, {1, 3, 4, 5, 6}));
scc108->add_rule(new parallel_acopy(rel___dollorrule11__inter__body__3__2, rel___dollorrule11__inter__body__3__1__2__3, DELTA, {1, 3, 0, 2}));
scc108->add_rule(new parallel_copy(rel__do__ext__all__2__1__2, rel___dollorinter__head10__5__1__2__3__4__5, DELTA, {4, 0}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified47__5__1__2__3__4__5, rel__addr__1__1, DELTA, rel___dollorinter__head46__4__2, FULL, {3, 0, 4, 5, 1}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified32__3__1__2__3, rel___dollornil__1__1, DELTA, rel___dollorrule21__inter__body8__3__2, FULL, {3, 4, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule17__inter__body__3__3, rel___dollorrule17__inter__body__3__1__2__3, DELTA, {2, 3, 0, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule44__inter__body1__7__1__2__3__4__5__6__7, rel__addr__1__1, FULL, rel___dollorrule44__inter__body__6__6, DELTA, {7, 1, 3, 4, 5, 6, 0}));
scc108->add_rule(new parallel_acopy(rel___dollorrule21__inter__body11__4__2__4, rel___dollorrule21__inter__body11__4__1__2__3__4, DELTA, {1, 3, 4, 0, 2}));
scc108->add_rule(new parallel_copy(rel__length__input__1__1, rel___dollorhead__stratified39__2__1__2, DELTA, {1}));
scc108->add_rule(new parallel_acopy(rel__store__2__2, rel__store__2__1__2, DELTA, {1, 2, 0}));
scc108->add_rule(new parallel_acopy(rel___dollorrule24__inter__body1__4__3, rel___dollorrule24__inter__body1__4__1__2__3__4, DELTA, {2, 4, 0, 1, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule40__inter__body4__5__1__2__3__4__5, rel___dollornil__1__1, FULL, rel___dollorrule40__inter__body3__5__3, DELTA, {3, 1, 4, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorinter__head30__3__1__2__3, rel___dollorlst__split__input__1__1, FULL, rel___dollorlst__2__0, DELTA, {2, 1, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule25__inter__body6__5__1__2__3__4__5, rel__lambda__2__0, DELTA, rel___dollorrule25__inter__body5__4__1, FULL, {4, 2, 5, 6, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified22__11__11__3__10, rel___dollorhead__stratified22__11__1__2__3__4__5__6__7__8__9__10__11, DELTA, {10, 2, 9, 11, 0, 1, 3, 4, 5, 6, 7, 8}));
scc108->add_rule(new parallel_join(rel___dollorlst__split__3__1__2__3, rel___dollorlst__2__1__2, DELTA, rel___dollorinter__head31__4__2__3, DELTA, {5, 2, 4}));
scc108->add_rule(new parallel_join(rel___dollorlst__append__input__2__1__2, rel___dollorlst__2__1__2, FULL, rel___dollorhead__stratified32__3__2__3, DELTA, {4, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule43__inter__body__4__1__2__3__4, rel__app__2__1__2, DELTA, rel___dollorhead__stratified28__4__3__2, DELTA, {2, 4, 5, 1}));
scc108->add_rule(new parallel_copy(rel__env__set__3__1__2__3, rel___dollorhead__stratified22__11__1__2__3__4__5__6__7__8__9__10__11, DELTA, {10, 2, 9}));
scc108->add_rule(new parallel_copy_generate(rel___dollorinter__head32__5__1__2__3__4__5, rel___dollorrule6__inter__body__4__, DELTA, [](const u64* const data, u64* const output) -> int{
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
head_tuple[4] = res_0;
        return std::make_tuple(data, output + 5);
      };
      auto [_,new_ptr] = builtin_eq_1<TState>(args_for_old_bi.data(), state, callback);
      auto tuples_count = (new_ptr - output) / 5;
      return tuples_count;
    }));
scc108->add_rule(new parallel_join(rel___dollorrule22__inter__body1__3__1__2__3, rel___dollorbir__sub3__3__1__2__3, DELTA, rel___dollorinter__head11__4__2__4__1, FULL, {0, 5, 1}));
scc108->add_rule(new parallel_copy(rel__store__2__1__2, rel___dollorhead__stratified51__7__1__2__3__4__5__6__7, DELTA, {5, 2}));
scc108->add_rule(new parallel_join(rel___dollorrule41__inter__body6__8__1__2__3__4__5__6__7__8, rel__ref__1__1, FULL, rel___dollorrule41__inter__body5__8__5, DELTA, {7, 1, 3, 4, 5, 6, 8, 9}));
scc108->add_rule(new parallel_join(rel___dollorrule26__inter__body__3__1__2__3, rel__vararg__1__0, DELTA, rel__apply__3__2, FULL, {4, 1, 3}));
scc108->add_rule(new parallel_join(rel___dollorrule27__inter__body__4__1__2__3__4, rel__clo__2__1, DELTA, rel__lambda__2__0, DELTA, {4, 1, 2, 3}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified1__6__1__2__3__4__5__6, rel__fixedparam__1__1, DELTA, rel___dollorrule42__inter__body__5__5, DELTA, {4, 0, 5, 3, 1, 6}));
scc108->add_rule(new parallel_join(rel___dollorrule12__inter__body6__5__1__2__3__4__5, rel__ret__2__2, DELTA, rel__appk__4__0, FULL, {4, 6, 5, 3, 2}));
scc108->add_rule(new parallel_copy(rel__fixedparam__1__1, rel___dollorhead__stratified28__4__1__2__3__4, DELTA, {1}));
scc108->add_rule(new parallel_acopy(rel___dollorrule25__inter__body6__5__5, rel___dollorrule25__inter__body6__5__1__2__3__4__5, DELTA, {4, 5, 0, 1, 2, 3}));
scc108->add_rule(new parallel_join(rel__store__2__1__2, rel__define__3__1__2__3, DELTA, rel___dollorhead__stratified7__4__1__3__4, FULL, {5, 3}));
scc108->add_rule(new parallel_acopy(rel__ext__all__2__1, rel__ext__all__2__1__2, DELTA, {0, 2, 1}));
scc108->add_rule(new parallel_acopy(rel__length__2__1, rel__length__2__1__2, DELTA, {0, 2, 1}));
scc108->add_rule(new parallel_join(rel___dollorrule40__inter__body4__5__1__2__3__4__5, rel___dollornil__1__1, DELTA, rel___dollorrule40__inter__body3__5__3, FULL, {3, 1, 4, 5, 6}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified55__3__1__2__3, rel___dollornil__1__1, DELTA, rel___dollorrule13__inter__body8__3__2, FULL, {3, 4, 1}));
scc108->add_rule(new parallel_acopy(rel___dollorinter__head8__6__3__4__1, rel___dollorinter__head8__6__1__2__3__4__5__6, DELTA, {2, 3, 0, 6, 1, 4, 5}));
scc108->add_rule(new parallel_acopy(rel___dollorrule21__inter__body13__8__3, rel___dollorrule21__inter__body13__8__1__2__3__4__5__6__7__8, DELTA, {2, 8, 0, 1, 3, 4, 5, 6, 7}));
scc108->add_rule(new parallel_join(rel___dollorrule44__inter__body1__7__1__2__3__4__5__6__7, rel__addr__1__1, DELTA, rel___dollorrule44__inter__body__6__6, FULL, {7, 1, 3, 4, 5, 6, 0}));
scc108->add_rule(new parallel_join(rel___dollorrule22__inter__body__3__1__2__3, rel___dollorhead__splice2__3__1__2__3, DELTA, rel___dollorinter__head8__6__3__4__1, FULL, {6, 7, 5}));
scc108->add_rule(new parallel_acopy(rel___dollorbir__sub13__3__1, rel___dollorbir__sub13__3__1__2__3, DELTA, {0, 3, 1, 2}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified3__4__1__2__3__4, rel__app__2__1__2, FULL, rel___dollorhead__stratified2__5__3__5, DELTA, {4, 5, 6, 2}));
scc108->add_rule(new parallel_copy(rel___dollornil__1__1, rel___dollorinter__head49__6__1__2__3__4__5__6, DELTA, {3}));
scc108->add_rule(new parallel_acopy(rel___dollorhead__stratified7__4__1__3__4, rel___dollorhead__stratified7__4__1__2__3__4, DELTA, {0, 2, 3, 4, 1}));
scc108->add_rule(new parallel_join(rel___dollorhead__stratified56__7__1__2__3__4__5__6__7, rel__ref__1__1, FULL, rel___dollorrule39__inter__body5__6__5, DELTA, {0, 7, 4, 3, 5, 1, 6}));
scc108->add_rule(new parallel_join(rel___dollorrule36__inter__body__4__1__2__3__4, rel__env__set__3__1, FULL, rel__env__map__3__1, DELTA, {2, 5, 1, 6}));

RAM* scc109 = new RAM(false, 109);
scc109->add_relation(rel__halt__0__0, true, false);
scc109->add_relation(rel__halt__0__, true, false);
scc109->add_rule(new parallel_acopy(rel__halt__0__0, rel__halt__0__, DELTA, {0}));

RAM* scc110 = new RAM(false, 110);
scc110->add_relation(rel___dollorinter__head__3__1__2__3, true, false);
scc110->add_relation(rel___dollorinter__head__3__1__3, true, false);
scc110->add_rule(new parallel_acopy(rel___dollorinter__head__3__1__3, rel___dollorinter__head__3__1__2__3, DELTA, {0, 2, 3, 1}));

RAM* scc111 = new RAM(false, 111);
scc111->add_relation(rel__split__at__input__2__1__2, false, false);
scc111->add_relation(rel___dollorinter__head__3__1__3, false, true);
scc111->add_relation(rel___dollorbir__sub16__2__1__2, true, false);
scc111->add_rule(new parallel_join(rel___dollorbir__sub16__2__1__2, rel__split__at__input__2__1__2, FULL, rel___dollorinter__head__3__1__3, FULL, {2, 4}));

RAM* scc112 = new RAM(false, 112);
scc112->add_relation(rel___dollorbir__sub16__2__1, true, false);
scc112->add_relation(rel___dollorbir__sub16__2__1__2, true, false);
scc112->add_rule(new parallel_acopy(rel___dollorbir__sub16__2__1, rel___dollorbir__sub16__2__1__2, DELTA, {0, 2, 1}));

RAM* scc113 = new RAM(false, 113);
scc113->add_relation(rel___dollorbir__sub11__4__1__2__3__4, true, false);
scc113->add_relation(rel___dollorbir__sub11__4__2__4, true, false);
scc113->add_rule(new parallel_acopy(rel___dollorbir__sub11__4__2__4, rel___dollorbir__sub11__4__1__2__3__4, DELTA, {1, 3, 4, 0, 2}));

RAM* scc114 = new RAM(false, 114);
scc114->add_relation(rel___dollorbir__sub12__3__1__2__3, true, false);
scc114->add_relation(rel___dollorbir__sub11__4__2__4, false, true);
scc114->add_relation(rel__split__at__end__input__2__1__2, false, false);
scc114->add_rule(new parallel_join(rel___dollorbir__sub12__3__1__2__3, rel__split__at__end__input__2__1__2, FULL, rel___dollorbir__sub11__4__2__4, FULL, {2, 4, 5}));

RAM* scc115 = new RAM(false, 115);
scc115->add_relation(rel___dollorbir__sub12__3__1__2__3, true, false);
scc115->add_relation(rel___dollorbir__sub12__3__1, true, false);
scc115->add_rule(new parallel_acopy(rel___dollorbir__sub12__3__1, rel___dollorbir__sub12__3__1__2__3, DELTA, {0, 3, 1, 2}));

RAM* scc116 = new RAM(false, 116);
scc116->add_relation(rel__addr__1__1, true, false);
scc116->add_relation(rel__addr__1__0, true, false);
scc116->add_rule(new parallel_acopy(rel__addr__1__0, rel__addr__1__1, DELTA, {1, 0}));

RAM* scc117 = new RAM(false, 117);
scc117->add_relation(rel___dollorrule37__inter__body1__2__1__2, true, false);
scc117->add_relation(rel__store__2__1, false, false);
scc117->add_relation(rel__addr__1__0, false, false);
scc117->add_rule(new parallel_join(rel___dollorrule37__inter__body1__2__1__2, rel__addr__1__0, FULL, rel__store__2__1, FULL, {0, 3}));

RAM* scc118 = new RAM(false, 118);
scc118->add_relation(rel___dollorrule37__inter__body1__2__1__2, true, false);
scc118->add_relation(rel___dollorrule37__inter__body1__2__1, true, false);
scc118->add_rule(new parallel_acopy(rel___dollorrule37__inter__body1__2__1, rel___dollorrule37__inter__body1__2__1__2, DELTA, {0, 2, 1}));

RAM* scc119 = new RAM(false, 119);
scc119->add_relation(rel__halt__0__0, false, false);
scc119->add_relation(rel___dollorrule38__inter__body__2__1__2, true, false);
scc119->add_relation(rel__ret__2__2, false, false);
scc119->add_rule(new parallel_join(rel___dollorrule38__inter__body__2__1__2, rel__halt__0__0, FULL, rel__ret__2__2, FULL, {2, 1}));

RAM* scc120 = new RAM(false, 120);
scc120->add_relation(rel___dollorrule38__inter__body__2__1__2, true, false);
scc120->add_relation(rel___dollorrule38__inter__body__2__1, true, false);
scc120->add_rule(new parallel_acopy(rel___dollorrule38__inter__body__2__1, rel___dollorrule38__inter__body__2__1__2, DELTA, {0, 2, 1}));

RAM* scc121 = new RAM(false, 121);
scc121->add_relation(rel___dollorrule38__inter__body1__3__1__2__3, true, false);
scc121->add_relation(rel__store__2__1, false, false);
scc121->add_relation(rel___dollorrule38__inter__body__2__1, false, true);
scc121->add_rule(new parallel_join(rel___dollorrule38__inter__body1__3__1__2__3, rel__store__2__1, FULL, rel___dollorrule38__inter__body__2__1, FULL, {0, 2, 4}));

RAM* scc122 = new RAM(false, 122);
scc122->add_relation(rel___dollorrule38__inter__body1__3__1__2__3, true, false);
scc122->add_relation(rel___dollorrule38__inter__body1__3__1, true, false);
scc122->add_rule(new parallel_acopy(rel___dollorrule38__inter__body1__3__1, rel___dollorrule38__inter__body1__3__1__2__3, DELTA, {0, 3, 1, 2}));

RAM* scc123 = new RAM(false, 123);
scc123->add_relation(rel___dollorrule38__inter__body1__3__1, false, true);
scc123->add_relation(rel__answer__2__1__2, true, false);
scc123->add_relation(rel__saddr__1__0, false, false);
scc123->add_rule(new parallel_join(rel__answer__2__1__2, rel__saddr__1__0, FULL, rel___dollorrule38__inter__body1__3__1, FULL, {4, 3}));

RAM* scc124 = new RAM(false, 124);
scc124->add_relation(rel__split__at__3__1, false, false);
scc124->add_relation(rel__split__at__end__3__1__2__3, true, false);
scc124->add_relation(rel___dollorbir__sub16__2__1, false, true);
scc124->add_rule(new parallel_join(rel__split__at__end__3__1__2__3, rel___dollorbir__sub16__2__1, FULL, rel__split__at__3__1, FULL, {2, 4, 5}));

RAM* scc125 = new RAM(false, 125);
scc125->add_relation(rel__split__at__end__3__1, true, false);
scc125->add_relation(rel__split__at__end__3__1__2__3, true, false);
scc125->add_rule(new parallel_acopy(rel__split__at__end__3__1, rel__split__at__end__3__1__2__3, DELTA, {0, 3, 1, 2}));

RAM* scc126 = new RAM(false, 126);
scc126->add_relation(rel__split__at__end__3__1, false, false);
scc126->add_relation(rel___dollorbir__sub12__3__1, false, true);
scc126->add_relation(rel__breaks__into__4__1__2__3__4, true, false);
scc126->add_rule(new parallel_join(rel__breaks__into__4__1__2__3__4, rel__split__at__end__3__1, FULL, rel___dollorbir__sub12__3__1, FULL, {5, 6, 2, 3}));

RAM* scc127 = new RAM(false, 127);
scc127->add_relation(rel__halt__0__0, false, false);
scc127->add_relation(rel___dollorrule37__inter__body__2__1__2, true, false);
scc127->add_relation(rel__ret__2__2, false, false);
scc127->add_rule(new parallel_join(rel___dollorrule37__inter__body__2__1__2, rel__halt__0__0, FULL, rel__ret__2__2, FULL, {2, 1}));

RAM* scc128 = new RAM(false, 128);
scc128->add_relation(rel___dollorrule37__inter__body__2__1__2, true, false);
scc128->add_relation(rel___dollorrule37__inter__body__2__1, true, false);
scc128->add_rule(new parallel_acopy(rel___dollorrule37__inter__body__2__1, rel___dollorrule37__inter__body__2__1__2, DELTA, {0, 2, 1}));

RAM* scc129 = new RAM(false, 129);
scc129->add_relation(rel___dollorrule37__inter__body__2__1, false, true);
scc129->add_relation(rel__answer__2__1__2, true, false);
scc129->add_relation(rel___dollorrule37__inter__body1__2__1, false, true);
scc129->add_rule(new parallel_join(rel__answer__2__1__2, rel___dollorrule37__inter__body1__2__1, FULL, rel___dollorrule37__inter__body__2__1, FULL, {4, 2}));

LIE* lie = new LIE();
lie->add_relation(rel___dollorinter__head42__7__1__2__3__4__5__6__7);
lie->add_relation(rel__ret__2__1);
lie->add_relation(rel___dollorbir__sub19__3__1__2__3);
lie->add_relation(rel___dollorinter__head17__5__5__1);
lie->add_relation(rel__split__at__input__2__1__2);
lie->add_relation(rel__varparam__1__0);
lie->add_relation(rel___dollorrule37__inter__body1__2__1__2);
lie->add_relation(rel__env__map__3__2);
lie->add_relation(rel___dollorrule42__inter__body3__4__2);
lie->add_relation(rel___dollorinter__head41__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorhead__stratified36__5__1__2__3__4__5);
lie->add_relation(rel___dollorhead__stratified15__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorinter__head36__2__1);
lie->add_relation(rel___dollorrule44__inter__body2__8__5);
lie->add_relation(rel___dollorrule27__inter__body2__2__2);
lie->add_relation(rel___dollorhead__stratified16__5__2__5);
lie->add_relation(rel___dollorrule17__inter__body__3__1__2__3);
lie->add_relation(rel___dollorrule19__inter__body__2__1__2);
lie->add_relation(rel___dollorrule24__inter__body2__4__1);
lie->add_relation(rel___dollorrule21__inter__body6__3__3);
lie->add_relation(rel___dollorrule2__inter__body__4__3);
lie->add_relation(rel___dollorrule26__inter__body2__5__1);
lie->add_relation(rel___dollorbir__sub5__5__1__2__3__4__5);
lie->add_relation(rel___dollorinter__head34__5__1__2);
lie->add_relation(rel___dollorrule44__inter__body6__2__1__2);
lie->add_relation(rel___dollorrule39__inter__body4__5__5);
lie->add_relation(rel___dollorrule40__inter__body7__2__1__2);
lie->add_relation(rel___dollorhead__stratified8__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorhead__stratified59__4__1__4__3);
lie->add_relation(rel___dollorbir__sub6__5__1__2__3__4__5);
lie->add_relation(rel___dollorunit__1__1);
lie->add_relation(rel___dollorrule25__inter__body5__4__1);
lie->add_relation(rel___dollorrule24__inter__body1__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head36__2__1__2);
lie->add_relation(rel___dollorinter__head15__3__2);
lie->add_relation(rel__ext__all__2__1);
lie->add_relation(rel___dollorrule41__inter__body1__9__1__2__3__4__5__6__7__8__9);
lie->add_relation(rel___dollorrule38__inter__body1__3__1__2__3);
lie->add_relation(rel___dollorrule22__inter__body1__3__1__2__3);
lie->add_relation(rel___dollorinter__head17__5__1__2__3__4__5);
lie->add_relation(rel__list__of__1__1);
lie->add_relation(rel___dollorbir__sub18__2__1__2);
lie->add_relation(rel__apply__prim__2__1__2);
lie->add_relation(rel___dollorrule13__inter__body__3__1__2__3);
lie->add_relation(rel___dollorinter__head13__2__2);
lie->add_relation(rel___dollorrule42__inter__body__5__5);
lie->add_relation(rel___dollorinter__head4__7__4);
lie->add_relation(rel___dollorrule22__inter__body6__1__1);
lie->add_relation(rel___dollorrule27__inter__body4__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule24__inter__body__3__1__2__3);
lie->add_relation(rel___dollorbir__sub19__3__1);
lie->add_relation(rel___dollorhead__splice3__7__4__7);
lie->add_relation(rel__state__1__1);
lie->add_relation(rel___dollorhead__stratified2__5__3__5);
lie->add_relation(rel___dollorbir__sub7__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorrule5__inter__body__3__3);
lie->add_relation(rel__do__var__prop__all__h__3__2);
lie->add_relation(rel___dollorrule22__inter__body4__4__4__2);
lie->add_relation(rel___dollorrule26__inter__body3__5__);
lie->add_relation(rel___dollorrule26__inter__body__3__1__2__3);
lie->add_relation(rel___dollorrule41__inter__body10__2__1__2);
lie->add_relation(rel___dollorrule44__inter__body7__3__);
lie->add_relation(rel__top__level__env__1__);
lie->add_relation(rel___dollorrule41__inter__body3__8__1);
lie->add_relation(rel___dollorrule6__inter__body__4__);
lie->add_relation(rel__quote__1__1);
lie->add_relation(rel___dollorrule25__inter__body__6__4__6);
lie->add_relation(rel__define__3__1__2__3);
lie->add_relation(rel___dollorinter__head20__3__1);
lie->add_relation(rel__env__set__3__2);
lie->add_relation(rel___dollorhead__stratified11__9__1__2__3__4__5__6__7__8__9);
lie->add_relation(rel___dollorhead__stratified60__6__1__2__3__4__5__6);
lie->add_relation(rel__clo__2__1__2);
lie->add_relation(rel___dollorinter__head37__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule22__inter__body7__3__2);
lie->add_relation(rel___dollorhead__stratified55__3__2__3);
lie->add_relation(rel__prim__2__0);
lie->add_relation(rel___dollorinter__head25__4__1__2__3__4);
lie->add_relation(rel___dollorrule26__inter__body1__4__2);
lie->add_relation(rel___dollorrule27__inter__body__4__2);
lie->add_relation(rel___dollorhead__stratified19__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head53__5__1);
lie->add_relation(rel___dollorrule21__inter__body4__4__1__2__3__4);
lie->add_relation(rel__split__at__3__1);
lie->add_relation(rel___dollorrule27__inter__body2__2__1__2);
lie->add_relation(rel___dollorhead__stratified48__3__1__2__3);
lie->add_relation(rel___dollorrule42__inter__body2__4__4);
lie->add_relation(rel___dollorinter__head4__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorrule1__inter__body3__1__);
lie->add_relation(rel___dollorhead__stratified56__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorrule27__inter__body3__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule40__inter__body2__7__7__2);
lie->add_relation(rel__length__2__1);
lie->add_relation(rel___dollorhead__stratified1__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorhead__stratified22__11__1__2__3__4__5__6__7__8__9__10__11);
lie->add_relation(rel___dollorrule21__inter__body3__8__1__2__3__4__5__6__7__8);
lie->add_relation(rel___dollorrule2__inter__body1__4__3);
lie->add_relation(rel___dollorinter__head27__4__4__1);
lie->add_relation(rel___dollorrule10__inter__body__3__1__2__3);
lie->add_relation(rel__halt__0__0);
lie->add_relation(rel___dollorhead__stratified28__4__3__2);
lie->add_relation(rel__app__2__1__2);
lie->add_relation(rel___dollorrule12__inter__body6__5__1);
lie->add_relation(rel___dollorinter__head7__2__1__2);
lie->add_relation(rel___dollorinter__head21__4__1__2__3__4);
lie->add_relation(rel___dollorrule40__inter__body5__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorhead__stratified7__4__1__2__3__4);
lie->add_relation(rel___dollorbir__sub9__4__1__2);
lie->add_relation(rel___dollorrule42__inter__body1__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head13__2__1__2);
lie->add_relation(rel___dollorrule25__inter__body1__4__2__4);
lie->add_relation(rel___dollorhead__stratified1__6__6__2);
lie->add_relation(rel__app__2__0);
lie->add_relation(rel___dollorrule9__inter__body__4__2);
lie->add_relation(rel__lambda__2__1__2);
lie->add_relation(rel___dollorrule40__inter__body7__2__);
lie->add_relation(rel___dollorhead__stratified36__5__5__1__2__3);
lie->add_relation(rel___dollorhead__splice2__3__);
lie->add_relation(rel___dollorinter__head42__7__7__3__6__4__2__5);
lie->add_relation(rel___dollorrule40__inter__body1__5__5__1);
lie->add_relation(rel___dollorrule42__inter__body4__1__);
lie->add_relation(rel___dollorrule25__inter__body3__6__3);
lie->add_relation(rel___dollorinter__head49__6__4);
lie->add_relation(rel__bool__1__0);
lie->add_relation(rel___dollorhead__stratified29__4__1__4__3);
lie->add_relation(rel__clo__2__1);
lie->add_relation(rel___dollorbir__sub8__2__1__2);
lie->add_relation(rel___dollorhead__stratified23__9__1__2__3__4__5__6__7__8__9);
lie->add_relation(rel__store__2__1);
lie->add_relation(rel___dollorhead__stratified53__6__1__6);
lie->add_relation(rel___dollorrule21__inter__body10__3__1__2__3);
lie->add_relation(rel__fixedparam__1__1);
lie->add_relation(rel___dollorhead__stratified26__3__1__2__3);
lie->add_relation(rel___dollorhead__stratified14__7__1__2__3__4__5__6__7);
lie->add_relation(rel__fixedparam__1__0);
lie->add_relation(rel___dollorbir__sub3__3__1__2__3);
lie->add_relation(rel___dollorhead__stratified6__4__1__3);
lie->add_relation(rel___dollorhead__stratified16__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule25__inter__body6__5__5);
lie->add_relation(rel___dollorrule22__inter__body1__3__2);
lie->add_relation(rel___dollorunit__1__);
lie->add_relation(rel___dollorinter__head20__3__1__2__3);
lie->add_relation(rel___dollorrule21__inter__body8__3__1__2__3);
lie->add_relation(rel___dollorinter__head10__5__1__2__3__4__5);
lie->add_relation(rel__let__2__1__2);
lie->add_relation(rel___dollorhead__stratified53__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorrule21__inter__body4__4__3);
lie->add_relation(rel___dollorrule40__inter__body2__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorlst__append__2__1__2);
lie->add_relation(rel___dollorrule42__inter__body6__3__);
lie->add_relation(rel___dollorbir__sub20__3__1);
lie->add_relation(rel___dollorbir__sub7__6__2);
lie->add_relation(rel__kaddr__1__1);
lie->add_relation(rel__apply__prim__2__0);
lie->add_relation(rel___dollorinter__head11__4__2__4__1);
lie->add_relation(rel___dollorrule24__inter__body2__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head45__5__1__2__3__4__5);
lie->add_relation(rel___dollorhead__stratified59__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head46__4__1__2__3__4);
lie->add_relation(rel___dollorrule25__inter__body6__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule39__inter__body__4__4);
lie->add_relation(rel___dollorrule21__inter__body1__4__1__2__3__4);
lie->add_relation(rel___dollorrule26__inter__body2__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule4__inter__body__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule41__inter__body12__4__1__2__3__4);
lie->add_relation(rel___dollorrule12__inter__body2__7__5__1);
lie->add_relation(rel___dollorhead__stratified4__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorlst__append__2__1);
lie->add_relation(rel__split__at__end__input__2__2);
lie->add_relation(rel__env__map__3__1__2__3);
lie->add_relation(rel__store__flow__2__1);
lie->add_relation(rel__split__at__input__2__1);
lie->add_relation(rel___dollorinter__head19__10__1__2__3__4__5__6__7__8__9__10);
lie->add_relation(rel___dollorrule41__inter__body11__3__1__2__3);
lie->add_relation(rel___dollorrule13__inter__body7__4__1__2__3__4);
lie->add_relation(rel___dollorhead__stratified31__3__1__2__3);
lie->add_relation(rel___dollorrule38__inter__body__2__1__2);
lie->add_relation(rel___dollorbir__sub5__5__1);
lie->add_relation(rel___dollorrule44__inter__body1__7__1);
lie->add_relation(rel__prim__2__1__2);
lie->add_relation(rel___dollorrule26__inter__body1__4__1__2__3__4);
lie->add_relation(rel___dollorrule41__inter__body5__8__1__2__3__4__5__6__7__8);
lie->add_relation(rel___dollorinter__head52__3__1__2__3);
lie->add_relation(rel___dollorhead__splice1__9__6__9);
lie->add_relation(rel___dollorrule21__inter__body11__4__1__2__3__4);
lie->add_relation(rel___dollorrule12__inter__body1__3__1__2__3);
lie->add_relation(rel___dollorrule43__inter__body3__1__);
lie->add_relation(rel___dollorrule41__inter__body4__8__6);
lie->add_relation(rel___dollorrule27__inter__body5__3__1);
lie->add_relation(rel__env__set__3__1);
lie->add_relation(rel___dollorrule18__inter__body2__4__1__2__3__4);
lie->add_relation(rel___dollorhead__stratified55__3__1__2__3);
lie->add_relation(rel__appl__2__1__2);
lie->add_relation(rel___dollorbir__sub2__6__1);
lie->add_relation(rel___dollorhead__stratified5__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorinter__head5__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule44__inter__body__6__6);
lie->add_relation(rel___dollorrule25__inter__body3__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorrule41__inter__body8__9__8);
lie->add_relation(rel___dollorlst__append__input__2__0);
lie->add_relation(rel__quote__1__0);
lie->add_relation(rel___dollorinter__head6__7__2__7__3__1__4__5);
lie->add_relation(rel___dollorinter__head__3__1__2__3);
lie->add_relation(rel___dollorinter__head40__5__5__1);
lie->add_relation(rel___dollorinter__head44__3__1__2__3);
lie->add_relation(rel___dollorbir__sub4__5__1__2__3__4__5);
lie->add_relation(rel___dollorinter__head22__9__3__5__6__7__4__2__8__1);
lie->add_relation(rel___dollorrule21__inter__body7__9__);
lie->add_relation(rel___dollorinter__head9__3__2);
lie->add_relation(rel___dollorrule2__inter__body1__4__1__2__3__4);
lie->add_relation(rel___dollorrule16__inter__body__3__3);
lie->add_relation(rel__binding__2__1__2);
lie->add_relation(rel___dollorrule42__inter__body3__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head2__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head12__5__3);
lie->add_relation(rel___dollorhead__splice3__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorhead__stratified10__9__2__3);
lie->add_relation(rel___dollorhead__stratified3__4__1__3__4);
lie->add_relation(rel___dollorrule39__inter__body6__1__);
lie->add_relation(rel___dollorhead__stratified18__3__1__2__3);
lie->add_relation(rel___dollorrule21__inter__body1__4__1__4);
lie->add_relation(rel___dollorhead__stratified14__7__7__2);
lie->add_relation(rel___dollorinter__head6__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorrule36__inter__body__4__1__2);
lie->add_relation(rel___dollorinter__head51__4__1__2__3__4);
lie->add_relation(rel___dollorbir__sub3__3__1);
lie->add_relation(rel___dollorrule40__inter__body6__1__1);
lie->add_relation(rel___dollorinter__head26__4__1__2);
lie->add_relation(rel___dollorrule12__inter__body3__6__2);
lie->add_relation(rel___dollorbir__sub10__3__1__2__3);
lie->add_relation(rel__saddr__1__1);
lie->add_relation(rel___dollorrule21__inter__body8__3__2);
lie->add_relation(rel___dollorrule40__inter__body__4__1__2__3__4);
lie->add_relation(rel___dollorrule40__inter__body3__5__1__2__3__4__5);
lie->add_relation(rel___dollorinter__head1__4__3);
lie->add_relation(rel___dollorrule41__inter__body13__5__);
lie->add_relation(rel___dollorrule7__inter__body__1__1);
lie->add_relation(rel___dollorbir__sub14__4__1);
lie->add_relation(rel___dollorrule12__inter__body4__3__2);
lie->add_relation(rel___dollorrule25__inter__body2__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorrule39__inter__body1__5__1__2__3__4__5);
lie->add_relation(rel___dollorbir__sub__8__1__2);
lie->add_relation(rel___dollorrule41__inter__body6__8__1__2__3__4__5__6__7__8);
lie->add_relation(rel___dollorrule39__inter__body3__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head5__5__3__2__1__4);
lie->add_relation(rel___dollorrule41__inter__body9__1__1);
lie->add_relation(rel___dollorrule41__inter__body8__9__1__2__3__4__5__6__7__8__9);
lie->add_relation(rel___dollorrule14__inter__body2__4__1__2__3__4);
lie->add_relation(rel___dollorhead__stratified29__4__1__2__3__4);
lie->add_relation(rel___dollorrule19__inter__body1__1__1);
lie->add_relation(rel___dollorbir__sub20__3__1__2__3);
lie->add_relation(rel___dollorrule43__inter__body2__3__1__2__3);
lie->add_relation(rel___dollorrule13__inter__body__3__2);
lie->add_relation(rel___dollorinter__head47__2__2);
lie->add_relation(rel___dollorhead__stratified7__4__1__3__4);
lie->add_relation(rel___dollorrule44__inter__body4__10__1__2__3__4__5__6__7__8__9__10);
lie->add_relation(rel___dollorinter__head28__3__3);
lie->add_relation(rel___dollorinter__head32__5__1__2__3__4__5);
lie->add_relation(rel___dollorinter__head38__3__1__2__3);
lie->add_relation(rel___dollorhead__stratified10__9__1__2__3__4__5__6__7__8__9);
lie->add_relation(rel___dollorrule44__inter__body5__1__);
lie->add_relation(rel___dollorinter__head21__4__3__4);
lie->add_relation(rel___dollorbir__sub11__4__1__2__3__4);
lie->add_relation(rel___dollorrule18__inter__body2__4__2);
lie->add_relation(rel___dollorrule25__inter__body4__3__2);
lie->add_relation(rel___dollorrule13__inter__body6__3__1__2__3);
lie->add_relation(rel___dollorrule21__inter__body7__9__1__2__3__4__5__6__7__8__9);
lie->add_relation(rel__addr__1__1);
lie->add_relation(rel___dollorhead__stratified46__2__1__2);
lie->add_relation(rel___dollorinter__head29__2__1__2);
lie->add_relation(rel___dollorbir__sub2__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorrule41__inter__body6__8__8);
lie->add_relation(rel___dollorhead__stratified54__6__5__6);
lie->add_relation(rel__apply__3__1);
lie->add_relation(rel___dollorinter__head40__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule9__inter__body2__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorbir__sub17__2__1__2);
lie->add_relation(rel___dollorinter__head10__5__5__1);
lie->add_relation(rel___dollorrule42__inter__body6__3__1__2__3);
lie->add_relation(rel___dollorrule10__inter__body__3__2);
lie->add_relation(rel___dollorbir__sub18__2__2);
lie->add_relation(rel__halt__0__);
lie->add_relation(rel___dollorrule18__inter__body1__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head31__4__1__2__3__4);
lie->add_relation(rel__appk__4__1__2);
lie->add_relation(rel___dollorrule21__inter__body13__8__3);
lie->add_relation(rel___dollorrule39__inter__body3__4__4);
lie->add_relation(rel___dollorrule13__inter__body2__4__1__2__3__4);
lie->add_relation(rel___dollorrule26__inter__body__3__3);
lie->add_relation(rel___dollorrule9__inter__body2__6__);
lie->add_relation(rel___dollorhead__stratified32__3__1__2__3);
lie->add_relation(rel___dollorrule41__inter__body2__9__1__2__3__4__5__6__7__8__9);
lie->add_relation(rel___dollorhead__stratified24__7__7__2__5);
lie->add_relation(rel___dollorinter__head35__1__1);
lie->add_relation(rel__varparam__1__1);
lie->add_relation(rel__do__ext__all__2__1__2);
lie->add_relation(rel___dollorrule44__inter__body8__4__1__2__3__4);
lie->add_relation(rel___dollorrule14__inter__body3__4__4);
lie->add_relation(rel___dollorrule41__inter__body2__9__7);
lie->add_relation(rel___dollorrule27__inter__body3__5__2);
lie->add_relation(rel___dollorrule21__inter__body9__8__1__2__3__4__5__6__7__8);
lie->add_relation(rel___dollorrule21__inter__body__1__1);
lie->add_relation(rel__letk__6__0);
lie->add_relation(rel___dollorrule13__inter__body1__4__1__2__3__4);
lie->add_relation(rel___dollorhead__stratified__5__3);
lie->add_relation(rel___dollorinter__head11__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head45__5__4__2__3);
lie->add_relation(rel___dollorbir__sub12__3__1__2__3);
lie->add_relation(rel___dollorinter__head24__3__1__2__3);
lie->add_relation(rel___dollorrule20__inter__body__5__4);
lie->add_relation(rel___dollorrule43__inter__body4__2__);
lie->add_relation(rel___dollorrule25__inter__body__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorinter__head18__4__1__2__3__4);
lie->add_relation(rel___dollorrule43__inter__body4__2__1__2);
lie->add_relation(rel___dollorhead__stratified11__9__9__2);
lie->add_relation(rel___dollorinter__head30__3__3);
lie->add_relation(rel___dollorrule43__inter__body1__3__3);
lie->add_relation(rel___dollorinter__head23__5__3__5__2__4);
lie->add_relation(rel___dollorrule22__inter__body2__7__7);
lie->add_relation(rel___dollorhead__splice4__4__);
lie->add_relation(rel___dollorrule31__inter__body__2__1__2);
lie->add_relation(rel___dollorrule36__inter__body1__3__1);
lie->add_relation(rel___dollorhead__stratified28__4__1__2__3__4);
lie->add_relation(rel___dollorrule13__inter__body4__3__3);
lie->add_relation(rel___dollorhead__stratified25__5__1__2__3__4__5);
lie->add_relation(rel__if__k__4__0);
lie->add_relation(rel___dollorhead__stratified33__2__1__2);
lie->add_relation(rel___dollorinter__head2__4__1);
lie->add_relation(rel___dollorrule40__inter__body4__5__5);
lie->add_relation(rel___dollorbir__sub15__4__1__2__3__4);
lie->add_relation(rel___dollorhead__stratified2__5__1__2__3__4__5);
lie->add_relation(rel___dollorbir__sub11__4__2__4);
lie->add_relation(rel__eval__3__1__2);
lie->add_relation(rel___dollorhead__stratified39__2__2);
lie->add_relation(rel___dollorrule41__inter__body7__9__8);
lie->add_relation(rel___dollorinter__head26__4__1__2__3__4);
lie->add_relation(rel___dollorrule40__inter__body8__3__1__2__3);
lie->add_relation(rel__split__at__end__3__1);
lie->add_relation(rel___dollorinter__head9__3__1__2__3);
lie->add_relation(rel___dollorhead__stratified40__4__1__2__3__4);
lie->add_relation(rel__breaks__into__input__3__1__2__3);
lie->add_relation(rel___dollorrule26__inter__body4__5__1__2__3__4__5);
lie->add_relation(rel__apply__3__2);
lie->add_relation(rel___dollorrule41__inter__body7__9__1__2__3__4__5__6__7__8__9);
lie->add_relation(rel__if__3__1__2__3);
lie->add_relation(rel___dollorrule13__inter__body2__4__3);
lie->add_relation(rel___dollorbir__sub4__5__1);
lie->add_relation(rel__do__fixed__prop__all__2__1__2);
lie->add_relation(rel___dollorhead__stratified9__7__5__7__6__3__2__4);
lie->add_relation(rel___dollorbir__sub__8__1__2__3__4__5__6__7__8);
lie->add_relation(rel___dollorhead__stratified56__7__1__5);
lie->add_relation(rel___dollorrule37__inter__body__2__1__2);
lie->add_relation(rel___dollorhead__stratified52__3__1__2__3);
lie->add_relation(rel___dollorinter__head33__4__2__4);
lie->add_relation(rel___dollorhead__stratified18__3__2__3);
lie->add_relation(rel___dollorrule37__inter__body__2__1);
lie->add_relation(rel__if__3__0);
lie->add_relation(rel__applak__3__1__2__3);
lie->add_relation(rel___dollorhead__stratified54__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorrule39__inter__body8__3__);
lie->add_relation(rel___dollorrule17__inter__body__3__3);
lie->add_relation(rel___dollorrule44__inter__body4__10__);
lie->add_relation(rel___dollorinter__head25__4__3__4);
lie->add_relation(rel___dollorrule43__inter__body2__3__3);
lie->add_relation(rel___dollorinter__head50__5__1__5__2__3);
lie->add_relation(rel___dollorrule13__inter__body7__4__1);
lie->add_relation(rel___dollorrule13__inter__body3__1__1);
lie->add_relation(rel___dollorhead__stratified44__3__1__2__3);
lie->add_relation(rel__clo__2__0);
lie->add_relation(rel__vararg__1__0);
lie->add_relation(rel__applfk__2__1__2);
lie->add_relation(rel__applfk__2__1);
lie->add_relation(rel___dollornil__1__1);
lie->add_relation(rel___dollorrule33__inter__body__1__1);
lie->add_relation(rel__apply__3__1__2__3);
lie->add_relation(rel___dollorrule19__inter__body2__1__1);
lie->add_relation(rel__ret__2__1__2);
lie->add_relation(rel___dollorbir__sub10__3__1);
lie->add_relation(rel___dollorrule41__inter__body__9__4);
lie->add_relation(rel___dollorrule13__inter__body6__3__1);
lie->add_relation(rel__split__at__end__input__2__1__2);
lie->add_relation(rel___dollorinter__head48__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule19__inter__body__2__1);
lie->add_relation(rel___dollorrule24__inter__body__3__2);
lie->add_relation(rel___dollorinter__head28__3__1__2__3);
lie->add_relation(rel___dollorhead__stratified31__3__2__3);
lie->add_relation(rel___dollorhead__stratified25__5__5__2__4);
lie->add_relation(rel___dollorrule41__inter__body14__6__);
lie->add_relation(rel___dollorhead__stratified17__4__1__3__4);
lie->add_relation(rel___dollorbir__sub6__5__1);
lie->add_relation(rel___dollorrule41__inter__body10__2__);
lie->add_relation(rel___dollorinter__head46__4__2);
lie->add_relation(rel___dollorhead__stratified6__4__1__2__3__4);
lie->add_relation(rel___dollorrule25__inter__body4__3__1__2__3);
lie->add_relation(rel___dollorrule27__inter__body5__3__1__2__3);
lie->add_relation(rel___dollorrule21__inter__body2__9__9);
lie->add_relation(rel___dollorrule13__inter__body8__3__1__2__3);
lie->add_relation(rel___dollorrule40__inter__body8__3__);
lie->add_relation(rel___dollorrule22__inter__body__3__3);
lie->add_relation(rel___dollornil__1__0);
lie->add_relation(rel___dollorrule39__inter__body__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head37__5__1__3);
lie->add_relation(rel___dollorrule21__inter__body2__9__1__2__3__4__5__6__7__8__9);
lie->add_relation(rel__binding__2__0);
lie->add_relation(rel___dollorinter__head8__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorrule40__inter__body1__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule44__inter__body3__9__1__2__3__4__5__6__7__8__9);
lie->add_relation(rel___dollorinter__head31__4__2__3);
lie->add_relation(rel___dollorrule39__inter__body2__7__1__2__3__4__5__6__7);
lie->add_relation(rel__ret__2__2);
lie->add_relation(rel___dollorbir__sub15__4__3__4);
lie->add_relation(rel__split__at__end__3__1__2__3);
lie->add_relation(rel___dollorhead__stratified13__8__4__8);
lie->add_relation(rel___dollorrule40__inter__body3__5__3);
lie->add_relation(rel___dollorhead__stratified23__9__9__3__7);
lie->add_relation(rel___dollorinter__head15__3__1__2__3);
lie->add_relation(rel___dollorhead__stratified58__4__1__4);
lie->add_relation(rel___dollorrule14__inter__body3__4__1__2__3__4);
lie->add_relation(rel___dollorbir__sub12__3__1);
lie->add_relation(rel___dollorrule1__inter__body1__3__1__2__3);
lie->add_relation(rel___dollorrule36__inter__body1__3__1__2__3);
lie->add_relation(rel__ext__all__2__1__2);
lie->add_relation(rel___dollorrule38__inter__body1__3__1);
lie->add_relation(rel___dollorhead__stratified57__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorhead__stratified30__4__4__3);
lie->add_relation(rel___dollorhead__stratified17__4__1__2__3__4);
lie->add_relation(rel___dollorrule22__inter__body7__3__1__2__3);
lie->add_relation(rel___dollorbir__sub16__2__1);
lie->add_relation(rel__do__fixed__prop__all__2__2);
lie->add_relation(rel___dollorrule39__inter__body5__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorrule41__inter__body12__4__);
lie->add_relation(rel___dollorbir__sub1__9__1__2__3__4__5__6__7__8__9);
lie->add_relation(rel___dollorrule24__inter__body1__4__3);
lie->add_relation(rel___dollorrule41__inter__body14__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorhead__stratified12__9__1__2__3__4__5__6__7__8__9);
lie->add_relation(rel___dollorinter__head38__3__3);
lie->add_relation(rel___dollorhead__stratified48__3__3__1);
lie->add_relation(rel___dollorrule44__inter__body2__8__1__2__3__4__5__6__7__8);
lie->add_relation(rel___dollorhead__stratified15__6__4__6);
lie->add_relation(rel___dollorrule39__inter__body5__6__5);
lie->add_relation(rel___dollorhead__stratified22__11__11__3__10);
lie->add_relation(rel___dollorhead__stratified39__2__1__2);
lie->add_relation(rel___dollorrule30__inter__body__2__1__2);
lie->add_relation(rel___dollorrule23__inter__body__4__1__2__3__4);
lie->add_relation(rel___dollorrule5__inter__body__3__1__2__3);
lie->add_relation(rel___dollorhead__splice__10__7__10);
lie->add_relation(rel___dollorinter__head48__5__3);
lie->add_relation(rel___dollorrule12__inter__body3__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorrule43__inter__body3__1__1);
lie->add_relation(rel___dollorinter__head24__3__1__3);
lie->add_relation(rel___dollorlst__2__1);
lie->add_relation(rel___dollorrule33__inter__body1__2__1__2);
lie->add_relation(rel___dollorinter__head32__5__5);
lie->add_relation(rel__env__set__3__1__2__3);
lie->add_relation(rel___dollorhead__stratified30__4__1__2__3__4);
lie->add_relation(rel___dollorrule27__inter__body1__2__1__2);
lie->add_relation(rel___dollorrule12__inter__body6__5__1__2__3__4__5);
lie->add_relation(rel___dollorinter__head__3__1__3);
lie->add_relation(rel___dollorrule22__inter__body4__4__1__2__3__4);
lie->add_relation(rel__string__1__1);
lie->add_relation(rel___dollorrule40__inter__body__4__1);
lie->add_relation(rel___dollorlst__append__input__2__2);
lie->add_relation(rel___dollorhead__stratified24__7__1__2__3__4__5__6__7);
lie->add_relation(rel__let__2__0);
lie->add_relation(rel___dollorrule25__inter__body1__4__1__2__3__4);
lie->add_relation(rel___dollorrule22__inter__body5__3__3);
lie->add_relation(rel___dollorrule22__inter__body__3__1__2__3);
lie->add_relation(rel___dollorrule39__inter__body7__2__1__2);
lie->add_relation(rel___dollorrule20__inter__body__5__1__2__3__4__5);
lie->add_relation(rel___dollorhead__stratified12__9__3__8);
lie->add_relation(rel__applak__3__0);
lie->add_relation(rel___dollorrule33__inter__body1__2__2);
lie->add_relation(rel___dollorrule27__inter__body__4__1__2__3__4);
lie->add_relation(rel__store__flow__2__1__2);
lie->add_relation(rel___dollorrule31__inter__body__2__1);
lie->add_relation(rel__define__3__0);
lie->add_relation(rel___dollorinter__head30__3__1__2__3);
lie->add_relation(rel___dollorrule12__inter__body5__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorlst__append__input__2__1);
lie->add_relation(rel___dollorhead__stratified51__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorhead__splice4__4__1__2__3__4);
lie->add_relation(rel__appk__4__1__2__3__4);
lie->add_relation(rel___dollorrule4__inter__body1__3__1__2__3);
lie->add_relation(rel___dollorinter__head52__3__3);
lie->add_relation(rel___dollorinter__head49__6__1__2__3__4__5__6);
lie->add_relation(rel__breaks__into__input__3__1__3);
lie->add_relation(rel___dollorrule42__inter__body2__4__1__2__3__4);
lie->add_relation(rel___dollorlst__2__1__2);
lie->add_relation(rel___dollorrule22__inter__body3__1__1);
lie->add_relation(rel__appk__4__0);
lie->add_relation(rel___dollorinter__head33__4__1__2__3__4);
lie->add_relation(rel__kaddr__1__0);
lie->add_relation(rel___dollorhead__stratified5__6__3__5);
lie->add_relation(rel___dollorinter__head27__4__1__2__3__4);
lie->add_relation(rel___dollorhead__stratified37__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head18__4__2__1__3);
lie->add_relation(rel___dollorrule18__inter__body__4__4);
lie->add_relation(rel___dollorinter__head51__4__4);
lie->add_relation(rel__fixedarg__1__0);
lie->add_relation(rel___dollorrule9__inter__body1__4__1__2__3__4);
lie->add_relation(rel___dollorrule14__inter__body1__4__1);
lie->add_relation(rel__answer__2__1__2);
lie->add_relation(rel___dollorrule39__inter__body2__7__4__3);
lie->add_relation(rel___dollorrule12__inter__body4__3__1__2__3);
lie->add_relation(rel__lambda__2__0);
lie->add_relation(rel___dollorrule22__inter__body2__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorhead__stratified47__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule25__inter__body2__6__1);
lie->add_relation(rel___dollorrule13__inter__body5__1__1);
lie->add_relation(rel___dollorrule26__inter__body3__5__1__2__3__4__5);
lie->add_relation(rel___dollorinter__head3__7__6);
lie->add_relation(rel___dollorinter__head8__6__3__4__1);
lie->add_relation(rel___dollorrule14__inter__body2__4__2);
lie->add_relation(rel___dollorrule38__inter__body__2__1);
lie->add_relation(rel__appk__4__2);
lie->add_relation(rel___dollorrule21__inter__body12__8__3);
lie->add_relation(rel___dollorrule43__inter__body1__3__1__2__3);
lie->add_relation(rel___dollorrule44__inter__body8__4__);
lie->add_relation(rel___dollorhead__stratified49__3__1__2__3);
lie->add_relation(rel___dollorhead__splice1__9__1__2__3__4__5__6__7__8__9);
lie->add_relation(rel___dollorinter__head7__2__);
lie->add_relation(rel___dollorrule40__inter__body4__5__1__2__3__4__5);
lie->add_relation(rel___dollorlst__split__input__1__);
lie->add_relation(rel__store__2__2);
lie->add_relation(rel___dollorhead__stratified51__7__4__1__7);
lie->add_relation(rel___dollorinter__head14__3__1__2__3);
lie->add_relation(rel___dollorlst__2__0);
lie->add_relation(rel__vararg__1__1);
lie->add_relation(rel__do__ext__all__2__2);
lie->add_relation(rel__string__1__0);
lie->add_relation(rel__ref__1__1);
lie->add_relation(rel___dollorinter__head34__5__1__2__3__4__5);
lie->add_relation(rel___dollorlst__append__input__2__1__2);
lie->add_relation(rel___dollorrule1__inter__body2__2__1__2);
lie->add_relation(rel___dollorrule21__inter__body11__4__2__4);
lie->add_relation(rel___dollorrule1__inter__body1__3__2);
lie->add_relation(rel___dollorinter__head3__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorinter__head16__3__1__2__3);
lie->add_relation(rel___dollorrule41__inter__body__9__1__2__3__4__5__6__7__8__9);
lie->add_relation(rel___dollorrule32__inter__body__2__1__2);
lie->add_relation(rel___dollorrule39__inter__body1__5__1__5);
lie->add_relation(rel___dollorrule4__inter__body__5__1__4);
lie->add_relation(rel___dollorinter__head50__5__1__2__3__4__5);
lie->add_relation(rel___dollorinter__head43__4__1__2__3__4);
lie->add_relation(rel___dollorrule1__inter__body3__1__1);
lie->add_relation(rel___dollorrule1__inter__body2__2__1);
lie->add_relation(rel__eval__3__1__2__3);
lie->add_relation(rel___dollorrule40__inter__body6__1__);
lie->add_relation(rel___dollorrule13__inter__body4__3__1__2__3);
lie->add_relation(rel___dollorinter__head47__2__1__2);
lie->add_relation(rel___dollorrule26__inter__body4__5__1);
lie->add_relation(rel___dollorrule41__inter__body1__9__7);
lie->add_relation(rel___dollorlst__split__3__1);
lie->add_relation(rel___dollorinter__head19__10__7__9__6__3__5__4__2__8__1);
lie->add_relation(rel___dollorrule12__inter__body__1__1);
lie->add_relation(rel___dollorbir__sub13__3__1);
lie->add_relation(rel___dollorbir__sub17__2__1);
lie->add_relation(rel___dollorrule41__inter__body9__1__);
lie->add_relation(rel___dollorrule27__inter__body4__5__5);
lie->add_relation(rel___dollorrule44__inter__body__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorrule23__inter__body__4__);
lie->add_relation(rel___dollorrule18__inter__body__4__1__2__3__4);
lie->add_relation(rel___dollorrule40__inter__body5__6__5);
lie->add_relation(rel__empty__0__);
lie->add_relation(rel___dollorinter__head39__3__1__2__3);
lie->add_relation(rel___dollorrule42__inter__body5__2__1__2);
lie->add_relation(rel__length__input__1__1);
lie->add_relation(rel___dollorrule21__inter__body3__8__6);
lie->add_relation(rel___dollorinter__head41__6__6__3);
lie->add_relation(rel___dollorrule21__inter__body9__8__);
lie->add_relation(rel___dollorrule21__inter__body10__3__1);
lie->add_relation(rel___dollorrule9__inter__body1__4__3);
lie->add_relation(rel___dollorinter__head44__3__3__1);
lie->add_relation(rel__letk__6__4);
lie->add_relation(rel___dollorrule39__inter__body8__3__1__2__3);
lie->add_relation(rel___dollorrule13__inter__body1__4__1__4);
lie->add_relation(rel___dollorrule21__inter__body12__8__1__2__3__4__5__6__7__8);
lie->add_relation(rel___dollorhead__stratified34__3__1__2__3);
lie->add_relation(rel___dollorrule44__inter__body5__1__1);
lie->add_relation(rel___dollorrule43__inter__body__4__4);
lie->add_relation(rel___dollorrule39__inter__body6__1__1);
lie->add_relation(rel___dollorrule39__inter__body7__2__);
lie->add_relation(rel__do__var__prop__all__2__1__2);
lie->add_relation(rel___dollorrule42__inter__body__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule24__inter__body3__5__4);
lie->add_relation(rel__int__1__1);
lie->add_relation(rel___dollorrule30__inter__body1__3__1__2__3);
lie->add_relation(rel___dollorrule41__inter__body4__8__1__2__3__4__5__6__7__8);
lie->add_relation(rel___dollorinter__head29__2__2);
lie->add_relation(rel___dollorhead__stratified57__6__1__5);
lie->add_relation(rel___dollorrule21__inter__body5__9__1__2__3__4__5__6__7__8__9);
lie->add_relation(rel___dollorrule12__inter__body5__6__);
lie->add_relation(rel___dollorrule41__inter__body11__3__);
lie->add_relation(rel___dollorrule32__inter__body1__4__1__2__3__4);
lie->add_relation(rel___dollorbir__sub14__4__1__2__3__4);
lie->add_relation(rel__list__of__1__0);
lie->add_relation(rel___dollorhead__stratified3__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head12__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule36__inter__body__4__1__2__3__4);
lie->add_relation(rel___dollorrule12__inter__body2__7__1__2__3__4__5__6__7);
lie->add_relation(rel___dollorhead__splice__10__1__2__3__4__5__6__7__8__9__10);
lie->add_relation(rel___dollorrule1__inter__body__1__1);
lie->add_relation(rel___dollorhead__stratified21__3__1__2__3);
lie->add_relation(rel___dollorrule29__inter__body__1__1);
lie->add_relation(rel___dollorrule2__inter__body__4__1__2__3__4);
lie->add_relation(rel___dollorbir__sub16__2__1__2);
lie->add_relation(rel___dollorinter__head53__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule44__inter__body3__9__4);
lie->add_relation(rel___dollorrule41__inter__body5__8__5);
lie->add_relation(rel___dollorhead__splice2__3__1__2__3);
lie->add_relation(rel__fixedarg__1__1);
lie->add_relation(rel___dollorlst__2__0__1);
lie->add_relation(rel___dollorrule4__inter__body1__3__1__2);
lie->add_relation(rel___dollorrule30__inter__body1__3__2);
lie->add_relation(rel___dollorlst__split__input__1__1);
lie->add_relation(rel___dollorrule9__inter__body__4__1__2__3__4);
lie->add_relation(rel__split__at__input__2__2);
lie->add_relation(rel___dollorrule25__inter__body5__4__1__2__3__4);
lie->add_relation(rel__env__map__3__1);
lie->add_relation(rel___dollorrule18__inter__body1__4__1);
lie->add_relation(rel___dollorrule11__inter__body__3__1__2__3);
lie->add_relation(rel___dollorrule6__inter__body__4__1__2__3__4);
lie->add_relation(rel___dollorhead__stratified__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule41__inter__body13__5__1__2__3__4__5);
lie->add_relation(rel___dollorrule16__inter__body__3__1__2__3);
lie->add_relation(rel___dollorrule14__inter__body__3__1__2__3);
lie->add_relation(rel__saddr__1__0);
lie->add_relation(rel___dollorrule14__inter__body1__4__1__2__3__4);
lie->add_relation(rel__do__var__prop__all__2__1);
lie->add_relation(rel___dollorhead__stratified47__5__1__2__5);
lie->add_relation(rel___dollorrule30__inter__body__2__1);
lie->add_relation(rel___dollorrule44__inter__body6__2__);
lie->add_relation(rel__length__2__1__2);
lie->add_relation(rel___dollorrule24__inter__body3__5__1__2__3__4__5);
lie->add_relation(rel___dollorbir__sub9__4__1__2__3__4);
lie->add_relation(rel__store__2__1__2);
lie->add_relation(rel___dollorrule44__inter__body1__7__1__2__3__4__5__6__7);
lie->add_relation(rel__letk__6__1__2__3__4__5__6);
lie->add_relation(rel___dollorrule42__inter__body4__1__1);
lie->add_relation(rel__top__level__env__1__1);
lie->add_relation(rel___dollorrule12__inter__body1__3__1__3);
lie->add_relation(rel___dollorhead__stratified13__8__1__2__3__4__5__6__7__8);
lie->add_relation(rel___dollorrule32__inter__body__2__1);
lie->add_relation(rel___dollorrule21__inter__body5__9__5);
lie->add_relation(rel___dollorbir__sub13__3__1__2__3);
lie->add_relation(rel__breaks__into__4__1__2__3__4);
lie->add_relation(rel___dollorrule21__inter__body6__3__1__2__3);
lie->add_relation(rel___dollorhead__stratified4__7__4__6);
lie->add_relation(rel___dollorrule44__inter__body7__3__1__2__3);
lie->add_relation(rel__split__at__3__1__2__3);
lie->add_relation(rel___dollorrule39__inter__body4__5__1__2__3__4__5);
lie->add_relation(rel___dollorinter__head23__5__1__2__3__4__5);
lie->add_relation(rel___dollorinter__head1__4__1__2__3__4);
lie->add_relation(rel___dollorinter__head22__9__1__2__3__4__5__6__7__8__9);
lie->add_relation(rel___dollorrule27__inter__body1__2__1);
lie->add_relation(rel___dollorrule42__inter__body1__4__1);
lie->add_relation(rel___dollorrule42__inter__body5__2__);
lie->add_relation(rel___dollorhead__stratified9__7__1__2__3__4__5__6__7);
lie->add_relation(rel__addr__1__0);
lie->add_relation(rel___dollorhead__stratified8__7__5__7);
lie->add_relation(rel___dollorrule37__inter__body1__2__1);
lie->add_relation(rel___dollorinter__head16__3__3);
lie->add_relation(rel___dollorrule14__inter__body__3__2);
lie->add_relation(rel___dollorrule43__inter__body__4__1__2__3__4);
lie->add_relation(rel__bool__1__1);
lie->add_relation(rel___dollorhead__stratified32__3__2__3);
lie->add_relation(rel__appl__2__0);
lie->add_relation(rel__do__var__prop__all__h__3__1__2__3);
lie->add_relation(rel___dollorhead__stratified58__4__1__2__3__4);
lie->add_relation(rel___dollorlst__split__3__1__2__3);
lie->add_relation(rel__if__k__4__1__2__3__4);
lie->add_relation(rel__env__set__3__2__3__1);
lie->add_relation(rel___dollorbir__sub1__9__1__2);
lie->add_relation(rel___dollorrule11__inter__body__3__2);
lie->add_relation(rel___dollorrule13__inter__body8__3__2);
lie->add_relation(rel___dollorrule41__inter__body3__8__1__2__3__4__5__6__7__8);
lie->add_relation(rel___dollorhead__stratified21__3__2__3);
lie->add_relation(rel___dollorbir__sub8__2__1);
lie->add_relation(rel__eval__3__1);
lie->add_relation(rel__define__3__2);
lie->add_relation(rel___dollorrule21__inter__body13__8__1__2__3__4__5__6__7__8);
lie->add_relation(rel___dollorrule32__inter__body1__4__3);
lie->add_relation(rel___dollorrule22__inter__body5__3__1__2__3);
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
lie->add_scc_dependance(scc0, scc108);
lie->add_scc_dependance(scc16, scc17);
lie->add_scc_dependance(scc32, scc33);
lie->add_scc_dependance(scc48, scc108);
lie->add_scc_dependance(scc48, scc104);
lie->add_scc_dependance(scc48, scc102);
lie->add_scc_dependance(scc64, scc65);
lie->add_scc_dependance(scc80, scc108);
lie->add_scc_dependance(scc80, scc104);
lie->add_scc_dependance(scc80, scc102);
lie->add_scc_dependance(scc96, scc100);
lie->add_scc_dependance(scc96, scc99);
lie->add_scc_dependance(scc96, scc98);
lie->add_scc_dependance(scc96, scc97);
lie->add_scc_dependance(scc112, scc124);
lie->add_scc_dependance(scc128, scc129);
lie->add_scc_dependance(scc1, scc108);
lie->add_scc_dependance(scc17, scc31);
lie->add_scc_dependance(scc17, scc106);
lie->add_scc_dependance(scc17, scc38);
lie->add_scc_dependance(scc17, scc20);
lie->add_scc_dependance(scc17, scc19);
lie->add_scc_dependance(scc17, scc18);
lie->add_scc_dependance(scc17, scc32);
lie->add_scc_dependance(scc33, scc34);
lie->add_scc_dependance(scc49, scc108);
lie->add_scc_dependance(scc65, scc102);
lie->add_scc_dependance(scc81, scc82);
lie->add_scc_dependance(scc97, scc104);
lie->add_scc_dependance(scc113, scc114);
lie->add_scc_dependance(scc2, scc17);
lie->add_scc_dependance(scc18, scc50);
lie->add_scc_dependance(scc34, scc35);
lie->add_scc_dependance(scc50, scc71);
lie->add_scc_dependance(scc66, scc108);
lie->add_scc_dependance(scc66, scc104);
lie->add_scc_dependance(scc66, scc102);
lie->add_scc_dependance(scc82, scc83);
lie->add_scc_dependance(scc98, scc108);
lie->add_scc_dependance(scc98, scc104);
lie->add_scc_dependance(scc98, scc102);
lie->add_scc_dependance(scc114, scc115);
lie->add_scc_dependance(scc3, scc108);
lie->add_scc_dependance(scc19, scc93);
lie->add_scc_dependance(scc35, scc36);
lie->add_scc_dependance(scc51, scc52);
lie->add_scc_dependance(scc67, scc108);
lie->add_scc_dependance(scc83, scc84);
lie->add_scc_dependance(scc99, scc108);
lie->add_scc_dependance(scc99, scc116);
lie->add_scc_dependance(scc115, scc126);
lie->add_scc_dependance(scc4, scc17);
lie->add_scc_dependance(scc20, scc21);
lie->add_scc_dependance(scc36, scc37);
lie->add_scc_dependance(scc52, scc53);
lie->add_scc_dependance(scc68, scc108);
lie->add_scc_dependance(scc84, scc85);
lie->add_scc_dependance(scc100, scc108);
lie->add_scc_dependance(scc116, scc117);
lie->add_scc_dependance(scc5, scc108);
lie->add_scc_dependance(scc21, scc22);
lie->add_scc_dependance(scc37, scc54);
lie->add_scc_dependance(scc53, scc81);
lie->add_scc_dependance(scc69, scc108);
lie->add_scc_dependance(scc69, scc116);
lie->add_scc_dependance(scc85, scc92);
lie->add_scc_dependance(scc85, scc91);
lie->add_scc_dependance(scc85, scc90);
lie->add_scc_dependance(scc85, scc89);
lie->add_scc_dependance(scc85, scc88);
lie->add_scc_dependance(scc85, scc87);
lie->add_scc_dependance(scc85, scc86);
lie->add_scc_dependance(scc101, scc108);
lie->add_scc_dependance(scc101, scc104);
lie->add_scc_dependance(scc101, scc102);
lie->add_scc_dependance(scc117, scc118);
lie->add_scc_dependance(scc6, scc17);
lie->add_scc_dependance(scc22, scc23);
lie->add_scc_dependance(scc38, scc51);
lie->add_scc_dependance(scc54, scc55);
lie->add_scc_dependance(scc70, scc108);
lie->add_scc_dependance(scc70, scc104);
lie->add_scc_dependance(scc70, scc102);
lie->add_scc_dependance(scc86, scc108);
lie->add_scc_dependance(scc86, scc116);
lie->add_scc_dependance(scc102, scc103);
lie->add_scc_dependance(scc118, scc129);
lie->add_scc_dependance(scc7, scc111);
lie->add_scc_dependance(scc7, scc108);
lie->add_scc_dependance(scc23, scc24);
lie->add_scc_dependance(scc39, scc40);
lie->add_scc_dependance(scc55, scc56);
lie->add_scc_dependance(scc71, scc72);
lie->add_scc_dependance(scc87, scc108);
lie->add_scc_dependance(scc87, scc116);
lie->add_scc_dependance(scc103, scc108);
lie->add_scc_dependance(scc119, scc120);
lie->add_scc_dependance(scc8, scc17);
lie->add_scc_dependance(scc24, scc25);
lie->add_scc_dependance(scc40, scc41);
lie->add_scc_dependance(scc56, scc57);
lie->add_scc_dependance(scc72, scc73);
lie->add_scc_dependance(scc88, scc108);
lie->add_scc_dependance(scc104, scc105);
lie->add_scc_dependance(scc120, scc121);
lie->add_scc_dependance(scc9, scc17);
lie->add_scc_dependance(scc25, scc26);
lie->add_scc_dependance(scc41, scc42);
lie->add_scc_dependance(scc57, scc58);
lie->add_scc_dependance(scc73, scc74);
lie->add_scc_dependance(scc89, scc108);
lie->add_scc_dependance(scc105, scc108);
lie->add_scc_dependance(scc121, scc122);
lie->add_scc_dependance(scc10, scc108);
lie->add_scc_dependance(scc26, scc30);
lie->add_scc_dependance(scc26, scc29);
lie->add_scc_dependance(scc26, scc28);
lie->add_scc_dependance(scc26, scc27);
lie->add_scc_dependance(scc26, scc101);
lie->add_scc_dependance(scc42, scc43);
lie->add_scc_dependance(scc58, scc59);
lie->add_scc_dependance(scc74, scc75);
lie->add_scc_dependance(scc90, scc108);
lie->add_scc_dependance(scc90, scc116);
lie->add_scc_dependance(scc106, scc108);
lie->add_scc_dependance(scc106, scc107);
lie->add_scc_dependance(scc122, scc123);
lie->add_scc_dependance(scc11, scc17);
lie->add_scc_dependance(scc27, scc108);
lie->add_scc_dependance(scc43, scc44);
lie->add_scc_dependance(scc59, scc60);
lie->add_scc_dependance(scc75, scc79);
lie->add_scc_dependance(scc75, scc78);
lie->add_scc_dependance(scc75, scc77);
lie->add_scc_dependance(scc75, scc76);
lie->add_scc_dependance(scc75, scc80);
lie->add_scc_dependance(scc91, scc108);
lie->add_scc_dependance(scc91, scc116);
lie->add_scc_dependance(scc107, scc108);
lie->add_scc_dependance(scc12, scc108);
lie->add_scc_dependance(scc28, scc108);
lie->add_scc_dependance(scc28, scc116);
lie->add_scc_dependance(scc44, scc47);
lie->add_scc_dependance(scc44, scc46);
lie->add_scc_dependance(scc44, scc45);
lie->add_scc_dependance(scc44, scc49);
lie->add_scc_dependance(scc44, scc48);
lie->add_scc_dependance(scc60, scc63);
lie->add_scc_dependance(scc60, scc62);
lie->add_scc_dependance(scc60, scc61);
lie->add_scc_dependance(scc60, scc70);
lie->add_scc_dependance(scc60, scc69);
lie->add_scc_dependance(scc60, scc68);
lie->add_scc_dependance(scc60, scc67);
lie->add_scc_dependance(scc60, scc66);
lie->add_scc_dependance(scc76, scc108);
lie->add_scc_dependance(scc76, scc104);
lie->add_scc_dependance(scc76, scc102);
lie->add_scc_dependance(scc92, scc108);
lie->add_scc_dependance(scc92, scc116);
lie->add_scc_dependance(scc108, scc127);
lie->add_scc_dependance(scc108, scc111);
lie->add_scc_dependance(scc108, scc110);
lie->add_scc_dependance(scc108, scc109);
lie->add_scc_dependance(scc108, scc124);
lie->add_scc_dependance(scc108, scc123);
lie->add_scc_dependance(scc108, scc121);
lie->add_scc_dependance(scc108, scc119);
lie->add_scc_dependance(scc108, scc117);
lie->add_scc_dependance(scc108, scc116);
lie->add_scc_dependance(scc108, scc114);
lie->add_scc_dependance(scc108, scc113);
lie->add_scc_dependance(scc124, scc125);
lie->add_scc_dependance(scc13, scc108);
lie->add_scc_dependance(scc29, scc108);
lie->add_scc_dependance(scc29, scc64);
lie->add_scc_dependance(scc45, scc108);
lie->add_scc_dependance(scc45, scc104);
lie->add_scc_dependance(scc45, scc102);
lie->add_scc_dependance(scc61, scc108);
lie->add_scc_dependance(scc61, scc64);
lie->add_scc_dependance(scc77, scc108);
lie->add_scc_dependance(scc77, scc116);
lie->add_scc_dependance(scc93, scc94);
lie->add_scc_dependance(scc109, scc127);
lie->add_scc_dependance(scc109, scc119);
lie->add_scc_dependance(scc125, scc126);
lie->add_scc_dependance(scc14, scc108);
lie->add_scc_dependance(scc30, scc64);
lie->add_scc_dependance(scc46, scc108);
lie->add_scc_dependance(scc46, scc116);
lie->add_scc_dependance(scc62, scc108);
lie->add_scc_dependance(scc62, scc104);
lie->add_scc_dependance(scc62, scc102);
lie->add_scc_dependance(scc78, scc108);
lie->add_scc_dependance(scc94, scc95);
lie->add_scc_dependance(scc110, scc111);
lie->add_scc_dependance(scc15, scc108);
lie->add_scc_dependance(scc31, scc39);
lie->add_scc_dependance(scc47, scc108);
lie->add_scc_dependance(scc63, scc108);
lie->add_scc_dependance(scc63, scc64);
lie->add_scc_dependance(scc79, scc108);
lie->add_scc_dependance(scc95, scc96);
lie->add_scc_dependance(scc111, scc112);
lie->add_scc_dependance(scc127, scc128);



  
  // Enable IO
  lie->enable_data_IO();
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