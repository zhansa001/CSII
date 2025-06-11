//Sandy Zhang
//
//Test ctor Char
//10/12/24

#include <iostream> 
#include <cassert>
#include "string.hpp"

int main() {
    std::cout << std::endl;

    {
        String letter;
        // char str[letter];

        assert(letter == "");
        assert(letter.capacity() == 0);
        assert(letter.length() == 0);

        std::cout << "Empty" << std::endl;
        std::cout << "Capacity of string: " << letter.capacity() << std::endl;
        std::cout << "Length of string: " << letter.length() << std::endl;
        std::cout << std::endl;

    }

    {//1
        String letter = 'x';
        assert(letter == 'x');
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);

        std::cout << "x == " << letter << std::endl;
        std::cout << "Capacity of string: " << letter.capacity() << std::endl;
        std::cout << "Length of string: " << letter.length() << std::endl;
        std::cout << std::endl;
    }

    {//2
        String letter = 'Z';
        String letter2 = 'A';

        assert(letter != letter2);
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << " != " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }

    {//3
        String letter = 'M';
        String letter2 = 'm';

        assert(letter != letter2);
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << " != " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }

    {//4
        String letter = 'u';
        String letter2 = 'u';

        assert(letter == letter2);
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << " == " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }

    {//5
        String letter = '*';
        String letter2 = '*';

        assert(letter == letter2);
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << " == " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }

    {//6
        String letter = '-';
        String letter2 = '*';

        assert(letter != letter2);
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << " != " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }

    {//7
        String letter = '3';
        String letter2 = '3';

        assert(letter == letter2);
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << " == " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }

    {//8
        String letter;
        String letter2 = '3';

        assert(letter != letter2);
        assert(letter.capacity() == 0);
        assert(letter.length() == 0);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << "Empty != " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }

    {//9
        String letter = '@';
        String letter2 = '9';

        assert(letter != letter2);
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << " != " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }

    {//10 + 1
        String letter = '@';
        String letter2 = '@';

        assert(letter == letter2);
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << " == " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }

    {//11 + 1
        String letter = '%';
        String letter2 = '$';

        assert(letter != letter2);
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << " != " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }

    {//12 + 1
        String letter = '%';
        String letter2 = '%';

        assert(letter == letter2);
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << " == " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }

    {//13 + 1
        String letter = '$';
        String letter2 = '$';

        assert(letter == letter2);
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << " == " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }

    {//14 + 1
        String letter = '4';
        String letter2 = '$';

        assert(letter != letter2);
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << " != " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }

    {//15 + 1
        String letter = '4';
        String letter2 = '4';

        assert(letter == letter2);
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << " == " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }

    {//16 + 1
        String letter = 'U';
        String letter2 = 'a';

        assert(letter != letter2);
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << " != " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }

    {//17 + 1
        String letter = 'U';
        String letter2 = 'U';

        assert(letter == letter2);
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << " == " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }

    {//18 + 1
        String letter = 'p';
        String letter2 = 'P';

        assert(letter != letter2);
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << " != " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }

    {//19 + 1
        String letter = '^';
        String letter2 = '#';

        assert(letter != letter2);
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << " != " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }

    {//20 + 1
        String letter = 'A';
        String letter2 = 'A';

        assert(letter == letter2);
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << " == " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }

    {//21 + 1
        String letter = 'B';
        String letter2 = 'A';

        assert(letter != letter2);
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << " != " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }

    {//22 + 1
        String letter = 'B';
        String letter2 = 'b';

        assert(letter != letter2);
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << " != " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }

    {//23 + 1
        String letter = '-';
        String letter2 = '+';

        assert(letter != letter2);
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << " != " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }

    {//24 + 1
        String letter = '+';
        String letter2 = '+';

        assert(letter == letter2);
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << " == " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }

    {//25 + 1
        String letter = '-';
        String letter2 = '-';

        assert(letter == letter2);
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << " == " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }

    {//26 + 1
        String letter = '(';
        String letter2 = '(';

        assert(letter == letter2);
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << " == " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }

    {//26 + 1
        String letter = ')';
        String letter2 = ')';

        assert(letter == letter2);
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << " == " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }

    {//27 + 1
        String letter = '[';
        String letter2 = ')';

        assert(letter != letter2);
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << " != " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }

    {//28 + 1
        String letter = '{';
        String letter2 = ']';

        assert(letter != letter2);
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << " != " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }

    {//29 + 1
        String letter = ']';
        String letter2 = ']';

        assert(letter == letter2);
        assert(letter.capacity() == 1);
        assert(letter.length() == 1);
        assert(letter2.capacity() == 1);
        assert(letter2.length() == 1);

        std::cout << letter << " == " << letter2 << std::endl;
        std::cout << letter << " has capacity of " << letter.capacity() << " and length of: " << letter.length() << std::endl;
        std::cout << letter2 << " has capacity of " << letter2.capacity() << " and length of: " << letter2.length() << std::endl;
        std::cout << std::endl;
    }


    std::cout << "Done Testing Single Characters!" << std::endl;
    std::cout << std::endl;
    return 0;
}