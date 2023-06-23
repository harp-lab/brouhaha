#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(easy_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/easy/answer");
    std::string desugar_res = readFileToString("../../../tests/easy/output/easy_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(easy_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/easy/answer");
    std::string alphatize_res = readFileToString("../../../tests/easy/output/easy_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(easy_Test, anf)
{
    std::string answer = readFileToString("../../../tests/easy/answer");
    std::string anf_res = readFileToString("../../../tests/easy/output/easy_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(easy_Test, closure)
{
    std::string answer = readFileToString("../../../tests/easy/answer");
    std::string closure_res = readFileToString("../../../tests/easy/output/easy_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(easy_Test, cps)
{
    std::string answer = readFileToString("../../../tests/easy/answer");
    std::string cps_res = readFileToString("../../../tests/easy/output/easy_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(easy_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/easy/answer");
    std::string output = executeAndGetOutput("./easy_exec");
    writeStringToFile("../../../tests/easy/output/easy_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}