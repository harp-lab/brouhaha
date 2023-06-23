#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(let_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/let/answer");
    std::string desugar_res = readFileToString("../../../tests/let/output/let_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(let_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/let/answer");
    std::string alphatize_res = readFileToString("../../../tests/let/output/let_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(let_Test, anf)
{
    std::string answer = readFileToString("../../../tests/let/answer");
    std::string anf_res = readFileToString("../../../tests/let/output/let_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(let_Test, closure)
{
    std::string answer = readFileToString("../../../tests/let/answer");
    std::string closure_res = readFileToString("../../../tests/let/output/let_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(let_Test, cps)
{
    std::string answer = readFileToString("../../../tests/let/answer");
    std::string cps_res = readFileToString("../../../tests/let/output/let_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(let_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/let/answer");
    std::string output = executeAndGetOutput("./let_exec");
    writeStringToFile("../../../tests/let/output/let_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}