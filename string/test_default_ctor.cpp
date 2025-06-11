//Sandy Zhang
//
//Test Default
//10/13/24

#include <iostream> 
#include <cassert>
#include "string.hpp"

int main() {

    std::cout << std::endl;
    {
        String str;

        assert(str == "");
        assert(str.length() == 0);
        assert(str.capacity() == 0);

        std::cout << "Empty" << str << std::endl;
        std::cout << "Capacity of string: " << str.capacity() << std::endl;
        std::cout << "Length of string: " << str.length() << std::endl;
        std::cout << std::endl;
    }

    std::cout << "Done testing default constructor." << std::endl;
    std::cout << std::endl;

    return 0;
}