#include <stdio.h>
#include <string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"
void _u43_fptr() // +
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8706 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8704 = prim_car(lst);
    void *lst8707 = prim_cdr(lst);
    void *x8705 = apply_prim__u43(lst8707);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8704);
    arg_buffer[2] = x8705;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8704))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *_u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void _u45_fptr() // -
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8710 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8708 = prim_car(lst);
    void *lst8711 = prim_cdr(lst);
    void *x8709 = apply_prim__u45(lst8711);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8708);
    arg_buffer[2] = x8709;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8708))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *_u45 = encode_clo(alloc_clo(_u45_fptr, 0));

void _u42_fptr() // *
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8714 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8712 = prim_car(lst);
    void *lst8715 = prim_cdr(lst);
    void *x8713 = apply_prim__u42(lst8715);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8712);
    arg_buffer[2] = x8713;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8712))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *_u42 = encode_clo(alloc_clo(_u42_fptr, 0));

void _u47_fptr() // /
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8718 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8716 = prim_car(lst);
    void *lst8719 = prim_cdr(lst);
    void *x8717 = apply_prim__u47(lst8719);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8716);
    arg_buffer[2] = x8717;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8716))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *_u47 = encode_clo(alloc_clo(_u47_fptr, 0));

void _u61_fptr() // =
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8722 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8720 = prim_car(lst);
    void *lst8723 = prim_cdr(lst);
    void *x8721 = apply_prim__u61(lst8723);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8720);
    arg_buffer[2] = x8721;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8720))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *_u61 = encode_clo(alloc_clo(_u61_fptr, 0));

void _u62_fptr() // >
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8726 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8724 = prim_car(lst);
    void *lst8727 = prim_cdr(lst);
    void *x8725 = apply_prim__u62(lst8727);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8724);
    arg_buffer[2] = x8725;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8724))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *_u62 = encode_clo(alloc_clo(_u62_fptr, 0));

void _u60_fptr() // <
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8730 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8728 = prim_car(lst);
    void *lst8731 = prim_cdr(lst);
    void *x8729 = apply_prim__u60(lst8731);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8728);
    arg_buffer[2] = x8729;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8728))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *_u60 = encode_clo(alloc_clo(_u60_fptr, 0));

void _u60_u61_fptr() // <=
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8734 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8732 = prim_car(lst);
    void *lst8735 = prim_cdr(lst);
    void *x8733 = apply_prim__u60_u61(lst8735);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8732);
    arg_buffer[2] = x8733;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8732))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *_u60_u61 = encode_clo(alloc_clo(_u60_u61_fptr, 0));

void _u62_u61_fptr() // >=
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8738 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8736 = prim_car(lst);
    void *lst8739 = prim_cdr(lst);
    void *x8737 = apply_prim__u62_u61(lst8739);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8736);
    arg_buffer[2] = x8737;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8736))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *_u62_u61 = encode_clo(alloc_clo(_u62_u61_fptr, 0));

void modulo_fptr() // modulo
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8742 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8740 = prim_car(lst);
    void *lst8743 = prim_cdr(lst);
    void *x8741 = apply_prim_modulo(lst8743);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8740);
    arg_buffer[2] = x8741;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8740))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *modulo = encode_clo(alloc_clo(modulo_fptr, 0));

void null_u63_fptr() // null?
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8746 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8744 = prim_car(lst);
    void *lst8747 = prim_cdr(lst);
    void *x8745 = apply_prim_null_u63(lst8747);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8744);
    arg_buffer[2] = x8745;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8744))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *null_u63 = encode_clo(alloc_clo(null_u63_fptr, 0));

void equal_u63_fptr() // equal?
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8750 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8748 = prim_car(lst);
    void *lst8751 = prim_cdr(lst);
    void *x8749 = apply_prim_equal_u63(lst8751);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8748);
    arg_buffer[2] = x8749;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8748))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *equal_u63 = encode_clo(alloc_clo(equal_u63_fptr, 0));

void eq_u63_fptr() // eq?
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8754 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8752 = prim_car(lst);
    void *lst8755 = prim_cdr(lst);
    void *x8753 = apply_prim_eq_u63(lst8755);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8752);
    arg_buffer[2] = x8753;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8752))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *eq_u63 = encode_clo(alloc_clo(eq_u63_fptr, 0));

void cons_fptr() // cons
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8758 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8756 = prim_car(lst);
    void *lst8759 = prim_cdr(lst);
    void *x8757 = apply_prim_cons(lst8759);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8756);
    arg_buffer[2] = x8757;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8756))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *cons = encode_clo(alloc_clo(cons_fptr, 0));

void car_fptr() // car
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8762 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8760 = prim_car(lst);
    void *lst8763 = prim_cdr(lst);
    void *x8761 = apply_prim_car(lst8763);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8760);
    arg_buffer[2] = x8761;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8760))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *car = encode_clo(alloc_clo(car_fptr, 0));

void cdr_fptr() // cdr
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8766 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8764 = prim_car(lst);
    void *lst8767 = prim_cdr(lst);
    void *x8765 = apply_prim_cdr(lst8767);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8764);
    arg_buffer[2] = x8765;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8764))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void float_u45_u62int_fptr() // float->int
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8770 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8768 = prim_car(lst);
    void *lst8771 = prim_cdr(lst);
    void *x8769 = apply_prim_float_u45_u62int(lst8771);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8768);
    arg_buffer[2] = x8769;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8768))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *float_u45_u62int = encode_clo(alloc_clo(float_u45_u62int_fptr, 0));

void int_u45_u62float_fptr() // int->float
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8774 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8772 = prim_car(lst);
    void *lst8775 = prim_cdr(lst);
    void *x8773 = apply_prim_int_u45_u62float(lst8775);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8772);
    arg_buffer[2] = x8773;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8772))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void hash_fptr() // hash
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8778 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8776 = prim_car(lst);
    void *lst8779 = prim_cdr(lst);
    void *x8777 = apply_prim_hash(lst8779);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8776);
    arg_buffer[2] = x8777;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8776))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *hash = encode_clo(alloc_clo(hash_fptr, 0));

void hash_u45ref_fptr() // hash-ref
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8782 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8780 = prim_car(lst);
    void *lst8783 = prim_cdr(lst);
    void *x8781 = apply_prim_hash_u45ref(lst8783);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8780);
    arg_buffer[2] = x8781;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8780))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *hash_u45ref = encode_clo(alloc_clo(hash_u45ref_fptr, 0));

void hash_u45set_fptr() // hash-set
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8786 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8784 = prim_car(lst);
    void *lst8787 = prim_cdr(lst);
    void *x8785 = apply_prim_hash_u45set(lst8787);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8784);
    arg_buffer[2] = x8785;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8784))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *hash_u45set = encode_clo(alloc_clo(hash_u45set_fptr, 0));

void hash_u45keys_fptr() // hash-keys
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8790 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8788 = prim_car(lst);
    void *lst8791 = prim_cdr(lst);
    void *x8789 = apply_prim_hash_u45keys(lst8791);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8788);
    arg_buffer[2] = x8789;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8788))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *hash_u45keys = encode_clo(alloc_clo(hash_u45keys_fptr, 0));

void hash_u45has_u45key_u63_fptr() // hash-has-key?
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8794 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8792 = prim_car(lst);
    void *lst8795 = prim_cdr(lst);
    void *x8793 = apply_prim_hash_u45has_u45key_u63(lst8795);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8792);
    arg_buffer[2] = x8793;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8792))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *hash_u45has_u45key_u63 = encode_clo(alloc_clo(hash_u45has_u45key_u63_fptr, 0));

void hash_u45count_fptr() // hash-count
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8798 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8796 = prim_car(lst);
    void *lst8799 = prim_cdr(lst);
    void *x8797 = apply_prim_hash_u45count(lst8799);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8796);
    arg_buffer[2] = x8797;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8796))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void set_fptr() // set
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8802 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8800 = prim_car(lst);
    void *lst8803 = prim_cdr(lst);
    void *x8801 = apply_prim_set(lst8803);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8800);
    arg_buffer[2] = x8801;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8800))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *set = encode_clo(alloc_clo(set_fptr, 0));

void set_u45_u62list_fptr() // set->list
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8806 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8804 = prim_car(lst);
    void *lst8807 = prim_cdr(lst);
    void *x8805 = apply_prim_set_u45_u62list(lst8807);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8804);
    arg_buffer[2] = x8805;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8804))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *set_u45_u62list = encode_clo(alloc_clo(set_u45_u62list_fptr, 0));

void list_u45_u62set_fptr() // list->set
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8810 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8808 = prim_car(lst);
    void *lst8811 = prim_cdr(lst);
    void *x8809 = apply_prim_list_u45_u62set(lst8811);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8808);
    arg_buffer[2] = x8809;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8808))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *list_u45_u62set = encode_clo(alloc_clo(list_u45_u62set_fptr, 0));

void set_u45add_fptr() // set-add
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8814 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8812 = prim_car(lst);
    void *lst8815 = prim_cdr(lst);
    void *x8813 = apply_prim_set_u45add(lst8815);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8812);
    arg_buffer[2] = x8813;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8812))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *set_u45add = encode_clo(alloc_clo(set_u45add_fptr, 0));

void set_u45member_u63_fptr() // set-member?
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8818 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8816 = prim_car(lst);
    void *lst8819 = prim_cdr(lst);
    void *x8817 = apply_prim_set_u45member_u63(lst8819);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8816);
    arg_buffer[2] = x8817;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8816))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *set_u45member_u63 = encode_clo(alloc_clo(set_u45member_u63_fptr, 0));

void set_u45remove_fptr() // set-remove
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8822 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8820 = prim_car(lst);
    void *lst8823 = prim_cdr(lst);
    void *x8821 = apply_prim_set_u45remove(lst8823);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8820);
    arg_buffer[2] = x8821;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8820))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *set_u45remove = encode_clo(alloc_clo(set_u45remove_fptr, 0));

void set_u45count_fptr() // set-count
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8826 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8824 = prim_car(lst);
    void *lst8827 = prim_cdr(lst);
    void *x8825 = apply_prim_set_u45count(lst8827);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8824);
    arg_buffer[2] = x8825;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8824))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *set_u45count = encode_clo(alloc_clo(set_u45count_fptr, 0));

void string_u63_fptr() // string?
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8830 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8828 = prim_car(lst);
    void *lst8831 = prim_cdr(lst);
    void *x8829 = apply_prim_string_u63(lst8831);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8828);
    arg_buffer[2] = x8829;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8828))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *string_u63 = encode_clo(alloc_clo(string_u63_fptr, 0));

void string_u45length_fptr() // string-length
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8834 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8832 = prim_car(lst);
    void *lst8835 = prim_cdr(lst);
    void *x8833 = apply_prim_string_u45length(lst8835);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8832);
    arg_buffer[2] = x8833;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8832))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *string_u45length = encode_clo(alloc_clo(string_u45length_fptr, 0));

