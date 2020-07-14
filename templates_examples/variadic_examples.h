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

#endif // VARIADIC_EXAMPLES_H
