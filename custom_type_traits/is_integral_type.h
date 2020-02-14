#ifndef IS_INTEGRAL_TYPE_H
#define IS_INTEGRAL_TYPE_H

#include "common_traits.h"

// выглядит довольно глупо, но другой реализации пока не придумал
namespace custom_tt {

// интегральные типы
// bool
// char, signed char, unsigned char, char16_t, char32_t, wchar_t
// short int, int, long int, long long int
// unsigned short int, unsigned int, unsigned long int, unsigned long long int
//

template <typename T>
struct is_bool : is_same<T, bool> {};

template <typename T>
struct is_char : is_same<T, char> {};

template <typename T>
struct is_schar : is_same<T, signed char> {};

template <typename T>
struct is_uchar : is_same<T, unsigned char> {};

template <typename T>
struct is_char16_t : is_same<T, char16_t> {};

template <typename T>
struct is_char32_t : is_same<T, char32_t> {};

template <typename T>
struct is_wchar_t : is_same<T, wchar_t> {};

template <typename T>
struct is_s_int : is_same<T, short int> {};

template <typename T>
struct is_int : is_same<T, int> {};

template <typename T>
struct is_l_int : is_same<T, long int> {};

template <typename T>
struct is_ll_int : is_same<T, long long int> {};

template <typename T>
struct is_us_int : is_same<T, unsigned short int> {};

template <typename T>
struct is_u_int : is_same<T, unsigned int> {};

template <typename T>
struct is_ul_int : is_same<T, unsigned long int> {};

template <typename T>
struct is_ull_int : is_same<T, unsigned long long int> {};

template <typename T>
struct is_integral : value_holder<
            is_bool<T>::value       ||  is_char<T>::value       || is_schar<T>::value       ||
            is_uchar<T>::value      ||  is_char16_t<T>::value   || is_char32_t<T>::value    ||
            is_wchar_t<T>::value    ||  is_s_int<T>::value      || is_int<T>::value         ||
            is_l_int<T>::value      ||  is_ll_int<T>::value     || is_us_int<T>::value      ||
            is_u_int<T>::value      ||  is_ul_int<T>::value     || is_ull_int<T>::value
        >
{};

}

#endif // IS_INTEGRAL_TYPE_H
