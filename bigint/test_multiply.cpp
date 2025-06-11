// bigint Test Program
//
// Tests:  multiply, uses ==
//Sandy Zhang
//Part of Milestone 2, due 9/16/2024
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);

        std::cout << "0 * 0 = " << result << std::endl;
        std::cout << std::endl;
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(14567);
        bigint right(55);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 14567);
        assert(right  == 55);
        assert(result == 801185);

        std::cout << "14567 * 55 = " << result << std::endl;
        std::cout << std:: endl;
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(2389100);
        bigint right(456);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 2389100);
        assert(right  == 456);
        assert(result == 1089429600);

        std::cout << "2389100 * 456 = " << result << std::endl;
        std::cout << std::endl;
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(123);
        bigint right(56);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==  123);
        assert(right  ==   56);
        assert(result == 6888);

        std::cout << "123 * 56 = " << result << std::endl;
        std::cout << std::endl;
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(65);
        bigint right(321);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==    65);
        assert(right  ==   321);
        assert(result == 20865);

        std::cout << "321 * 65 = " << result << std::endl;
        std::cout << std::endl;
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(9999);
        bigint right(2);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==  9999);
        assert(right  ==     2);
        assert(result == 19998);

        std::cout << "9999 * 2 = " << result << std::endl;
        std::cout << std::endl;
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(2);
        bigint right(999999);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==       2);
        assert(right  ==  999999);
        assert(result == 1999998);

        std::cout << "2 * 999999 = " << result << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(99);
        bigint right(99);
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left   ==  99);
        assert(right  ==  99);
        assert(result ==  9801);

        std::cout << "99 * 99 = " << result << std::endl;
        std::cout << std::endl;
    }


    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("2222");
        bigint right("888888888888888888888888888888888888");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "2222");
        assert(right  == "888888888888888888888888888888888888");
        assert(result == "1975111111111111111111111111111111109136");

        std::cout << "2222 * 888888888888888888888888888888888888 = " << result << std::endl;
        std::cout << std::endl;        

    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("777777777777777777777777777777777777777777777");
        bigint right("333333");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "777777777777777777777777777777777777777777777");
        assert(right  == "333333");
        assert(result == "259258999999999999999999999999999999999999999740741");

        std::cout << "777777777777777777777777777777777777777777777 * 333333 = " << result << std::endl;
        std::cout << std::endl;   
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("111111111111111111111111111111111111111111");
        bigint right("999999999999999999999999999999999999999999");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "111111111111111111111111111111111111111111");
        assert(right  == "999999999999999999999999999999999999999999");
        assert(result == "111111111111111111111111111111111111111110888888888888888888888888888888888888888889");

        std::cout << "111111111111111111111111111111111111111111 * 999999999999999999999999999999999999999999 = " << result << std::endl;
        std::cout << std::endl;
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("88888888888888888888888888888888888888888888888");
        bigint right("999999");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "88888888888888888888888888888888888888888888888");
        assert(right  == "999999");
        assert(result == "88888799999999999999999999999999999999999999999111112");

        std::cout << "88888888888888888888888888888888888888888888888 * 999999 = " << result << std::endl;
        std::cout << std::endl;
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("999999999999999999999999999999999999");
        bigint right("999999999999999999999999999999999999999999");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "999999999999999999999999999999999999");
        assert(right  == "999999999999999999999999999999999999999999");
        assert(result == "999999999999999999999999999999999998999999000000000000000000000000000000000001");

        std::cout << "999999999999999999999999999999999999 * 999999999999999999999999999999999999999999 = " << result << std::endl;
        std::cout << std::endl;
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("12345678910987654321778899112233445566");
        bigint right("111111111111111111111111111111111111111111");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "12345678910987654321778899112233445566");
        assert(right  == "111111111111111111111111111111111111111111");
        assert(result == "1371742101220850480197655456914827285111109739369009890260630913455654196283826");

        std::cout << "12345678910987654321778899112233445566 * 111111111111111111111111111111111111111111 = " << result << std::endl;
        std::cout << std::endl;
    }

        {
        //------------------------------------------------------
        // Setup fixture
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(10000);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        assert(right  == 10000);
        assert(result == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999990000");

        std::cout << "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999 * 1 = ";
        std::cout << result << std::endl;
        std::cout << std::endl;
    }

    std::cout << "Done testing multiply" << std::endl;
    std::cout << std::endl;
    return 0;
}