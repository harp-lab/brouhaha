#include <../prelude.hpp>
#include <gtest/gtest.h>
#include <../tests/testing.hpp>

// TEST(HAMTTests, getKeys)
// {
//     mpz_t* result = (mpz_t*)(GC_MALLOC(sizeof(mpz_t)));
//     mpz_init(*result);
//     void* var_mpz = encode_mpz(result);
//     ASSERT_EQ(get_tag(var_mpz), 1);
//     ASSERT_NE(get_tag(var_mpz), 2);
// }

TEST(MPZTests, MPZ)
{
    mpz_t* result = (mpz_t*)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*result);
    void* var_mpz = encode_mpz(result);
    ASSERT_EQ(get_tag(var_mpz), 1);
    ASSERT_NE(get_tag(var_mpz), 2);
}

TEST(Printing, MPZ)
{
    mpz_t* value = (mpz_t*)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*value);
    mpz_set_ui(*value, 4567890);

    ASSERT_EQ(print_val(encode_mpz(value)), "4567890");
}

TEST(Printing, MPF)
{
    mpf_t* value = (mpf_t*)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*value);
    mpf_set_ui(*value, 23);

    ASSERT_EQ(print_val(encode_mpf(value)), "23.0");
}

TEST(Printing, STRING)
{
    std::string value = "testing";
    std::string* val_ptr = &value;
    ASSERT_EQ(print_val(encode_str(val_ptr)), "\"testing\"");
}

TEST(Printing, CONS_MPZ)
{
    void* cons_lst = 0;
    for (int i = 3; i > 0; i--) {
        mpz_t* value = (mpz_t*)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_ui(*value, i);
        cons_lst = prim_cons(encode_mpz(value), cons_lst);
    }
    ASSERT_EQ(print_val(cons_lst), "'(1 2 3)");
}

TEST(Printing, CONS_STR)
{
    void* cons_lst = 0;
    for (int i = 3; i > 0; i--) {
        std::string* value = new std::string("elem_" + std::to_string(i));
        cons_lst = prim_cons(encode_str(value), cons_lst);
    }
    ASSERT_EQ(print_val(cons_lst), "'(\"elem_1\" \"elem_2\" \"elem_3\")");
}

TEST(Strings, prim_string_u63)
{
    std::string* value = new(GC) std::string("brouhaha");

    ASSERT_EQ(print_val(prim_string_u63(encode_str(value))), "#t");
}

TEST(Strings, prim_string_u45length)
{
    std::string* value = new(GC) std::string("brouhaha");

    ASSERT_EQ(print_val(prim_string_u45length(encode_str(value))), "8");
}

TEST(Strings, prim_string_u45ref)
{
    std::string* value = new(GC) std::string("brouhaha");
    mpz_t* pos = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_ui(*pos, 3);

    ASSERT_EQ(print_val(prim_string_u45ref(encode_str(value), encode_mpz(pos))), "\"u\"");
}

TEST(Strings, prim_substring)
{
    std::string* value = new(GC) std::string("brouhaha");
    mpz_t* start = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_ui(*start, 4);
    mpz_t* end = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_ui(*end, 8);

    ASSERT_EQ(print_val(prim_substring(encode_str(value), encode_mpz(start), encode_mpz(end))), "\"haha\"");
}

TEST(Strings, prim_string_u45append)
{
    std::string* s1 = new(GC) std::string("brouhaha");
    std::string* s2 = new(GC) std::string(" lang");

    ASSERT_EQ(print_val(prim_string_u45append(encode_str(s1), encode_str(s2))), "\"brouhaha lang\"");
    ASSERT_EQ(*s1,"brouhaha");
    ASSERT_EQ(*s2," lang");

}

TEST(Strings, prim_string_u45_u62list)
{
    std::string* s1 = new(GC) std::string("bro");

    ASSERT_EQ(print_val(prim_string_u45_u62list(encode_str(s1))), "'(\"b\" \"r\" \"o\")");
    ASSERT_EQ(*s1,"bro");
}

TEST(RacketCompare, racket_compare)
{
    std::string* s1 = new(GC) std::string("'(1 2 3)");
    std::string* s2 = new(GC) std::string("(list 1 2 3)");

    ASSERT_TRUE(racketCompare(*s1, *s2) == true);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