void string_u45ref_fptr() // string-ref
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8838 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8836 = prim_car(lst);
    void *lst8839 = prim_cdr(lst);
    void *x8837 = apply_prim_string_u45ref(lst8839);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8836);
    arg_buffer[2] = x8837;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8836))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *string_u45ref = encode_clo(alloc_clo(string_u45ref_fptr, 0));

void substring_fptr() // substring
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8842 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8840 = prim_car(lst);
    void *lst8843 = prim_cdr(lst);
    void *x8841 = apply_prim_substring(lst8843);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8840);
    arg_buffer[2] = x8841;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8840))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *substring = encode_clo(alloc_clo(substring_fptr, 0));

void string_u45append_fptr() // string-append
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8846 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8844 = prim_car(lst);
    void *lst8847 = prim_cdr(lst);
    void *x8845 = apply_prim_string_u45append(lst8847);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8844);
    arg_buffer[2] = x8845;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8844))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *string_u45append = encode_clo(alloc_clo(string_u45append_fptr, 0));

void string_u45_u62list_fptr() // string->list
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8850 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8848 = prim_car(lst);
    void *lst8851 = prim_cdr(lst);
    void *x8849 = apply_prim_string_u45_u62list(lst8851);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8848);
    arg_buffer[2] = x8849;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8848))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void exact_u45floor_fptr() // exact-floor
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8854 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8852 = prim_car(lst);
    void *lst8855 = prim_cdr(lst);
    void *x8853 = apply_prim_exact_u45floor(lst8855);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8852);
    arg_buffer[2] = x8853;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8852))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *exact_u45floor = encode_clo(alloc_clo(exact_u45floor_fptr, 0));

void exact_u45ceiling_fptr() // exact-ceiling
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8858 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8856 = prim_car(lst);
    void *lst8859 = prim_cdr(lst);
    void *x8857 = apply_prim_exact_u45ceiling(lst8859);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8856);
    arg_buffer[2] = x8857;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8856))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *exact_u45ceiling = encode_clo(alloc_clo(exact_u45ceiling_fptr, 0));

void exact_u45round_fptr() // exact-round
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8862 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8860 = prim_car(lst);
    void *lst8863 = prim_cdr(lst);
    void *x8861 = apply_prim_exact_u45round(lst8863);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8860);
    arg_buffer[2] = x8861;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8860))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *exact_u45round = encode_clo(alloc_clo(exact_u45round_fptr, 0));

void abs_fptr() // abs
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8866 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8864 = prim_car(lst);
    void *lst8867 = prim_cdr(lst);
    void *x8865 = apply_prim_abs(lst8867);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8864);
    arg_buffer[2] = x8865;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8864))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *abs_brouhaha = encode_clo(alloc_clo(abs_fptr, 0));

void max_fptr() // max
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8870 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8868 = prim_car(lst);
    void *lst8871 = prim_cdr(lst);
    void *x8869 = apply_prim_max(lst8871);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8868);
    arg_buffer[2] = x8869;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8868))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *max = encode_clo(alloc_clo(max_fptr, 0));

void min_fptr() // min
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8874 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8872 = prim_car(lst);
    void *lst8875 = prim_cdr(lst);
    void *x8873 = apply_prim_min(lst8875);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8872);
    arg_buffer[2] = x8873;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8872))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *min = encode_clo(alloc_clo(min_fptr, 0));

void expt_fptr() // expt
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8878 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8876 = prim_car(lst);
    void *lst8879 = prim_cdr(lst);
    void *x8877 = apply_prim_expt(lst8879);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8876);
    arg_buffer[2] = x8877;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8876))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *expt = encode_clo(alloc_clo(expt_fptr, 0));

void sqrt_fptr() // sqrt
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8882 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8880 = prim_car(lst);
    void *lst8883 = prim_cdr(lst);
    void *x8881 = apply_prim_sqrt(lst8883);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8880);
    arg_buffer[2] = x8881;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8880))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *sqrt_brouhaha = encode_clo(alloc_clo(sqrt_fptr, 0));

void remainder_fptr() // remainder
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8886 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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
    void *x8885 = apply_prim_remainder(lst8887);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8884);
    arg_buffer[2] = x8885;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8884))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *remainder_brouhaha = encode_clo(alloc_clo(remainder_fptr, 0));

void quotient_fptr() // quotient
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8890 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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
    void *x8889 = apply_prim_quotient(lst8891);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8888);
    arg_buffer[2] = x8889;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8888))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *quotient = encode_clo(alloc_clo(quotient_fptr, 0));

void random_fptr() // random
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8894 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8892 = prim_car(lst);
    void *lst8895 = prim_cdr(lst);
    void *x8893 = apply_prim_random(lst8895);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8892);
    arg_buffer[2] = x8893;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8892))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *random_brouhaha = encode_clo(alloc_clo(random_fptr, 0));

void symbol_u63_fptr() // symbol?
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8898 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8896 = prim_car(lst);
    void *lst8899 = prim_cdr(lst);
    void *x8897 = apply_prim_symbol_u63(lst8899);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8896);
    arg_buffer[2] = x8897;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8896))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *symbol_u63 = encode_clo(alloc_clo(symbol_u63_fptr, 0));

void pair_u63_fptr() // pair?
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8902 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8900 = prim_car(lst);
    void *lst8903 = prim_cdr(lst);
    void *x8901 = apply_prim_pair_u63(lst8903);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8900);
    arg_buffer[2] = x8901;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8900))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *pair_u63 = encode_clo(alloc_clo(pair_u63_fptr, 0));

void positive_u63_fptr() // positive?
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8906 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8904 = prim_car(lst);
    void *lst8907 = prim_cdr(lst);
    void *x8905 = apply_prim_positive_u63(lst8907);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8904);
    arg_buffer[2] = x8905;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8904))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *positive_u63 = encode_clo(alloc_clo(positive_u63_fptr, 0));

void negative_u63_fptr() // negative?
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8910 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont8908 = prim_car(lst);
    void *lst8911 = prim_cdr(lst);
    void *x8909 = apply_prim_negative_u63(lst8911);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8908);
    arg_buffer[2] = x8909;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8908))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *negative_u63 = encode_clo(alloc_clo(negative_u63_fptr, 0));

void list_fptr() // list
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8509 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *x = nullptr;
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

    void *kont8405 = prim_car(x);
    void *x8507 = prim_cdr(x);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8405);
    arg_buffer[2] = x8507;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8405))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *list = encode_clo(alloc_clo(list_fptr, 0));

void lam8510_fptr() // lam8510
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8511 = arg_buffer[1];
    // reading env and args
    void *a8317 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8511);
    void *equal_u63 = decode_clo_array[3];
    void *kont8406 = decode_clo_array[2];
    void *a8315 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(equal_u63);
    arg_buffer[2] = kont8406;
    arg_buffer[3] = a8315;
    arg_buffer[4] = a8317;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8510 = encode_clo(alloc_clo(lam8510_fptr, 0));

void even_u63_fptr() // even?
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8514 = arg_buffer[1];
    // reading env and args
    void *kont8406 = arg_buffer[2];
    void *x = arg_buffer[3];
    // decoding closure array
    void **decode_clo_array = nullptr;
    mpz_t *mpzvar8912 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_si(*mpzvar8912, 0);
    void *a8315 = encode_mpz(mpzvar8912);
    mpz_t *mpzvar8913 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_si(*mpzvar8913, 2);
    void *a8316 = encode_mpz(mpzvar8913);

    // creating new closure instance
    void **clo8914 = alloc_clo(lam8510_fptr, 3);

    // setting env list
    clo8914[1] = a8315;
    clo8914[2] = kont8406;
    clo8914[3] = equal_u63;
    void *f8407 = encode_clo(clo8914);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(modulo);
    arg_buffer[2] = f8407;
    arg_buffer[3] = x;
    arg_buffer[4] = a8316;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void lam8515_fptr() // lam8515
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8516 = arg_buffer[1];
    // reading env and args
    void *a8320 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8516);
    void *a8318 = decode_clo_array[3];
    void *equal_u63 = decode_clo_array[2];
    void *kont8408 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(equal_u63);
    arg_buffer[2] = kont8408;
    arg_buffer[3] = a8318;
    arg_buffer[4] = a8320;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8515 = encode_clo(alloc_clo(lam8515_fptr, 0));

void odd_u63_fptr() // odd?
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8519 = arg_buffer[1];
    // reading env and args
    void *kont8408 = arg_buffer[2];
    void *x = arg_buffer[3];
    // decoding closure array
    void **decode_clo_array = nullptr;
    mpz_t *mpzvar8915 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_si(*mpzvar8915, 1);
    void *a8318 = encode_mpz(mpzvar8915);
    mpz_t *mpzvar8916 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_si(*mpzvar8916, 2);
    void *a8319 = encode_mpz(mpzvar8916);

    // creating new closure instance
    void **clo8917 = alloc_clo(lam8515_fptr, 3);

    // setting env list
    clo8917[1] = kont8408;
    clo8917[2] = equal_u63;
    clo8917[3] = a8318;
    void *f8409 = encode_clo(clo8917);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(modulo);
    arg_buffer[2] = f8409;
    arg_buffer[3] = x;
    arg_buffer[4] = a8319;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void lam8520_fptr() // lam8520
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8521 = arg_buffer[1];
    // reading env and args
    void *xy8323 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8521);
    void *kont8410 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8410);
    arg_buffer[2] = xy8323;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8410))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8520 = encode_clo(alloc_clo(lam8520_fptr, 0));

void lam8522_fptr() // lam8522
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8523 = arg_buffer[1];
    // reading env and args
    void *a8326 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8523);
    void *a8324 = decode_clo_array[3];
    void *list_u45ref = decode_clo_array[2];
    void *kont8410 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list_u45ref);
    arg_buffer[2] = kont8410;
    arg_buffer[3] = a8324;
    arg_buffer[4] = a8326;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list_u45ref))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8522 = encode_clo(alloc_clo(lam8522_fptr, 0));

void lam8525_fptr() // lam8525
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8526 = arg_buffer[1];
    // reading env and args
    void *a8324 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8526);
    void *list_u45ref = decode_clo_array[4];
    void *n = decode_clo_array[3];
    void *kont8410 = decode_clo_array[2];
    void *_u45 = decode_clo_array[1];
    mpz_t *mpzvar8918 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_si(*mpzvar8918, 1);
    void *a8325 = encode_mpz(mpzvar8918);

    // creating new closure instance
    void **clo8919 = alloc_clo(lam8522_fptr, 3);

    // setting env list
    clo8919[1] = kont8410;
    clo8919[2] = list_u45ref;
    clo8919[3] = a8324;
    void *f8412 = encode_clo(clo8919);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u45);
    arg_buffer[2] = f8412;
    arg_buffer[3] = n;
    arg_buffer[4] = a8325;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8525 = encode_clo(alloc_clo(lam8525_fptr, 0));

