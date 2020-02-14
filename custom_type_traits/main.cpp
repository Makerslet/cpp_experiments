#include <iostream>
#include "custom_type_traits.h"
#include "is_integral_type.h"
#include "is_floating_type.h"

using namespace custom_tt;

int main(int argc, char * argv[]) {

    (void) argc;
    (void) argv;

    // is_same
    std::cout << "is_same<int, int>: "          << is_same<int, int>::value             << std::endl;
    std::cout << "is_same<int, std::int64_t>: " << is_same<int, std::int64_t>::value    << std::endl;
    std::cout << "is_same<int, std::int32_t>: " << is_same<int, std::int32_t>::value    << std::endl;
    std::cout << std::endl;

    // is_void
    std::cout << "is_void<int>: "       << is_void<int>::value              << std::endl;
    std::cout << "is_void<void>: "      << is_void<void>::value             << std::endl;
    std::cout << "is_void<nullptr_t>: " << is_void<std::nullptr_t>::value   << std::endl;
    std::cout << std::endl;

    // is_void
    std::cout << "is_null_pointer<int*>: "              << is_null_pointer<int*>::value             << std::endl;
    std::cout << "is_null_pointer<void*>: "             << is_null_pointer<void*>::value            << std::endl;
    std::cout << "is_null_pointer<std::nullptr_t>: "    << is_null_pointer<std::nullptr_t>::value   << std::endl;
    std::cout << std::endl;

    // is_void
    std::cout << "is_integral<int>: "               << is_integral<int>::value             << std::endl;
    std::cout << "is_integral<char>: "              << is_integral<char>::value             << std::endl;
    std::cout << "is_integral<void>: "              << is_integral<void>::value            << std::endl;
    std::cout << "is_integral<std::nullptr_t>: "    << is_integral<std::nullptr_t>::value   << std::endl;
    std::cout << std::endl;

    // is_floating_type
    std::cout << "is_floating_type<int>: "      << is_floating_type<int>::value     << std::endl;
    std::cout << "is_floating_type<float>: "    << is_floating_type<float>::value   << std::endl;
    std::cout << "is_floating_type<double>: "   << is_floating_type<double>::value  << std::endl;
    std::cout << std::endl;

    // is_array
    std::cout << "is_array<int>: "      << is_array<int>::value     << std::endl;
    std::cout << "is_arrat<int[]>: "    << is_array<int[]>::value   << std::endl;
    std::cout << std::endl;

    return 0;
}
