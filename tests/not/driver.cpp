#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(not_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/not/answer");
    std::string desugar_res = readFileToString("../../../tests/not/output/not_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(not_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/not/answer");
    std::string alphatize_res = readFileToString("../../../tests/not/output/not_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(not_Test, anf)
{
    std::string answer = readFileToString("../../../tests/not/answer");
    std::string anf_res = readFileToString("../../../tests/not/output/not_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(not_Test, closure)
{
    std::string answer = readFileToString("../../../tests/not/answer");
    std::string closure_res = readFileToString("../../../tests/not/output/not_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(not_Test, cps)
{
    std::string answer = readFileToString("../../../tests/not/answer");
    std::string cps_res = readFileToString("../../../tests/not/output/not_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(not_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/not/answer");
    std::string output = executeAndGetOutput("./not_exec");
    writeStringToFile("../../../tests/not/output/not_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}