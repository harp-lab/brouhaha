#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(hash_has_key_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/hash_has_key/answer");
    std::string desugar_res = readFileToString("../../../tests/hash_has_key/output/hash_has_key_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(hash_has_key_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/hash_has_key/answer");
    std::string alphatize_res = readFileToString("../../../tests/hash_has_key/output/hash_has_key_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(hash_has_key_Test, anf)
{
    std::string answer = readFileToString("../../../tests/hash_has_key/answer");
    std::string anf_res = readFileToString("../../../tests/hash_has_key/output/hash_has_key_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(hash_has_key_Test, closure)
{
    std::string answer = readFileToString("../../../tests/hash_has_key/answer");
    std::string closure_res = readFileToString("../../../tests/hash_has_key/output/hash_has_key_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(hash_has_key_Test, cps)
{
    std::string answer = readFileToString("../../../tests/hash_has_key/answer");
    std::string cps_res = readFileToString("../../../tests/hash_has_key/output/hash_has_key_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(hash_has_key_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/hash_has_key/answer");
    std::string output = executeAndGetOutput("./hash_has_key_exec");
    writeStringToFile("../../../tests/hash_has_key/output/hash_has_key_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}