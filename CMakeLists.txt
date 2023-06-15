# cmake_minimum_required(VERSION 3.0.0)
# project(brouhaha VERSION 0.1.0)

# include(CTest)
# enable_testing()

# # add_executable(brouhaha main.cpp)
# add_executable(brouhaha tests/easy/easy_cpp_program.cpp)
# # add_executable(brouhaha tests/minus/minus_cpp_program.cpp)

# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)
# set(CMAKE_CXX_COMPILER "/Library/Developer/CommandLineTools/usr/bin/g++")
# set(CMAKE_C_COMPILER "/Library/Developer/CommandLineTools/usr/bin/gcc")


cmake_minimum_required(VERSION 3.0.0)
project(brouhaha VERSION 0.1.0)

include(CTest)
enable_testing()

# Set additional directories
set(DEPENDENCIES_DIR ${CMAKE_CURRENT_SOURCE_DIR}/dependencies)
set(BDWGC_INCLUDE_DIR ${DEPENDENCIES_DIR}/bdwgc/include)
set(GMP_INCLUDE_DIR ${DEPENDENCIES_DIR}/gmp/include)
set(VALGRIND_INCLUDE_DIR ${DEPENDENCIES_DIR}/valgrind/include)
set(HAMT_INCLUDE_DIR ${DEPENDENCIES_DIR}/hamt)

# Set additional library directories
set(BDWGC_LIBRARY_DIR ${DEPENDENCIES_DIR}/bdwgc/lib)
set(GMP_LIBRARY_DIR ${DEPENDENCIES_DIR}/gmp/lib)
set(VALGRIND_LIBRARY_DIR ${DEPENDENCIES_DIR}/valgrind/lib)

# Include directories
include_directories(${DEPENDENCIES_DIR} ${BDWGC_INCLUDE_DIR} ${GMP_INCLUDE_DIR} ${VALGRIND_INCLUDE_DIR} ${HAMT_INCLUDE_DIR})

# Link directories
link_directories(${DEPENDENCIES_DIR} ${BDWGC_LIBRARY_DIR} ${GMP_LIBRARY_DIR} ${VALGRIND_LIBRARY_DIR})

# Add executable
# add_executable(brouhaha tests/easy/easy_cpp_program.cpp)
# add_executable(brouhaha tests/and/and_cpp_program.cpp)
# add_executable(brouhaha tests/apply/apply_cpp_program.cpp)
# add_executable(brouhaha tests/even/even_cpp_program.cpp)
# add_executable(brouhaha tests/fact/fact_cpp_program.cpp)
# add_executable(brouhaha tests/filter/filter_cpp_program.cpp)
# add_executable(brouhaha tests/foldl/foldl_cpp_program.cpp)
# add_executable(brouhaha tests/minus/minus_cpp_program.cpp)
# add_executable(brouhaha tests/modulo/modulo_cpp_program.cpp)
# add_executable(brouhaha tests/multiply/multiply_cpp_program.cpp)
# add_executable(brouhaha tests/not/not_cpp_program.cpp)
# add_executable(brouhaha tests/null/null_cpp_program.cpp)
# add_executable(brouhaha tests/or/or_cpp_program.cpp)
# add_executable(brouhaha tests/string/string_cpp_program.cpp)
# add_executable(brouhaha tests/sym_equal/sym_equal_cpp_program.cpp)
# add_executable(brouhaha tests/sym_gt/sym_gt_cpp_program.cpp)
# add_executable(brouhaha tests/sym_gteq/sym_gteq_cpp_program.cpp)
# add_executable(brouhaha tests/sym_lt/sym_lt_cpp_program.cpp)
# add_executable(brouhaha tests/hash-ref/hash-ref_cpp_program.cpp)
# add_executable(brouhaha tests/hash-set/hash-set_cpp_program.cpp)
# add_executable(brouhaha tests/hash-has-key/hash-has-key_cpp_program.cpp)
# add_executable(brouhaha tests/hash-count/hash-count_cpp_program.cpp)
add_executable(brouhaha tests/divison/divison_cpp_program.cpp)
# add_executable(brouhaha tests/float/float_cpp_program.cpp)
# add_executable(brouhaha easy_cpp_program.cpp)
# add_executable(brouhaha dummy.cpp)
# add_executable(brouhaha strings_trails.cpp)
# add_executable(brouhaha tests/minus/minus_cpp_program.cpp)
# add_executable(brouhaha tests/filter/filter_cpp_program.cpp)
# add_executable(brouhaha tests/apply/apply_cpp_program.cpp)
# add_executable(brouhaha tests/fact/fact_cpp_program.cpp)
# add_executable(brouhaha tests4/string/string_cpp_program.cpp)
# add_executable(brouhaha tests4/hash-string/hash-string_cpp_program.cpp)
# add_executable(brouhaha tests/foldl/foldl_cpp_program.cpp)
 
# ../dependencies/valgrind/bin/valgrind --leak-check=full ./brouhaha


# Link libraries
target_link_libraries(brouhaha PRIVATE gmpxx gmp gc gccpp)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
