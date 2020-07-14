#ifndef DEDUCTION_GUIDES_H
#define DEDUCTION_GUIDES_H

#include <vector>
#include <string>

template <typename T>
class Container
{
public:
    Container(const T& elem) :
        _elems({elem})
    {}
private:
    std::vector<T> _elems;
};

// C++17 deduction guides
Container(char const*) -> Container<std::string>;

#endif // DEDUCTION_GUIDES_H
