#include <iostream>
#include "ERational.hpp"

void demoERational() {
    std::cout << std::endl << std::endl;

    /************************************************************************************************************
     ************************************************ CONSTRUCTOR ***********************************************
     ************************************************************************************************************/

    std::cout << "---- ERational Constructor : ----" << std::endl;

    // By default, the template type is int.
    Arkulib::ERational r0{};
    Arkulib::ERational r1{1, 4};
    Arkulib::ERational r2{0.75};
    Arkulib::ERational r3{5, 10};
    Arkulib::ERational r4{1,1};
    Arkulib::ERational r5{Arkulib::Rational(2,10)};

    /************************************************************************************************************
     ************************************************* OPERATIONS ***********************************************
     ************************************************************************************************************/

    std::cout << "---- Some Operations : ----" << std::endl << std::endl;

    Arkulib::ERational operations;
    std::cout << "We initiate operations at 0" << std::endl << std::endl;
    std::cout << "Only ERational and ERational operations (example: erational + erational) are implemented in order to"
                 " ease the code but it could be very easily done using the same system as in Rational.hpp." << std::endl;

    std::cout << r0 << " + " << r1 << " = " << (operations = r0 + r1) << std::endl;
    std::cout << "(" << operations << ") * (" << r2 << ") = " << (operations = operations * r2) << std::endl;
    std::cout << "(" << operations << ") / (" << r3 << ") = " << (operations = operations / r3) << std::endl;
    std::cout << operations << " - " << r3 << " = " << (operations = operations - r3) << std::endl;

    std::cout << std::endl << std::endl << "---- Basic method : ----" << std::endl << std::endl;
    std::cout << r0 << ".isInteger() == " << (r0.isInteger() ? "true" : "false") << std::endl;
    std::cout << r0 << ".isNegative() == " << (r0.isNegative() ? "true" : "false") << std::endl;
    std::cout << r0 << ".isZero() == " << (r0.isZero() ? "true" : "false") << std::endl << std::endl;

    std::cout << r4 << ".isInteger() == " << (r4.isInteger() ? "true" : "false") << std::endl;
    std::cout << r4 << ".isNegative() == " << (r4.isNegative() ? "true" : "false") << std::endl;
    std::cout << r4 << ".isZero() == " << (r4.isZero() ? "true" : "false") << std::endl << std::endl;

    Arkulib::ERational r8(-1,2);
    std::cout << r8 << ".isInteger() == " << (r8.isInteger() ? "true" : "false") << std::endl;
    std::cout << r8 << ".isNegative() == " << (r8.isNegative() ? "true" : "false") << std::endl;
    std::cout << r8 << ".isZero() == " << (r8.isZero() ? "true" : "false") << std::endl;
}