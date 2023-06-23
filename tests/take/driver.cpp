#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(take_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/take/answer");
    std::string desugar_res = readFileToString("../../../tests/take/output/take_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(take_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/take/answer");
    std::string alphatize_res = readFileToString("../../../tests/take/output/take_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(take_Test, anf)
{
    std::string answer = readFileToString("../../../tests/take/answer");
    std::string anf_res = readFileToString("../../../tests/take/output/take_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(take_Test, closure)
{
    std::string answer = readFileToString("../../../tests/take/answer");
    std::string closure_res = readFileToString("../../../tests/take/output/take_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(take_Test, cps)
{
    std::string answer = readFileToString("../../../tests/take/answer");
    std::string cps_res = readFileToString("../../../tests/take/output/take_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(take_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/take/answer");
    std::string output = executeAndGetOutput("./take_exec");
    writeStringToFile("../../../tests/take/output/take_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}