void lam8527_fptr() // lam8527
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8528 = arg_buffer[1];
    // reading env and args
    void *a8322 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8528);
    void *cdr = decode_clo_array[7];
    void *lst = decode_clo_array[6];
    void *list_u45ref = decode_clo_array[5];
    void *kont8410 = decode_clo_array[4];
    void *_u45 = decode_clo_array[3];
    void *n = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // if-clause
    bool if_guard8920 = is_true(a8322);
    if (if_guard8920)
    {

        // creating new closure instance
        void **clo8921 = alloc_clo(lam8520_fptr, 1);

        // setting env list
        clo8921[1] = kont8410;
        void *f8411 = encode_clo(clo8921);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8411;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo8922 = alloc_clo(lam8525_fptr, 4);

        // setting env list
        clo8922[1] = _u45;
        clo8922[2] = kont8410;
        clo8922[3] = n;
        clo8922[4] = list_u45ref;
        void *f8413 = encode_clo(clo8922);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8413;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8527 = encode_clo(alloc_clo(lam8527_fptr, 0));

void list_u45ref_fptr() // list-ref
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8530 = arg_buffer[1];
    // reading env and args
    void *kont8410 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;
    mpz_t *mpzvar8923 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_si(*mpzvar8923, 0);
    void *a8321 = encode_mpz(mpzvar8923);

    // creating new closure instance
    void **clo8924 = alloc_clo(lam8527_fptr, 7);

    // setting env list
    clo8924[1] = car;
    clo8924[2] = n;
    clo8924[3] = _u45;
    clo8924[4] = kont8410;
    void *list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

    clo8924[5] = list_u45ref;
    clo8924[6] = lst;
    clo8924[7] = cdr;
    void *f8414 = encode_clo(clo8924);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u61);
    arg_buffer[2] = f8414;
    arg_buffer[3] = a8321;
    arg_buffer[4] = n;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8531_fptr() // lam8531
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8532 = arg_buffer[1];
    // reading env and args
    void *xy8328 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8532);
    void *f8419 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(f8419);
    arg_buffer[2] = xy8328;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8419))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8531 = encode_clo(alloc_clo(lam8531_fptr, 0));

void lam8533_fptr() // lam8533
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8534 = arg_buffer[1];
    // reading env and args
    void *xy8329 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8534);
    void *f8419 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(f8419);
    arg_buffer[2] = xy8329;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8419))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8533 = encode_clo(alloc_clo(lam8533_fptr, 0));

void lam8536_fptr() // lam8536
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8537 = arg_buffer[1];
    // reading env and args
    void *a8334 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8537);
    void *member = decode_clo_array[3];
    void *kont8415 = decode_clo_array[2];
    void *item = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(member);
    arg_buffer[2] = kont8415;
    arg_buffer[3] = item;
    arg_buffer[4] = a8334;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8536 = encode_clo(alloc_clo(lam8536_fptr, 0));

void lam8538_fptr() // lam8538
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8539 = arg_buffer[1];
    // reading env and args
    void *a8333 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8539);
    void *cdr = decode_clo_array[5];
    void *member = decode_clo_array[4];
    void *kont8415 = decode_clo_array[3];
    void *lst = decode_clo_array[2];
    void *item = decode_clo_array[1];

    // if-clause
    bool if_guard8925 = is_true(a8333);
    if (if_guard8925)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8415);
        arg_buffer[2] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8415))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo8926 = alloc_clo(lam8536_fptr, 3);

        // setting env list
        clo8926[1] = item;
        clo8926[2] = kont8415;
        clo8926[3] = member;
        void *f8416 = encode_clo(clo8926);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8416;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8538 = encode_clo(alloc_clo(lam8538_fptr, 0));

void lam8540_fptr() // lam8540
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8541 = arg_buffer[1];
    // reading env and args
    void *a8332 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8541);
    void *cdr = decode_clo_array[6];
    void *member = decode_clo_array[5];
    void *kont8415 = decode_clo_array[4];
    void *lst = decode_clo_array[3];
    void *item = decode_clo_array[2];
    void *equal_u63 = decode_clo_array[1];

    // creating new closure instance
    void **clo8927 = alloc_clo(lam8538_fptr, 5);

    // setting env list
    clo8927[1] = item;
    clo8927[2] = lst;
    clo8927[3] = kont8415;
    clo8927[4] = member;
    clo8927[5] = cdr;
    void *f8417 = encode_clo(clo8927);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(equal_u63);
    arg_buffer[2] = f8417;
    arg_buffer[3] = item;
    arg_buffer[4] = a8332;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8540 = encode_clo(alloc_clo(lam8540_fptr, 0));

void lam8542_fptr() // lam8542
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8543 = arg_buffer[1];
    // reading env and args
    void *a8330 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8543);
    void *cdr = decode_clo_array[7];
    void *member = decode_clo_array[6];
    void *kont8415 = decode_clo_array[5];
    void *lst = decode_clo_array[4];
    void *item = decode_clo_array[3];
    void *equal_u63 = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // if-clause
    bool if_guard8928 = is_true(a8330);
    if (if_guard8928)
    {
        void *xy8331 = encode_bool(false);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8415);
        arg_buffer[2] = xy8331;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8415))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo8929 = alloc_clo(lam8540_fptr, 6);

        // setting env list
        clo8929[1] = equal_u63;
        clo8929[2] = item;
        clo8929[3] = lst;
        clo8929[4] = kont8415;
        clo8929[5] = member;
        clo8929[6] = cdr;
        void *f8418 = encode_clo(clo8929);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8418;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8542 = encode_clo(alloc_clo(lam8542_fptr, 0));

void lam8544_fptr() // lam8544
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8545 = arg_buffer[1];
    // reading env and args
    void *a8327 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8545);
    void *cdr = decode_clo_array[8];
    void *member = decode_clo_array[7];
    void *kont8415 = decode_clo_array[6];
    void *lst = decode_clo_array[5];
    void *null_u63 = decode_clo_array[4];
    void *item = decode_clo_array[3];
    void *equal_u63 = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // creating new closure instance
    void **clo8930 = alloc_clo(lam8542_fptr, 7);

    // setting env list
    clo8930[1] = car;
    clo8930[2] = equal_u63;
    clo8930[3] = item;
    clo8930[4] = lst;
    clo8930[5] = kont8415;
    clo8930[6] = member;
    clo8930[7] = cdr;
    void *f8419 = encode_clo(clo8930);

    // if-clause
    bool if_guard8931 = is_true(a8327);
    if (if_guard8931)
    {

        // creating new closure instance
        void **clo8932 = alloc_clo(lam8531_fptr, 1);

        // setting env list
        clo8932[1] = f8419;
        void *f8420 = encode_clo(clo8932);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(null_u63);
        arg_buffer[2] = f8420;
        arg_buffer[3] = item;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo8933 = alloc_clo(lam8533_fptr, 1);

        // setting env list
        clo8933[1] = f8419;
        void *f8421 = encode_clo(clo8933);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(null_u63);
        arg_buffer[2] = f8421;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8544 = encode_clo(alloc_clo(lam8544_fptr, 0));

void member_fptr() // member
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8546 = arg_buffer[1];
    // reading env and args
    void *kont8415 = arg_buffer[2];
    void *item = arg_buffer[3];
    void *lst = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo8934 = alloc_clo(lam8544_fptr, 8);

    // setting env list
    clo8934[1] = car;
    clo8934[2] = equal_u63;
    clo8934[3] = item;
    clo8934[4] = null_u63;
    clo8934[5] = lst;
    clo8934[6] = kont8415;
    void *member = encode_clo(alloc_clo(member_fptr, 0));

    clo8934[7] = member;
    clo8934[8] = cdr;
    void *f8422 = encode_clo(clo8934);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8422;
    arg_buffer[3] = item;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *member = encode_clo(alloc_clo(member_fptr, 0));

void lam8549_fptr() // lam8549
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8550 = arg_buffer[1];
    // reading env and args
    void *a8340 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8550);
    void *member_u63 = decode_clo_array[3];
    void *x = decode_clo_array[2];
    void *kont8423 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(member_u63);
    arg_buffer[2] = kont8423;
    arg_buffer[3] = x;
    arg_buffer[4] = a8340;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8549 = encode_clo(alloc_clo(lam8549_fptr, 0));

void lam8551_fptr() // lam8551
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8552 = arg_buffer[1];
    // reading env and args
    void *a8338 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8552);
    void *cdr = decode_clo_array[5];
    void *lst = decode_clo_array[4];
    void *member_u63 = decode_clo_array[3];
    void *x = decode_clo_array[2];
    void *kont8423 = decode_clo_array[1];

    // if-clause
    bool if_guard8935 = is_true(a8338);
    if (if_guard8935)
    {
        void *xy8339 = encode_bool(true);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8423);
        arg_buffer[2] = xy8339;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8423))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo8936 = alloc_clo(lam8549_fptr, 3);

        // setting env list
        clo8936[1] = kont8423;
        clo8936[2] = x;
        clo8936[3] = member_u63;
        void *f8424 = encode_clo(clo8936);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8424;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8551 = encode_clo(alloc_clo(lam8551_fptr, 0));

void lam8553_fptr() // lam8553
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8554 = arg_buffer[1];
    // reading env and args
    void *a8337 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8554);
    void *cdr = decode_clo_array[6];
    void *lst = decode_clo_array[5];
    void *equal_u63 = decode_clo_array[4];
    void *member_u63 = decode_clo_array[3];
    void *x = decode_clo_array[2];
    void *kont8423 = decode_clo_array[1];

    // creating new closure instance
    void **clo8937 = alloc_clo(lam8551_fptr, 5);

    // setting env list
    clo8937[1] = kont8423;
    clo8937[2] = x;
    clo8937[3] = member_u63;
    clo8937[4] = lst;
    clo8937[5] = cdr;
    void *f8425 = encode_clo(clo8937);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(equal_u63);
    arg_buffer[2] = f8425;
    arg_buffer[3] = a8337;
    arg_buffer[4] = x;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8553 = encode_clo(alloc_clo(lam8553_fptr, 0));

void lam8555_fptr() // lam8555
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8556 = arg_buffer[1];
    // reading env and args
    void *a8335 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8556);
    void *cdr = decode_clo_array[7];
    void *lst = decode_clo_array[6];
    void *equal_u63 = decode_clo_array[5];
    void *car = decode_clo_array[4];
    void *member_u63 = decode_clo_array[3];
    void *x = decode_clo_array[2];
    void *kont8423 = decode_clo_array[1];

    // if-clause
    bool if_guard8938 = is_true(a8335);
    if (if_guard8938)
    {
        void *xy8336 = encode_bool(false);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8423);
        arg_buffer[2] = xy8336;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8423))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo8939 = alloc_clo(lam8553_fptr, 6);

        // setting env list
        clo8939[1] = kont8423;
        clo8939[2] = x;
        clo8939[3] = member_u63;
        clo8939[4] = equal_u63;
        clo8939[5] = lst;
        clo8939[6] = cdr;
        void *f8426 = encode_clo(clo8939);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8426;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8555 = encode_clo(alloc_clo(lam8555_fptr, 0));

