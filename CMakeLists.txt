# cmake_minimum_required(VERSION 3.0.0)
# project(brouhaha VERSION 0.1.0)

# include(CTest)
# enable_testing()

# # add_executable(brouhaha main.cpp)
# add_executable(brouhaha tests2/easy/easy_cpp_program.cpp)
# # add_executable(brouhaha tests2/minus/minus_cpp_program.cpp)

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
# add_executable(brouhaha tests2/easy/easy_cpp_program.cpp)
# add_executable(brouhaha tests2/and/and_cpp_program.cpp)
# add_executable(brouhaha tests2/apply/apply_cpp_program.cpp)
# add_executable(brouhaha tests2/even/even_cpp_program.cpp)
# add_executable(brouhaha tests2/fact/fact_cpp_program.cpp)
# add_executable(brouhaha tests2/filter/filter_cpp_program.cpp)
# add_executable(brouhaha tests2/foldl/foldl_cpp_program.cpp)
# add_executable(brouhaha tests2/minus/minus_cpp_program.cpp)
# add_executable(brouhaha tests2/modulo/modulo_cpp_program.cpp)
# add_executable(brouhaha tests2/multiply/multiply_cpp_program.cpp)
# add_executable(brouhaha tests2/not/not_cpp_program.cpp)
# add_executable(brouhaha tests2/null/null_cpp_program.cpp)
# add_executable(brouhaha tests2/or/or_cpp_program.cpp)
# add_executable(brouhaha tests2/string/string_cpp_program.cpp)
# add_executable(brouhaha tests2/sym_equal/sym_equal_cpp_program.cpp)
# add_executable(brouhaha tests2/sym_gt/sym_gt_cpp_program.cpp)
# add_executable(brouhaha tests2/sym_gteq/sym_gteq_cpp_program.cpp)
# add_executable(brouhaha tests2/sym_lt/sym_lt_cpp_program.cpp)
# add_executable(brouhaha tests2/hash-ref/hash-ref_cpp_program.cpp)
# add_executable(brouhaha tests2/hash-set/hash-set_cpp_program.cpp)
# add_executable(brouhaha tests2/hash-has-key/hash-has-key_cpp_program.cpp)
# add_executable(brouhaha tests2/hash-count/hash-count_cpp_program.cpp)
add_executable(brouhaha tests2/divison/divison_cpp_program.cpp)
# add_executable(brouhaha tests2/float/float_cpp_program.cpp)
# add_executable(brouhaha easy_cpp_program.cpp)
# add_executable(brouhaha dummy.cpp)
# add_executable(brouhaha strings_trails.cpp)
# add_executable(brouhaha tests2/minus/minus_cpp_program.cpp)
# add_executable(brouhaha tests2/filter/filter_cpp_program.cpp)
# add_executable(brouhaha tests2/apply/apply_cpp_program.cpp)
# add_executable(brouhaha tests2/fact/fact_cpp_program.cpp)
# add_executable(brouhaha tests4/string/string_cpp_program.cpp)
# add_executable(brouhaha tests4/hash-string/hash-string_cpp_program.cpp)
# add_executable(brouhaha tests2/foldl/foldl_cpp_program.cpp)
 
# ../dependencies/valgrind/bin/valgrind --leak-check=full ./brouhaha


# Link libraries
target_link_libraries(brouhaha PRIVATE gmpxx gmp gc gccpp)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
