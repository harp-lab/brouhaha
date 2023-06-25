#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(and_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/and/answer");
    std::string desugar_res = readFileToString("../../../tests/and/output/and_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(and_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/and/answer");
    std::string alphatize_res = readFileToString("../../../tests/and/output/and_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(and_Test, anf)
{
    std::string answer = readFileToString("../../../tests/and/answer");
    std::string anf_res = readFileToString("../../../tests/and/output/and_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(and_Test, closure)
{
    std::string answer = readFileToString("../../../tests/and/answer");
    std::string closure_res = readFileToString("../../../tests/and/output/and_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(and_Test, cps)
{
    std::string answer = readFileToString("../../../tests/and/answer");
    std::string cps_res = readFileToString("../../../tests/and/output/and_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(and_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/and/answer");
    std::string output = executeAndGetOutput("./and_exec");
    writeStringToFile("../../../tests/and/output/and_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}