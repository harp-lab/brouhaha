#include <stdio.h>
#include <string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"
void *_u43_fptr() // +
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8672 = arg_buffer[1];
    void *lst;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        lst = arg_buffer[2];
    }
    else
    {
        // building cons cell
        lst = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            lst = prim_cons(arg_buffer[i], lst);
        }
    }

    void *kont8670 = prim_car(lst);
    void *lst8673 = prim_cdr(lst);
    void *x8671 = apply_prim__u43(lst8673);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8670);
    arg_buffer[2] = x8671;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8670))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *_u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void *_u45_fptr() // -
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8676 = arg_buffer[1];
    void *lst;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        lst = arg_buffer[2];
    }
    else
    {
        // building cons cell
        lst = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            lst = prim_cons(arg_buffer[i], lst);
        }
    }

    void *kont8674 = prim_car(lst);
    void *lst8677 = prim_cdr(lst);
    void *x8675 = apply_prim__u45(lst8677);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8674);
    arg_buffer[2] = x8675;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8674))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *_u45 = encode_clo(alloc_clo(_u45_fptr, 0));

void *_u42_fptr() // *
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8680 = arg_buffer[1];
    void *lst;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        lst = arg_buffer[2];
    }
    else
    {
        // building cons cell
        lst = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            lst = prim_cons(arg_buffer[i], lst);
        }
    }

    void *kont8678 = prim_car(lst);
    void *lst8681 = prim_cdr(lst);
    void *x8679 = apply_prim__u42(lst8681);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8678);
    arg_buffer[2] = x8679;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8678))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *_u42 = encode_clo(alloc_clo(_u42_fptr, 0));

void *_u47_fptr() // /
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8684 = arg_buffer[1];
    void *lst;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        lst = arg_buffer[2];
    }
    else
    {
        // building cons cell
        lst = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            lst = prim_cons(arg_buffer[i], lst);
        }
    }

    void *kont8682 = prim_car(lst);
    void *lst8685 = prim_cdr(lst);
    void *x8683 = apply_prim__u47(lst8685);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8682);
    arg_buffer[2] = x8683;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8682))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *_u47 = encode_clo(alloc_clo(_u47_fptr, 0));

void *_u61_fptr() // =
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8688 = arg_buffer[1];
    void *lst;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        lst = arg_buffer[2];
    }
    else
    {
        // building cons cell
        lst = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            lst = prim_cons(arg_buffer[i], lst);
        }
    }

    void *kont8686 = prim_car(lst);
    void *lst8689 = prim_cdr(lst);
    void *x8687 = apply_prim__u61(lst8689);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8686);
    arg_buffer[2] = x8687;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8686))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *_u61 = encode_clo(alloc_clo(_u61_fptr, 0));

void *_u62_fptr() // >
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8692 = arg_buffer[1];
    void *lst;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        lst = arg_buffer[2];
    }
    else
    {
        // building cons cell
        lst = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            lst = prim_cons(arg_buffer[i], lst);
        }
    }

    void *kont8690 = prim_car(lst);
    void *lst8693 = prim_cdr(lst);
    void *x8691 = apply_prim__u62(lst8693);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8690);
    arg_buffer[2] = x8691;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8690))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *_u62 = encode_clo(alloc_clo(_u62_fptr, 0));

void *_u60_fptr() // <
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8696 = arg_buffer[1];
    void *lst;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        lst = arg_buffer[2];
    }
    else
    {
        // building cons cell
        lst = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            lst = prim_cons(arg_buffer[i], lst);
        }
    }

    void *kont8694 = prim_car(lst);
    void *lst8697 = prim_cdr(lst);
    void *x8695 = apply_prim__u60(lst8697);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8694);
    arg_buffer[2] = x8695;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8694))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *_u60 = encode_clo(alloc_clo(_u60_fptr, 0));

void *_u60_u61_fptr() // <=
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8700 = arg_buffer[1];
    void *lst;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        lst = arg_buffer[2];
    }
    else
    {
        // building cons cell
        lst = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            lst = prim_cons(arg_buffer[i], lst);
        }
    }

    void *kont8698 = prim_car(lst);
    void *lst8701 = prim_cdr(lst);
    void *x8699 = apply_prim__u60_u61(lst8701);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8698);
    arg_buffer[2] = x8699;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8698))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *_u60_u61 = encode_clo(alloc_clo(_u60_u61_fptr, 0));

void *_u62_u61_fptr() // >=
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8704 = arg_buffer[1];
    void *lst;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        lst = arg_buffer[2];
    }
    else
    {
        // building cons cell
        lst = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            lst = prim_cons(arg_buffer[i], lst);
        }
    }

    void *kont8702 = prim_car(lst);
    void *lst8705 = prim_cdr(lst);
    void *x8703 = apply_prim__u62_u61(lst8705);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8702);
    arg_buffer[2] = x8703;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8702))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *_u62_u61 = encode_clo(alloc_clo(_u62_u61_fptr, 0));

void *modulo_fptr() // modulo
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8708 = arg_buffer[1];
    void *lst;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        lst = arg_buffer[2];
    }
    else
    {
        // building cons cell
        lst = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            lst = prim_cons(arg_buffer[i], lst);
        }
    }

    void *kont8706 = prim_car(lst);
    void *lst8709 = prim_cdr(lst);
    void *x8707 = apply_prim_modulo(lst8709);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8706);
    arg_buffer[2] = x8707;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8706))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *modulo = encode_clo(alloc_clo(modulo_fptr, 0));

void *null_u63_fptr() // null?
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8712 = arg_buffer[1];
    void *lst;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        lst = arg_buffer[2];
    }
    else
    {
        // building cons cell
        lst = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            lst = prim_cons(arg_buffer[i], lst);
        }
    }

    void *kont8710 = prim_car(lst);
    void *lst8713 = prim_cdr(lst);
    void *x8711 = apply_prim_null_u63(lst8713);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8710);
    arg_buffer[2] = x8711;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8710))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *null_u63 = encode_clo(alloc_clo(null_u63_fptr, 0));

void *equal_u63_fptr() // equal?
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8716 = arg_buffer[1];
    void *lst;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        lst = arg_buffer[2];
    }
    else
    {
        // building cons cell
        lst = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            lst = prim_cons(arg_buffer[i], lst);
        }
    }

    void *kont8714 = prim_car(lst);
    void *lst8717 = prim_cdr(lst);
    void *x8715 = apply_prim_equal_u63(lst8717);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8714);
    arg_buffer[2] = x8715;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8714))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *equal_u63 = encode_clo(alloc_clo(equal_u63_fptr, 0));

void *eq_u63_fptr() // eq?
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8720 = arg_buffer[1];
    void *lst;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        lst = arg_buffer[2];
    }
    else
    {
        // building cons cell
        lst = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            lst = prim_cons(arg_buffer[i], lst);
        }
    }

    void *kont8718 = prim_car(lst);
    void *lst8721 = prim_cdr(lst);
    void *x8719 = apply_prim_eq_u63(lst8721);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8718);
    arg_buffer[2] = x8719;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8718))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *eq_u63 = encode_clo(alloc_clo(eq_u63_fptr, 0));

void *exact_u45floor_fptr() // exact-floor
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8724 = arg_buffer[1];
    void *lst;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        lst = arg_buffer[2];
    }
    else
    {
        // building cons cell
        lst = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            lst = prim_cons(arg_buffer[i], lst);
        }
    }

    void *kont8722 = prim_car(lst);
    void *lst8725 = prim_cdr(lst);
    void *x8723 = apply_prim_exact_u45floor(lst8725);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8722);
    arg_buffer[2] = x8723;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8722))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *exact_u45floor = encode_clo(alloc_clo(exact_u45floor_fptr, 0));

void *exact_u45ceiling_fptr() // exact-ceiling
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8728 = arg_buffer[1];
    void *lst;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        lst = arg_buffer[2];
    }
    else
    {
        // building cons cell
        lst = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            lst = prim_cons(arg_buffer[i], lst);
        }
    }

    void *kont8726 = prim_car(lst);
    void *lst8729 = prim_cdr(lst);
    void *x8727 = apply_prim_exact_u45ceiling(lst8729);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8726);
    arg_buffer[2] = x8727;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8726))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *exact_u45ceiling = encode_clo(alloc_clo(exact_u45ceiling_fptr, 0));

void *exact_u45round_fptr() // exact-round
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8732 = arg_buffer[1];
    void *lst;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        lst = arg_buffer[2];
    }
    else
    {
        // building cons cell
        lst = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            lst = prim_cons(arg_buffer[i], lst);
        }
    }

    void *kont8730 = prim_car(lst);
    void *lst8733 = prim_cdr(lst);
    void *x8731 = apply_prim_exact_u45round(lst8733);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8730);
    arg_buffer[2] = x8731;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8730))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *exact_u45round = encode_clo(alloc_clo(exact_u45round_fptr, 0));

void *cons_fptr() // cons
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8736 = arg_buffer[1];
    void *lst;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        lst = arg_buffer[2];
    }
    else
    {
        // building cons cell
        lst = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            lst = prim_cons(arg_buffer[i], lst);
        }
    }

    void *kont8734 = prim_car(lst);
    void *lst8737 = prim_cdr(lst);
    void *x8735 = apply_prim_cons(lst8737);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8734);
    arg_buffer[2] = x8735;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8734))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *cons = encode_clo(alloc_clo(cons_fptr, 0));

void *car_fptr() // car
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8740 = arg_buffer[1];
    void *lst;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        lst = arg_buffer[2];
    }
    else
    {
        // building cons cell
        lst = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            lst = prim_cons(arg_buffer[i], lst);
        }
    }

    void *kont8738 = prim_car(lst);
    void *lst8741 = prim_cdr(lst);
    void *x8739 = apply_prim_car(lst8741);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8738);
    arg_buffer[2] = x8739;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8738))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *car = encode_clo(alloc_clo(car_fptr, 0));

void *cdr_fptr() // cdr
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8744 = arg_buffer[1];
    void *lst;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        lst = arg_buffer[2];
    }
    else
    {
        // building cons cell
        lst = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            lst = prim_cons(arg_buffer[i], lst);
        }
    }

    void *kont8742 = prim_car(lst);
    void *lst8745 = prim_cdr(lst);
    void *x8743 = apply_prim_cdr(lst8745);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8742);
    arg_buffer[2] = x8743;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8742))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void *float_u45_u62int_fptr() // float->int
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8748 = arg_buffer[1];
    void *lst;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        lst = arg_buffer[2];
    }
    else
    {
        // building cons cell
        lst = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            lst = prim_cons(arg_buffer[i], lst);
        }
    }

    void *kont8746 = prim_car(lst);
    void *lst8749 = prim_cdr(lst);
    void *x8747 = apply_prim_float_u45_u62int(lst8749);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8746);
    arg_buffer[2] = x8747;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8746))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *float_u45_u62int = encode_clo(alloc_clo(float_u45_u62int_fptr, 0));

