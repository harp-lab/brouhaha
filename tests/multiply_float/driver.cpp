#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(multiply_float_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/multiply_float/answer");
    std::string desugar_res = readFileToString("../../../tests/multiply_float/output/multiply_float_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(multiply_float_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/multiply_float/answer");
    std::string alphatize_res = readFileToString("../../../tests/multiply_float/output/multiply_float_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(multiply_float_Test, anf)
{
    std::string answer = readFileToString("../../../tests/multiply_float/answer");
    std::string anf_res = readFileToString("../../../tests/multiply_float/output/multiply_float_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(multiply_float_Test, closure)
{
    std::string answer = readFileToString("../../../tests/multiply_float/answer");
    std::string closure_res = readFileToString("../../../tests/multiply_float/output/multiply_float_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(multiply_float_Test, cps)
{
    std::string answer = readFileToString("../../../tests/multiply_float/answer");
    std::string cps_res = readFileToString("../../../tests/multiply_float/output/multiply_float_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(multiply_float_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/multiply_float/answer");
    std::string output = executeAndGetOutput("./multiply_float_exec");
    writeStringToFile("../../../tests/multiply_float/output/multiply_float_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}