#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(lambda_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/lambda/answer");
    std::string desugar_res = readFileToString("../../../tests/lambda/output/lambda_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(lambda_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/lambda/answer");
    std::string alphatize_res = readFileToString("../../../tests/lambda/output/lambda_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(lambda_Test, anf)
{
    std::string answer = readFileToString("../../../tests/lambda/answer");
    std::string anf_res = readFileToString("../../../tests/lambda/output/lambda_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(lambda_Test, closure)
{
    std::string answer = readFileToString("../../../tests/lambda/answer");
    std::string closure_res = readFileToString("../../../tests/lambda/output/lambda_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(lambda_Test, cps)
{
    std::string answer = readFileToString("../../../tests/lambda/answer");
    std::string cps_res = readFileToString("../../../tests/lambda/output/lambda_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(lambda_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/lambda/answer");
    std::string output = executeAndGetOutput("./lambda_exec");
    writeStringToFile("../../../tests/lambda/output/lambda_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}