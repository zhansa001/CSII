//Sandy Zhang
//Implementation for Object Construction
//10/2/24

#include <iostream>
#include "object_construction.hpp"

objConstruct::objConstruct() {
    std::cout << "Called Default Constructor!" << std::endl;
}

objConstruct::objConstruct(const objConstruct&) {
    std::cout << "Called Copy Constructor!" << std::endl;
}

objConstruct::~objConstruct() {
    std::cout << "Called Destructor!" << std::endl;
}

objConstruct& objConstruct::operator=(objConstruct) {
        std::cout << "Called Overloaded Assignment!" << std::endl;
        return *this;
}