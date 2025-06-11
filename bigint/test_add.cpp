// bigint Test Program
//
// Tests:  int constructor, uses ==
// 
// NEED TO IMPLEMENT
//Sandy Zhang
//
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
        result = left + right;

        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);

        std::cout << left << " + " << right << " = " << result << "\n" << std::endl;
    }

    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(0);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 0);
      assert(result == 1);

      std::cout << left << " + " << right << " = " << result << "\n" << std::endl;
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 1);
      assert(result == 2);

      std::cout << left << " + " << right << " = " << result << "\n" << std::endl;
    }

    {//1
        //------------------------------------------------------
        // Setup fixture
        bigint left(9);
        bigint right(5);
        bigint result;

        // Test 
        result = left + right;

        // Verify
        assert(left   == 9);
        assert(right  == 5);
        assert(result == 14);

        std::cout << left << " + " << right << " = " << result << "\n" << std::endl;
    }

    {//2
      //------------------------------------------------------
      // Setup fixture
      bigint left(100);
      bigint right(40);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 100);
      assert(right  == 40);
      assert(result == 140);

      std::cout << left << " + " << right << " = " << result << "\n" << std::endl;
    }

    {//3
      //------------------------------------------------------
      // Setup fixture
      bigint left(45);
      bigint right(35);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 45);
      assert(right  == 35);
      assert(result == 80);

      std::cout << left << " + " << right << " = " << result << "\n" << std::endl;
    }

    {//4
      //------------------------------------------------------
      // Setup fixture
      bigint left(120);
      bigint right(80);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 120);
      assert(right  == 80);
      assert(result == 200);

      std::cout << left << " + " << right << " = " << result << "\n" << std::endl;
    }

    {//5
      //------------------------------------------------------
      // Setup fixture
      bigint left(95);
      bigint right(100);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 95);
      assert(right  == 100);
      assert(result == 195);

      std::cout << left << " + " << right << " = " << result << "\n" << std::endl;
    }

    {//6
      //------------------------------------------------------
      // Setup fixture
      bigint left(105);
      bigint right(89);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 105);
      assert(right  == 89);
      assert(result == 194);

      std::cout << left << " + " << right << " = " << result << "\n" << std::endl;
    }  

    {//7
      //------------------------------------------------------
      // Setup fixture
      bigint left("123456789101122334455667788991100123456789101122334455667788991100");
      bigint right("123456789101122334455667788991100123456789101122334455667788991100");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "123456789101122334455667788991100123456789101122334455667788991100");
      assert(right  == "123456789101122334455667788991100123456789101122334455667788991100");
      assert(result == "246913578202244668911335577982200246913578202244668911335577982200");

      std::cout << left << " + " << right << " = " << result << "\n" << std::endl;
    }  

    {//8
      //------------------------------------------------------
      // Setup fixture
      bigint left(170);
      bigint right(28);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 170);
      assert(right  == 28);
      assert(result == 198);

      std::cout << left << " + " << right << " = " << result << "\n" << std::endl;
    } 
    
    {//9
      //------------------------------------------------------
      // Setup fixture
      bigint left(74);
      bigint right(124);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 74);
      assert(right  == 124);
      assert(result == 198);

      std::cout << left << " + " << right << " = " << result << "\n" << std::endl;
    } 

    {//10
      //------------------------------------------------------
      // Setup fixture
      bigint left(195);
      bigint right(5);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 195);
      assert(right  == 5);
      assert(result == 200);

      std::cout << left << " + " << right << " = " << result << "\n" << std::endl;
    } 
    
    {//11
      //------------------------------------------------------
      // Setup fixture
      bigint left(76);
      bigint right("1234567891098765432177889911223344556600000000000123456789109876543217788991122334455660000000000012345678910987654321778899112233445566000000000001234567891098765432177889911223344556600000000000");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 76);
      assert(right  == "1234567891098765432177889911223344556600000000000123456789109876543217788991122334455660000000000012345678910987654321778899112233445566000000000001234567891098765432177889911223344556600000000000");
      assert(result == "1234567891098765432177889911223344556600000000000123456789109876543217788991122334455660000000000012345678910987654321778899112233445566000000000001234567891098765432177889911223344556600000000076");

      std::cout << left << " + " << right << " = " << result << "\n" << std::endl;
    }

        
    {//12
      //------------------------------------------------------
      // Setup fixture
      bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999990000000000000000000000000000000000000000");
      bigint right(110);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999990000000000000000000000000000000000000000");
      assert(right  == 110);
      assert(result == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999990000000000000000000000000000000000000110");

      std::cout << left << " + " << right << " = " << result << "\n" << std::endl;
    } 

    {//13
      //------------------------------------------------------
      // Setup fixture
      bigint left(105);
      bigint right(5);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 105);
      assert(right  == 5);
      assert(result == 110);

      std::cout << left << " + " << right << " = " << result << "\n" << std::endl;
    } 
    
    {//14
      //------------------------------------------------------
      // Setup fixture
      bigint left(156);
      bigint right(24);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 156);
      assert(right  == 24);
      assert(result == 180);

      std::cout << left << " + " << right << " = " << result << "\n" << std::endl;
    } 
    
    
    std::cout << "Done with testing addition." << std::endl;
    std::cout << std::endl;
    return 0;
}
