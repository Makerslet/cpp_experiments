#include <string>
#include <tuple>
#include <cassert>
#include <iostream>
#include "custom_tie.h"
#include "custom_tuple.h"

auto getPerson() {

    const std::string name = "Petia";
    const std::string secondName = "Ivanoff";
    const std::size_t age = 23;
    const std::string department = "Sale";

    return std::make_tuple(name, secondName, age, department);
}

void test_only_custom_tie() {

    std::string name, secondName, department;
    std::size_t age;

    custom_tie(name, secondName, age, department) = getPerson();

    assert(name == "Petia");
    assert(secondName == "Ivanoff");
    assert(age == 23);
    assert(department == "Sale");
}

void test_only_custom_tuple() {

}

void test_custom_tuple_and_tie_together() {

}

int main(int argc, char * argv[]) {

    //test_only_custom_tie();
    custom_tuple<float, int, double> cs(1.1, 2, 5.6);
    std::cout << custom_get<0>(cs) << std::endl;
    std::cout << custom_get<1>(cs) << std::endl;
    std::cout << custom_get<2>(cs) << std::endl;

    return 0;
}