void *int_u45_u62float_fptr() // int->float
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8752 = arg_buffer[1];
    void *lst;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        lst = arg_buffer[2];
    }
    else
    {
        // building cons cell
        lst = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            lst = prim_cons(arg_buffer[i], lst);
        }
    }

    void *kont8750 = prim_car(lst);
    void *lst8753 = prim_cdr(lst);
    void *x8751 = apply_prim_int_u45_u62float(lst8753);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8750);
    arg_buffer[2] = x8751;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8750))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void *hash_u45ref_fptr() // hash-ref
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8756 = arg_buffer[1];
    void *lst;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        lst = arg_buffer[2];
    }
    else
    {
        // building cons cell
        lst = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            lst = prim_cons(arg_buffer[i], lst);
        }
    }

    void *kont8754 = prim_car(lst);
    void *lst8757 = prim_cdr(lst);
    void *x8755 = apply_prim_hash_u45ref(lst8757);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8754);
    arg_buffer[2] = x8755;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8754))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *hash_u45ref = encode_clo(alloc_clo(hash_u45ref_fptr, 0));

void *hash_u45set_fptr() // hash-set
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8760 = arg_buffer[1];
    void *lst;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        lst = arg_buffer[2];
    }
    else
    {
        // building cons cell
        lst = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            lst = prim_cons(arg_buffer[i], lst);
        }
    }

    void *kont8758 = prim_car(lst);
    void *lst8761 = prim_cdr(lst);
    void *x8759 = apply_prim_hash_u45set(lst8761);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8758);
    arg_buffer[2] = x8759;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8758))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *hash_u45set = encode_clo(alloc_clo(hash_u45set_fptr, 0));

void *lam8514_fptr() // lam8514
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8515 = arg_buffer[1];
    // reading env and args
    void *a8346 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8429 = (decode_clo(env8515))[3];
    // not do dummy comment
    void *equal_u63 = (decode_clo(env8515))[2];
    // not do dummy comment
    void *a8344 = (decode_clo(env8515))[1];

    // clo-app
    arg_buffer[2] = apply_prim_equal_u63_2(a8344, a8346);
    arg_buffer[1] = reinterpret_cast<void *>(kont8429);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8429))[0]);
    function_ptr();
    return nullptr;
}

void *lam8514 = encode_clo(alloc_clo(lam8514_fptr, 0));

void *even_u63_fptr() // even?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8518 = arg_buffer[1];
    // reading env and args
    void *kont8429 = arg_buffer[2];
    void *x = arg_buffer[3];
    // Dummy comment
    mpz_t *mpzvar8762 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8762, "0", 10);
    void *a8344 = encode_mpz(mpzvar8762);
    mpz_t *mpzvar8763 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8763, "2", 10);
    void *a8345 = encode_mpz(mpzvar8763);

    // creating new closure instance
    void **clo8765 = alloc_clo(lam8514_fptr, 3);

    // setting env list
    clo8765[1] = a8344;
    clo8765[2] = equal_u63;
    clo8765[3] = kont8429;
    void *f8430 = encode_clo(clo8765);

    // clo-app
    arg_buffer[2] = apply_prim_modulo_2(x, a8345);
    arg_buffer[1] = reinterpret_cast<void *>(f8430);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8430))[0]);
    function_ptr();
    return nullptr;
}

void *even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void *lam8519_fptr() // lam8519
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8520 = arg_buffer[1];
    // reading env and args
    void *a8349 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8347 = (decode_clo(env8520))[3];
    // not do dummy comment
    void *kont8431 = (decode_clo(env8520))[2];
    // not do dummy comment
    void *equal_u63 = (decode_clo(env8520))[1];

    // clo-app
    arg_buffer[2] = apply_prim_equal_u63_2(a8347, a8349);
    arg_buffer[1] = reinterpret_cast<void *>(kont8431);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8431))[0]);
    function_ptr();
    return nullptr;
}

void *lam8519 = encode_clo(alloc_clo(lam8519_fptr, 0));

void *odd_u63_fptr() // odd?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8523 = arg_buffer[1];
    // reading env and args
    void *kont8431 = arg_buffer[2];
    void *x = arg_buffer[3];
    // Dummy comment
    mpz_t *mpzvar8766 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8766, "1", 10);
    void *a8347 = encode_mpz(mpzvar8766);
    mpz_t *mpzvar8767 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8767, "2", 10);
    void *a8348 = encode_mpz(mpzvar8767);

    // creating new closure instance
    void **clo8769 = alloc_clo(lam8519_fptr, 3);

    // setting env list
    clo8769[1] = equal_u63;
    clo8769[2] = kont8431;
    clo8769[3] = a8347;
    void *f8432 = encode_clo(clo8769);

    // clo-app
    arg_buffer[2] = apply_prim_modulo_2(x, a8348);
    arg_buffer[1] = reinterpret_cast<void *>(f8432);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8432))[0]);
    function_ptr();
    return nullptr;
}

void *odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void *list_fptr() // list
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8524 = arg_buffer[1];
    void *x;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        x = arg_buffer[2];
    }
    else
    {
        // building cons cell
        x = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            x = prim_cons(arg_buffer[i], x);
        }
    }

    void *kont8433 = prim_car(x);
    void *x8513 = prim_cdr(x);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8433);
    arg_buffer[2] = x8513;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8433))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *list = encode_clo(alloc_clo(list_fptr, 0));

void *lam8527_fptr() // lam8527
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8528 = arg_buffer[1];
    // reading env and args
    void *a8355 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8434 = (decode_clo(env8528))[3];
    // not do dummy comment
    void *x = (decode_clo(env8528))[2];
    // not do dummy comment
    void *member_u63 = (decode_clo(env8528))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(member_u63);
    arg_buffer[2] = kont8434;
    arg_buffer[3] = x;
    arg_buffer[4] = a8355;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8527 = encode_clo(alloc_clo(lam8527_fptr, 0));

void *lam8529_fptr() // lam8529
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8530 = arg_buffer[1];
    // reading env and args
    void *a8353 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8530))[5];
    // not do dummy comment
    void *lst = (decode_clo(env8530))[4];
    // not do dummy comment
    void *kont8434 = (decode_clo(env8530))[3];
    // not do dummy comment
    void *x = (decode_clo(env8530))[2];
    // not do dummy comment
    void *member_u63 = (decode_clo(env8530))[1];

    // if-clause
    bool if_guard8770 = is_true(a8353);
    if (if_guard8770)
    {
        void *xy8354 = encode_bool(true);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8434);
        arg_buffer[2] = xy8354;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8434))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8772 = alloc_clo(lam8527_fptr, 3);

        // setting env list
        clo8772[1] = member_u63;
        clo8772[2] = x;
        clo8772[3] = kont8434;
        void *f8435 = encode_clo(clo8772);

        // clo-app
        arg_buffer[2] = apply_prim_cdr_1(lst);
        arg_buffer[1] = reinterpret_cast<void *>(f8435);
        arg_buffer[0] = reinterpret_cast<void *>(1);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8435))[0]);
        function_ptr();
        return nullptr;
    }
}

void *lam8529 = encode_clo(alloc_clo(lam8529_fptr, 0));

void *lam8531_fptr() // lam8531
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8532 = arg_buffer[1];
    // reading env and args
    void *a8352 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8532))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8532))[5];
    // not do dummy comment
    void *equal_u63 = (decode_clo(env8532))[4];
    // not do dummy comment
    void *kont8434 = (decode_clo(env8532))[3];
    // not do dummy comment
    void *x = (decode_clo(env8532))[2];
    // not do dummy comment
    void *member_u63 = (decode_clo(env8532))[1];

    // creating new closure instance
    void **clo8774 = alloc_clo(lam8529_fptr, 5);

    // setting env list
    clo8774[1] = member_u63;
    clo8774[2] = x;
    clo8774[3] = kont8434;
    clo8774[4] = lst;
    clo8774[5] = cdr;
    void *f8436 = encode_clo(clo8774);

    // clo-app
    arg_buffer[2] = apply_prim_equal_u63_2(a8352, x);
    arg_buffer[1] = reinterpret_cast<void *>(f8436);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8436))[0]);
    function_ptr();
    return nullptr;
}

void *lam8531 = encode_clo(alloc_clo(lam8531_fptr, 0));

void *lam8533_fptr() // lam8533
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8534 = arg_buffer[1];
    // reading env and args
    void *a8350 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8534))[7];
    // not do dummy comment
    void *lst = (decode_clo(env8534))[6];
    // not do dummy comment
    void *equal_u63 = (decode_clo(env8534))[5];
    // not do dummy comment
    void *kont8434 = (decode_clo(env8534))[4];
    // not do dummy comment
    void *x = (decode_clo(env8534))[3];
    // not do dummy comment
    void *car = (decode_clo(env8534))[2];
    // not do dummy comment
    void *member_u63 = (decode_clo(env8534))[1];

    // if-clause
    bool if_guard8775 = is_true(a8350);
    if (if_guard8775)
    {
        void *xy8351 = encode_bool(false);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8434);
        arg_buffer[2] = xy8351;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8434))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8777 = alloc_clo(lam8531_fptr, 6);

        // setting env list
        clo8777[1] = member_u63;
        clo8777[2] = x;
        clo8777[3] = kont8434;
        clo8777[4] = equal_u63;
        clo8777[5] = lst;
        clo8777[6] = cdr;
        void *f8437 = encode_clo(clo8777);

        // clo-app
        arg_buffer[2] = apply_prim_car_1(lst);
        arg_buffer[1] = reinterpret_cast<void *>(f8437);
        arg_buffer[0] = reinterpret_cast<void *>(1);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8437))[0]);
        function_ptr();
        return nullptr;
    }
}

void *lam8533 = encode_clo(alloc_clo(lam8533_fptr, 0));

void *member_u63_fptr() // member?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8535 = arg_buffer[1];
    // reading env and args
    void *kont8434 = arg_buffer[2];
    void *x = arg_buffer[3];
    void *lst = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8779 = alloc_clo(lam8533_fptr, 7);

    // setting env list
    void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

    clo8779[1] = member_u63;
    clo8779[2] = car;
    clo8779[3] = x;
    clo8779[4] = kont8434;
    clo8779[5] = equal_u63;
    clo8779[6] = lst;
    clo8779[7] = cdr;
    void *f8438 = encode_clo(clo8779);

    // clo-app
    arg_buffer[2] = apply_prim_null_u63_1(lst);
    arg_buffer[1] = reinterpret_cast<void *>(f8438);
    arg_buffer[0] = reinterpret_cast<void *>(1);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8438))[0]);
    function_ptr();
    return nullptr;
}

