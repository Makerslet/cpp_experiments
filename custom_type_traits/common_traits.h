#ifndef COMMON_TRAIS_H
#define COMMON_TRAIS_H

namespace custom_tt {

template <bool v>
struct value_holder {
    static constexpr bool value = v;
};

struct value_false : value_holder<false> {};
struct value_true :value_holder<true> {};

template <typename T1, typename T2>
struct is_same : value_false {};

template <typename T>
struct is_same<T, T> : value_true {};

}

#endif // COMMON_TRAIS_H
