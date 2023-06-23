#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(filter_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/filter/answer");
    std::string desugar_res = readFileToString("../../../tests/filter/output/filter_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(filter_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/filter/answer");
    std::string alphatize_res = readFileToString("../../../tests/filter/output/filter_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(filter_Test, anf)
{
    std::string answer = readFileToString("../../../tests/filter/answer");
    std::string anf_res = readFileToString("../../../tests/filter/output/filter_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(filter_Test, closure)
{
    std::string answer = readFileToString("../../../tests/filter/answer");
    std::string closure_res = readFileToString("../../../tests/filter/output/filter_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(filter_Test, cps)
{
    std::string answer = readFileToString("../../../tests/filter/answer");
    std::string cps_res = readFileToString("../../../tests/filter/output/filter_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(filter_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/filter/answer");
    std::string output = executeAndGetOutput("./filter_exec");
    writeStringToFile("../../../tests/filter/output/filter_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}