void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void *lam8536_fptr() // lam8536
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8537 = arg_buffer[1];
    // reading env and args
    void *a8359 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *fun = (decode_clo(env8537))[4];
    // not do dummy comment
    void *a8358 = (decode_clo(env8537))[3];
    // not do dummy comment
    void *kont8439 = (decode_clo(env8537))[2];
    // not do dummy comment
    void *foldl = (decode_clo(env8537))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(foldl);
    arg_buffer[2] = kont8439;
    arg_buffer[3] = fun;
    arg_buffer[4] = a8358;
    arg_buffer[5] = a8359;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8536 = encode_clo(alloc_clo(lam8536_fptr, 0));

void *lam8538_fptr() // lam8538
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8539 = arg_buffer[1];
    // reading env and args
    void *a8358 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8539))[5];
    // not do dummy comment
    void *lst = (decode_clo(env8539))[4];
    // not do dummy comment
    void *fun = (decode_clo(env8539))[3];
    // not do dummy comment
    void *kont8439 = (decode_clo(env8539))[2];
    // not do dummy comment
    void *foldl = (decode_clo(env8539))[1];

    // creating new closure instance
    void **clo8781 = alloc_clo(lam8536_fptr, 4);

    // setting env list
    clo8781[1] = foldl;
    clo8781[2] = kont8439;
    clo8781[3] = a8358;
    clo8781[4] = fun;
    void *f8440 = encode_clo(clo8781);

    // clo-app
    arg_buffer[2] = apply_prim_cdr_1(lst);
    arg_buffer[1] = reinterpret_cast<void *>(f8440);
    arg_buffer[0] = reinterpret_cast<void *>(1);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8440))[0]);
    function_ptr();
    return nullptr;
}

void *lam8538 = encode_clo(alloc_clo(lam8538_fptr, 0));

void *lam8540_fptr() // lam8540
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8541 = arg_buffer[1];
    // reading env and args
    void *a8357 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8541))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8541))[5];
    // not do dummy comment
    void *fun = (decode_clo(env8541))[4];
    // not do dummy comment
    void *acc = (decode_clo(env8541))[3];
    // not do dummy comment
    void *kont8439 = (decode_clo(env8541))[2];
    // not do dummy comment
    void *foldl = (decode_clo(env8541))[1];

    // creating new closure instance
    void **clo8783 = alloc_clo(lam8538_fptr, 5);

    // setting env list
    clo8783[1] = foldl;
    clo8783[2] = kont8439;
    clo8783[3] = fun;
    clo8783[4] = lst;
    clo8783[5] = cdr;
    void *f8441 = encode_clo(clo8783);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(fun);
    arg_buffer[2] = f8441;
    arg_buffer[3] = a8357;
    arg_buffer[4] = acc;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8540 = encode_clo(alloc_clo(lam8540_fptr, 0));

void *lam8542_fptr() // lam8542
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8543 = arg_buffer[1];
    // reading env and args
    void *a8356 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8543))[7];
    // not do dummy comment
    void *lst = (decode_clo(env8543))[6];
    // not do dummy comment
    void *fun = (decode_clo(env8543))[5];
    // not do dummy comment
    void *acc = (decode_clo(env8543))[4];
    // not do dummy comment
    void *car = (decode_clo(env8543))[3];
    // not do dummy comment
    void *kont8439 = (decode_clo(env8543))[2];
    // not do dummy comment
    void *foldl = (decode_clo(env8543))[1];

    // if-clause
    bool if_guard8784 = is_true(a8356);
    if (if_guard8784)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8439);
        arg_buffer[2] = acc;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8439))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8786 = alloc_clo(lam8540_fptr, 6);

        // setting env list
        clo8786[1] = foldl;
        clo8786[2] = kont8439;
        clo8786[3] = acc;
        clo8786[4] = fun;
        clo8786[5] = lst;
        clo8786[6] = cdr;
        void *f8442 = encode_clo(clo8786);

        // clo-app
        arg_buffer[2] = apply_prim_car_1(lst);
        arg_buffer[1] = reinterpret_cast<void *>(f8442);
        arg_buffer[0] = reinterpret_cast<void *>(1);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8442))[0]);
        function_ptr();
        return nullptr;
    }
}

void *lam8542 = encode_clo(alloc_clo(lam8542_fptr, 0));

void *foldl_fptr() // foldl
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8544 = arg_buffer[1];
    // reading env and args
    void *kont8439 = arg_buffer[2];
    void *fun = arg_buffer[3];
    void *acc = arg_buffer[4];
    void *lst = arg_buffer[5];
    // Dummy comment

    // creating new closure instance
    void **clo8788 = alloc_clo(lam8542_fptr, 7);

    // setting env list
    void *foldl = encode_clo(alloc_clo(foldl_fptr, 0));

    clo8788[1] = foldl;
    clo8788[2] = kont8439;
    clo8788[3] = car;
    clo8788[4] = acc;
    clo8788[5] = fun;
    clo8788[6] = lst;
    clo8788[7] = cdr;
    void *f8443 = encode_clo(clo8788);

    // clo-app
    arg_buffer[2] = apply_prim_null_u63_1(lst);
    arg_buffer[1] = reinterpret_cast<void *>(f8443);
    arg_buffer[0] = reinterpret_cast<void *>(1);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8443))[0]);
    function_ptr();
    return nullptr;
}

void *foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void *lam8545_fptr() // lam8545
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8546 = arg_buffer[1];
    // reading env and args
    void *a8363 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8361 = (decode_clo(env8546))[3];
    // not do dummy comment
    void *kont8444 = (decode_clo(env8546))[2];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8546))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(reverse_u45helper);
    arg_buffer[2] = kont8444;
    arg_buffer[3] = a8361;
    arg_buffer[4] = a8363;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8545 = encode_clo(alloc_clo(lam8545_fptr, 0));

void *lam8547_fptr() // lam8547
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8548 = arg_buffer[1];
    // reading env and args
    void *a8362 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8361 = (decode_clo(env8548))[5];
    // not do dummy comment
    void *kont8444 = (decode_clo(env8548))[4];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8548))[3];
    // not do dummy comment
    void *lst2 = (decode_clo(env8548))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8548))[1];

    // creating new closure instance
    void **clo8790 = alloc_clo(lam8545_fptr, 3);

    // setting env list
    clo8790[1] = reverse_u45helper;
    clo8790[2] = kont8444;
    clo8790[3] = a8361;
    void *f8445 = encode_clo(clo8790);

    // clo-app
    arg_buffer[2] = apply_prim_cons_2(a8362, lst2);
    arg_buffer[1] = reinterpret_cast<void *>(f8445);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8445))[0]);
    function_ptr();
    return nullptr;
}

void *lam8547 = encode_clo(alloc_clo(lam8547_fptr, 0));

void *lam8549_fptr() // lam8549
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8550 = arg_buffer[1];
    // reading env and args
    void *a8361 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8444 = (decode_clo(env8550))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8550))[5];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8550))[4];
    // not do dummy comment
    void *lst2 = (decode_clo(env8550))[3];
    // not do dummy comment
    void *car = (decode_clo(env8550))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8550))[1];

    // creating new closure instance
    void **clo8792 = alloc_clo(lam8547_fptr, 5);

    // setting env list
    clo8792[1] = cons;
    clo8792[2] = lst2;
    clo8792[3] = reverse_u45helper;
    clo8792[4] = kont8444;
    clo8792[5] = a8361;
    void *f8446 = encode_clo(clo8792);

    // clo-app
    arg_buffer[2] = apply_prim_car_1(lst);
    arg_buffer[1] = reinterpret_cast<void *>(f8446);
    arg_buffer[0] = reinterpret_cast<void *>(1);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8446))[0]);
    function_ptr();
    return nullptr;
}

void *lam8549 = encode_clo(alloc_clo(lam8549_fptr, 0));

void *lam8551_fptr() // lam8551
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8552 = arg_buffer[1];
    // reading env and args
    void *a8360 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8552))[7];
    // not do dummy comment
    void *kont8444 = (decode_clo(env8552))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8552))[5];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8552))[4];
    // not do dummy comment
    void *lst2 = (decode_clo(env8552))[3];
    // not do dummy comment
    void *car = (decode_clo(env8552))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8552))[1];

    // if-clause
    bool if_guard8793 = is_true(a8360);
    if (if_guard8793)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8444);
        arg_buffer[2] = lst2;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8444))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8795 = alloc_clo(lam8549_fptr, 6);

        // setting env list
        clo8795[1] = cons;
        clo8795[2] = car;
        clo8795[3] = lst2;
        clo8795[4] = reverse_u45helper;
        clo8795[5] = lst;
        clo8795[6] = kont8444;
        void *f8447 = encode_clo(clo8795);

        // clo-app
        arg_buffer[2] = apply_prim_cdr_1(lst);
        arg_buffer[1] = reinterpret_cast<void *>(f8447);
        arg_buffer[0] = reinterpret_cast<void *>(1);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8447))[0]);
        function_ptr();
        return nullptr;
    }
}

void *lam8551 = encode_clo(alloc_clo(lam8551_fptr, 0));

void *reverse_u45helper_fptr() // reverse-helper
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8553 = arg_buffer[1];
    // reading env and args
    void *kont8444 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *lst2 = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8797 = alloc_clo(lam8551_fptr, 7);

    // setting env list
    clo8797[1] = cons;
    clo8797[2] = car;
    clo8797[3] = lst2;
    void *reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

    clo8797[4] = reverse_u45helper;
    clo8797[5] = lst;
    clo8797[6] = kont8444;
    clo8797[7] = cdr;
    void *f8448 = encode_clo(clo8797);

    // clo-app
    arg_buffer[2] = apply_prim_null_u63_1(lst);
    arg_buffer[1] = reinterpret_cast<void *>(f8448);
    arg_buffer[0] = reinterpret_cast<void *>(1);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8448))[0]);
    function_ptr();
    return nullptr;
}

void *reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void *lam8554_fptr() // lam8554
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8555 = arg_buffer[1];
    // reading env and args
    void *a8364 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8555))[3];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8555))[2];
    // not do dummy comment
    void *kont8449 = (decode_clo(env8555))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(reverse_u45helper);
    arg_buffer[2] = kont8449;
    arg_buffer[3] = lst;
    arg_buffer[4] = a8364;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8554 = encode_clo(alloc_clo(lam8554_fptr, 0));

