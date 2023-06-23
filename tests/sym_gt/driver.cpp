#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(sym_gt_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/sym_gt/answer");
    std::string desugar_res = readFileToString("../../../tests/sym_gt/output/sym_gt_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(sym_gt_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/sym_gt/answer");
    std::string alphatize_res = readFileToString("../../../tests/sym_gt/output/sym_gt_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(sym_gt_Test, anf)
{
    std::string answer = readFileToString("../../../tests/sym_gt/answer");
    std::string anf_res = readFileToString("../../../tests/sym_gt/output/sym_gt_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(sym_gt_Test, closure)
{
    std::string answer = readFileToString("../../../tests/sym_gt/answer");
    std::string closure_res = readFileToString("../../../tests/sym_gt/output/sym_gt_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(sym_gt_Test, cps)
{
    std::string answer = readFileToString("../../../tests/sym_gt/answer");
    std::string cps_res = readFileToString("../../../tests/sym_gt/output/sym_gt_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(sym_gt_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/sym_gt/answer");
    std::string output = executeAndGetOutput("./sym_gt_exec");
    writeStringToFile("../../../tests/sym_gt/output/sym_gt_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}