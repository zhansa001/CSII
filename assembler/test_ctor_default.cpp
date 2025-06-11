//  Stack class test program
//
//  Tests: ctor_default
//
//Sandy Zhang
//10/26/24

#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "../string/string.hpp"

int main() {
    std::cout << std::endl;

    {//1
        stack<int> x;
        assert(x.empty() == true);

        std::cout << "Empty" << std::endl;
        std::cout << std::endl;
    }

    {//2
        stack<String> x;
        assert(x.empty() == true);

        std::cout << "Empty" << std::endl;
        std::cout << std::endl;
    }

    {//3
        stack<char> x;
        assert(x.empty() == true);

        std::cout << "Empty" << std::endl;
        std::cout << std::endl;
    }

    {//1
        stack<int> x;
        assert(x.full() == false);

        std::cout << "Empty" << std::endl;
        std::cout << std::endl;
    }

    {//2
        stack<String> x;
        assert(x.full() == false);

        std::cout << "Empty" << std::endl;
        std::cout << std::endl;
    }

    {//3
        stack<char> x;
        assert(x.full() == false);

        std::cout << "Empty" << std::endl;
        std::cout << std::endl;
    }

    std::cout << "Done Testing Default ctor!" << std::endl;
    std::cout << std::endl;
}