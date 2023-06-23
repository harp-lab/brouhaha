#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(length_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/length/answer");
    std::string desugar_res = readFileToString("../../../tests/length/output/length_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(length_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/length/answer");
    std::string alphatize_res = readFileToString("../../../tests/length/output/length_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(length_Test, anf)
{
    std::string answer = readFileToString("../../../tests/length/answer");
    std::string anf_res = readFileToString("../../../tests/length/output/length_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(length_Test, closure)
{
    std::string answer = readFileToString("../../../tests/length/answer");
    std::string closure_res = readFileToString("../../../tests/length/output/length_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(length_Test, cps)
{
    std::string answer = readFileToString("../../../tests/length/answer");
    std::string cps_res = readFileToString("../../../tests/length/output/length_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(length_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/length/answer");
    std::string output = executeAndGetOutput("./length_exec");
    writeStringToFile("../../../tests/length/output/length_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}