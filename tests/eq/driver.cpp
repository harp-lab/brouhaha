#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(eq_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/eq/answer");
    std::string desugar_res = readFileToString("../../../tests/eq/output/eq_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(eq_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/eq/answer");
    std::string alphatize_res = readFileToString("../../../tests/eq/output/eq_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(eq_Test, anf)
{
    std::string answer = readFileToString("../../../tests/eq/answer");
    std::string anf_res = readFileToString("../../../tests/eq/output/eq_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(eq_Test, closure)
{
    std::string answer = readFileToString("../../../tests/eq/answer");
    std::string closure_res = readFileToString("../../../tests/eq/output/eq_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(eq_Test, cps)
{
    std::string answer = readFileToString("../../../tests/eq/answer");
    std::string cps_res = readFileToString("../../../tests/eq/output/eq_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(eq_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/eq/answer");
    std::string output = executeAndGetOutput("./eq_exec");
    writeStringToFile("../../../tests/eq/output/eq_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}