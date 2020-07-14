#ifndef VARIADIC_EXAMPLES_H
#define VARIADIC_EXAMPLES_H
#include <iostream>

void print_v1()
{}

template<typename T, typename... Types>
void print_v1(T first, Types... args)
{
  std::cout << first << std::endl;
  print_v1(args...);
}

template <typename T>
void print_v2(T arg)
{
    std::cout << arg << std::endl;
}

template<typename T, typename... Types>
void print_v2(T first, Types... args)
{
    print_v2(first);
    print_v2(args...);
}

template <typename T>
class add_space
{
public:
    add_space(const T& value) :
        _ref(value)
    {}

    friend std::ostream& operator<<(std::ostream& os, add_space<T> arg)
    {
        return os << arg._ref << ' ';
    }

private:
    const T& _ref;
};

template <typename... Types>
void print_fe(Types... args)
{
    (std::cout << ... << add_space(args)) << std::endl;
}

#endif // VARIADIC_EXAMPLES_H
