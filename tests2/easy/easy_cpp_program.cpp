#include<stdio.h>
#include<string.h>
#include "../../header.h"
using namespace std;

void* _u43() // + 
{
//reading env
void* _4976 = arg_buffer[0];
//building cons cell

void* lst = encode_null();
for(int i = arg_num - 1; i >=1; --i)
{
lst = prim_cons(arg_buffer[i], lst);

}

void* kont4971 = prim_car(lst);
void* lst2 = prim_cdr(lst);
void* x4967 = apply_prim__u43(lst2);

//clo-app
arg_buffer.clear();
arg_buffer.push_back(reinterpret_cast<void *>(_4976));
arg_buffer.push_back(reinterpret_cast<void *>(x4967));
auto function_ptr = reinterpret_cast<void (*)()>(get_closure_ptr(kont4971));
//assign buffer size to arg_num
arg_num = arg_buffer.size();
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call() // call 
{
//reading env
void* _4979 = arg_buffer[0];
//reading other params
void* kont4973 = arg_buffer[1];
void* a4968 = reinterpret_cast<void *>(encode_int((s32)1));
void* a4969 = reinterpret_cast<void *>(encode_int((s32)2));

//clo-app
arg_buffer.clear();
arg_buffer.push_back(reinterpret_cast<void *>(_4979));
arg_buffer.push_back(reinterpret_cast<void *>(kont4973));
arg_buffer.push_back(reinterpret_cast<void *>(a4968));
arg_buffer.push_back(reinterpret_cast<void *>(a4969));
auto function_ptr = reinterpret_cast<void (*)()>(_u43);
//assign buffer size to arg_num
arg_num = arg_buffer.size();
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam4980() // lam4980 
{
//reading env
void* env4981 = arg_buffer[0];
//reading other params
void* x4970 = arg_buffer[1];
void* kont4974 = get_env_value(env4981, encode_int((s32)1));

//clo-app
arg_buffer.clear();
arg_buffer.push_back(reinterpret_cast<void *>(env4981));
arg_buffer.push_back(reinterpret_cast<void *>(x4970));
auto function_ptr = reinterpret_cast<void (*)()>(get_closure_ptr(kont4974));
//assign buffer size to arg_num
arg_num = arg_buffer.size();
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* brouhaha_main() // brouhaha_main 
{
//reading env
void* _4982 = arg_buffer[0];
//reading other params
void* kont4974 = arg_buffer[1];

//creating new closure instance
auto ptr5523 = reinterpret_cast<void (*)()>(&lam4980);
_4982 = allocate_env_space(encode_int((s32)1));
void* f4975 = make_closure(reinterpret_cast<void *>(ptr5523), _4982);

//setting env list
set_env(_4982, encode_int((s32)1), kont4974);



//clo-app
arg_buffer.clear();
arg_buffer.push_back(reinterpret_cast<void *>(_4982));
arg_buffer.push_back(reinterpret_cast<void *>(f4975));
auto function_ptr = reinterpret_cast<void (*)()>(call);
//assign buffer size to arg_num
arg_num = arg_buffer.size();
// call next proc using a function pointer
function_ptr();
return nullptr;
}

int main(int argc, char **argv)
{
auto ptr5524 = reinterpret_cast<void (*)()>(&fhalt);
void* _5525 = allocate_env_space(encode_int((s32)0));
void* clo5526 = make_closure(reinterpret_cast<void *>(ptr5524), _5525);
arg_buffer.push_back(reinterpret_cast<void *>(0));
arg_buffer.push_back(reinterpret_cast<void *>(clo5526));
//making a call to the brouhaha main function to kick off our c++ emission.
auto function_ptr = reinterpret_cast<void (*)()>(brouhaha_main);
arg_num = arg_buffer.size();
function_ptr();
arg_buffer.clear();
return 0;
}

