#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(count_divisors_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/count_divisors/answer");
    std::string desugar_res = readFileToString("../../../tests/count_divisors/output/count_divisors_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(count_divisors_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/count_divisors/answer");
    std::string alphatize_res = readFileToString("../../../tests/count_divisors/output/count_divisors_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(count_divisors_Test, anf)
{
    std::string answer = readFileToString("../../../tests/count_divisors/answer");
    std::string anf_res = readFileToString("../../../tests/count_divisors/output/count_divisors_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(count_divisors_Test, closure)
{
    std::string answer = readFileToString("../../../tests/count_divisors/answer");
    std::string closure_res = readFileToString("../../../tests/count_divisors/output/count_divisors_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(count_divisors_Test, cps)
{
    std::string answer = readFileToString("../../../tests/count_divisors/answer");
    std::string cps_res = readFileToString("../../../tests/count_divisors/output/count_divisors_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(count_divisors_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/count_divisors/answer");
    std::string output = executeAndGetOutput("./count_divisors_exec");
    writeStringToFile("../../../tests/count_divisors/output/count_divisors_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}