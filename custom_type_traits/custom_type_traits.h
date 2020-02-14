#ifndef CUSTOM_TYPE_TRAITS_H
#define CUSTOM_TYPE_TRAITS_H

#include <cstddef>
#include "common_traits.h"

namespace custom_tt {

template <typename T>
struct is_void : is_same<T, void> {};

template <typename T>
struct is_null_pointer : is_same<T, std::nullptr_t> {};



}

#endif // CUSTOM_TYPE_TRAITS_H
