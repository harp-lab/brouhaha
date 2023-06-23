#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(nested_if_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/nested_if/answer");
    std::string desugar_res = readFileToString("../../../tests/nested_if/output/nested_if_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(nested_if_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/nested_if/answer");
    std::string alphatize_res = readFileToString("../../../tests/nested_if/output/nested_if_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(nested_if_Test, anf)
{
    std::string answer = readFileToString("../../../tests/nested_if/answer");
    std::string anf_res = readFileToString("../../../tests/nested_if/output/nested_if_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(nested_if_Test, closure)
{
    std::string answer = readFileToString("../../../tests/nested_if/answer");
    std::string closure_res = readFileToString("../../../tests/nested_if/output/nested_if_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(nested_if_Test, cps)
{
    std::string answer = readFileToString("../../../tests/nested_if/answer");
    std::string cps_res = readFileToString("../../../tests/nested_if/output/nested_if_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(nested_if_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/nested_if/answer");
    std::string output = executeAndGetOutput("./nested_if_exec");
    writeStringToFile("../../../tests/nested_if/output/nested_if_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}