# cmake_minimum_required(VERSION 3.0.0)
# project(bourhaha VERSION 0.1.0)

# include(CTest)
# enable_testing()

# # add_executable(bourhaha main.cpp)
# add_executable(bourhaha tests2/easy/easy_cpp_program.cpp)
# # add_executable(bourhaha tests2/minus/minus_cpp_program.cpp)

# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)


cmake_minimum_required(VERSION 3.0.0)
project(bourhaha VERSION 0.1.0)

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
# add_executable(bourhaha tests2/easy/easy_cpp_program.cpp)
# add_executable(bourhaha easy_cpp_program.cpp)
# add_executable(bourhaha dummy.cpp)
# add_executable(bourhaha tests2/minus/minus_cpp_program.cpp)
add_executable(bourhaha tests2/filter/filter_cpp_program.cpp)
# add_executable(bourhaha tests2/fact/fact_cpp_program.cpp)

# ../dependencies/valgrind/bin/valgrind --leak-check=full ./bdwgc-gmp_test 


# Link libraries
target_link_libraries(bourhaha PRIVATE gmpxx gmp gc)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
