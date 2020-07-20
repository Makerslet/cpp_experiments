#include "default_template_parameters.h"
#include "common_type_example.h"
#include "specializations.h"
#include "deduction_guides.h"
#include "variadic_examples.h"
#include "assign_different_types.h"

#include <iostream>
#include <cassert>

void deduction_example()
{
    Container ct{"fds"};
}

void print_example()
{
    print_v1(1, 2.4, "hello", 78u);
    print_v2(1, 2.4, "hello", 78u);
    print_fe(1, 2.4, "hello", 78u);
}

void test_assign_diff_type()
{
    Stack<int> intsStack;
    Stack<float> floatsStack;
    floatsStack = intsStack;
}

int main(int, char**)
{
    foo();
    assert(max(1, 2.2) == max(2.2, 1));

    holder<int*, int*> h1(nullptr, nullptr);
    h1.print_self();

    holder<double, double> h2(2, 5);
    h2.print_self();

    holder<int, int> h3(2, 5);
    h3.print_self();

    holder<int*, int> h4(nullptr, 5);
    h4.print_self();

    print_example();
    test_assign_diff_type();
    return 0;
}
