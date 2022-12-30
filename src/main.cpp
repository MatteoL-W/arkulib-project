#include <iostream>

void demoSuite();
void demoRational();
void demoERational();

int main() {
    std::string introduction;
    std::cout << "Do you want to get a introduction to Arkulib ? (y/n)" << std::endl;
    std::cin >> introduction;

    if (introduction == "y") {
        demoSuite();
    }

    //////////

    std::string arkulib;
    std::cout << std::endl << "Do you want to get a short demo of Arkulib Rational ? (y/n)" << std::endl;
    std::cin >> arkulib;

    if (arkulib == "y") {
        demoRational();
    }

    ////////////////

    std::string ERational;
    std::cout << std::endl << "Do you want to get a short demo of Arkulib Experimental Rational System ? (y/n)" << std::endl;
    std::cin >> ERational;

    if (ERational == "y") {
        demoERational();
    }


}