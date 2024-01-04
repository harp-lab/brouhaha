cmake_minimum_required(VERSION 3.22.1)
project(brouhaha VERSION 0.1.0 LANGUAGES CXX)


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


set(CMAKE_CXX_STANDARD 14) # requiring 14 as google test requires 14
set(CMAKE_CXX_STANDARD_REQUIRED ON) # Not sure what this does
set(CMAKE_CXX_EXTENSIONS OFF) # Not sure what this does

include(FetchContent)

option(BUILD_GMOCK OFF)
option(INSTALL_GTEST OFF)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.13.0
)
FetchContent_MakeAvailable(googletest)

include(CTest)
enable_testing()

add_library(prelude prelude.hpp)
set_target_properties(prelude PROPERTIES LINKER_LANGUAGE CXX)

add_subdirectory(runtime-testing)
add_subdirectory(tests)


# Add executable
# add_executable(brouhaha tests2/easy/easy_cpp_program.cpp)

# # ../dependencies/valgrind/bin/valgrind --leak-check=full ./brouhaha

find_library(gmp_lib 
    NAMES gmp
    PATHS ${GMP_LIBRARY_DIR}
    REQUIRED)

find_library(gmpxx_lib 
    NAMES gmpxx
    PATHS ${GMP_LIBRARY_DIR}
    REQUIRED)

find_library(gc_lib 
    NAMES gc
    PATHS ${BDWGC_LIBRARY_DIR}
    REQUIRED)

find_library(gccpp_lib 
    NAMES gccpp
    PATHS ${BDWGC_LIBRARY_DIR}
    REQUIRED)

# target_include_directories(brouhaha PRIVATE ${DEPENDENCIES_DIR} ${BDWGC_INCLUDE_DIR} ${GMP_INCLUDE_DIR} ${VALGRIND_INCLUDE_DIR} ${HAMT_INCLUDE_DIR})
target_include_directories(prelude PUBLIC ${DEPENDENCIES_DIR} ${BDWGC_INCLUDE_DIR} ${GMP_INCLUDE_DIR} ${VALGRIND_INCLUDE_DIR} ${HAMT_INCLUDE_DIR})
# # Link libraries
# target_link_libraries(brouhaha PRIVATE ${gmpxx_lib} ${gmp_lib} ${gc_lib} ${gccpp_lib})
target_link_libraries(prelude PUBLIC ${gmpxx_lib} ${gmp_lib} ${gc_lib} ${gccpp_lib})
# # target_link_libraries(brouhaha PRIVATE gmpxx gmp gc gccpp)


# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)
# docker run --name=brouhaha_v4 --entrypoint=/slog/slog-server --rm --detach brouhaha_v4
