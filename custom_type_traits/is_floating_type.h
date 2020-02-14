#ifndef IS_FLOATING_TYPE_H
#define IS_FLOATING_TYPE_H

#include "common_traits.h"

namespace custom_tt {

template <typename T>
struct is_float : is_same<T, float>
{};


template <typename T>
struct is_double : is_same<T, double>
{};


template <typename T>
struct is_l_double : is_same<T, long double>
{};

template <typename T>
struct is_floating_type : value_holder<
        is_float<T>::value || is_double<T>::value || is_l_double<T>::value>
{};

}

#endif // IS_FLOATING_TYPE_H