void member_u63_fptr() // member?
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8557 = arg_buffer[1];
    // reading env and args
    void *kont8423 = arg_buffer[2];
    void *x = arg_buffer[3];
    void *lst = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo8940 = alloc_clo(lam8555_fptr, 7);

    // setting env list
    clo8940[1] = kont8423;
    clo8940[2] = x;
    void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

    clo8940[3] = member_u63;
    clo8940[4] = car;
    clo8940[5] = equal_u63;
    clo8940[6] = lst;
    clo8940[7] = cdr;
    void *f8427 = encode_clo(clo8940);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8427;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8559_fptr() // lam8559
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8560 = arg_buffer[1];
    // reading env and args
    void *a8345 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8560);
    void *kont8428 = decode_clo_array[3];
    void *_u43 = decode_clo_array[2];
    void *a8343 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u43);
    arg_buffer[2] = kont8428;
    arg_buffer[3] = a8343;
    arg_buffer[4] = a8345;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8559 = encode_clo(alloc_clo(lam8559_fptr, 0));

void lam8561_fptr() // lam8561
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8562 = arg_buffer[1];
    // reading env and args
    void *a8344 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8562);
    void *kont8428 = decode_clo_array[4];
    void *length = decode_clo_array[3];
    void *_u43 = decode_clo_array[2];
    void *a8343 = decode_clo_array[1];

    // creating new closure instance
    void **clo8941 = alloc_clo(lam8559_fptr, 3);

    // setting env list
    clo8941[1] = a8343;
    clo8941[2] = _u43;
    clo8941[3] = kont8428;
    void *f8429 = encode_clo(clo8941);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(length);
    arg_buffer[2] = f8429;
    arg_buffer[3] = a8344;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8561 = encode_clo(alloc_clo(lam8561_fptr, 0));

void lam8564_fptr() // lam8564
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8565 = arg_buffer[1];
    // reading env and args
    void *a8341 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8565);
    void *lst = decode_clo_array[5];
    void *length = decode_clo_array[4];
    void *_u43 = decode_clo_array[3];
    void *kont8428 = decode_clo_array[2];
    void *cdr = decode_clo_array[1];

    // if-clause
    bool if_guard8942 = is_true(a8341);
    if (if_guard8942)
    {
        mpz_t *mpzvar8943 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_si(*mpzvar8943, 0);
        void *xy8342 = encode_mpz(mpzvar8943);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8428);
        arg_buffer[2] = xy8342;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8428))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        mpz_t *mpzvar8944 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_si(*mpzvar8944, 1);
        void *a8343 = encode_mpz(mpzvar8944);

        // creating new closure instance
        void **clo8945 = alloc_clo(lam8561_fptr, 4);

        // setting env list
        clo8945[1] = a8343;
        clo8945[2] = _u43;
        clo8945[3] = length;
        clo8945[4] = kont8428;
        void *f8430 = encode_clo(clo8945);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8430;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8564 = encode_clo(alloc_clo(lam8564_fptr, 0));

void length_fptr() // length
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8566 = arg_buffer[1];
    // reading env and args
    void *kont8428 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo8946 = alloc_clo(lam8564_fptr, 5);

    // setting env list
    clo8946[1] = cdr;
    clo8946[2] = kont8428;
    clo8946[3] = _u43;
    void *length = encode_clo(alloc_clo(length_fptr, 0));

    clo8946[4] = length;
    clo8946[5] = lst;
    void *f8431 = encode_clo(clo8946);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8431;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *length = encode_clo(alloc_clo(length_fptr, 0));

void lam8567_fptr() // lam8567
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8568 = arg_buffer[1];
    // reading env and args
    void *xy8347 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8568);
    void *kont8432 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8432);
    arg_buffer[2] = xy8347;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8432))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8567 = encode_clo(alloc_clo(lam8567_fptr, 0));

void lam8569_fptr() // lam8569
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8570 = arg_buffer[1];
    // reading env and args
    void *a8351 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8570);
    void *a8349 = decode_clo_array[3];
    void *kont8432 = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8432;
    arg_buffer[3] = a8349;
    arg_buffer[4] = a8351;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8569 = encode_clo(alloc_clo(lam8569_fptr, 0));

void lam8571_fptr() // lam8571
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8572 = arg_buffer[1];
    // reading env and args
    void *a8350 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8572);
    void *a8349 = decode_clo_array[5];
    void *kont8432 = decode_clo_array[4];
    void *map = decode_clo_array[3];
    void *proc = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo8947 = alloc_clo(lam8569_fptr, 3);

    // setting env list
    clo8947[1] = cons;
    clo8947[2] = kont8432;
    clo8947[3] = a8349;
    void *f8434 = encode_clo(clo8947);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(map);
    arg_buffer[2] = f8434;
    arg_buffer[3] = proc;
    arg_buffer[4] = a8350;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8571 = encode_clo(alloc_clo(lam8571_fptr, 0));

void lam8573_fptr() // lam8573
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8574 = arg_buffer[1];
    // reading env and args
    void *a8349 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8574);
    void *cdr = decode_clo_array[6];
    void *map = decode_clo_array[5];
    void *proc = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *lst = decode_clo_array[2];
    void *kont8432 = decode_clo_array[1];

    // creating new closure instance
    void **clo8948 = alloc_clo(lam8571_fptr, 5);

    // setting env list
    clo8948[1] = cons;
    clo8948[2] = proc;
    clo8948[3] = map;
    clo8948[4] = kont8432;
    clo8948[5] = a8349;
    void *f8435 = encode_clo(clo8948);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8435;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8573 = encode_clo(alloc_clo(lam8573_fptr, 0));

void lam8575_fptr() // lam8575
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8576 = arg_buffer[1];
    // reading env and args
    void *a8348 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8576);
    void *cdr = decode_clo_array[6];
    void *map = decode_clo_array[5];
    void *proc = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *lst = decode_clo_array[2];
    void *kont8432 = decode_clo_array[1];

    // creating new closure instance
    void **clo8949 = alloc_clo(lam8573_fptr, 6);

    // setting env list
    clo8949[1] = kont8432;
    clo8949[2] = lst;
    clo8949[3] = cons;
    clo8949[4] = proc;
    clo8949[5] = map;
    clo8949[6] = cdr;
    void *f8436 = encode_clo(clo8949);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(proc);
    arg_buffer[2] = f8436;
    arg_buffer[3] = a8348;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8575 = encode_clo(alloc_clo(lam8575_fptr, 0));

void lam8577_fptr() // lam8577
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8578 = arg_buffer[1];
    // reading env and args
    void *a8346 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8578);
    void *map = decode_clo_array[8];
    void *proc = decode_clo_array[7];
    void *car = decode_clo_array[6];
    void *cons = decode_clo_array[5];
    void *list = decode_clo_array[4];
    void *cdr = decode_clo_array[3];
    void *lst = decode_clo_array[2];
    void *kont8432 = decode_clo_array[1];

    // if-clause
    bool if_guard8950 = is_true(a8346);
    if (if_guard8950)
    {

        // creating new closure instance
        void **clo8951 = alloc_clo(lam8567_fptr, 1);

        // setting env list
        clo8951[1] = kont8432;
        void *f8433 = encode_clo(clo8951);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(list);
        arg_buffer[2] = f8433;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo8952 = alloc_clo(lam8575_fptr, 6);

        // setting env list
        clo8952[1] = kont8432;
        clo8952[2] = lst;
        clo8952[3] = cons;
        clo8952[4] = proc;
        clo8952[5] = map;
        clo8952[6] = cdr;
        void *f8437 = encode_clo(clo8952);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8437;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8577 = encode_clo(alloc_clo(lam8577_fptr, 0));

void map_fptr() // map
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8579 = arg_buffer[1];
    // reading env and args
    void *kont8432 = arg_buffer[2];
    void *proc = arg_buffer[3];
    void *lst = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo8953 = alloc_clo(lam8577_fptr, 8);

    // setting env list
    clo8953[1] = kont8432;
    clo8953[2] = lst;
    clo8953[3] = cdr;
    clo8953[4] = list;
    clo8953[5] = cons;
    clo8953[6] = car;
    clo8953[7] = proc;
    void *map = encode_clo(alloc_clo(map_fptr, 0));

    clo8953[8] = map;
    void *f8438 = encode_clo(clo8953);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8438;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *map = encode_clo(alloc_clo(map_fptr, 0));

void lam8580_fptr() // lam8580
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8581 = arg_buffer[1];
    // reading env and args
    void *xy8353 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8581);
    void *kont8439 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8439);
    arg_buffer[2] = xy8353;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8439))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8580 = encode_clo(alloc_clo(lam8580_fptr, 0));

void lam8582_fptr() // lam8582
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8583 = arg_buffer[1];
    // reading env and args
    void *a8358 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8583);
    void *a8356 = decode_clo_array[3];
    void *kont8439 = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8439;
    arg_buffer[3] = a8356;
    arg_buffer[4] = a8358;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8582 = encode_clo(alloc_clo(lam8582_fptr, 0));

void lam8584_fptr() // lam8584
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8585 = arg_buffer[1];
    // reading env and args
    void *a8357 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8585);
    void *op = decode_clo_array[5];
    void *a8356 = decode_clo_array[4];
    void *kont8439 = decode_clo_array[3];
    void *filter = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo8954 = alloc_clo(lam8582_fptr, 3);

    // setting env list
    clo8954[1] = cons;
    clo8954[2] = kont8439;
    clo8954[3] = a8356;
    void *f8441 = encode_clo(clo8954);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(filter);
    arg_buffer[2] = f8441;
    arg_buffer[3] = op;
    arg_buffer[4] = a8357;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8584 = encode_clo(alloc_clo(lam8584_fptr, 0));

void lam8586_fptr() // lam8586
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8587 = arg_buffer[1];
    // reading env and args
    void *a8356 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8587);
    void *cdr = decode_clo_array[6];
    void *lst = decode_clo_array[5];
    void *op = decode_clo_array[4];
    void *kont8439 = decode_clo_array[3];
    void *filter = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo8955 = alloc_clo(lam8584_fptr, 5);

    // setting env list
    clo8955[1] = cons;
    clo8955[2] = filter;
    clo8955[3] = kont8439;
    clo8955[4] = a8356;
    clo8955[5] = op;
    void *f8442 = encode_clo(clo8955);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8442;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8586 = encode_clo(alloc_clo(lam8586_fptr, 0));

void lam8588_fptr() // lam8588
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8589 = arg_buffer[1];
    // reading env and args
    void *a8359 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8589);
    void *op = decode_clo_array[3];
    void *kont8439 = decode_clo_array[2];
    void *filter = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(filter);
    arg_buffer[2] = kont8439;
    arg_buffer[3] = op;
    arg_buffer[4] = a8359;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8588 = encode_clo(alloc_clo(lam8588_fptr, 0));

