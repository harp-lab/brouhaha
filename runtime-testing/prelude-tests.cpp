#include <../prelude.hpp>
#include <gtest/gtest.h>

TEST(PreludeTests, TestIntegerOne_One)
{
    const auto expected = 1;
    const auto actual = test_lol(1, 1);
    ASSERT_EQ(expected, actual);
}

TEST(PreludeTests, TestIntegerZero_Zero)
{
    const auto expected = 0;
    const auto actual = test_lol(0, 0);
    ASSERT_EQ(expected, actual);
}

TEST(MPZTests, MPZ_valid)
{
    mpz_t* result = (mpz_t*)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*result);
    void* var_mpz = encode_mpz(result);
    ASSERT_EQ(get_tag(var_mpz), 1);
    ASSERT_NE(get_tag(var_mpz), 2);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
