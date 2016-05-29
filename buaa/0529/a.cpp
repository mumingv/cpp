#include "a.h"
#include <iostream>

A::A() {

    std::cout << "A's constructor function." << std::endl;
}

A::~A() {
    std::cout << "A's destructor function." << std::endl;
}

void A::mm() {
    std::cout << "A's mm is executed." << std::endl;
}

