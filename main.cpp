
#include <iostream>
#include "Calculator.h"

int main() {
    std::cout << MyCalculator::Calculator::getResult("Add", 1, 2) << std::endl;
    std::cout << MyCalculator::Calculator::getResult("Sub", 1, 2) << std::endl;
    return 0;
}
