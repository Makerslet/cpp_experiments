#ifndef CUSTOM_TYPE_TRAITS_H
#define CUSTOM_TYPE_TRAITS_H

#include <cstddef>

namespace custom_tt {

struct value_false {
    static constexpr bool value = false;
};

struct value_true {
    static constexpr bool value = true;
};

template <typename T1, typename T2>
struct is_same : value_false {};

template <typename T>
struct is_same<T, T> : value_true {};

template <typename T>
struct is_void : is_same<T, void> {};

template <typename T>
struct is_null_pointer : is_same<T, std::nullptr_t> {};

}

#endif // CUSTOM_TYPE_TRAITS_H
