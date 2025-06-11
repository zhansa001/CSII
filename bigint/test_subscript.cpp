// bigint Test Program
//
// Tests:  subscript, uses ==
//
// NEED TO IMPLEMENT
// 
//Sandy Zhang
//Part of Milestone 2, due 9/16/2024
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    
    {
        // Setup
        bigint bi(4);

        // Test 
        int digit = bi[0];
        // Verify
        assert(bi == 4);  //Wrong.  Will FAIL.  Fix and add test cases.
        assert(digit == 4);

        std::cout << bi << "\n" << "bi[0] == " << bi[0] << std::endl;
        std::cout << std::endl;
    }

    {
        bigint bi(32);

        assert(bi[0] == 2);
        assert(bi[1] == 3);

        std::cout << bi << "\n" << "bi[0] == " << bi << std::endl;
        std::cout << "bi[1] == " << bi[1] << std::endl;
        std::cout << std::endl;

    }
    {
        bigint bi(345);

        std::cout << bi << "\n" << "bi[0] == " << bi[0] << std::endl;
        std::cout << "bi[1] == " << bi[1] << std::endl;
        std::cout << "b[2] == " << bi[2] << std::endl;
        std::cout<< std::endl;

    }

    {
        bigint bi(2345);

        std::cout << bi << "\n" << "bi[0] == " << bi[0] << std::endl;
        std::cout << "bi[1] == " << bi[1] << std::endl;
        std::cout << "b[2] == " << bi[2] << std::endl;
        std::cout << "b[3] == " << bi[3] << std::endl;
        std::cout << std::endl;

    }
    
    //Add test cases!!

    std::cout << "Done testing subscript." << std::endl;
    std::cout << std::endl;
    return 0;
}

