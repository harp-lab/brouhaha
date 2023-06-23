#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(hash_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/hash/answer");
    std::string desugar_res = readFileToString("../../../tests/hash/output/hash_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(hash_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/hash/answer");
    std::string alphatize_res = readFileToString("../../../tests/hash/output/hash_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(hash_Test, anf)
{
    std::string answer = readFileToString("../../../tests/hash/answer");
    std::string anf_res = readFileToString("../../../tests/hash/output/hash_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(hash_Test, closure)
{
    std::string answer = readFileToString("../../../tests/hash/answer");
    std::string closure_res = readFileToString("../../../tests/hash/output/hash_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(hash_Test, cps)
{
    std::string answer = readFileToString("../../../tests/hash/answer");
    std::string cps_res = readFileToString("../../../tests/hash/output/hash_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(hash_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/hash/answer");
    std::string output = executeAndGetOutput("./hash_exec");
    writeStringToFile("../../../tests/hash/output/hash_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}