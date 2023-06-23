#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(member_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/member/answer");
    std::string desugar_res = readFileToString("../../../tests/member/output/member_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(member_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/member/answer");
    std::string alphatize_res = readFileToString("../../../tests/member/output/member_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(member_Test, anf)
{
    std::string answer = readFileToString("../../../tests/member/answer");
    std::string anf_res = readFileToString("../../../tests/member/output/member_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(member_Test, closure)
{
    std::string answer = readFileToString("../../../tests/member/answer");
    std::string closure_res = readFileToString("../../../tests/member/output/member_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(member_Test, cps)
{
    std::string answer = readFileToString("../../../tests/member/answer");
    std::string cps_res = readFileToString("../../../tests/member/output/member_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(member_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/member/answer");
    std::string output = executeAndGetOutput("./member_exec");
    writeStringToFile("../../../tests/member/output/member_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}