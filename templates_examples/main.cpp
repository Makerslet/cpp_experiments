#include "default_template_parameters.h"
#include "common_type_example.h"

#include <iostream>
#include <cassert>

int main(int, char**)
{
    foo();
    assert(max(1, 2.2) == max(2.2, 1));

    return 0;
}
