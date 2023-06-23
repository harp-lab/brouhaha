#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(float_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/float/answer");
    std::string desugar_res = readFileToString("../../../tests/float/output/float_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(float_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/float/answer");
    std::string alphatize_res = readFileToString("../../../tests/float/output/float_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(float_Test, anf)
{
    std::string answer = readFileToString("../../../tests/float/answer");
    std::string anf_res = readFileToString("../../../tests/float/output/float_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(float_Test, closure)
{
    std::string answer = readFileToString("../../../tests/float/answer");
    std::string closure_res = readFileToString("../../../tests/float/output/float_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(float_Test, cps)
{
    std::string answer = readFileToString("../../../tests/float/answer");
    std::string cps_res = readFileToString("../../../tests/float/output/float_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(float_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/float/answer");
    std::string output = executeAndGetOutput("./float_exec");
    writeStringToFile("../../../tests/float/output/float_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}