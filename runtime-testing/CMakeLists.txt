add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

add_executable(prelude-tests prelude-tests.cpp)
add_executable(prelude-tests2 prelude-tests_2.cpp)

target_link_libraries(prelude-tests 
  PRIVATE
  GTest::GTest
  prelude)

target_link_libraries(prelude-tests2
  PRIVATE
  GTest::GTest
  prelude)

add_test(prelude_tests prelude-tests)
add_test(prelude_tests2 prelude-tests2)