void lam8590_fptr() // lam8590
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8591 = arg_buffer[1];
    // reading env and args
    void *a8355 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8591);
    void *cdr = decode_clo_array[7];
    void *lst = decode_clo_array[6];
    void *op = decode_clo_array[5];
    void *kont8439 = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *filter = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // if-clause
    bool if_guard8956 = is_true(a8355);
    if (if_guard8956)
    {

        // creating new closure instance
        void **clo8957 = alloc_clo(lam8586_fptr, 6);

        // setting env list
        clo8957[1] = cons;
        clo8957[2] = filter;
        clo8957[3] = kont8439;
        clo8957[4] = op;
        clo8957[5] = lst;
        clo8957[6] = cdr;
        void *f8443 = encode_clo(clo8957);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8443;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo8958 = alloc_clo(lam8588_fptr, 3);

        // setting env list
        clo8958[1] = filter;
        clo8958[2] = kont8439;
        clo8958[3] = op;
        void *f8444 = encode_clo(clo8958);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8444;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8590 = encode_clo(alloc_clo(lam8590_fptr, 0));

void lam8592_fptr() // lam8592
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8593 = arg_buffer[1];
    // reading env and args
    void *a8354 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8593);
    void *cdr = decode_clo_array[7];
    void *lst = decode_clo_array[6];
    void *op = decode_clo_array[5];
    void *kont8439 = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *filter = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // creating new closure instance
    void **clo8959 = alloc_clo(lam8590_fptr, 7);

    // setting env list
    clo8959[1] = car;
    clo8959[2] = filter;
    clo8959[3] = cons;
    clo8959[4] = kont8439;
    clo8959[5] = op;
    clo8959[6] = lst;
    clo8959[7] = cdr;
    void *f8445 = encode_clo(clo8959);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(op);
    arg_buffer[2] = f8445;
    arg_buffer[3] = a8354;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8592 = encode_clo(alloc_clo(lam8592_fptr, 0));

void lam8594_fptr() // lam8594
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8595 = arg_buffer[1];
    // reading env and args
    void *a8352 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8595);
    void *lst = decode_clo_array[8];
    void *op = decode_clo_array[7];
    void *kont8439 = decode_clo_array[6];
    void *cons = decode_clo_array[5];
    void *list = decode_clo_array[4];
    void *cdr = decode_clo_array[3];
    void *filter = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // if-clause
    bool if_guard8960 = is_true(a8352);
    if (if_guard8960)
    {

        // creating new closure instance
        void **clo8961 = alloc_clo(lam8580_fptr, 1);

        // setting env list
        clo8961[1] = kont8439;
        void *f8440 = encode_clo(clo8961);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(list);
        arg_buffer[2] = f8440;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo8962 = alloc_clo(lam8592_fptr, 7);

        // setting env list
        clo8962[1] = car;
        clo8962[2] = filter;
        clo8962[3] = cons;
        clo8962[4] = kont8439;
        clo8962[5] = op;
        clo8962[6] = lst;
        clo8962[7] = cdr;
        void *f8446 = encode_clo(clo8962);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8446;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8594 = encode_clo(alloc_clo(lam8594_fptr, 0));

void filter_fptr() // filter
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8596 = arg_buffer[1];
    // reading env and args
    void *kont8439 = arg_buffer[2];
    void *op = arg_buffer[3];
    void *lst = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo8963 = alloc_clo(lam8594_fptr, 8);

    // setting env list
    clo8963[1] = car;
    void *filter = encode_clo(alloc_clo(filter_fptr, 0));

    clo8963[2] = filter;
    clo8963[3] = cdr;
    clo8963[4] = list;
    clo8963[5] = cons;
    clo8963[6] = kont8439;
    clo8963[7] = op;
    clo8963[8] = lst;
    void *f8447 = encode_clo(clo8963);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8447;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *filter = encode_clo(alloc_clo(filter_fptr, 0));

void lam8597_fptr() // lam8597
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8598 = arg_buffer[1];
    // reading env and args
    void *a8364 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8598);
    void *a8362 = decode_clo_array[3];
    void *kont8448 = decode_clo_array[2];
    void *drop = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(drop);
    arg_buffer[2] = kont8448;
    arg_buffer[3] = a8362;
    arg_buffer[4] = a8364;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8597 = encode_clo(alloc_clo(lam8597_fptr, 0));

void lam8600_fptr() // lam8600
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8601 = arg_buffer[1];
    // reading env and args
    void *a8362 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8601);
    void *n = decode_clo_array[4];
    void *_u45 = decode_clo_array[3];
    void *kont8448 = decode_clo_array[2];
    void *drop = decode_clo_array[1];
    mpz_t *mpzvar8964 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_si(*mpzvar8964, 1);
    void *a8363 = encode_mpz(mpzvar8964);

    // creating new closure instance
    void **clo8965 = alloc_clo(lam8597_fptr, 3);

    // setting env list
    clo8965[1] = drop;
    clo8965[2] = kont8448;
    clo8965[3] = a8362;
    void *f8449 = encode_clo(clo8965);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u45);
    arg_buffer[2] = f8449;
    arg_buffer[3] = n;
    arg_buffer[4] = a8363;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8600 = encode_clo(alloc_clo(lam8600_fptr, 0));

void lam8602_fptr() // lam8602
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8603 = arg_buffer[1];
    // reading env and args
    void *a8361 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8603);
    void *cdr = decode_clo_array[6];
    void *n = decode_clo_array[5];
    void *_u45 = decode_clo_array[4];
    void *lst = decode_clo_array[3];
    void *kont8448 = decode_clo_array[2];
    void *drop = decode_clo_array[1];

    // if-clause
    bool if_guard8966 = is_true(a8361);
    if (if_guard8966)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8448);
        arg_buffer[2] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8448))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo8967 = alloc_clo(lam8600_fptr, 4);

        // setting env list
        clo8967[1] = drop;
        clo8967[2] = kont8448;
        clo8967[3] = _u45;
        clo8967[4] = n;
        void *f8450 = encode_clo(clo8967);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8450;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8602 = encode_clo(alloc_clo(lam8602_fptr, 0));

void drop_fptr() // drop
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8605 = arg_buffer[1];
    // reading env and args
    void *kont8448 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;
    mpz_t *mpzvar8968 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_si(*mpzvar8968, 0);
    void *a8360 = encode_mpz(mpzvar8968);

    // creating new closure instance
    void **clo8969 = alloc_clo(lam8602_fptr, 6);

    // setting env list
    void *drop = encode_clo(alloc_clo(drop_fptr, 0));

    clo8969[1] = drop;
    clo8969[2] = kont8448;
    clo8969[3] = lst;
    clo8969[4] = _u45;
    clo8969[5] = n;
    clo8969[6] = cdr;
    void *f8451 = encode_clo(clo8969);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u61);
    arg_buffer[2] = f8451;
    arg_buffer[3] = n;
    arg_buffer[4] = a8360;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8606_fptr() // lam8606
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8607 = arg_buffer[1];
    // reading env and args
    void *a8368 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8607);
    void *a8367 = decode_clo_array[4];
    void *kont8452 = decode_clo_array[3];
    void *fun = decode_clo_array[2];
    void *foldl = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(foldl);
    arg_buffer[2] = kont8452;
    arg_buffer[3] = fun;
    arg_buffer[4] = a8367;
    arg_buffer[5] = a8368;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8606 = encode_clo(alloc_clo(lam8606_fptr, 0));

void lam8608_fptr() // lam8608
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8609 = arg_buffer[1];
    // reading env and args
    void *a8367 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8609);
    void *cdr = decode_clo_array[5];
    void *lst = decode_clo_array[4];
    void *kont8452 = decode_clo_array[3];
    void *fun = decode_clo_array[2];
    void *foldl = decode_clo_array[1];

    // creating new closure instance
    void **clo8970 = alloc_clo(lam8606_fptr, 4);

    // setting env list
    clo8970[1] = foldl;
    clo8970[2] = fun;
    clo8970[3] = kont8452;
    clo8970[4] = a8367;
    void *f8453 = encode_clo(clo8970);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8453;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8608 = encode_clo(alloc_clo(lam8608_fptr, 0));

void lam8610_fptr() // lam8610
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8611 = arg_buffer[1];
    // reading env and args
    void *a8366 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8611);
    void *cdr = decode_clo_array[6];
    void *lst = decode_clo_array[5];
    void *kont8452 = decode_clo_array[4];
    void *fun = decode_clo_array[3];
    void *acc = decode_clo_array[2];
    void *foldl = decode_clo_array[1];

    // creating new closure instance
    void **clo8971 = alloc_clo(lam8608_fptr, 5);

    // setting env list
    clo8971[1] = foldl;
    clo8971[2] = fun;
    clo8971[3] = kont8452;
    clo8971[4] = lst;
    clo8971[5] = cdr;
    void *f8454 = encode_clo(clo8971);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(fun);
    arg_buffer[2] = f8454;
    arg_buffer[3] = a8366;
    arg_buffer[4] = acc;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8610 = encode_clo(alloc_clo(lam8610_fptr, 0));

void lam8612_fptr() // lam8612
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8613 = arg_buffer[1];
    // reading env and args
    void *a8365 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8613);
    void *cdr = decode_clo_array[7];
    void *lst = decode_clo_array[6];
    void *kont8452 = decode_clo_array[5];
    void *fun = decode_clo_array[4];
    void *acc = decode_clo_array[3];
    void *car = decode_clo_array[2];
    void *foldl = decode_clo_array[1];

    // if-clause
    bool if_guard8972 = is_true(a8365);
    if (if_guard8972)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8452);
        arg_buffer[2] = acc;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8452))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo8973 = alloc_clo(lam8610_fptr, 6);

        // setting env list
        clo8973[1] = foldl;
        clo8973[2] = acc;
        clo8973[3] = fun;
        clo8973[4] = kont8452;
        clo8973[5] = lst;
        clo8973[6] = cdr;
        void *f8455 = encode_clo(clo8973);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8455;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8612 = encode_clo(alloc_clo(lam8612_fptr, 0));

void foldl_fptr() // foldl
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8614 = arg_buffer[1];
    // reading env and args
    void *kont8452 = arg_buffer[2];
    void *fun = arg_buffer[3];
    void *acc = arg_buffer[4];
    void *lst = arg_buffer[5];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo8974 = alloc_clo(lam8612_fptr, 7);

    // setting env list
    void *foldl = encode_clo(alloc_clo(foldl_fptr, 0));

    clo8974[1] = foldl;
    clo8974[2] = car;
    clo8974[3] = acc;
    clo8974[4] = fun;
    clo8974[5] = kont8452;
    clo8974[6] = lst;
    clo8974[7] = cdr;
    void *f8456 = encode_clo(clo8974);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8456;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8615_fptr() // lam8615
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8616 = arg_buffer[1];
    // reading env and args
    void *a8372 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8616);
    void *a8370 = decode_clo_array[3];
    void *fun = decode_clo_array[2];
    void *kont8457 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(fun);
    arg_buffer[2] = kont8457;
    arg_buffer[3] = a8370;
    arg_buffer[4] = a8372;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8615 = encode_clo(alloc_clo(lam8615_fptr, 0));

