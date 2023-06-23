#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(minus_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/minus/answer");
    std::string desugar_res = readFileToString("../../../tests/minus/output/minus_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(minus_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/minus/answer");
    std::string alphatize_res = readFileToString("../../../tests/minus/output/minus_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(minus_Test, anf)
{
    std::string answer = readFileToString("../../../tests/minus/answer");
    std::string anf_res = readFileToString("../../../tests/minus/output/minus_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(minus_Test, closure)
{
    std::string answer = readFileToString("../../../tests/minus/answer");
    std::string closure_res = readFileToString("../../../tests/minus/output/minus_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(minus_Test, cps)
{
    std::string answer = readFileToString("../../../tests/minus/answer");
    std::string cps_res = readFileToString("../../../tests/minus/output/minus_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(minus_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/minus/answer");
    std::string output = executeAndGetOutput("./minus_exec");
    writeStringToFile("../../../tests/minus/output/minus_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}