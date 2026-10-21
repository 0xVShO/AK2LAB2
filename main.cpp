#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;
    double a = 3.6, b = 2.4;
    
    std::cout << "A = " << a << ", B = " << b << std::endl;
    std::cout << "Add: " << calc.Add(a, b) << std::endl;
    std::cout << "Sub: " << calc.Sub(a, b) << std::endl;
    
    return 0;
}
