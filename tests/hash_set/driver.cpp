#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(hash_set_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/hash_set/answer");
    std::string desugar_res = readFileToString("../../../tests/hash_set/output/hash_set_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(hash_set_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/hash_set/answer");
    std::string alphatize_res = readFileToString("../../../tests/hash_set/output/hash_set_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(hash_set_Test, anf)
{
    std::string answer = readFileToString("../../../tests/hash_set/answer");
    std::string anf_res = readFileToString("../../../tests/hash_set/output/hash_set_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(hash_set_Test, closure)
{
    std::string answer = readFileToString("../../../tests/hash_set/answer");
    std::string closure_res = readFileToString("../../../tests/hash_set/output/hash_set_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(hash_set_Test, cps)
{
    std::string answer = readFileToString("../../../tests/hash_set/answer");
    std::string cps_res = readFileToString("../../../tests/hash_set/output/hash_set_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(hash_set_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/hash_set/answer");
    std::string output = executeAndGetOutput("./hash_set_exec");
    writeStringToFile("../../../tests/hash_set/output/hash_set_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}