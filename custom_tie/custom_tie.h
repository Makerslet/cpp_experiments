#ifndef CUSTOM_TIE_H
#define CUSTOM_TIE_H

#include <tuple>
#include <functional>

// суть в алиасинге элементов tuple на другие объекты
template <typename... Args>
auto custom_tie(Args&... fields) {
    return std::tuple<Args&...>(fields...);
}

#endif // CUSTOM_TIE_H
