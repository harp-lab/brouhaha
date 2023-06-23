#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(reverse_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/reverse/answer");
    std::string desugar_res = readFileToString("../../../tests/reverse/output/reverse_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(reverse_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/reverse/answer");
    std::string alphatize_res = readFileToString("../../../tests/reverse/output/reverse_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(reverse_Test, anf)
{
    std::string answer = readFileToString("../../../tests/reverse/answer");
    std::string anf_res = readFileToString("../../../tests/reverse/output/reverse_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(reverse_Test, closure)
{
    std::string answer = readFileToString("../../../tests/reverse/answer");
    std::string closure_res = readFileToString("../../../tests/reverse/output/reverse_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(reverse_Test, cps)
{
    std::string answer = readFileToString("../../../tests/reverse/answer");
    std::string cps_res = readFileToString("../../../tests/reverse/output/reverse_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(reverse_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/reverse/answer");
    std::string output = executeAndGetOutput("./reverse_exec");
    writeStringToFile("../../../tests/reverse/output/reverse_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}