#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(var_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/var/answer");
    std::string desugar_res = readFileToString("../../../tests/var/output/var_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(var_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/var/answer");
    std::string alphatize_res = readFileToString("../../../tests/var/output/var_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(var_Test, anf)
{
    std::string answer = readFileToString("../../../tests/var/answer");
    std::string anf_res = readFileToString("../../../tests/var/output/var_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(var_Test, closure)
{
    std::string answer = readFileToString("../../../tests/var/answer");
    std::string closure_res = readFileToString("../../../tests/var/output/var_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(var_Test, cps)
{
    std::string answer = readFileToString("../../../tests/var/answer");
    std::string cps_res = readFileToString("../../../tests/var/output/var_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(var_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/var/answer");
    std::string output = executeAndGetOutput("./var_exec");
    writeStringToFile("../../../tests/var/output/var_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}