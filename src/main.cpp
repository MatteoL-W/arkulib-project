#include <iostream>
#include "Rational.hpp"

int main() {
    Arkulib::Rational d1 = Arkulib::Rational(10, 7);
    std::cout << d1;
    Arkulib::Rational d2 = Arkulib::Rational(2, 3);
    Arkulib::Rational d3 = d1 + d2;
    std::cout << d3 << std::endl;
    d3 = d1 * d2;
    std::cout << d3<< std::endl;
    d3 = d1 / d2;
    std::cout << d3<< std::endl;
    d3 = d1.inverse();
    std::cout << d3<< std::endl;
    return 0;
}