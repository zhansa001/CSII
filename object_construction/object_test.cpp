//Sandy Zhang
//Main function for Object Construction
//10/2/24

#include <iostream>
#include "object_construction.hpp"

int main() {
    objConstruct obj1;
    objConstruct obj2 = obj1;
    objConstruct obj3;
    obj3 = obj2;

    return 0;
}