void *reverse_fptr() // reverse
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8556 = arg_buffer[1];
    // reading env and args
    void *kont8449 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment

    // creating new closure instance
    void **clo8799 = alloc_clo(lam8554_fptr, 3);

    // setting env list
    clo8799[1] = kont8449;
    clo8799[2] = reverse_u45helper;
    clo8799[3] = lst;
    void *f8450 = encode_clo(clo8799);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8450;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void *lam8557_fptr() // lam8557
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8558 = arg_buffer[1];
    // reading env and args
    void *xy8367 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8451 = (decode_clo(env8558))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8451);
    arg_buffer[2] = xy8367;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8451))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8557 = encode_clo(alloc_clo(lam8557_fptr, 0));

void *lam8559_fptr() // lam8559
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8560 = arg_buffer[1];
    // reading env and args
    void *a8372 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8368 = (decode_clo(env8560))[4];
    // not do dummy comment
    void *a8370 = (decode_clo(env8560))[3];
    // not do dummy comment
    void *kont8451 = (decode_clo(env8560))[2];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8560))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(take_u45helper);
    arg_buffer[2] = kont8451;
    arg_buffer[3] = a8368;
    arg_buffer[4] = a8370;
    arg_buffer[5] = a8372;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8559 = encode_clo(alloc_clo(lam8559_fptr, 0));

void *lam8561_fptr() // lam8561
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8562 = arg_buffer[1];
    // reading env and args
    void *a8371 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8368 = (decode_clo(env8562))[6];
    // not do dummy comment
    void *a8370 = (decode_clo(env8562))[5];
    // not do dummy comment
    void *kont8451 = (decode_clo(env8562))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8562))[3];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8562))[2];
    // not do dummy comment
    void *lst2 = (decode_clo(env8562))[1];

    // creating new closure instance
    void **clo8801 = alloc_clo(lam8559_fptr, 4);

    // setting env list
    clo8801[1] = take_u45helper;
    clo8801[2] = kont8451;
    clo8801[3] = a8370;
    clo8801[4] = a8368;
    void *f8453 = encode_clo(clo8801);

    // clo-app
    arg_buffer[2] = apply_prim_cons_2(a8371, lst2);
    arg_buffer[1] = reinterpret_cast<void *>(f8453);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8453))[0]);
    function_ptr();
    return nullptr;
}

void *lam8561 = encode_clo(alloc_clo(lam8561_fptr, 0));

void *lam8563_fptr() // lam8563
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8564 = arg_buffer[1];
    // reading env and args
    void *a8370 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8564))[7];
    // not do dummy comment
    void *a8368 = (decode_clo(env8564))[6];
    // not do dummy comment
    void *kont8451 = (decode_clo(env8564))[5];
    // not do dummy comment
    void *car = (decode_clo(env8564))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8564))[3];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8564))[2];
    // not do dummy comment
    void *lst2 = (decode_clo(env8564))[1];

    // creating new closure instance
    void **clo8803 = alloc_clo(lam8561_fptr, 6);

    // setting env list
    clo8803[1] = lst2;
    clo8803[2] = take_u45helper;
    clo8803[3] = cons;
    clo8803[4] = kont8451;
    clo8803[5] = a8370;
    clo8803[6] = a8368;
    void *f8454 = encode_clo(clo8803);

    // clo-app
    arg_buffer[2] = apply_prim_car_1(lst);
    arg_buffer[1] = reinterpret_cast<void *>(f8454);
    arg_buffer[0] = reinterpret_cast<void *>(1);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8454))[0]);
    function_ptr();
    return nullptr;
}

void *lam8563 = encode_clo(alloc_clo(lam8563_fptr, 0));

void *lam8566_fptr() // lam8566
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8567 = arg_buffer[1];
    // reading env and args
    void *a8368 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8567))[8];
    // not do dummy comment
    void *kont8451 = (decode_clo(env8567))[7];
    // not do dummy comment
    void *cons = (decode_clo(env8567))[6];
    // not do dummy comment
    void *_u45 = (decode_clo(env8567))[5];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8567))[4];
    // not do dummy comment
    void *lst2 = (decode_clo(env8567))[3];
    // not do dummy comment
    void *n = (decode_clo(env8567))[2];
    // not do dummy comment
    void *car = (decode_clo(env8567))[1];
    mpz_t *mpzvar8804 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8804, "1", 10);
    void *a8369 = encode_mpz(mpzvar8804);

    // creating new closure instance
    void **clo8806 = alloc_clo(lam8563_fptr, 7);

    // setting env list
    clo8806[1] = lst2;
    clo8806[2] = take_u45helper;
    clo8806[3] = cons;
    clo8806[4] = car;
    clo8806[5] = kont8451;
    clo8806[6] = a8368;
    clo8806[7] = lst;
    void *f8455 = encode_clo(clo8806);

    // clo-app
    arg_buffer[2] = apply_prim__u45_2(n, a8369);
    arg_buffer[1] = reinterpret_cast<void *>(f8455);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8455))[0]);
    function_ptr();
    return nullptr;
}

void *lam8566 = encode_clo(alloc_clo(lam8566_fptr, 0));

void *lam8568_fptr() // lam8568
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8569 = arg_buffer[1];
    // reading env and args
    void *a8366 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8569))[10];
    // not do dummy comment
    void *lst = (decode_clo(env8569))[9];
    // not do dummy comment
    void *reverse = (decode_clo(env8569))[8];
    // not do dummy comment
    void *kont8451 = (decode_clo(env8569))[7];
    // not do dummy comment
    void *cons = (decode_clo(env8569))[6];
    // not do dummy comment
    void *_u45 = (decode_clo(env8569))[5];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8569))[4];
    // not do dummy comment
    void *lst2 = (decode_clo(env8569))[3];
    // not do dummy comment
    void *n = (decode_clo(env8569))[2];
    // not do dummy comment
    void *car = (decode_clo(env8569))[1];

    // if-clause
    bool if_guard8807 = is_true(a8366);
    if (if_guard8807)
    {

        // creating new closure instance
        void **clo8809 = alloc_clo(lam8557_fptr, 1);

        // setting env list
        clo8809[1] = kont8451;
        void *f8452 = encode_clo(clo8809);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(reverse);
        arg_buffer[2] = f8452;
        arg_buffer[3] = lst2;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8811 = alloc_clo(lam8566_fptr, 8);

        // setting env list
        clo8811[1] = car;
        clo8811[2] = n;
        clo8811[3] = lst2;
        clo8811[4] = take_u45helper;
        clo8811[5] = _u45;
        clo8811[6] = cons;
        clo8811[7] = kont8451;
        clo8811[8] = lst;
        void *f8456 = encode_clo(clo8811);

        // clo-app
        arg_buffer[2] = apply_prim_cdr_1(lst);
        arg_buffer[1] = reinterpret_cast<void *>(f8456);
        arg_buffer[0] = reinterpret_cast<void *>(1);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8456))[0]);
        function_ptr();
        return nullptr;
    }
}

void *lam8568 = encode_clo(alloc_clo(lam8568_fptr, 0));

void *take_u45helper_fptr() // take-helper
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8571 = arg_buffer[1];
    // reading env and args
    void *kont8451 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    void *lst2 = arg_buffer[5];
    // Dummy comment
    mpz_t *mpzvar8812 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8812, "0", 10);
    void *a8365 = encode_mpz(mpzvar8812);

    // creating new closure instance
    void **clo8814 = alloc_clo(lam8568_fptr, 10);

    // setting env list
    clo8814[1] = car;
    clo8814[2] = n;
    clo8814[3] = lst2;
    void *take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

    clo8814[4] = take_u45helper;
    clo8814[5] = _u45;
    clo8814[6] = cons;
    clo8814[7] = kont8451;
    clo8814[8] = reverse;
    clo8814[9] = lst;
    clo8814[10] = cdr;
    void *f8457 = encode_clo(clo8814);

    // clo-app
    arg_buffer[2] = apply_prim__u61_2(n, a8365);
    arg_buffer[1] = reinterpret_cast<void *>(f8457);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8457))[0]);
    function_ptr();
    return nullptr;
}

void *take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void *lam8572_fptr() // lam8572
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8573 = arg_buffer[1];
    // reading env and args
    void *a8373 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8458 = (decode_clo(env8573))[4];
    // not do dummy comment
    void *lst = (decode_clo(env8573))[3];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8573))[2];
    // not do dummy comment
    void *n = (decode_clo(env8573))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(take_u45helper);
    arg_buffer[2] = kont8458;
    arg_buffer[3] = lst;
    arg_buffer[4] = n;
    arg_buffer[5] = a8373;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8572 = encode_clo(alloc_clo(lam8572_fptr, 0));

void *take_fptr() // take
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8574 = arg_buffer[1];
    // reading env and args
    void *kont8458 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8816 = alloc_clo(lam8572_fptr, 4);

    // setting env list
    clo8816[1] = n;
    clo8816[2] = take_u45helper;
    clo8816[3] = lst;
    clo8816[4] = kont8458;
    void *f8459 = encode_clo(clo8816);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8459;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *take = encode_clo(alloc_clo(take_fptr, 0));

void *lam8576_fptr() // lam8576
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8577 = arg_buffer[1];
    // reading env and args
    void *a8378 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8460 = (decode_clo(env8577))[3];
    // not do dummy comment
    void *_u43 = (decode_clo(env8577))[2];
    // not do dummy comment
    void *a8376 = (decode_clo(env8577))[1];

    // clo-app
    arg_buffer[2] = apply_prim__u43_2(a8376, a8378);
    arg_buffer[1] = reinterpret_cast<void *>(kont8460);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8460))[0]);
    function_ptr();
    return nullptr;
}

void *lam8576 = encode_clo(alloc_clo(lam8576_fptr, 0));

void *lam8578_fptr() // lam8578
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8579 = arg_buffer[1];
    // reading env and args
    void *a8377 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8460 = (decode_clo(env8579))[4];
    // not do dummy comment
    void *length = (decode_clo(env8579))[3];
    // not do dummy comment
    void *_u43 = (decode_clo(env8579))[2];
    // not do dummy comment
    void *a8376 = (decode_clo(env8579))[1];

    // creating new closure instance
    void **clo8818 = alloc_clo(lam8576_fptr, 3);

    // setting env list
    clo8818[1] = a8376;
    clo8818[2] = _u43;
    clo8818[3] = kont8460;
    void *f8461 = encode_clo(clo8818);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(length);
    arg_buffer[2] = f8461;
    arg_buffer[3] = a8377;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8578 = encode_clo(alloc_clo(lam8578_fptr, 0));

