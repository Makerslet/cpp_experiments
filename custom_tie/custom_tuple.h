#ifndef CUSTOM_TUPLE_H
#define CUSTOM_TUPLE_H

#include <cstddef>
#include <utility>

template<typename... Args>
struct custom_tuple;

template <typename Head, typename... Tail>
struct custom_tuple<Head, Tail...> : custom_tuple<Tail...>
{
    custom_tuple(Head head, Tail... tail) :
        custom_tuple<Tail...>(tail...), _head(head)
    {}

    using base_type = custom_tuple<Tail...>;
    using value_type = Head;

    base_type& base = static_cast<base_type&>(*this);
    Head _head;
};

template <>
struct custom_tuple<>
{};

template<std::size_t I, typename Head, typename... Args>
struct getter
{
    using return_type = typename getter<I-1, Args...>::return_type;
    static return_type get(custom_tuple<Head, Args...> t)
    {
        return getter<I-1, Args...>::get(t);
    }
};

template<typename Head, typename... Args>
struct getter<0, Head, Args...>
{
    using return_type = typename custom_tuple<Head, Args...>::value_type;
    static return_type get(custom_tuple<Head, Args...> t)
    {
        return t._head;
    }
};


template<std::size_t I, typename Head, typename... Args>
typename getter<I, Head, Args...>::return_type
custom_get(custom_tuple<Head, Args...> t)
{
    return getter<I, Head, Args...>::get(t);
}


#endif // CUSTOM_TUPLE_H
