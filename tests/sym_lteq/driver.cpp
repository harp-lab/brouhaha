#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(sym_lteq_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/sym_lteq/answer");
    std::string desugar_res = readFileToString("../../../tests/sym_lteq/output/sym_lteq_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(sym_lteq_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/sym_lteq/answer");
    std::string alphatize_res = readFileToString("../../../tests/sym_lteq/output/sym_lteq_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(sym_lteq_Test, anf)
{
    std::string answer = readFileToString("../../../tests/sym_lteq/answer");
    std::string anf_res = readFileToString("../../../tests/sym_lteq/output/sym_lteq_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(sym_lteq_Test, closure)
{
    std::string answer = readFileToString("../../../tests/sym_lteq/answer");
    std::string closure_res = readFileToString("../../../tests/sym_lteq/output/sym_lteq_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(sym_lteq_Test, cps)
{
    std::string answer = readFileToString("../../../tests/sym_lteq/answer");
    std::string cps_res = readFileToString("../../../tests/sym_lteq/output/sym_lteq_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(sym_lteq_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/sym_lteq/answer");
    std::string output = executeAndGetOutput("./sym_lteq_exec");
    writeStringToFile("../../../tests/sym_lteq/output/sym_lteq_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}