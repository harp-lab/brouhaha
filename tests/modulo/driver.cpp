#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(modulo_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/modulo/answer");
    std::string desugar_res = readFileToString("../../../tests/modulo/output/modulo_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(modulo_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/modulo/answer");
    std::string alphatize_res = readFileToString("../../../tests/modulo/output/modulo_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(modulo_Test, anf)
{
    std::string answer = readFileToString("../../../tests/modulo/answer");
    std::string anf_res = readFileToString("../../../tests/modulo/output/modulo_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(modulo_Test, closure)
{
    std::string answer = readFileToString("../../../tests/modulo/answer");
    std::string closure_res = readFileToString("../../../tests/modulo/output/modulo_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(modulo_Test, cps)
{
    std::string answer = readFileToString("../../../tests/modulo/answer");
    std::string cps_res = readFileToString("../../../tests/modulo/output/modulo_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(modulo_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/modulo/answer");
    std::string output = executeAndGetOutput("./modulo_exec");
    writeStringToFile("../../../tests/modulo/output/modulo_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}