void *lam8581_fptr() // lam8581
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8582 = arg_buffer[1];
    // reading env and args
    void *a8374 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8582))[5];
    // not do dummy comment
    void *kont8460 = (decode_clo(env8582))[4];
    // not do dummy comment
    void *lst = (decode_clo(env8582))[3];
    // not do dummy comment
    void *length = (decode_clo(env8582))[2];
    // not do dummy comment
    void *_u43 = (decode_clo(env8582))[1];

    // if-clause
    bool if_guard8819 = is_true(a8374);
    if (if_guard8819)
    {
        mpz_t *mpzvar8820 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_str(*mpzvar8820, "0", 10);
        void *xy8375 = encode_mpz(mpzvar8820);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8460);
        arg_buffer[2] = xy8375;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8460))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {
        mpz_t *mpzvar8821 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_str(*mpzvar8821, "1", 10);
        void *a8376 = encode_mpz(mpzvar8821);

        // creating new closure instance
        void **clo8823 = alloc_clo(lam8578_fptr, 4);

        // setting env list
        clo8823[1] = a8376;
        clo8823[2] = _u43;
        clo8823[3] = length;
        clo8823[4] = kont8460;
        void *f8462 = encode_clo(clo8823);

        // clo-app
        arg_buffer[2] = apply_prim_cdr_1(lst);
        arg_buffer[1] = reinterpret_cast<void *>(f8462);
        arg_buffer[0] = reinterpret_cast<void *>(1);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8462))[0]);
        function_ptr();
        return nullptr;
    }
}

void *lam8581 = encode_clo(alloc_clo(lam8581_fptr, 0));

void *length_fptr() // length
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8583 = arg_buffer[1];
    // reading env and args
    void *kont8460 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment

    // creating new closure instance
    void **clo8825 = alloc_clo(lam8581_fptr, 5);

    // setting env list
    clo8825[1] = _u43;
    void *length = encode_clo(alloc_clo(length_fptr, 0));

    clo8825[2] = length;
    clo8825[3] = lst;
    clo8825[4] = kont8460;
    clo8825[5] = cdr;
    void *f8463 = encode_clo(clo8825);

    // clo-app
    arg_buffer[2] = apply_prim_null_u63_1(lst);
    arg_buffer[1] = reinterpret_cast<void *>(f8463);
    arg_buffer[0] = reinterpret_cast<void *>(1);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8463))[0]);
    function_ptr();
    return nullptr;
}

void *length = encode_clo(alloc_clo(length_fptr, 0));

void *lam8584_fptr() // lam8584
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8585 = arg_buffer[1];
    // reading env and args
    void *xy8380 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8464 = (decode_clo(env8585))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8464);
    arg_buffer[2] = xy8380;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8464))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8584 = encode_clo(alloc_clo(lam8584_fptr, 0));

void *lam8586_fptr() // lam8586
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8587 = arg_buffer[1];
    // reading env and args
    void *a8384 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8382 = (decode_clo(env8587))[3];
    // not do dummy comment
    void *kont8464 = (decode_clo(env8587))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8587))[1];

    // clo-app
    arg_buffer[2] = apply_prim_cons_2(a8382, a8384);
    arg_buffer[1] = reinterpret_cast<void *>(kont8464);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8464))[0]);
    function_ptr();
    return nullptr;
}

void *lam8586 = encode_clo(alloc_clo(lam8586_fptr, 0));

void *lam8588_fptr() // lam8588
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8589 = arg_buffer[1];
    // reading env and args
    void *a8383 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8464 = (decode_clo(env8589))[5];
    // not do dummy comment
    void *proc = (decode_clo(env8589))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8589))[3];
    // not do dummy comment
    void *map = (decode_clo(env8589))[2];
    // not do dummy comment
    void *a8382 = (decode_clo(env8589))[1];

    // creating new closure instance
    void **clo8827 = alloc_clo(lam8586_fptr, 3);

    // setting env list
    clo8827[1] = cons;
    clo8827[2] = kont8464;
    clo8827[3] = a8382;
    void *f8466 = encode_clo(clo8827);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(map);
    arg_buffer[2] = f8466;
    arg_buffer[3] = proc;
    arg_buffer[4] = a8383;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8588 = encode_clo(alloc_clo(lam8588_fptr, 0));

void *lam8590_fptr() // lam8590
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8591 = arg_buffer[1];
    // reading env and args
    void *a8382 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8591))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8591))[5];
    // not do dummy comment
    void *map = (decode_clo(env8591))[4];
    // not do dummy comment
    void *kont8464 = (decode_clo(env8591))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8591))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8591))[1];

    // creating new closure instance
    void **clo8829 = alloc_clo(lam8588_fptr, 5);

    // setting env list
    clo8829[1] = a8382;
    clo8829[2] = map;
    clo8829[3] = cons;
    clo8829[4] = proc;
    clo8829[5] = kont8464;
    void *f8467 = encode_clo(clo8829);

    // clo-app
    arg_buffer[2] = apply_prim_cdr_1(lst);
    arg_buffer[1] = reinterpret_cast<void *>(f8467);
    arg_buffer[0] = reinterpret_cast<void *>(1);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8467))[0]);
    function_ptr();
    return nullptr;
}

void *lam8590 = encode_clo(alloc_clo(lam8590_fptr, 0));

void *lam8592_fptr() // lam8592
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8593 = arg_buffer[1];
    // reading env and args
    void *a8381 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8593))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8593))[5];
    // not do dummy comment
    void *map = (decode_clo(env8593))[4];
    // not do dummy comment
    void *kont8464 = (decode_clo(env8593))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8593))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8593))[1];

    // creating new closure instance
    void **clo8831 = alloc_clo(lam8590_fptr, 6);

    // setting env list
    clo8831[1] = cons;
    clo8831[2] = proc;
    clo8831[3] = kont8464;
    clo8831[4] = map;
    clo8831[5] = lst;
    clo8831[6] = cdr;
    void *f8468 = encode_clo(clo8831);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(proc);
    arg_buffer[2] = f8468;
    arg_buffer[3] = a8381;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8592 = encode_clo(alloc_clo(lam8592_fptr, 0));

void *lam8594_fptr() // lam8594
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8595 = arg_buffer[1];
    // reading env and args
    void *a8379 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8595))[8];
    // not do dummy comment
    void *map = (decode_clo(env8595))[7];
    // not do dummy comment
    void *kont8464 = (decode_clo(env8595))[6];
    // not do dummy comment
    void *proc = (decode_clo(env8595))[5];
    // not do dummy comment
    void *car = (decode_clo(env8595))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8595))[3];
    // not do dummy comment
    void *list = (decode_clo(env8595))[2];
    // not do dummy comment
    void *cdr = (decode_clo(env8595))[1];

    // if-clause
    bool if_guard8832 = is_true(a8379);
    if (if_guard8832)
    {

        // creating new closure instance
        void **clo8834 = alloc_clo(lam8584_fptr, 1);

        // setting env list
        clo8834[1] = kont8464;
        void *f8465 = encode_clo(clo8834);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(list);
        arg_buffer[2] = f8465;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8836 = alloc_clo(lam8592_fptr, 6);

        // setting env list
        clo8836[1] = cons;
        clo8836[2] = proc;
        clo8836[3] = kont8464;
        clo8836[4] = map;
        clo8836[5] = lst;
        clo8836[6] = cdr;
        void *f8469 = encode_clo(clo8836);

        // clo-app
        arg_buffer[2] = apply_prim_car_1(lst);
        arg_buffer[1] = reinterpret_cast<void *>(f8469);
        arg_buffer[0] = reinterpret_cast<void *>(1);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8469))[0]);
        function_ptr();
        return nullptr;
    }
}

void *lam8594 = encode_clo(alloc_clo(lam8594_fptr, 0));

void *map_fptr() // map
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8596 = arg_buffer[1];
    // reading env and args
    void *kont8464 = arg_buffer[2];
    void *proc = arg_buffer[3];
    void *lst = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8838 = alloc_clo(lam8594_fptr, 8);

    // setting env list
    clo8838[1] = cdr;
    clo8838[2] = list;
    clo8838[3] = cons;
    clo8838[4] = car;
    clo8838[5] = proc;
    clo8838[6] = kont8464;
    void *map = encode_clo(alloc_clo(map_fptr, 0));

    clo8838[7] = map;
    clo8838[8] = lst;
    void *f8470 = encode_clo(clo8838);

    // clo-app
    arg_buffer[2] = apply_prim_null_u63_1(lst);
    arg_buffer[1] = reinterpret_cast<void *>(f8470);
    arg_buffer[0] = reinterpret_cast<void *>(1);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8470))[0]);
    function_ptr();
    return nullptr;
}

void *map = encode_clo(alloc_clo(map_fptr, 0));

void *lam8597_fptr() // lam8597
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8598 = arg_buffer[1];
    // reading env and args
    void *xy8386 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8471 = (decode_clo(env8598))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8471);
    arg_buffer[2] = xy8386;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8471))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8597 = encode_clo(alloc_clo(lam8597_fptr, 0));

void *lam8599_fptr() // lam8599
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8600 = arg_buffer[1];
    // reading env and args
    void *a8391 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8389 = (decode_clo(env8600))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8600))[2];
    // not do dummy comment
    void *kont8471 = (decode_clo(env8600))[1];

    // clo-app
    arg_buffer[2] = apply_prim_cons_2(a8389, a8391);
    arg_buffer[1] = reinterpret_cast<void *>(kont8471);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8471))[0]);
    function_ptr();
    return nullptr;
}

void *lam8599 = encode_clo(alloc_clo(lam8599_fptr, 0));

void *lam8601_fptr() // lam8601
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8602 = arg_buffer[1];
    // reading env and args
    void *a8390 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *op = (decode_clo(env8602))[5];
    // not do dummy comment
    void *a8389 = (decode_clo(env8602))[4];
    // not do dummy comment
    void *filter = (decode_clo(env8602))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8602))[2];
    // not do dummy comment
    void *kont8471 = (decode_clo(env8602))[1];

    // creating new closure instance
    void **clo8840 = alloc_clo(lam8599_fptr, 3);

    // setting env list
    clo8840[1] = kont8471;
    clo8840[2] = cons;
    clo8840[3] = a8389;
    void *f8473 = encode_clo(clo8840);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(filter);
    arg_buffer[2] = f8473;
    arg_buffer[3] = op;
    arg_buffer[4] = a8390;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8601 = encode_clo(alloc_clo(lam8601_fptr, 0));

