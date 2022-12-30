#include <iostream>
#include "Rational.hpp"

void demoRational() {
    std::cout << std::endl << std::endl;

    /************************************************************************************************************
     ************************************************ CONSTRUCTOR ***********************************************
     ************************************************************************************************************/

    std::cout << "---- Constructor : ----" << std::endl;

    // By default, the template type is int.
    Arkulib::Rational r0{};
    Arkulib::Rational r1{1, 4};
    Arkulib::Rational r2{0.75};
    Arkulib::Rational r3{5, 10};
    Arkulib::Rational r4 = Arkulib::Rational<int>::One();
    Arkulib::Rational<int>::print(r0, r1, r2, r3, r4);

    // We can create a rational with the type we want
    // And copy it :
    Arkulib::Rational<long long int> r5{r3};
    std::cout << "Copying (5/10) rational: " << r4 << std::endl;

    Arkulib::Rational<long long int> r6{42334434324343,42434343344323223};
    std::cout << "Here is a very long rational typed in long long int : " << r6 << std::endl << std::endl;

    try {
        Arkulib::Rational<int> r7{r6};
    } catch (Arkulib::Exceptions::NumberTooLargeException) {
        std::cout << "Here we caught an exception because we try to convert the large rational into a Rational<int> (too short to store it)" << std::endl << std::endl;
    }

    /************************************************************************************************************
     *********************************************** GETTERS/SETTERS ********************************************
     ************************************************************************************************************/

    std::cout << "---- Gettes and Setters : ----" << std::endl << std::endl;
    std::cout << "You can access the value by the getters with the hook operator (ratio[0] for num, ratio[1] for den) " << std::endl;
    std::cout << "You can also set the value with the hook operator (ratio[0] = 2;) " << std::endl;
    std::cout << "Obviously, you can use the basic setters and getters. " << std::endl << std::endl;

    /************************************************************************************************************
     ************************************************* OPERATIONS ***********************************************
     ************************************************************************************************************/

    std::cout << "---- Some Operations : ----" << std::endl << std::endl;

    Arkulib::Rational operations;
    std::cout << "We initiate operations at 0" << std::endl << std::endl;
    std::cout << "Any operations can be done in any directions and with any basic types." << std::endl;
    std::cout << "Example : int + Rational; Rational + float; Rational + Rational; ..." << std::endl;

    std::cout << operations << " += 0.25  == " << (operations += 0.25) << std::endl;
    std::cout << operations << " *= (1/2)  == " << (operations *= r3) << std::endl;
    std::cout << operations << "++         == "; (++operations); std::cout << operations << std::endl;
    std::cout << operations << " /= (3/4)  == " << (operations /= r2) << std::endl;
    std::cout << operations << " -= (1/4)  == " << (operations -= r1) << std::endl;
    std::cout << operations << "--         == "; (--operations); std::cout << operations << std::endl;

    std::cout << std::endl << std::endl << "---- Some Others Operations : ----" << std::endl << std::endl;

    std::cout << operations << " inversed == " << (operations = operations.inverse()) << std::endl;
    std::cout << operations << " sqrt     == " << (operations = operations.sqrt()) << std::endl;
    std::cout << operations << " cos      == " << (operations = operations.cos()) << std::endl;
    std::cout << operations << " approxim == " << (operations = operations.toApproximation()) << std::endl;
    std::cout << operations << " exp      == " << (operations = operations.exp()) << std::endl;
    std::cout << operations << " approxim == " << (operations = operations.toApproximation()) << std::endl;

    std::cout << std::endl << std::endl << "---- Min/Max : ----" << std::endl << std::endl;
    Arkulib::Rational<int>::print(r0, r1, r2, r3, r4);
    std::cout << "The min is: " << Arkulib::Rational<int>::min(r0, r1, r2, r3, r4) << std::endl;
    std::cout << "The max is: " << Arkulib::Rational<int>::max(r0, r1, r2, r3, r4) << std::endl;

    std::cout << std::endl << std::endl << "---- Basic method : ----" << std::endl << std::endl;
    std::cout << r0 << ".isInteger() == " << (r0.isInteger() ? "true" : "false") << std::endl;
    std::cout << r0 << ".isNegative() == " << (r0.isNegative() ? "true" : "false") << std::endl;
    std::cout << r0 << ".isZero() == " << (r0.isZero() ? "true" : "false") << std::endl << std::endl;

    std::cout << r4 << ".isInteger() == " << (r4.isInteger() ? "true" : "false") << std::endl;
    std::cout << r4 << ".isNegative() == " << (r4.isNegative() ? "true" : "false") << std::endl;
    std::cout << r4 << ".isZero() == " << (r4.isZero() ? "true" : "false") << std::endl << std::endl;

    Arkulib::Rational r8(-1,2);
    std::cout << r8 << ".isInteger() == " << (r8.isInteger() ? "true" : "false") << std::endl;
    std::cout << r8 << ".isNegative() == " << (r8.isNegative() ? "true" : "false") << std::endl;
    std::cout << r8 << ".isZero() == " << (r8.isZero() ? "true" : "false") << std::endl;
}