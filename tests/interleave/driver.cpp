#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(interleave_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/interleave/answer");
    std::string desugar_res = readFileToString("../../../tests/interleave/output/interleave_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(interleave_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/interleave/answer");
    std::string alphatize_res = readFileToString("../../../tests/interleave/output/interleave_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(interleave_Test, anf)
{
    std::string answer = readFileToString("../../../tests/interleave/answer");
    std::string anf_res = readFileToString("../../../tests/interleave/output/interleave_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(interleave_Test, closure)
{
    std::string answer = readFileToString("../../../tests/interleave/answer");
    std::string closure_res = readFileToString("../../../tests/interleave/output/interleave_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(interleave_Test, cps)
{
    std::string answer = readFileToString("../../../tests/interleave/answer");
    std::string cps_res = readFileToString("../../../tests/interleave/output/interleave_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(interleave_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/interleave/answer");
    std::string output = executeAndGetOutput("./interleave_exec");
    writeStringToFile("../../../tests/interleave/output/interleave_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}