void *lam8603_fptr() // lam8603
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8604 = arg_buffer[1];
    // reading env and args
    void *a8389 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8604))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8604))[5];
    // not do dummy comment
    void *op = (decode_clo(env8604))[4];
    // not do dummy comment
    void *filter = (decode_clo(env8604))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8604))[2];
    // not do dummy comment
    void *kont8471 = (decode_clo(env8604))[1];

    // creating new closure instance
    void **clo8842 = alloc_clo(lam8601_fptr, 5);

    // setting env list
    clo8842[1] = kont8471;
    clo8842[2] = cons;
    clo8842[3] = filter;
    clo8842[4] = a8389;
    clo8842[5] = op;
    void *f8474 = encode_clo(clo8842);

    // clo-app
    arg_buffer[2] = apply_prim_cdr_1(lst);
    arg_buffer[1] = reinterpret_cast<void *>(f8474);
    arg_buffer[0] = reinterpret_cast<void *>(1);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8474))[0]);
    function_ptr();
    return nullptr;
}

void *lam8603 = encode_clo(alloc_clo(lam8603_fptr, 0));

void *lam8605_fptr() // lam8605
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8606 = arg_buffer[1];
    // reading env and args
    void *a8392 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *op = (decode_clo(env8606))[3];
    // not do dummy comment
    void *filter = (decode_clo(env8606))[2];
    // not do dummy comment
    void *kont8471 = (decode_clo(env8606))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(filter);
    arg_buffer[2] = kont8471;
    arg_buffer[3] = op;
    arg_buffer[4] = a8392;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8605 = encode_clo(alloc_clo(lam8605_fptr, 0));

void *lam8607_fptr() // lam8607
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8608 = arg_buffer[1];
    // reading env and args
    void *a8388 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8608))[7];
    // not do dummy comment
    void *lst = (decode_clo(env8608))[6];
    // not do dummy comment
    void *op = (decode_clo(env8608))[5];
    // not do dummy comment
    void *filter = (decode_clo(env8608))[4];
    // not do dummy comment
    void *car = (decode_clo(env8608))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8608))[2];
    // not do dummy comment
    void *kont8471 = (decode_clo(env8608))[1];

    // if-clause
    bool if_guard8843 = is_true(a8388);
    if (if_guard8843)
    {

        // creating new closure instance
        void **clo8845 = alloc_clo(lam8603_fptr, 6);

        // setting env list
        clo8845[1] = kont8471;
        clo8845[2] = cons;
        clo8845[3] = filter;
        clo8845[4] = op;
        clo8845[5] = lst;
        clo8845[6] = cdr;
        void *f8475 = encode_clo(clo8845);

        // clo-app
        arg_buffer[2] = apply_prim_car_1(lst);
        arg_buffer[1] = reinterpret_cast<void *>(f8475);
        arg_buffer[0] = reinterpret_cast<void *>(1);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8475))[0]);
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8847 = alloc_clo(lam8605_fptr, 3);

        // setting env list
        clo8847[1] = kont8471;
        clo8847[2] = filter;
        clo8847[3] = op;
        void *f8476 = encode_clo(clo8847);

        // clo-app
        arg_buffer[2] = apply_prim_cdr_1(lst);
        arg_buffer[1] = reinterpret_cast<void *>(f8476);
        arg_buffer[0] = reinterpret_cast<void *>(1);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8476))[0]);
        function_ptr();
        return nullptr;
    }
}

void *lam8607 = encode_clo(alloc_clo(lam8607_fptr, 0));

void *lam8609_fptr() // lam8609
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8610 = arg_buffer[1];
    // reading env and args
    void *a8387 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8610))[7];
    // not do dummy comment
    void *lst = (decode_clo(env8610))[6];
    // not do dummy comment
    void *op = (decode_clo(env8610))[5];
    // not do dummy comment
    void *filter = (decode_clo(env8610))[4];
    // not do dummy comment
    void *car = (decode_clo(env8610))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8610))[2];
    // not do dummy comment
    void *kont8471 = (decode_clo(env8610))[1];

    // creating new closure instance
    void **clo8849 = alloc_clo(lam8607_fptr, 7);

    // setting env list
    clo8849[1] = kont8471;
    clo8849[2] = cons;
    clo8849[3] = car;
    clo8849[4] = filter;
    clo8849[5] = op;
    clo8849[6] = lst;
    clo8849[7] = cdr;
    void *f8477 = encode_clo(clo8849);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(op);
    arg_buffer[2] = f8477;
    arg_buffer[3] = a8387;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8609 = encode_clo(alloc_clo(lam8609_fptr, 0));

void *lam8611_fptr() // lam8611
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8612 = arg_buffer[1];
    // reading env and args
    void *a8385 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8612))[8];
    // not do dummy comment
    void *op = (decode_clo(env8612))[7];
    // not do dummy comment
    void *list = (decode_clo(env8612))[6];
    // not do dummy comment
    void *cdr = (decode_clo(env8612))[5];
    // not do dummy comment
    void *filter = (decode_clo(env8612))[4];
    // not do dummy comment
    void *car = (decode_clo(env8612))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8612))[2];
    // not do dummy comment
    void *kont8471 = (decode_clo(env8612))[1];

    // if-clause
    bool if_guard8850 = is_true(a8385);
    if (if_guard8850)
    {

        // creating new closure instance
        void **clo8852 = alloc_clo(lam8597_fptr, 1);

        // setting env list
        clo8852[1] = kont8471;
        void *f8472 = encode_clo(clo8852);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(list);
        arg_buffer[2] = f8472;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8854 = alloc_clo(lam8609_fptr, 7);

        // setting env list
        clo8854[1] = kont8471;
        clo8854[2] = cons;
        clo8854[3] = car;
        clo8854[4] = filter;
        clo8854[5] = op;
        clo8854[6] = lst;
        clo8854[7] = cdr;
        void *f8478 = encode_clo(clo8854);

        // clo-app
        arg_buffer[2] = apply_prim_car_1(lst);
        arg_buffer[1] = reinterpret_cast<void *>(f8478);
        arg_buffer[0] = reinterpret_cast<void *>(1);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8478))[0]);
        function_ptr();
        return nullptr;
    }
}

void *lam8611 = encode_clo(alloc_clo(lam8611_fptr, 0));

void *filter_fptr() // filter
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8613 = arg_buffer[1];
    // reading env and args
    void *kont8471 = arg_buffer[2];
    void *op = arg_buffer[3];
    void *lst = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8856 = alloc_clo(lam8611_fptr, 8);

    // setting env list
    clo8856[1] = kont8471;
    clo8856[2] = cons;
    clo8856[3] = car;
    void *filter = encode_clo(alloc_clo(filter_fptr, 0));

    clo8856[4] = filter;
    clo8856[5] = cdr;
    clo8856[6] = list;
    clo8856[7] = op;
    clo8856[8] = lst;
    void *f8479 = encode_clo(clo8856);

    // clo-app
    arg_buffer[2] = apply_prim_null_u63_1(lst);
    arg_buffer[1] = reinterpret_cast<void *>(f8479);
    arg_buffer[0] = reinterpret_cast<void *>(1);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8479))[0]);
    function_ptr();
    return nullptr;
}

void *filter = encode_clo(alloc_clo(filter_fptr, 0));

void *lam8614_fptr() // lam8614
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8615 = arg_buffer[1];
    // reading env and args
    void *a8397 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8395 = (decode_clo(env8615))[3];
    // not do dummy comment
    void *drop = (decode_clo(env8615))[2];
    // not do dummy comment
    void *kont8480 = (decode_clo(env8615))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(drop);
    arg_buffer[2] = kont8480;
    arg_buffer[3] = a8395;
    arg_buffer[4] = a8397;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8614 = encode_clo(alloc_clo(lam8614_fptr, 0));

void *lam8617_fptr() // lam8617
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8618 = arg_buffer[1];
    // reading env and args
    void *a8395 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *drop = (decode_clo(env8618))[4];
    // not do dummy comment
    void *kont8480 = (decode_clo(env8618))[3];
    // not do dummy comment
    void *n = (decode_clo(env8618))[2];
    // not do dummy comment
    void *_u45 = (decode_clo(env8618))[1];
    mpz_t *mpzvar8857 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8857, "1", 10);
    void *a8396 = encode_mpz(mpzvar8857);

    // creating new closure instance
    void **clo8859 = alloc_clo(lam8614_fptr, 3);

    // setting env list
    clo8859[1] = kont8480;
    clo8859[2] = drop;
    clo8859[3] = a8395;
    void *f8481 = encode_clo(clo8859);

    // clo-app
    arg_buffer[2] = apply_prim__u45_2(n, a8396);
    arg_buffer[1] = reinterpret_cast<void *>(f8481);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8481))[0]);
    function_ptr();
    return nullptr;
}

void *lam8617 = encode_clo(alloc_clo(lam8617_fptr, 0));

void *lam8619_fptr() // lam8619
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8620 = arg_buffer[1];
    // reading env and args
    void *a8394 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8620))[6];
    // not do dummy comment
    void *kont8480 = (decode_clo(env8620))[5];
    // not do dummy comment
    void *n = (decode_clo(env8620))[4];
    // not do dummy comment
    void *_u45 = (decode_clo(env8620))[3];
    // not do dummy comment
    void *lst = (decode_clo(env8620))[2];
    // not do dummy comment
    void *drop = (decode_clo(env8620))[1];

    // if-clause
    bool if_guard8860 = is_true(a8394);
    if (if_guard8860)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8480);
        arg_buffer[2] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8480))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8862 = alloc_clo(lam8617_fptr, 4);

        // setting env list
        clo8862[1] = _u45;
        clo8862[2] = n;
        clo8862[3] = kont8480;
        clo8862[4] = drop;
        void *f8482 = encode_clo(clo8862);

        // clo-app
        arg_buffer[2] = apply_prim_cdr_1(lst);
        arg_buffer[1] = reinterpret_cast<void *>(f8482);
        arg_buffer[0] = reinterpret_cast<void *>(1);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8482))[0]);
        function_ptr();
        return nullptr;
    }
}

void *lam8619 = encode_clo(alloc_clo(lam8619_fptr, 0));

void *drop_fptr() // drop
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8622 = arg_buffer[1];
    // reading env and args
    void *kont8480 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    // Dummy comment
    mpz_t *mpzvar8863 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8863, "0", 10);
    void *a8393 = encode_mpz(mpzvar8863);

    // creating new closure instance
    void **clo8865 = alloc_clo(lam8619_fptr, 6);

    // setting env list
    void *drop = encode_clo(alloc_clo(drop_fptr, 0));

    clo8865[1] = drop;
    clo8865[2] = lst;
    clo8865[3] = _u45;
    clo8865[4] = n;
    clo8865[5] = kont8480;
    clo8865[6] = cdr;
    void *f8483 = encode_clo(clo8865);

    // clo-app
    arg_buffer[2] = apply_prim__u61_2(n, a8393);
    arg_buffer[1] = reinterpret_cast<void *>(f8483);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8483))[0]);
    function_ptr();
    return nullptr;
}

void *drop = encode_clo(alloc_clo(drop_fptr, 0));

