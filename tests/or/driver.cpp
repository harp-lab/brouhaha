#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(or_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/or/answer");
    std::string desugar_res = readFileToString("../../../tests/or/output/or_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(or_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/or/answer");
    std::string alphatize_res = readFileToString("../../../tests/or/output/or_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(or_Test, anf)
{
    std::string answer = readFileToString("../../../tests/or/answer");
    std::string anf_res = readFileToString("../../../tests/or/output/or_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(or_Test, closure)
{
    std::string answer = readFileToString("../../../tests/or/answer");
    std::string closure_res = readFileToString("../../../tests/or/output/or_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(or_Test, cps)
{
    std::string answer = readFileToString("../../../tests/or/answer");
    std::string cps_res = readFileToString("../../../tests/or/output/or_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(or_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/or/answer");
    std::string output = executeAndGetOutput("./or_exec");
    writeStringToFile("../../../tests/or/output/or_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}