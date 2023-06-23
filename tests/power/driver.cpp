#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(power_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/power/answer");
    std::string desugar_res = readFileToString("../../../tests/power/output/power_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(power_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/power/answer");
    std::string alphatize_res = readFileToString("../../../tests/power/output/power_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(power_Test, anf)
{
    std::string answer = readFileToString("../../../tests/power/answer");
    std::string anf_res = readFileToString("../../../tests/power/output/power_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(power_Test, closure)
{
    std::string answer = readFileToString("../../../tests/power/answer");
    std::string closure_res = readFileToString("../../../tests/power/output/power_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(power_Test, cps)
{
    std::string answer = readFileToString("../../../tests/power/answer");
    std::string cps_res = readFileToString("../../../tests/power/output/power_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(power_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/power/answer");
    std::string output = executeAndGetOutput("./power_exec");
    writeStringToFile("../../../tests/power/output/power_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}