#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(null_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/null/answer");
    std::string desugar_res = readFileToString("../../../tests/null/output/null_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(null_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/null/answer");
    std::string alphatize_res = readFileToString("../../../tests/null/output/null_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(null_Test, anf)
{
    std::string answer = readFileToString("../../../tests/null/answer");
    std::string anf_res = readFileToString("../../../tests/null/output/null_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(null_Test, closure)
{
    std::string answer = readFileToString("../../../tests/null/answer");
    std::string closure_res = readFileToString("../../../tests/null/output/null_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(null_Test, cps)
{
    std::string answer = readFileToString("../../../tests/null/answer");
    std::string cps_res = readFileToString("../../../tests/null/output/null_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(null_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/null/answer");
    std::string output = executeAndGetOutput("./null_exec");
    writeStringToFile("../../../tests/null/output/null_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}