void lam8617_fptr() // lam8617
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8618 = arg_buffer[1];
    // reading env and args
    void *a8371 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8618);
    void *foldr = decode_clo_array[5];
    void *a8370 = decode_clo_array[4];
    void *fun = decode_clo_array[3];
    void *acc = decode_clo_array[2];
    void *kont8457 = decode_clo_array[1];

    // creating new closure instance
    void **clo8975 = alloc_clo(lam8615_fptr, 3);

    // setting env list
    clo8975[1] = kont8457;
    clo8975[2] = fun;
    clo8975[3] = a8370;
    void *f8458 = encode_clo(clo8975);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(foldr);
    arg_buffer[2] = f8458;
    arg_buffer[3] = fun;
    arg_buffer[4] = acc;
    arg_buffer[5] = a8371;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8617 = encode_clo(alloc_clo(lam8617_fptr, 0));

void lam8619_fptr() // lam8619
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8620 = arg_buffer[1];
    // reading env and args
    void *a8370 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8620);
    void *cdr = decode_clo_array[6];
    void *fun = decode_clo_array[5];
    void *acc = decode_clo_array[4];
    void *kont8457 = decode_clo_array[3];
    void *foldr = decode_clo_array[2];
    void *lst = decode_clo_array[1];

    // creating new closure instance
    void **clo8976 = alloc_clo(lam8617_fptr, 5);

    // setting env list
    clo8976[1] = kont8457;
    clo8976[2] = acc;
    clo8976[3] = fun;
    clo8976[4] = a8370;
    clo8976[5] = foldr;
    void *f8459 = encode_clo(clo8976);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8459;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8619 = encode_clo(alloc_clo(lam8619_fptr, 0));

void lam8621_fptr() // lam8621
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8622 = arg_buffer[1];
    // reading env and args
    void *a8369 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8622);
    void *cdr = decode_clo_array[7];
    void *fun = decode_clo_array[6];
    void *acc = decode_clo_array[5];
    void *foldr = decode_clo_array[4];
    void *lst = decode_clo_array[3];
    void *kont8457 = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // if-clause
    bool if_guard8977 = is_true(a8369);
    if (if_guard8977)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8457);
        arg_buffer[2] = acc;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8457))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo8978 = alloc_clo(lam8619_fptr, 6);

        // setting env list
        clo8978[1] = lst;
        clo8978[2] = foldr;
        clo8978[3] = kont8457;
        clo8978[4] = acc;
        clo8978[5] = fun;
        clo8978[6] = cdr;
        void *f8460 = encode_clo(clo8978);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8460;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8621 = encode_clo(alloc_clo(lam8621_fptr, 0));

void foldr_fptr() // foldr
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8623 = arg_buffer[1];
    // reading env and args
    void *kont8457 = arg_buffer[2];
    void *fun = arg_buffer[3];
    void *acc = arg_buffer[4];
    void *lst = arg_buffer[5];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo8979 = alloc_clo(lam8621_fptr, 7);

    // setting env list
    clo8979[1] = car;
    clo8979[2] = kont8457;
    clo8979[3] = lst;
    void *foldr = encode_clo(alloc_clo(foldr_fptr, 0));

    clo8979[4] = foldr;
    clo8979[5] = acc;
    clo8979[6] = fun;
    clo8979[7] = cdr;
    void *f8461 = encode_clo(clo8979);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8461;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void lam8624_fptr() // lam8624
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8625 = arg_buffer[1];
    // reading env and args
    void *a8376 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8625);
    void *kont8462 = decode_clo_array[3];
    void *reverse_u45helper = decode_clo_array[2];
    void *a8374 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(reverse_u45helper);
    arg_buffer[2] = kont8462;
    arg_buffer[3] = a8374;
    arg_buffer[4] = a8376;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8624 = encode_clo(alloc_clo(lam8624_fptr, 0));

void lam8626_fptr() // lam8626
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8627 = arg_buffer[1];
    // reading env and args
    void *a8375 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8627);
    void *kont8462 = decode_clo_array[5];
    void *reverse_u45helper = decode_clo_array[4];
    void *a8374 = decode_clo_array[3];
    void *lst2 = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo8980 = alloc_clo(lam8624_fptr, 3);

    // setting env list
    clo8980[1] = a8374;
    clo8980[2] = reverse_u45helper;
    clo8980[3] = kont8462;
    void *f8463 = encode_clo(clo8980);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = f8463;
    arg_buffer[3] = a8375;
    arg_buffer[4] = lst2;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8626 = encode_clo(alloc_clo(lam8626_fptr, 0));

void lam8628_fptr() // lam8628
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8629 = arg_buffer[1];
    // reading env and args
    void *a8374 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8629);
    void *kont8462 = decode_clo_array[6];
    void *lst = decode_clo_array[5];
    void *reverse_u45helper = decode_clo_array[4];
    void *lst2 = decode_clo_array[3];
    void *car = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo8981 = alloc_clo(lam8626_fptr, 5);

    // setting env list
    clo8981[1] = cons;
    clo8981[2] = lst2;
    clo8981[3] = a8374;
    clo8981[4] = reverse_u45helper;
    clo8981[5] = kont8462;
    void *f8464 = encode_clo(clo8981);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(car);
    arg_buffer[2] = f8464;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8628 = encode_clo(alloc_clo(lam8628_fptr, 0));

void lam8630_fptr() // lam8630
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8631 = arg_buffer[1];
    // reading env and args
    void *a8373 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8631);
    void *cdr = decode_clo_array[7];
    void *kont8462 = decode_clo_array[6];
    void *lst = decode_clo_array[5];
    void *reverse_u45helper = decode_clo_array[4];
    void *lst2 = decode_clo_array[3];
    void *car = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // if-clause
    bool if_guard8982 = is_true(a8373);
    if (if_guard8982)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8462);
        arg_buffer[2] = lst2;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8462))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo8983 = alloc_clo(lam8628_fptr, 6);

        // setting env list
        clo8983[1] = cons;
        clo8983[2] = car;
        clo8983[3] = lst2;
        clo8983[4] = reverse_u45helper;
        clo8983[5] = lst;
        clo8983[6] = kont8462;
        void *f8465 = encode_clo(clo8983);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8465;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8630 = encode_clo(alloc_clo(lam8630_fptr, 0));

void reverse_u45helper_fptr() // reverse-helper
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8632 = arg_buffer[1];
    // reading env and args
    void *kont8462 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *lst2 = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo8984 = alloc_clo(lam8630_fptr, 7);

    // setting env list
    clo8984[1] = cons;
    clo8984[2] = car;
    clo8984[3] = lst2;
    void *reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

    clo8984[4] = reverse_u45helper;
    clo8984[5] = lst;
    clo8984[6] = kont8462;
    clo8984[7] = cdr;
    void *f8466 = encode_clo(clo8984);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8466;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void lam8633_fptr() // lam8633
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8634 = arg_buffer[1];
    // reading env and args
    void *a8377 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8634);
    void *lst = decode_clo_array[3];
    void *reverse_u45helper = decode_clo_array[2];
    void *kont8467 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(reverse_u45helper);
    arg_buffer[2] = kont8467;
    arg_buffer[3] = lst;
    arg_buffer[4] = a8377;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8633 = encode_clo(alloc_clo(lam8633_fptr, 0));

void reverse_fptr() // reverse
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8635 = arg_buffer[1];
    // reading env and args
    void *kont8467 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo8985 = alloc_clo(lam8633_fptr, 3);

    // setting env list
    clo8985[1] = kont8467;
    clo8985[2] = reverse_u45helper;
    clo8985[3] = lst;
    void *f8468 = encode_clo(clo8985);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8468;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8636_fptr() // lam8636
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8637 = arg_buffer[1];
    // reading env and args
    void *a8381 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8637);
    void *kont8469 = decode_clo_array[3];
    void *cons = decode_clo_array[2];
    void *a8379 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8469;
    arg_buffer[3] = a8379;
    arg_buffer[4] = a8381;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8636 = encode_clo(alloc_clo(lam8636_fptr, 0));

void lam8638_fptr() // lam8638
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8639 = arg_buffer[1];
    // reading env and args
    void *a8380 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8639);
    void *kont8469 = decode_clo_array[5];
    void *append1 = decode_clo_array[4];
    void *rhs = decode_clo_array[3];
    void *cons = decode_clo_array[2];
    void *a8379 = decode_clo_array[1];

    // creating new closure instance
    void **clo8986 = alloc_clo(lam8636_fptr, 3);

    // setting env list
    clo8986[1] = a8379;
    clo8986[2] = cons;
    clo8986[3] = kont8469;
    void *f8470 = encode_clo(clo8986);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(append1);
    arg_buffer[2] = f8470;
    arg_buffer[3] = a8380;
    arg_buffer[4] = rhs;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append1))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8638 = encode_clo(alloc_clo(lam8638_fptr, 0));

void lam8640_fptr() // lam8640
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8641 = arg_buffer[1];
    // reading env and args
    void *a8379 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8641);
    void *cdr = decode_clo_array[6];
    void *lhs = decode_clo_array[5];
    void *kont8469 = decode_clo_array[4];
    void *append1 = decode_clo_array[3];
    void *rhs = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo8987 = alloc_clo(lam8638_fptr, 5);

    // setting env list
    clo8987[1] = a8379;
    clo8987[2] = cons;
    clo8987[3] = rhs;
    clo8987[4] = append1;
    clo8987[5] = kont8469;
    void *f8471 = encode_clo(clo8987);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8471;
    arg_buffer[3] = lhs;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8640 = encode_clo(alloc_clo(lam8640_fptr, 0));

void lam8642_fptr() // lam8642
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8643 = arg_buffer[1];
    // reading env and args
    void *a8378 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8643);
    void *cdr = decode_clo_array[7];
    void *lhs = decode_clo_array[6];
    void *kont8469 = decode_clo_array[5];
    void *append1 = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *rhs = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // if-clause
    bool if_guard8988 = is_true(a8378);
    if (if_guard8988)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8469);
        arg_buffer[2] = rhs;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8469))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo8989 = alloc_clo(lam8640_fptr, 6);

        // setting env list
        clo8989[1] = cons;
        clo8989[2] = rhs;
        clo8989[3] = append1;
        clo8989[4] = kont8469;
        clo8989[5] = lhs;
        clo8989[6] = cdr;
        void *f8472 = encode_clo(clo8989);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8472;
        arg_buffer[3] = lhs;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8642 = encode_clo(alloc_clo(lam8642_fptr, 0));

void append1_fptr() // append1
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8644 = arg_buffer[1];
    // reading env and args
    void *kont8469 = arg_buffer[2];
    void *lhs = arg_buffer[3];
    void *rhs = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo8990 = alloc_clo(lam8642_fptr, 7);

    // setting env list
    clo8990[1] = car;
    clo8990[2] = rhs;
    clo8990[3] = cons;
    void *append1 = encode_clo(alloc_clo(append1_fptr, 0));

    clo8990[4] = append1;
    clo8990[5] = kont8469;
    clo8990[6] = lhs;
    clo8990[7] = cdr;
    void *f8473 = encode_clo(clo8990);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8473;
    arg_buffer[3] = lhs;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8645_fptr() // lam8645
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8646 = arg_buffer[1];
    // reading env and args
    void *a8384 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8646);
    void *a8382 = decode_clo_array[4];
    void *foldr = decode_clo_array[3];
    void *append1 = decode_clo_array[2];
    void *kont8474 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(foldr);
    arg_buffer[2] = kont8474;
    arg_buffer[3] = append1;
    arg_buffer[4] = a8382;
    arg_buffer[5] = a8384;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8645 = encode_clo(alloc_clo(lam8645_fptr, 0));