void *lam8623_fptr() // lam8623
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8624 = arg_buffer[1];
    // reading env and args
    void *a8401 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8399 = (decode_clo(env8624))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8624))[2];
    // not do dummy comment
    void *kont8484 = (decode_clo(env8624))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(proc);
    arg_buffer[2] = kont8484;
    arg_buffer[3] = a8399;
    arg_buffer[4] = a8401;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8623 = encode_clo(alloc_clo(lam8623_fptr, 0));

void *lam8625_fptr() // lam8625
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8626 = arg_buffer[1];
    // reading env and args
    void *a8400 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *foldr = (decode_clo(env8626))[5];
    // not do dummy comment
    void *a8399 = (decode_clo(env8626))[4];
    // not do dummy comment
    void *proc = (decode_clo(env8626))[3];
    // not do dummy comment
    void *acc = (decode_clo(env8626))[2];
    // not do dummy comment
    void *kont8484 = (decode_clo(env8626))[1];

    // creating new closure instance
    void **clo8867 = alloc_clo(lam8623_fptr, 3);

    // setting env list
    clo8867[1] = kont8484;
    clo8867[2] = proc;
    clo8867[3] = a8399;
    void *f8485 = encode_clo(clo8867);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(foldr);
    arg_buffer[2] = f8485;
    arg_buffer[3] = proc;
    arg_buffer[4] = acc;
    arg_buffer[5] = a8400;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8625 = encode_clo(alloc_clo(lam8625_fptr, 0));

void *lam8627_fptr() // lam8627
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8628 = arg_buffer[1];
    // reading env and args
    void *a8399 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8628))[6];
    // not do dummy comment
    void *foldr = (decode_clo(env8628))[5];
    // not do dummy comment
    void *lst = (decode_clo(env8628))[4];
    // not do dummy comment
    void *proc = (decode_clo(env8628))[3];
    // not do dummy comment
    void *acc = (decode_clo(env8628))[2];
    // not do dummy comment
    void *kont8484 = (decode_clo(env8628))[1];

    // creating new closure instance
    void **clo8869 = alloc_clo(lam8625_fptr, 5);

    // setting env list
    clo8869[1] = kont8484;
    clo8869[2] = acc;
    clo8869[3] = proc;
    clo8869[4] = a8399;
    clo8869[5] = foldr;
    void *f8486 = encode_clo(clo8869);

    // clo-app
    arg_buffer[2] = apply_prim_cdr_1(lst);
    arg_buffer[1] = reinterpret_cast<void *>(f8486);
    arg_buffer[0] = reinterpret_cast<void *>(1);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8486))[0]);
    function_ptr();
    return nullptr;
}

void *lam8627 = encode_clo(alloc_clo(lam8627_fptr, 0));

void *lam8629_fptr() // lam8629
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8630 = arg_buffer[1];
    // reading env and args
    void *a8398 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8630))[7];
    // not do dummy comment
    void *car = (decode_clo(env8630))[6];
    // not do dummy comment
    void *foldr = (decode_clo(env8630))[5];
    // not do dummy comment
    void *lst = (decode_clo(env8630))[4];
    // not do dummy comment
    void *proc = (decode_clo(env8630))[3];
    // not do dummy comment
    void *acc = (decode_clo(env8630))[2];
    // not do dummy comment
    void *kont8484 = (decode_clo(env8630))[1];

    // if-clause
    bool if_guard8870 = is_true(a8398);
    if (if_guard8870)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8484);
        arg_buffer[2] = acc;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8484))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8872 = alloc_clo(lam8627_fptr, 6);

        // setting env list
        clo8872[1] = kont8484;
        clo8872[2] = acc;
        clo8872[3] = proc;
        clo8872[4] = lst;
        clo8872[5] = foldr;
        clo8872[6] = cdr;
        void *f8487 = encode_clo(clo8872);

        // clo-app
        arg_buffer[2] = apply_prim_car_1(lst);
        arg_buffer[1] = reinterpret_cast<void *>(f8487);
        arg_buffer[0] = reinterpret_cast<void *>(1);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8487))[0]);
        function_ptr();
        return nullptr;
    }
}

void *lam8629 = encode_clo(alloc_clo(lam8629_fptr, 0));

void *foldr_fptr() // foldr
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8631 = arg_buffer[1];
    // reading env and args
    void *kont8484 = arg_buffer[2];
    void *proc = arg_buffer[3];
    void *acc = arg_buffer[4];
    void *lst = arg_buffer[5];
    // Dummy comment

    // creating new closure instance
    void **clo8874 = alloc_clo(lam8629_fptr, 7);

    // setting env list
    clo8874[1] = kont8484;
    clo8874[2] = acc;
    clo8874[3] = proc;
    clo8874[4] = lst;
    void *foldr = encode_clo(alloc_clo(foldr_fptr, 0));

    clo8874[5] = foldr;
    clo8874[6] = car;
    clo8874[7] = cdr;
    void *f8488 = encode_clo(clo8874);

    // clo-app
    arg_buffer[2] = apply_prim_null_u63_1(lst);
    arg_buffer[1] = reinterpret_cast<void *>(f8488);
    arg_buffer[0] = reinterpret_cast<void *>(1);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8488))[0]);
    function_ptr();
    return nullptr;
}

void *foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void *lam8632_fptr() // lam8632
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8633 = arg_buffer[1];
    // reading env and args
    void *a8405 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8489 = (decode_clo(env8633))[3];
    // not do dummy comment
    void *a8403 = (decode_clo(env8633))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8633))[1];

    // clo-app
    arg_buffer[2] = apply_prim_cons_2(a8403, a8405);
    arg_buffer[1] = reinterpret_cast<void *>(kont8489);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8489))[0]);
    function_ptr();
    return nullptr;
}

void *lam8632 = encode_clo(alloc_clo(lam8632_fptr, 0));

void *lam8634_fptr() // lam8634
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8635 = arg_buffer[1];
    // reading env and args
    void *a8404 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8489 = (decode_clo(env8635))[5];
    // not do dummy comment
    void *append = (decode_clo(env8635))[4];
    // not do dummy comment
    void *a8403 = (decode_clo(env8635))[3];
    // not do dummy comment
    void *lst2 = (decode_clo(env8635))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8635))[1];

    // creating new closure instance
    void **clo8876 = alloc_clo(lam8632_fptr, 3);

    // setting env list
    clo8876[1] = cons;
    clo8876[2] = a8403;
    clo8876[3] = kont8489;
    void *f8490 = encode_clo(clo8876);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(append);
    arg_buffer[2] = f8490;
    arg_buffer[3] = a8404;
    arg_buffer[4] = lst2;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8634 = encode_clo(alloc_clo(lam8634_fptr, 0));

void *lam8636_fptr() // lam8636
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8637 = arg_buffer[1];
    // reading env and args
    void *a8403 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *append = (decode_clo(env8637))[6];
    // not do dummy comment
    void *lst2 = (decode_clo(env8637))[5];
    // not do dummy comment
    void *lst1 = (decode_clo(env8637))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8637))[3];
    // not do dummy comment
    void *cdr = (decode_clo(env8637))[2];
    // not do dummy comment
    void *kont8489 = (decode_clo(env8637))[1];

    // creating new closure instance
    void **clo8878 = alloc_clo(lam8634_fptr, 5);

    // setting env list
    clo8878[1] = cons;
    clo8878[2] = lst2;
    clo8878[3] = a8403;
    clo8878[4] = append;
    clo8878[5] = kont8489;
    void *f8491 = encode_clo(clo8878);

    // clo-app
    arg_buffer[2] = apply_prim_cdr_1(lst1);
    arg_buffer[1] = reinterpret_cast<void *>(f8491);
    arg_buffer[0] = reinterpret_cast<void *>(1);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8491))[0]);
    function_ptr();
    return nullptr;
}

void *lam8636 = encode_clo(alloc_clo(lam8636_fptr, 0));

void *lam8638_fptr() // lam8638
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8639 = arg_buffer[1];
    // reading env and args
    void *a8402 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *append = (decode_clo(env8639))[7];
    // not do dummy comment
    void *lst2 = (decode_clo(env8639))[6];
    // not do dummy comment
    void *cons = (decode_clo(env8639))[5];
    // not do dummy comment
    void *cdr = (decode_clo(env8639))[4];
    // not do dummy comment
    void *kont8489 = (decode_clo(env8639))[3];
    // not do dummy comment
    void *lst1 = (decode_clo(env8639))[2];
    // not do dummy comment
    void *car = (decode_clo(env8639))[1];

    // if-clause
    bool if_guard8879 = is_true(a8402);
    if (if_guard8879)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8489);
        arg_buffer[2] = lst2;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8489))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8881 = alloc_clo(lam8636_fptr, 6);

        // setting env list
        clo8881[1] = kont8489;
        clo8881[2] = cdr;
        clo8881[3] = cons;
        clo8881[4] = lst1;
        clo8881[5] = lst2;
        clo8881[6] = append;
        void *f8492 = encode_clo(clo8881);

        // clo-app
        arg_buffer[2] = apply_prim_car_1(lst1);
        arg_buffer[1] = reinterpret_cast<void *>(f8492);
        arg_buffer[0] = reinterpret_cast<void *>(1);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8492))[0]);
        function_ptr();
        return nullptr;
    }
}

void *lam8638 = encode_clo(alloc_clo(lam8638_fptr, 0));

void *append_fptr() // append
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8640 = arg_buffer[1];
    // reading env and args
    void *kont8489 = arg_buffer[2];
    void *lst1 = arg_buffer[3];
    void *lst2 = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8883 = alloc_clo(lam8638_fptr, 7);

    // setting env list
    clo8883[1] = car;
    clo8883[2] = lst1;
    clo8883[3] = kont8489;
    clo8883[4] = cdr;
    clo8883[5] = cons;
    clo8883[6] = lst2;
    void *append = encode_clo(alloc_clo(append_fptr, 0));

    clo8883[7] = append;
    void *f8493 = encode_clo(clo8883);

    // clo-app
    arg_buffer[2] = apply_prim_null_u63_1(lst1);
    arg_buffer[1] = reinterpret_cast<void *>(f8493);
    arg_buffer[0] = reinterpret_cast<void *>(1);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8493))[0]);
    function_ptr();
    return nullptr;
}

void *append = encode_clo(alloc_clo(append_fptr, 0));

void *hash_fptr() // hash
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8886 = arg_buffer[1];
    void *lst;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        lst = arg_buffer[2];
    }
    else
    {
        // building cons cell
        lst = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            lst = prim_cons(arg_buffer[i], lst);
        }
    }

    void *kont8884 = prim_car(lst);
    void *lst8887 = prim_cdr(lst);
    void *x8885 = apply_prim_hash(lst8887);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8884);
    arg_buffer[2] = x8885;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8884))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *hash = encode_clo(alloc_clo(hash_fptr, 0));

