#include <iostream>
#include "Rational.hpp"

int main() {
    Arkulib::Rational arkulibUn{1, 3};
    double doubleUn = 1. / 3.;

    int n = 0;
    std::cout << "u[n+1] = 4 * u[n] - 1" << std::endl << std::endl;

    std::cout << "The suite is constant with the value 1/3." << std::endl;
    std::cout << "It diverges blatantly from 20 iterations with the double." << std::endl << std::endl;

    std::cout << "Give the number of iteration you want to check with a double and with the Arkulib Rationals (n of u[n])" << std::endl;
    std::cout << "Number of iterations : " << std::endl;
    std::cin >> n;

    auto suiteWithDouble = [](const double un){return 4 * un - 1;};
    auto suiteWithArkulibRationals = [](const Arkulib::Rational<int> un){return 4 * un - 1;};

    for (int i = 1; i < n; i++) {
        arkulibUn = suiteWithArkulibRationals(arkulibUn);
        doubleUn = suiteWithDouble(doubleUn);
    }

    std::cout << "Arkulib Rational solution : " << arkulibUn << std::endl;
    std::cout << "double solution : " << doubleUn << std::endl;
}