void lam8647_fptr() // lam8647
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8648 = arg_buffer[1];
    // reading env and args
    void *a8383 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8648);
    void *a8382 = decode_clo_array[5];
    void *foldr = decode_clo_array[4];
    void *kont8474 = decode_clo_array[3];
    void *x = decode_clo_array[2];
    void *append1 = decode_clo_array[1];

    // creating new closure instance
    void **clo8991 = alloc_clo(lam8645_fptr, 4);

    // setting env list
    clo8991[1] = kont8474;
    clo8991[2] = append1;
    clo8991[3] = foldr;
    clo8991[4] = a8382;
    void *f8475 = encode_clo(clo8991);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(append1);
    arg_buffer[2] = f8475;
    arg_buffer[3] = a8383;
    arg_buffer[4] = x;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append1))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8647 = encode_clo(alloc_clo(lam8647_fptr, 0));

void lam8649_fptr() // lam8649
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8650 = arg_buffer[1];
    // reading env and args
    void *a8382 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8650);
    void *list = decode_clo_array[6];
    void *foldr = decode_clo_array[5];
    void *kont8474 = decode_clo_array[4];
    void *xs = decode_clo_array[3];
    void *x = decode_clo_array[2];
    void *append1 = decode_clo_array[1];

    // creating new closure instance
    void **clo8992 = alloc_clo(lam8647_fptr, 5);

    // setting env list
    clo8992[1] = append1;
    clo8992[2] = x;
    clo8992[3] = kont8474;
    clo8992[4] = foldr;
    clo8992[5] = a8382;
    void *f8476 = encode_clo(clo8992);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8476;
    arg_buffer[3] = xs;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8649 = encode_clo(alloc_clo(lam8649_fptr, 0));

void lam8651_fptr() // lam8651
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8652 = arg_buffer[1];
    // reading env and args
    void *x = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8652);
    void *list = decode_clo_array[5];
    void *foldr = decode_clo_array[4];
    void *append1 = decode_clo_array[3];
    void *kont8474 = decode_clo_array[2];
    void *xs = decode_clo_array[1];

    // creating new closure instance
    void **clo8993 = alloc_clo(lam8649_fptr, 6);

    // setting env list
    clo8993[1] = append1;
    clo8993[2] = x;
    clo8993[3] = xs;
    clo8993[4] = kont8474;
    clo8993[5] = foldr;
    clo8993[6] = list;
    void *f8477 = encode_clo(clo8993);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8477;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8651 = encode_clo(alloc_clo(lam8651_fptr, 0));

void lam8653_fptr() // lam8653
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8654 = arg_buffer[1];
    // reading env and args
    void *vargs8314 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8654);
    void *list = decode_clo_array[5];
    void *foldr = decode_clo_array[4];
    void *append1 = decode_clo_array[3];
    void *kont8474 = decode_clo_array[2];
    void *xs = decode_clo_array[1];

    // creating new closure instance
    void **clo8994 = alloc_clo(lam8651_fptr, 5);

    // setting env list
    clo8994[1] = xs;
    clo8994[2] = kont8474;
    clo8994[3] = append1;
    clo8994[4] = foldr;
    clo8994[5] = list;
    void *f8478 = encode_clo(clo8994);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(f8478);
    arg_buffer[2] = vargs8314;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8478))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8653 = encode_clo(alloc_clo(lam8653_fptr, 0));

void lam8655_fptr() // lam8655
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8656 = arg_buffer[1];
    // reading env and args
    void *xs = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8656);
    void *foldr = decode_clo_array[6];
    void *append1 = decode_clo_array[5];
    void *kont8474 = decode_clo_array[4];
    void *list = decode_clo_array[3];
    void *vargs8508 = decode_clo_array[2];
    void *cdr = decode_clo_array[1];

    // creating new closure instance
    void **clo8995 = alloc_clo(lam8653_fptr, 5);

    // setting env list
    clo8995[1] = xs;
    clo8995[2] = kont8474;
    clo8995[3] = append1;
    clo8995[4] = foldr;
    clo8995[5] = list;
    void *f8479 = encode_clo(clo8995);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8479;
    arg_buffer[3] = vargs8508;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8655 = encode_clo(alloc_clo(lam8655_fptr, 0));

void append_fptr() // append
{
    call_counter++;
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8657 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *vargs = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        vargs = arg_buffer[2];
    }
    else
    {
        // building cons cell
        vargs = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            vargs = prim_cons(arg_buffer[i], vargs);
        }
    }

    void *kont8474 = prim_car(vargs);
    void *vargs8508 = prim_cdr(vargs);

    // creating new closure instance
    void **clo8996 = alloc_clo(lam8655_fptr, 6);

    // setting env list
    clo8996[1] = cdr;
    clo8996[2] = vargs8508;
    clo8996[3] = list;
    clo8996[4] = kont8474;
    clo8996[5] = append1;
    clo8996[6] = foldr;
    void *f8480 = encode_clo(clo8996);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(car);
    arg_buffer[2] = f8480;
    arg_buffer[3] = vargs8508;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *append = encode_clo(alloc_clo(append_fptr, 0));

void lam8658_fptr() // lam8658
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8659 = arg_buffer[1];
    // reading env and args
    void *xy8387 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8659);
    void *kont8481 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8481);
    arg_buffer[2] = xy8387;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8481))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8658 = encode_clo(alloc_clo(lam8658_fptr, 0));

void lam8660_fptr() // lam8660
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8661 = arg_buffer[1];
    // reading env and args
    void *a8392 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8661);
    void *kont8481 = decode_clo_array[4];
    void *a8388 = decode_clo_array[3];
    void *a8390 = decode_clo_array[2];
    void *take_u45helper = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(take_u45helper);
    arg_buffer[2] = kont8481;
    arg_buffer[3] = a8388;
    arg_buffer[4] = a8390;
    arg_buffer[5] = a8392;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8660 = encode_clo(alloc_clo(lam8660_fptr, 0));

void lam8662_fptr() // lam8662
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8663 = arg_buffer[1];
    // reading env and args
    void *a8391 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8663);
    void *kont8481 = decode_clo_array[6];
    void *a8388 = decode_clo_array[5];
    void *a8390 = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *take_u45helper = decode_clo_array[2];
    void *lst2 = decode_clo_array[1];

    // creating new closure instance
    void **clo8997 = alloc_clo(lam8660_fptr, 4);

    // setting env list
    clo8997[1] = take_u45helper;
    clo8997[2] = a8390;
    clo8997[3] = a8388;
    clo8997[4] = kont8481;
    void *f8483 = encode_clo(clo8997);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = f8483;
    arg_buffer[3] = a8391;
    arg_buffer[4] = lst2;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8662 = encode_clo(alloc_clo(lam8662_fptr, 0));

void lam8664_fptr() // lam8664
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8665 = arg_buffer[1];
    // reading env and args
    void *a8390 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8665);
    void *lst = decode_clo_array[7];
    void *kont8481 = decode_clo_array[6];
    void *a8388 = decode_clo_array[5];
    void *car = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *take_u45helper = decode_clo_array[2];
    void *lst2 = decode_clo_array[1];

    // creating new closure instance
    void **clo8998 = alloc_clo(lam8662_fptr, 6);

    // setting env list
    clo8998[1] = lst2;
    clo8998[2] = take_u45helper;
    clo8998[3] = cons;
    clo8998[4] = a8390;
    clo8998[5] = a8388;
    clo8998[6] = kont8481;
    void *f8484 = encode_clo(clo8998);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(car);
    arg_buffer[2] = f8484;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8664 = encode_clo(alloc_clo(lam8664_fptr, 0));

void lam8667_fptr() // lam8667
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8668 = arg_buffer[1];
    // reading env and args
    void *a8388 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8668);
    void *lst = decode_clo_array[8];
    void *kont8481 = decode_clo_array[7];
    void *cons = decode_clo_array[6];
    void *_u45 = decode_clo_array[5];
    void *take_u45helper = decode_clo_array[4];
    void *lst2 = decode_clo_array[3];
    void *n = decode_clo_array[2];
    void *car = decode_clo_array[1];
    mpz_t *mpzvar8999 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_si(*mpzvar8999, 1);
    void *a8389 = encode_mpz(mpzvar8999);

    // creating new closure instance
    void **clo9000 = alloc_clo(lam8664_fptr, 7);

    // setting env list
    clo9000[1] = lst2;
    clo9000[2] = take_u45helper;
    clo9000[3] = cons;
    clo9000[4] = car;
    clo9000[5] = a8388;
    clo9000[6] = kont8481;
    clo9000[7] = lst;
    void *f8485 = encode_clo(clo9000);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u45);
    arg_buffer[2] = f8485;
    arg_buffer[3] = n;
    arg_buffer[4] = a8389;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8667 = encode_clo(alloc_clo(lam8667_fptr, 0));

void lam8669_fptr() // lam8669
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8670 = arg_buffer[1];
    // reading env and args
    void *a8386 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8670);
    void *cdr = decode_clo_array[10];
    void *lst = decode_clo_array[9];
    void *kont8481 = decode_clo_array[8];
    void *reverse = decode_clo_array[7];
    void *cons = decode_clo_array[6];
    void *_u45 = decode_clo_array[5];
    void *take_u45helper = decode_clo_array[4];
    void *lst2 = decode_clo_array[3];
    void *n = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // if-clause
    bool if_guard9001 = is_true(a8386);
    if (if_guard9001)
    {

        // creating new closure instance
        void **clo9002 = alloc_clo(lam8658_fptr, 1);

        // setting env list
        clo9002[1] = kont8481;
        void *f8482 = encode_clo(clo9002);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(reverse);
        arg_buffer[2] = f8482;
        arg_buffer[3] = lst2;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9003 = alloc_clo(lam8667_fptr, 8);

        // setting env list
        clo9003[1] = car;
        clo9003[2] = n;
        clo9003[3] = lst2;
        clo9003[4] = take_u45helper;
        clo9003[5] = _u45;
        clo9003[6] = cons;
        clo9003[7] = kont8481;
        clo9003[8] = lst;
        void *f8486 = encode_clo(clo9003);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8486;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8669 = encode_clo(alloc_clo(lam8669_fptr, 0));

void take_u45helper_fptr() // take-helper
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8672 = arg_buffer[1];
    // reading env and args
    void *kont8481 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    void *lst2 = arg_buffer[5];
    // decoding closure array
    void **decode_clo_array = nullptr;
    mpz_t *mpzvar9004 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_si(*mpzvar9004, 0);
    void *a8385 = encode_mpz(mpzvar9004);

    // creating new closure instance
    void **clo9005 = alloc_clo(lam8669_fptr, 10);

    // setting env list
    clo9005[1] = car;
    clo9005[2] = n;
    clo9005[3] = lst2;
    void *take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

    clo9005[4] = take_u45helper;
    clo9005[5] = _u45;
    clo9005[6] = cons;
    clo9005[7] = reverse;
    clo9005[8] = kont8481;
    clo9005[9] = lst;
    clo9005[10] = cdr;
    void *f8487 = encode_clo(clo9005);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u61);
    arg_buffer[2] = f8487;
    arg_buffer[3] = n;
    arg_buffer[4] = a8385;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void lam8673_fptr() // lam8673
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8674 = arg_buffer[1];
    // reading env and args
    void *a8393 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8674);
    void *lst = decode_clo_array[4];
    void *n = decode_clo_array[3];
    void *take_u45helper = decode_clo_array[2];
    void *kont8488 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(take_u45helper);
    arg_buffer[2] = kont8488;
    arg_buffer[3] = lst;
    arg_buffer[4] = n;
    arg_buffer[5] = a8393;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8673 = encode_clo(alloc_clo(lam8673_fptr, 0));

