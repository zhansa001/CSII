// bigint Test Program
//
// Tests:  times_10, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == 3);
        std::cout << "3 * 1 = " << bi << std::endl;
        std::cout << std::endl;
    }

    {
        bigint bi(45);

        bi = bi.timesDigit(3);

        assert(bi == 135);
        std::cout << "45 * 3 = " << bi << std::endl;
        std::cout << std::endl;
    }

    {
        bigint bi(200);

        bi = bi.timesDigit(9);

        assert(bi == 1800);
        std::cout << "200 * 9 = " << bi << std::endl;
        std::cout << std::endl;
    }

    {
        bigint bi(235);

        bi = bi.timesDigit(9);

        assert(bi == 2115);
        std::cout << "235 * 9 = " << bi << std::endl;
        std::cout << std::endl;
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(123456789);
        
        // Test 
        bi = bi.timesDigit(6);
        
        // Verify
        assert(bi == 740740734);

        std::cout << "123456789 * 6 = " << bi << std::endl;
        std::cout << std::endl;
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(22334455);
        
        // Test 
        bi = bi.timesDigit(7);
        
        // Verify
        assert(bi == 156341185);

        std::cout << "22334455 * 7 = " << bi << std::endl;
        std::cout << std::endl;
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(122334455);
        
        // Test 
        bi = bi.timesDigit(8);
        
        // Verify
        assert(bi == 978675640);

        std::cout << "122334455 * 8 = " << bi << std::endl;
        std::cout << std::endl;
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("122334455661012345678910009876543210");
        
        // Test 
        bi = bi.timesDigit(9);
        
        // Verify
        assert(bi == "1101010100949111111110190088888888890");

        std::cout << "12233445566 * 9 = " << bi << std::endl;
        std::cout << std::endl;
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("1234567891098765432177889911223344556600000000000");
        
        // Test 
        bi = bi.timesDigit(9);
        
        // Verify
        assert(bi == "11111111019888888889601009201010101009400000000000");

        std::cout << "12345678910987654321778899112233445566 * 9 = " << bi << std::endl;
        std::cout << std::endl;
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("1234567891098765432177889911223344556600000000000123456789109876543217788991122334455660000000000012345678910987654321778899112233445566000000000001234567891098765432177889911223344556600000000000");
        
        // Test 
        bi = bi.timesDigit(9);
        
        // Verify
        assert(bi == "11111111019888888889601009201010101009400000000001111111101988888888960100920101010100940000000000111111110198888888896010092010101010094000000000011111111019888888889601009201010101009400000000000");

        std::cout << "1234567891098765432177889911223344556600000000000123456789109876543217788991122334455660000000000012345678910987654321778899112233445566000000000001234567891098765432177889911223344556600000000000 * 9 = " << bi << std::endl;
        std::cout << std::endl;
    }
    //Add test cases as needed.
    
    std::cout << "Done testing bigint * digit" << std::endl;
    std::cout << std::endl;
    return 0;
}
