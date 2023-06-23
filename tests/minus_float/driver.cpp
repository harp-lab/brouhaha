#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(minus_float_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/minus_float/answer");
    std::string desugar_res = readFileToString("../../../tests/minus_float/output/minus_float_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(minus_float_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/minus_float/answer");
    std::string alphatize_res = readFileToString("../../../tests/minus_float/output/minus_float_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(minus_float_Test, anf)
{
    std::string answer = readFileToString("../../../tests/minus_float/answer");
    std::string anf_res = readFileToString("../../../tests/minus_float/output/minus_float_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(minus_float_Test, closure)
{
    std::string answer = readFileToString("../../../tests/minus_float/answer");
    std::string closure_res = readFileToString("../../../tests/minus_float/output/minus_float_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(minus_float_Test, cps)
{
    std::string answer = readFileToString("../../../tests/minus_float/answer");
    std::string cps_res = readFileToString("../../../tests/minus_float/output/minus_float_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(minus_float_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/minus_float/answer");
    std::string output = executeAndGetOutput("./minus_float_exec");
    writeStringToFile("../../../tests/minus_float/output/minus_float_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}