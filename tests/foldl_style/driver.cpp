#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(foldl_style_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/foldl_style/answer");
    std::string desugar_res = readFileToString("../../../tests/foldl_style/output/foldl_style_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(foldl_style_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/foldl_style/answer");
    std::string alphatize_res = readFileToString("../../../tests/foldl_style/output/foldl_style_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(foldl_style_Test, anf)
{
    std::string answer = readFileToString("../../../tests/foldl_style/answer");
    std::string anf_res = readFileToString("../../../tests/foldl_style/output/foldl_style_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(foldl_style_Test, closure)
{
    std::string answer = readFileToString("../../../tests/foldl_style/answer");
    std::string closure_res = readFileToString("../../../tests/foldl_style/output/foldl_style_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(foldl_style_Test, cps)
{
    std::string answer = readFileToString("../../../tests/foldl_style/answer");
    std::string cps_res = readFileToString("../../../tests/foldl_style/output/foldl_style_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(foldl_style_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/foldl_style/answer");
    std::string output = executeAndGetOutput("./foldl_style_exec");
    writeStringToFile("../../../tests/foldl_style/output/foldl_style_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}