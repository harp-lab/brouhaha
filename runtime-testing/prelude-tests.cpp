#include <../prelude.hpp>
#include <gtest/gtest.h>


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

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
