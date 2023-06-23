#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(yes_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/yes/answer");
    std::string desugar_res = readFileToString("../../../tests/yes/output/yes_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(yes_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/yes/answer");
    std::string alphatize_res = readFileToString("../../../tests/yes/output/yes_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(yes_Test, anf)
{
    std::string answer = readFileToString("../../../tests/yes/answer");
    std::string anf_res = readFileToString("../../../tests/yes/output/yes_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(yes_Test, closure)
{
    std::string answer = readFileToString("../../../tests/yes/answer");
    std::string closure_res = readFileToString("../../../tests/yes/output/yes_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(yes_Test, cps)
{
    std::string answer = readFileToString("../../../tests/yes/answer");
    std::string cps_res = readFileToString("../../../tests/yes/output/yes_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(yes_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/yes/answer");
    std::string output = executeAndGetOutput("./yes_exec");
    writeStringToFile("../../../tests/yes/output/yes_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}