void take_fptr() // take
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8675 = arg_buffer[1];
    // reading env and args
    void *kont8488 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9006 = alloc_clo(lam8673_fptr, 4);

    // setting env list
    clo9006[1] = kont8488;
    clo9006[2] = take_u45helper;
    clo9006[3] = n;
    clo9006[4] = lst;
    void *f8489 = encode_clo(clo9006);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8489;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *take = encode_clo(alloc_clo(take_fptr, 0));

void lam8676_fptr() // lam8676
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8677 = arg_buffer[1];
    // reading env and args
    void *a8397 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8677);
    void *f8500 = decode_clo_array[2];
    void *_u43 = decode_clo_array[1];
    void *cps_u45lst8501 = prim_cons(f8500, a8397);

    // clo-apply
    arg_buffer[1] = reinterpret_cast<void *>(_u43);
    arg_buffer[2] = cps_u45lst8501;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8676 = encode_clo(alloc_clo(lam8676_fptr, 0));

void lam8681_fptr() // lam8681
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8682 = arg_buffer[1];
    // reading env and args
    void *a8399 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8682);
    void *modulo = decode_clo_array[2];
    void *f8497 = decode_clo_array[1];
    void *cps_u45lst8498 = prim_cons(f8497, a8399);

    // clo-apply
    arg_buffer[1] = reinterpret_cast<void *>(modulo);
    arg_buffer[2] = cps_u45lst8498;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8681 = encode_clo(alloc_clo(lam8681_fptr, 0));

void lam8684_fptr() // lam8684
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8685 = arg_buffer[1];
    // reading env and args
    void *a8401 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8685);
    void *f8494 = decode_clo_array[2];
    void *f2 = decode_clo_array[1];
    void *cps_u45lst8495 = prim_cons(f8494, a8401);

    // clo-apply
    arg_buffer[1] = reinterpret_cast<void *>(f2);
    arg_buffer[2] = cps_u45lst8495;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f2))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8684 = encode_clo(alloc_clo(lam8684_fptr, 0));

void lam8687_fptr() // lam8687
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8688 = arg_buffer[1];
    // reading env and args
    void *a8402 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8688);
    void *f = decode_clo_array[2];
    void *f8491 = decode_clo_array[1];
    void *cps_u45lst8492 = prim_cons(f8491, a8402);

    // clo-apply
    arg_buffer[1] = reinterpret_cast<void *>(f);
    arg_buffer[2] = cps_u45lst8492;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8687 = encode_clo(alloc_clo(lam8687_fptr, 0));

void lam8689_fptr() // lam8689
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8690 = arg_buffer[1];
    // reading env and args
    void *res3 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8690);
    void *list = decode_clo_array[5];
    void *res2 = decode_clo_array[4];
    void *res1 = decode_clo_array[3];
    void *res0 = decode_clo_array[2];
    void *kont8490 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = kont8490;
    arg_buffer[3] = res1;
    arg_buffer[4] = res0;
    arg_buffer[5] = res2;
    arg_buffer[6] = res3;
    arg_buffer[0] = reinterpret_cast<void *>(6);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8689 = encode_clo(alloc_clo(lam8689_fptr, 0));

void lam8691_fptr() // lam8691
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8692 = arg_buffer[1];
    // reading env and args
    void *res2 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8692);
    void *list = decode_clo_array[5];
    void *f = decode_clo_array[4];
    void *res1 = decode_clo_array[3];
    void *res0 = decode_clo_array[2];
    void *kont8490 = decode_clo_array[1];

    // creating new closure instance
    void **clo9007 = alloc_clo(lam8689_fptr, 5);

    // setting env list
    clo9007[1] = kont8490;
    clo9007[2] = res0;
    clo9007[3] = res1;
    clo9007[4] = res2;
    clo9007[5] = list;
    void *f8491 = encode_clo(clo9007);

    // creating new closure instance
    void **clo9008 = alloc_clo(lam8687_fptr, 2);

    // setting env list
    clo9008[1] = f8491;
    clo9008[2] = f;
    void *f8493 = encode_clo(clo9008);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8493;
    arg_buffer[3] = res2;
    arg_buffer[4] = res1;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8691 = encode_clo(alloc_clo(lam8691_fptr, 0));

void lam8693_fptr() // lam8693
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8694 = arg_buffer[1];
    // reading env and args
    void *res0 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8694);
    void *list = decode_clo_array[5];
    void *f = decode_clo_array[4];
    void *kont8490 = decode_clo_array[3];
    void *f2 = decode_clo_array[2];
    void *res1 = decode_clo_array[1];

    // creating new closure instance
    void **clo9009 = alloc_clo(lam8691_fptr, 5);

    // setting env list
    clo9009[1] = kont8490;
    clo9009[2] = res0;
    clo9009[3] = res1;
    clo9009[4] = f;
    clo9009[5] = list;
    void *f8494 = encode_clo(clo9009);

    mpf_t *mpfvar9010 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init_set_str(*mpfvar9010, "24.0", 10);
    void *a8400 = encode_mpf(mpfvar9010);

    // creating new closure instance
    void **clo9011 = alloc_clo(lam8684_fptr, 2);

    // setting env list
    clo9011[1] = f2;
    clo9011[2] = f8494;
    void *f8496 = encode_clo(clo9011);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8496;
    arg_buffer[3] = a8400;
    arg_buffer[4] = res0;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8693 = encode_clo(alloc_clo(lam8693_fptr, 0));

void lam8695_fptr() // lam8695
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8696 = arg_buffer[1];
    // reading env and args
    void *res1 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8696);
    void *list = decode_clo_array[5];
    void *modulo = decode_clo_array[4];
    void *f = decode_clo_array[3];
    void *f2 = decode_clo_array[2];
    void *kont8490 = decode_clo_array[1];

    // creating new closure instance
    void **clo9012 = alloc_clo(lam8693_fptr, 5);

    // setting env list
    clo9012[1] = res1;
    clo9012[2] = f2;
    clo9012[3] = kont8490;
    clo9012[4] = f;
    clo9012[5] = list;
    void *f8497 = encode_clo(clo9012);

    mpz_t *mpzvar9013 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_si(*mpzvar9013, 28);
    void *a8398 = encode_mpz(mpzvar9013);

    // creating new closure instance
    void **clo9014 = alloc_clo(lam8681_fptr, 2);

    // setting env list
    clo9014[1] = f8497;
    clo9014[2] = modulo;
    void *f8499 = encode_clo(clo9014);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8499;
    arg_buffer[3] = a8398;
    arg_buffer[4] = res1;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8695 = encode_clo(alloc_clo(lam8695_fptr, 0));

void call_u452_fptr() // call-2
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8697 = arg_buffer[1];
    // reading env and args
    void *kont8490 = arg_buffer[2];
    void *f = arg_buffer[3];
    void *f2 = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9015 = alloc_clo(lam8695_fptr, 5);

    // setting env list
    clo9015[1] = kont8490;
    clo9015[2] = f2;
    clo9015[3] = f;
    clo9015[4] = modulo;
    clo9015[5] = list;
    void *f8500 = encode_clo(clo9015);

    mpz_t *mpzvar9016 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_si(*mpzvar9016, 4);
    void *a8394 = encode_mpz(mpzvar9016);
    mpz_t *mpzvar9017 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_si(*mpzvar9017, 3);
    void *a8395 = encode_mpz(mpzvar9017);
    mpz_t *mpzvar9018 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_si(*mpzvar9018, 1);
    void *a8396 = encode_mpz(mpzvar9018);

    // creating new closure instance
    void **clo9019 = alloc_clo(lam8676_fptr, 2);

    // setting env list
    clo9019[1] = _u43;
    clo9019[2] = f8500;
    void *f8502 = encode_clo(clo9019);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8502;
    arg_buffer[3] = a8394;
    arg_buffer[4] = a8395;
    arg_buffer[5] = a8396;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *call_u452 = encode_clo(alloc_clo(call_u452_fptr, 0));

void lam8698_fptr() // lam8698
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8699 = arg_buffer[1];
    // reading env and args
    void *xy8403 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8699);
    void *kont8503 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8503);
    arg_buffer[2] = xy8403;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8503))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8698 = encode_clo(alloc_clo(lam8698_fptr, 0));

void call_fptr() // call
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8700 = arg_buffer[1];
    // reading env and args
    void *kont8503 = arg_buffer[2];
    void *f3 = arg_buffer[3];
    void *f2 = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9020 = alloc_clo(lam8698_fptr, 1);

    // setting env list
    clo9020[1] = kont8503;
    void *f8504 = encode_clo(clo9020);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(call_u452);
    arg_buffer[2] = f8504;
    arg_buffer[3] = modulo;
    arg_buffer[4] = _u43;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call_u452))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *call = encode_clo(alloc_clo(call_fptr, 0));

void lam8701_fptr() // lam8701
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8702 = arg_buffer[1];
    // reading env and args
    void *xy8404 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8702);
    void *kont8505 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8505);
    arg_buffer[2] = xy8404;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8505))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8701 = encode_clo(alloc_clo(lam8701_fptr, 0));

void brouhaha_main_fptr() // brouhaha_main
{
    call_counter++;
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8703 = arg_buffer[1];
    // reading env and args
    void *kont8505 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9021 = alloc_clo(lam8701_fptr, 1);

    // setting env list
    clo9021[1] = kont8505;
    void *f8506 = encode_clo(clo9021);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(call);
    arg_buffer[2] = f8506;
    arg_buffer[3] = _u47;
    arg_buffer[4] = _u42;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));

int main(int argc, char **argv)
{
    mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);
    // making a call to the brouhaha main function to kick off our C++ emission.
    void *fhalt_clo = encode_clo(alloc_clo(fhalt, 0));
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(brouhaha_main))[0]);
    arg_buffer[0] = 0;
    arg_buffer[2] = fhalt_clo;
    function_ptr();
}
