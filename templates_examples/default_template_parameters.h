#ifndef DEFAULT_TEMPLATE_PARAMETERS_H
#define DEFAULT_TEMPLATE_PARAMETERS_H

#include <string>

template <typename T = std::string>
void foo(T = "")
{}

#endif // DEFAULT_TEMPLATE_PARAMETERS_H