void *hash_u45keys_fptr() // hash-keys
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8641 = arg_buffer[1];
    // reading env and args
    void *kont8494 = arg_buffer[2];
    void *h = arg_buffer[3];
    // Dummy comment
    void *xy8406 = prim_hash_u45keys(h);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8494);
    arg_buffer[2] = xy8406;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8494))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *hash_u45keys = encode_clo(alloc_clo(hash_u45keys_fptr, 0));

void *hash_u45has_u45key_u63_fptr() // hash-has-key?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8642 = arg_buffer[1];
    // reading env and args
    void *kont8495 = arg_buffer[2];
    void *h = arg_buffer[3];
    void *k = arg_buffer[4];
    // Dummy comment
    void *xy8407 = prim_hash_u45has_u45key_u63(h, k);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8495);
    arg_buffer[2] = xy8407;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8495))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *hash_u45has_u45key_u63 = encode_clo(alloc_clo(hash_u45has_u45key_u63_fptr, 0));

void *hash_u45count_fptr() // hash-count
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8643 = arg_buffer[1];
    // reading env and args
    void *kont8496 = arg_buffer[2];
    void *h = arg_buffer[3];
    // Dummy comment
    void *xy8408 = prim_hash_u45count(h);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8496);
    arg_buffer[2] = xy8408;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8496))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void *set_fptr() // set
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8890 = arg_buffer[1];
    void *lst;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        lst = arg_buffer[2];
    }
    else
    {
        // building cons cell
        lst = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            lst = prim_cons(arg_buffer[i], lst);
        }
    }

    void *kont8888 = prim_car(lst);
    void *lst8891 = prim_cdr(lst);
    void *x8889 = apply_prim_set(lst8891);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8888);
    arg_buffer[2] = x8889;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8888))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *set = encode_clo(alloc_clo(set_fptr, 0));

void *set_u45_u62list_fptr() // set->list
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8644 = arg_buffer[1];
    // reading env and args
    void *kont8497 = arg_buffer[2];
    void *h = arg_buffer[3];
    // Dummy comment
    void *xy8409 = prim_set_u45_u62list(h);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8497);
    arg_buffer[2] = xy8409;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8497))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *set_u45_u62list = encode_clo(alloc_clo(set_u45_u62list_fptr, 0));

void *list_u45_u62set_fptr() // list->set
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8645 = arg_buffer[1];
    // reading env and args
    void *kont8498 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment
    void *xy8410 = prim_list_u45_u62set(lst);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8498);
    arg_buffer[2] = xy8410;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8498))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *list_u45_u62set = encode_clo(alloc_clo(list_u45_u62set_fptr, 0));

void *set_u45add_fptr() // set-add
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8646 = arg_buffer[1];
    // reading env and args
    void *kont8499 = arg_buffer[2];
    void *s = arg_buffer[3];
    void *val = arg_buffer[4];
    // Dummy comment
    void *xy8411 = prim_set_u45add(s, val);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8499);
    arg_buffer[2] = xy8411;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8499))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *set_u45add = encode_clo(alloc_clo(set_u45add_fptr, 0));

void *string_u63_fptr() // string?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8647 = arg_buffer[1];
    // reading env and args
    void *kont8500 = arg_buffer[2];
    void *str = arg_buffer[3];
    // Dummy comment
    void *xy8412 = prim_string_u63(str);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8500);
    arg_buffer[2] = xy8412;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8500))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *string_u63 = encode_clo(alloc_clo(string_u63_fptr, 0));

void *string_u45length_fptr() // string-length
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8648 = arg_buffer[1];
    // reading env and args
    void *kont8501 = arg_buffer[2];
    void *str = arg_buffer[3];
    // Dummy comment
    void *xy8413 = prim_string_u45length(str);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8501);
    arg_buffer[2] = xy8413;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8501))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *string_u45length = encode_clo(alloc_clo(string_u45length_fptr, 0));

void *string_u45ref_fptr() // string-ref
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8649 = arg_buffer[1];
    // reading env and args
    void *kont8502 = arg_buffer[2];
    void *str = arg_buffer[3];
    void *pos = arg_buffer[4];
    // Dummy comment
    void *xy8414 = prim_string_u45ref(str, pos);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8502);
    arg_buffer[2] = xy8414;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8502))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *string_u45ref = encode_clo(alloc_clo(string_u45ref_fptr, 0));

void *substring_fptr() // substring
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8650 = arg_buffer[1];
    // reading env and args
    void *kont8503 = arg_buffer[2];
    void *str = arg_buffer[3];
    void *start = arg_buffer[4];
    void *end = arg_buffer[5];
    // Dummy comment
    void *xy8415 = prim_substring(str, start, end);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8503);
    arg_buffer[2] = xy8415;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8503))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *substring = encode_clo(alloc_clo(substring_fptr, 0));

void *string_u45append_fptr() // string-append
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8651 = arg_buffer[1];
    // reading env and args
    void *kont8504 = arg_buffer[2];
    void *s1 = arg_buffer[3];
    void *s2 = arg_buffer[4];
    // Dummy comment
    void *xy8416 = prim_string_u45append(s1, s2);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8504);
    arg_buffer[2] = xy8416;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8504))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *string_u45append = encode_clo(alloc_clo(string_u45append_fptr, 0));

void *string_u45_u62list_fptr() // string->list
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8652 = arg_buffer[1];
    // reading env and args
    void *kont8505 = arg_buffer[2];
    void *str = arg_buffer[3];
    // Dummy comment
    void *xy8417 = prim_string_u45_u62list(str);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8505);
    arg_buffer[2] = xy8417;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8505))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void *lam8653_fptr() // lam8653
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8654 = arg_buffer[1];
    // reading env and args
    void *a8427 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *hash_u45ref = (decode_clo(env8654))[2];
    // not do dummy comment
    void *kont8506 = (decode_clo(env8654))[1];
    void *cps_u45lst8507 = prim_cons(kont8506, a8427);

    // clo-apply
    arg_buffer[1] = reinterpret_cast<void *>(hash_u45ref);
    arg_buffer[2] = cps_u45lst8507;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    hash_u45ref_fptr();
    return nullptr;
}

void *lam8653 = encode_clo(alloc_clo(lam8653_fptr, 0));

void *lam8656_fptr() // lam8656
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8657 = arg_buffer[1];
    // reading env and args
    void *a8425 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *list = (decode_clo(env8657))[3];
    // not do dummy comment
    void *hash_u45ref = (decode_clo(env8657))[2];
    // not do dummy comment
    void *kont8506 = (decode_clo(env8657))[1];
    void *a8426 = encode_str(new (GC) std::string("work"));

    // creating new closure instance
    void **clo8893 = alloc_clo(lam8653_fptr, 2);

    // setting env list
    clo8893[1] = kont8506;
    clo8893[2] = hash_u45ref;
    void *f8508 = encode_clo(clo8893);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8508;
    arg_buffer[3] = a8425;
    arg_buffer[4] = a8426;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8656 = encode_clo(alloc_clo(lam8656_fptr, 0));

void *lam8660_fptr() // lam8660
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8661 = arg_buffer[1];
    // reading env and args
    void *a8422 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *list = (decode_clo(env8661))[4];
    // not do dummy comment
    void *hash_u45set = (decode_clo(env8661))[3];
    // not do dummy comment
    void *hash_u45ref = (decode_clo(env8661))[2];
    // not do dummy comment
    void *kont8506 = (decode_clo(env8661))[1];
    void *a8423 = encode_str(new (GC) std::string("work"));
    mpz_t *mpzvar8894 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8894, "90", 10);
    void *a8424 = encode_mpz(mpzvar8894);

    // creating new closure instance
    void **clo8896 = alloc_clo(lam8656_fptr, 3);

    // setting env list
    clo8896[1] = kont8506;
    clo8896[2] = hash_u45ref;
    clo8896[3] = list;
    void *f8509 = encode_clo(clo8896);

    // clo-app
    arg_buffer[2] = apply_prim_hash_u45set_3(a8422, a8423, a8424);
    arg_buffer[1] = reinterpret_cast<void *>(f8509);
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8509))[0]);
    function_ptr();
    return nullptr;
}

void *lam8660 = encode_clo(alloc_clo(lam8660_fptr, 0));

void *call_fptr() // call
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8666 = arg_buffer[1];
    // reading env and args
    void *kont8506 = arg_buffer[2];
    // Dummy comment
    void *a8418 = encode_str(new (GC) std::string("work"));
    mpz_t *mpzvar8897 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8897, "80", 10);
    void *a8419 = encode_mpz(mpzvar8897);
    mpz_t *mpzvar8898 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8898, "10", 10);
    void *a8420 = encode_mpz(mpzvar8898);
    void *a8421 = encode_str(new (GC) std::string("lmao"));

    // creating new closure instance
    void **clo8900 = alloc_clo(lam8660_fptr, 4);

    // setting env list
    clo8900[1] = kont8506;
    clo8900[2] = hash_u45ref;
    clo8900[3] = hash_u45set;
    clo8900[4] = list;
    void *f8510 = encode_clo(clo8900);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(hash);
    arg_buffer[2] = f8510;
    arg_buffer[3] = a8418;
    arg_buffer[4] = a8419;
    arg_buffer[5] = a8420;
    arg_buffer[6] = a8421;
    arg_buffer[0] = reinterpret_cast<void *>(6);
    hash_fptr();
    return nullptr;
}

void *call = encode_clo(alloc_clo(call_fptr, 0));

void *lam8667_fptr() // lam8667
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8668 = arg_buffer[1];
    // reading env and args
    void *xy8428 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8511 = (decode_clo(env8668))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8511);
    arg_buffer[2] = xy8428;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8511))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8667 = encode_clo(alloc_clo(lam8667_fptr, 0));

void *brouhaha_main_fptr() // brouhaha_main
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8669 = arg_buffer[1];
    // reading env and args
    void *kont8511 = arg_buffer[2];
    // Dummy comment

    // creating new closure instance
    void **clo8902 = alloc_clo(lam8667_fptr, 1);

    // setting env list
    clo8902[1] = kont8511;
    void *f8512 = encode_clo(clo8902);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(call);
    arg_buffer[2] = f8512;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));

int main(int argc, char **argv)
{
    mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);
    // making a call to the brouhaha main function to kick off our c++ emission.
    void *fhalt_clo = encode_clo(alloc_clo(fhalt, 0));
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(brouhaha_main))[0]);
    arg_buffer[0] = 0;
    arg_buffer[2] = fhalt_clo;
    function_ptr();
    return 0;
}
