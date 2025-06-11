//Sandy Zhang
//
//Test Find Char
//10/13/24

#include <iostream> 
#include <cassert>
#include "string.hpp"

int main() {
    std::cout << std::endl;

    {
        String str('\0');
        assert(str == "");

        std::cout << "Empty" << std::endl;
        std::cout << std::endl;

    }
    {//1
        String str = "Hello World";
        int result = str.findch(0, 'o');
        assert(result == 4);

        std::cout << str << std::endl;
        std::cout << "The location of 'o' is " << result << std::endl;
        std::cout << std::endl;

    }

    {//2
        String str("abcdefg1234567!@#$%^&");

        int result1 = str.findch(0, 'f');
        int result2 = str.findch(5, '&');
        int result3 = str.findch(5, '!');

        assert(result1 == 5);
        assert(result2 == 20);
        assert(result3 == 14);

        std::cout << str << std::endl;
        std::cout << "str.findch(0, 'f'): " << result1 << std::endl;
        std::cout << "str.findch(5, '&'): " << result2 << std::endl;
        std::cout << "str.findch(5, '!'): " << result3 << std::endl;
        std::cout << std::endl;
    }

    {//3
        String str("!@#$%^&*()12345678910");

        int result1 = str.findch(0, '*');
        int result2 = str.findch(5, '8');

        assert(result1 == 7);
        assert(result2 == 17);

        std::cout << str << std::endl;
        std::cout << "str.findch(0, '*'): " << result1 << std::endl;
        std::cout << "str.findch(5, '8'): " << result2 << std::endl;
        std::cout << std::endl;

    }

    {//4
        String str = "Pneumonoultramicroscopicsilicovolcanoconiosis Supercalifragilisticexpialidocious";
        int result = str.findch(0, 'S');
        assert(result == 46);

        std::cout << str << "\n" << std::endl;
        std::cout << "The location of 'S' is: " << result << std::endl;
        std::cout << std::endl;

    }

    {//5
        String str = "Because I was afraid to speak when I was just a lad. Me father gave me nose a tweak, told me I was bad. But then one day I learned a word that saved me achin' nose. The biggest word you ever heard and this is how it goes";
        int result1 = str.findch(0, 'I');
        int result2 = str.findch(51, '.');
        int result3 = str.findch(51, ',');
        int result4 = str.findch(90, ' ');
        int result5 = str.findch(0, 'j');

        assert(result1 == 8);
        assert(result2 == 51);
        assert(result3 == 83);
        assert(result4 == 92);
        assert(result5 == 41);

        std::cout << str << "\n" << std::endl;
        std::cout << "str.findch(0, 'I'): " << result1 << std::endl;
        std::cout << "str.findch(51, '.'): " << result2 << std::endl;
        std::cout << "str.findch(51, ','): " << result3 << std::endl;
        std::cout << "str.findch(90, ' '): " << result4 << std::endl;
        std::cout << "str.findch(0, 'j'): " << result5 << std::endl;
        std::cout << std::endl;

    }

    {//6
        String str = "Maybe one day I can cure myself Thinking about it again, how should I laugh? The person you love for the first time is both good and bad But like a chest tattoo, it is an eternal mark Follow my breathing until my heart stops";
        int result1 = str.findch(0, 'I');
        int result2 = str.findch(51, '?');
        int result3 = str.findch(51, ',');
        int result4 = str.findch(90, ' ');
        int result5 = str.findch(0, 'j');
        int result6 = str.findch(200, 'a');

        assert(result1 == 14);
        assert(result2 == 75);
        assert(result3 == 55);
        assert(result4 == 91);
        assert(result5 == -1);
        assert(result6 == 215);

        std::cout << str << "\n" << std::endl;
        std::cout << "str.findch(0, 'I'): " << result1 << std::endl;
        std::cout << "str.findch(51, '?'): " << result2 << std::endl;
        std::cout << "str.findch(51, ','): " << result3 << std::endl;
        std::cout << "tr.findch(90, ' '): " << result4 << std::endl;
        std::cout << "str.findch(0, 'j'): " << result5 << std::endl;
        std::cout << "str.findch(200, a): " << result6 << std::endl;
        std::cout << std::endl;

    }

    {//7
        String str = "12345bcdefghqsdfhbvmjuoptlahmjbo2easc1rqhejbc2ejc1ejhejbc2ejc1ej";
        int result1 = str.findch(0, 'c');
        int result2 = str.findch(34, '2');
        int result3 = str.findch(51, 'j');
        int result4 = str.findch(24, 'h');
        int result5 = str.findch(0, 'b');

        assert(result1 == 6);
        assert(result2 == 45);
        assert(result3 == 51);
        assert(result4 == 27);
        assert(result5 == 5);

        std::cout << str << "\n" << std::endl;
        std::cout << "str.findch(0, 'c'): " << result1 << std::endl;
        std::cout << "str.findch(34, '2'): " << result2 << std::endl;
        std::cout << "str.findch(51, 'j'): " << result3 << std::endl;
        std::cout << "tr.findch(24, 'h'): " << result4 << std::endl;
        std::cout << "str.findch(0, 'b'): " << result5 << std::endl;
        std::cout << std::endl;

    }

    {//8
        String str("hejbc2ejc1ej");
        int result = str.findch(9, '1');
        int result2 = str.findch(3, 'e');

        assert(result == 9);
        assert(result2 == 6);

        std::cout << str << std::endl;
        std::cout << "str.findch(9, '1'): " << result << std::endl;
        std::cout << "str.findch(3, 'e'): " << result2 << std::endl;
        std::cout << std::endl;
    }

    {//9
        String str("hmjbo2easc1rqhmjbo2easc1rq");
        int result = str.findch(5, '1');
        int result2 = str.findch(9, '2');
        int result3 = str.findch(20, 'a');

        assert(result == 10);
        assert(result2 == 18);
        assert(result3 == 20);

        std::cout << str << std::endl;
        std::cout << "str.findch(5, '1'): " << result << std::endl;
        std::cout << "str.findch(9, '2'): " << result2 << std::endl;
        std::cout << "str.findch(20, 'a'): " << result3 << std::endl;
        std::cout << std::endl;
    }

    {//10
        String str("qsdfhbvmjuoptlaqsdfhbvmjuoptlaqsdfhbvmjuoptla12345bcdefgh12345bcdefgh12345bcdefghhejbc2ejc1ejhejbc2ejc1ej");
        int result = str.findch(0, 'g');
        int result2 = str.findch(76, 'l');
        int result3 = str.findch(100, '3');
        int result4 = str.findch(23, 'e');

        assert(result == 55);
        assert(result2 == -1);
        assert(result3 == -1);
        assert(result4 == 53);

        std::cout << str << std::endl;
        std::cout << "str.findch(0, 'g'): " << result << std::endl;
        std::cout << "str.findch(76, 'l'): " << result2 << std::endl;
        std::cout << "str.findch(100, '3'): " << result3 << std::endl;
        std::cout << "str.findch(23, 'e'): " << result4 << std::endl;
        std::cout << std::endl;
    }

    {//11
        String str("SupercalifragilisticexpialidociousSupercalifragilisticexpialidociousSupercalifragilisticexpialidociousDociousaliexpisticfragicalirupusDociousaliexpisticfragicalirupus");
        int result = str.findch(90, 'i');
        int result2 = str.findch(100, 's');
        int result3 = str.findch(55, 'e');
        int result4 = str.findch(32, 'l');

        assert(result == 91);
        assert(result2 == 101);
        assert(result3 == 71);
        assert(result4 == 41);

        std::cout << str << std::endl;
        std::cout << "str.findch(90, 'i'): " << result << std::endl;
        std::cout << "str.findch(100, 's'): " << result2 << std::endl;
        std::cout << "str.findch(55, 'e'): " << result3 << std::endl;
        std::cout << "str.findch(32, 'l'): " << result4 << std::endl;
        std::cout << std::endl;
    }

    {//12
        String str("pneumonoultramicroscopicsilicovolcanoconiosispneumonoultramicroscopicsilicovolcanoconiosispneumonoultramicroscopicsilicovolcanoconiosispneumonoultramicroscopicsilicovolcanoconiosispneumonoultramicroscopicsilicovolcanoconiosis");
        int result = str.findch(35, 'p');
        int result2 = str.findch(150, 'o');
        int result3 = str.findch(200, 'c');
        int result4 = str.findch(72, 'n');

        assert(result == 45);
        assert(result2 == 152);
        assert(result3 == 203);
        assert(result4 == 80);

        std::cout << str << std::endl;
        std::cout << "str.findch(35, 'p'): " << result << std::endl;
        std::cout << "str.findch(150, 'o'): " << result2 << std::endl;
        std::cout << "str.findch(200, 'c'): " << result3 << std::endl;
        std::cout << "str.findch(72, 'n'): " << result4 << std::endl;
        std::cout << std::endl;
    }

    {//13
        String str("DociousaliexpisticfragicalirupusDociousaliexpisticfragicalirupusDociousaliexpisticfragicalirupusDociousaliexpisticfragicalirupusDociousaliexpisticfragicalirupusDociousaliexpisticfragicalirupusDociousaliexpisticfragicalirupusDociousaliexpisticfragicalirupu");
        int result = str.findch(10, 'p');
        int result2 = str.findch(132, 'i');
        int result3 = str.findch(234, 'l');
        int result4 = str.findch(0, 'u');

        assert(result == 12);
        assert(result2 == 137);
        assert(result3 == 249);
        assert(result4 == 5);

        std::cout << str << std::endl;
        std::cout << "str.findch(10, 'p'): " << result << std::endl;
        std::cout << "str.findch(132, 'i'): " << result2 << std::endl;
        std::cout << "str.findch(234, 'l'): " << result3 << std::endl;
        std::cout << "str.findch(0, 'u'): " << result4 << std::endl;
        std::cout << std::endl;
    }

     {//14
        String str("The eyelashes are curved and the eyes are blinking. Your smile is like a crescent moon. The atmosphere is so romantic. I need your company. The eyelashes are curved and the eyes are blinking, and the heart-beating world becomes fun.");
        int result1 = str.findch(0, 'I');
        int result2 = str.findch(45, '.');
        int result3 = str.findch(51, ',');
        int result4 = str.findch(90, ' ');
        int result5 = str.findch(0, 'b');
        int result6 = str.findch(200, 'a');

        assert(result1 == 119);
        assert(result2 == 50);
        assert(result3 == 190);
        assert(result4 == 91);
        assert(result5 == 42);
        assert(result6 == 202);

        std::cout << str << "\n" << std::endl;
        std::cout << "str.findch(0, 'I'): " << result1 << std::endl;
        std::cout << "str.findch(45, '.'): " << result2 << std::endl;
        std::cout << "str.findch(51, ','): " << result3 << std::endl;
        std::cout << "tr.findch(90, ' '): " << result4 << std::endl;
        std::cout << "str.findch(0, 'b'): " << result5 << std::endl;
        std::cout << "str.findch(200, a): " << result6 << std::endl;
        std::cout << std::endl;
    }

    {//15
        String str("!@#$%^&*()12345678910!@#$%^&*()12345678910!@#$%^&*()12345678910!@#$%^&*()12345678910!@#$%^&*()12345678910!@#$%^&*()12345678910!@#$%^&*()12345678910!@#$%^&*()12345678910!@#$%^&*()12345678910!@#$%^&*()12345678910!@#$%^&*()12345678910");

        int result1 = str.findch(0, '*');
        int result2 = str.findch(5, '8');
        int result3 = str.findch(30, '(');
        int result4 = str.findch(100, '1');
        int result5 = str.findch(150, '0');
        int result6 = str.findch(200, '&');

        assert(result1 == 7);
        assert(result2 == 17);
        assert(result3 == 50);
        assert(result4 == 103);
        assert(result5 == 167);
        assert(result6 == 216);

        std::cout << str << std::endl;
        std::cout << "str.findch(0, '*'): " << result1 << std::endl;
        std::cout << "str.findch(5, '8'): " << result2 << std::endl;
        std::cout << "str.findch(30, '('): " << result3 << std::endl;
        std::cout << "str.findch(100, '1'): " << result4 << std::endl;
        std::cout << "str.findch(150, '0'): " << result5 << std::endl;
        std::cout << "str.findch(200, '&'): " << result6 << std::endl;
        std::cout << std::endl;
    }

    {//16
        String str("Methionylthreonylthreonylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylglutaminylleucyllysylglutamylarginyllysylglutamylglycylalanylphenylalanylvalylprolylphenylalanylvalylthreonylleucylglycylaspartylprolylglycylisoleucylglutamylglutaminylserylleucyllysylisoleucylaspartylthreonylleucylisoleucylglutamylalanylglycylalanylaspartylalanylleucylglutamylleucylglycylisoleucylprolylphenylalanylserylaspartylprolylleucylalanylaspartylglycylprolylthreonylisoleucylglutaminylasparaginylalanylthreonylleucylarginylalanylphenylalanylalanylalanylglycylvalylthreonylprolylalanylglutaminylcysteinylphenylalanylglutamylmethionylleucylalanylleucylisoleucylarginylglutaminyllysylhistidylprolylthreonylisoleucylprolylisoleucylglycylleucylleucylmethionyltyrosylalanylasparaginylleucylvalylphenylalanylasparaginyllysylglycylisoleucylaspartylglutamylphenylalanyltyrosylalanylglutaminylcysteinylglutamyllysylvalylglycylvalylaspartylserylvalylleucylvalylalanylaspartylvalylprolylvalylglutaminylglutamylserylalanylprolylphenylalanylarginylglutaminylalanylalanylleucylarginylhistidylasparaginylvalylalanylprolylisoleucylphenylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylseryl");

        int result1 = str.findch(0, 'p');
        int result2 = str.findch(1000, 'o');
        int result3 = str.findch(1690, 'm');
        int result4 = str.findch(64, 'i');
        int result5 = str.findch(480, 'l');
        int result6 = str.findch(570, 'a');

        assert(result1 == 68);
        assert(result2 == 1007);
        assert(result3 == 1738);
        assert(result4 == 92);
        assert(result5 == 480);
        assert(result6 == 574);

        std::cout << str << std::endl;
        std::cout << "str.findch(0, 'p'): " << result1 << std::endl;
        std::cout << "str.findch(1000, 'o'): " << result2 << std::endl;
        std::cout << "str.findch(1690, 'm'): " << result3 << std::endl;
        std::cout << "str.findch(64, 'i'): " << result4 << std::endl;
        std::cout << "str.findch(480, 'l'): " << result5 << std::endl;
        std::cout << "str.findch(570, 'a'): " << result6 << std::endl;
        std::cout << std::endl;
    }

    {//17
        String str("threonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylal");

        int result1 = str.findch(50, 'v');
        int result2 = str.findch(1234, 'a');
        int result3 = str.findch(2000, 'y');
        int result4 = str.findch(600, 's');
        int result5 = str.findch(2145, 'l');
        int result6 = str.findch(789, 'a');

        assert(result1 == 52);
        assert(result2 == 1241);
        assert(result3 == 2003);
        assert(result4 == 613);
        assert(result5 == 2149);
        assert(result6 == 791);

        std::cout << str << std::endl;
        std::cout << "str.findch(50, 'v'): " << result1 << std::endl;
        std::cout << "str.findch(1234, 'a'): " << result2 << std::endl;
        std::cout << "str.findch(2000, 'y'): " << result3 << std::endl;
        std::cout << "str.findch(600, 's'): " << result4 << std::endl;
        std::cout << "str.findch(2145, 'l'): " << result5 << std::endl;
        std::cout << "str.findch(789, 'a'): " << result6 << std::endl;
        std::cout << std::endl;
    }

    {//18
        String str("eucylglutamylleucylglycylisoleucylprolylphenylalanylserylaspartylprolylleucylalanylaspartylglycylprolylthreonylisoleucylglutaminylasparaginylalanylthreonylleucylarginylalanylphenylalanylalanylalanylglycylvalylthreonylprolylalanylglutaminylcysteinylphenylalanylglutamylmethionylleucylalanylleucylisoleucylarginylglutaminyllysylhistidylprolylthreonylisoleucylprolylisoleucylglycylleucylleucylmethionyltyrosylalanylasparaginylleucylvalylphenylalanylasparaginyllysylglycylisoleucylaspartylglutamylphenylalanyltyrosylalanylglutaminylcysteinylglutamyllysylvalylglycylvalylaspartylserylvalylleucylvalylalanylaspartylvalylprolylvalylglutaminylglutamylserylalanylprolylphenylalanylarginylglutaminylalanylalanylleucylarginylhistidylasparaginylvalylalanylprolylisoleucylphenylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanyliso");

        int result1 = str.findch(4341, 'u');
        int result2 = str.findch(236, 'c');
        int result3 = str.findch(1596, 'p');
        int result4 = str.findch(65, 's');
        int result5 = str.findch(3, 'l');
        int result6 = str.findch(456, 'e');

        assert(result1 == 4343);
        assert(result2 == 239);
        assert(result3 == 1617);
        assert(result4 == 84);
        assert(result5 == 4);
        assert(result6 == 472);

        std::cout << str << std::endl;
        std::cout << "str.findch(4341, 'u'): " << result1 << std::endl;
        std::cout << "str.findch(236, 'c'): " << result2 << std::endl;
        std::cout << "str.findch(1596, 'p'): " << result3 << std::endl;
        std::cout << "str.findch(65, 's'): " << result4 << std::endl;
        std::cout << "str.findch(3, 'l'): " << result5 << std::endl;
        std::cout << "str.findch(456, 'e'): " << result6 << std::endl;
        std::cout << std::endl;
    }

    {//19
        String str("ylleucylisoleucylarginylglutaminyllysylhistidylprolylthreonylisoleucylprolylisoleucylglycylleucylleucylmethionyltyrosylalanylasparaginylleucylvalylphenylalanylasparaginyllysylglycylisoleucylaspartylglutamylphenylalanyltyrosylalanylglutaminylcysteinylglutamyllysylvalylglycylvalylaspartylserylvalylleucylvalylalanylaspartylvalylprolylvalylglutaminylglutamylserylalanylprolylphenylalanylarginylglutaminylalanylalanylleucylarginylhistidylasparaginylvalylalanylprolylisoleucylphenylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphnylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspar");

        int result1 = str.findch(56, 'g');
        int result2 = str.findch(987, 'm');
        int result3 = str.findch(1596, 'n');
        int result4 = str.findch(2145, 't');
        int result5 = str.findch(0, 'y');
        int result6 = str.findch(3910, 'r');

        assert(result1 == 85);
        assert(result2 == 1100);
        assert(result3 == 1596);
        assert(result4 == 2151);
        assert(result5 == 0);
        assert(result6 == 3917);

        std::cout << str << std::endl;
        std::cout << "str.findch(56, 'g'): " << result1 << std::endl;
        std::cout << "str.findch(987, 'm'): " << result2 << std::endl;
        std::cout << "str.findch(1596, 'n'): " << result3 << std::endl;
        std::cout << "str.findch(2145, 't'): " << result4 << std::endl;
        std::cout << "str.findch(0, 'y'): " << result5 << std::endl;
        std::cout << "str.findch(3910, 'r'): " << result6 << std::endl;
        std::cout << std::endl;
    }

    {//20
        String str("asparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylala");

        int result1 = str.findch(357, 'n');
        int result2 = str.findch(159, 'h');
        int result3 = str.findch(1357, 's');
        int result4 = str.findch(39, 'a');
        int result5 = str.findch(9, 'y');
        int result6 = str.findch(2200, 'v');

        assert(result1 == 392);
        assert(result2 == 173);
        assert(result3 == 1389);
        assert(result4 == 48);
        assert(result5 == 9);
        assert(result6 == -1);

        std::cout << str << std::endl;
        std::cout << "str.findch(357, 'n'): " << result1 << std::endl;
        std::cout << "str.findch(159, 'h'): " << result2 << std::endl;
        std::cout << "str.findch(1357, 's'): " << result3 << std::endl;
        std::cout << "str.findch(39, 'a'): " << result4 << std::endl;
        std::cout << "str.findch(9, 'y'): " << result5 << std::endl;
        std::cout << "str.findch(2200, 'r'): " << result6 << std::endl;
        std::cout << std::endl;
    }

    std::cout << "Done Testing Find Character!" << std::endl;
    std::cout << std::endl;
    return 0;
}