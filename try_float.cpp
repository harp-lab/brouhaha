// #include <iostream>

// u64 encode_float(float val) {
//   u32 asU32 = *reinterpret_cast<u32 *>(&val);
//   return ((((u64)((u32)(asU32))) << 32) | FLOAT_VAL);
// }

// int main() {
//     float originalFloat = 3.14f; // Initial float value
//     std::cout << "Size of float: " << sizeof(float) << " bytes\n";
//     std::cout << originalFloat << std::endl;
//     std::cout << &originalFloat << std::endl;
//     std::cout << "Boolala" << std::endl;
//     uint64_t asU64 = *reinterpret_cast<uint64_t *>(&originalFloat);
//     uint32_t asU32 = *reinterpret_cast<uint32_t *>(&originalFloat);
//     std::cout << "asU64 " << asU64 << std::endl;
//     std::cout << "asU32 " << asU32 << std::endl;
//     // Reinterpret the bits of the float as uint32_t
//     uint32_t asInt = *reinterpret_cast<uint32_t*>(&originalFloat);
//     // Reinterpret the bits back to float
//     float backToFloat = *reinterpret_cast<float*>(&asInt);

//     std::cout << "Original float: " << originalFloat << std::endl;
//     std::cout << "As uint32_t: " << asInt << std::endl;
//     std::cout << "Back to float: " << backToFloat << std::endl;

//     return 0;
// }

#include <iostream>
#include <cstdint> // For uint32_t
#define PRINT(val) (std::cout << (val) << std::endl)

// Function to convert a float to uint32_t and back to float
float floatToUintAndBack(float originalFloat) {
    // Reinterpret the bits of the float as uint32_t
    uint32_t asInt = *reinterpret_cast<uint32_t*>(&originalFloat);
    PRINT(asInt);
    // Now reinterpret the bits back to a float
    float backToFloat = *reinterpret_cast<float*>(&asInt);

    return backToFloat;
}

int main() {
    float originalFloat = 3.14f;
    float recoveredFloat = floatToUintAndBack(originalFloat);

    std::cout << "Original float: " << originalFloat << std::endl;
    std::cout << "Recovered float: " << recoveredFloat << std::endl;

    return 0;
}


