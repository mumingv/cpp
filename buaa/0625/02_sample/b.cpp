#include "b.h"
#include <iostream>


B::B() {

    std::cout << "B's constructor function." << std::endl;
}

B::~B() {
    std::cout << "B's destructor function." << std::endl;
}

void B::f() {
    std::cout << "B's f is executed." << std::endl;
}

void B::print() {
    std::cout << "B's print is executed." << std::endl;
}



