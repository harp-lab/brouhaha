#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(even_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/even/answer");
    std::string desugar_res = readFileToString("../../../tests/even/output/even_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(even_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/even/answer");
    std::string alphatize_res = readFileToString("../../../tests/even/output/even_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(even_Test, anf)
{
    std::string answer = readFileToString("../../../tests/even/answer");
    std::string anf_res = readFileToString("../../../tests/even/output/even_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(even_Test, closure)
{
    std::string answer = readFileToString("../../../tests/even/answer");
    std::string closure_res = readFileToString("../../../tests/even/output/even_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(even_Test, cps)
{
    std::string answer = readFileToString("../../../tests/even/answer");
    std::string cps_res = readFileToString("../../../tests/even/output/even_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(even_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/even/answer");
    std::string output = executeAndGetOutput("./even_exec");
    writeStringToFile("../../../tests/even/output/even_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}