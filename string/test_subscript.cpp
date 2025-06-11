//Sandy Zhang
//
//Test Subscript
//10/8/24

#include <iostream> 
#include <cassert>
#include "string.hpp"

int main() {
    std::cout << std::endl;

    {//1
        String str;
        assert(str == "");
        std::cout << "str is Empty." << std::endl;
        std::cout << std::endl;

    }

    {//2
        String str("nice");
        char result = str[2];

        assert(result == 'c');

        std::cout << str << "\n" << std::endl;
        std::cout << "The subscript of str[2] is: " << result << std::endl;
        std::cout << std::endl;
    }

    {
        char Arr[4] = {'n', 'i', 'c', 'e'};
        char result = Arr[0];
        char result2 = Arr[1];

        assert(result == 'n');
        assert(result2 == 'i');

        std::cout << "{'n', 'i', 'c', 'e'}" << std::endl;
        std::cout << "Arr[0]: " << result << std::endl;
        std::cout << "Arr[1]: " << result2 << std::endl;
        std::cout << std::endl;
    }

    {//3
        String str("g@dwex");
        char result = str[1];

        assert(result == '@');

        std::cout << str << "\n" << std::endl;
        std::cout << "The subscript of str[1] is: " << result << std::endl;
        std::cout << std::endl;
    }

    {
        char Arr[6] = {'!', '@', '#', '$', '%', '^'};

        char result = Arr[5];
        char result2 = Arr[0];

        assert(result == '^');
        assert(result2 == '!');

        std::cout << "{'!', '@', '#', '$', '%', '^'}" << std::endl;
        std::cout << "Arr[5]: " << result << std::endl;
        std::cout << "Arr[0]: " << result2 << std::endl;
        std::cout << std::endl;
    }

    {//4
        String str("12345678910ABCDEFGHIJKLMNOPQRSTUVWXYandZ!!!");
        char result = str[42];

        assert(result == '!');

        std::cout << str << "\n" << std::endl;        
        std::cout << "The subscript of str[42] is: " << result << std::endl;
        std::cout << std::endl;
    }

    {//5
        String str("12345678910778899665544332211supercalifragilisticexpialidociousMeansExordinaryGoodOrWonderful!@#$%^&*()");
        char result = str[100];

        assert(result == '*');

        std::cout << str << "\n" << std::endl;
        std::cout << "The subscript of str[100] is: " << result << std::endl;
        std::cout << std::endl;
    }

    {//6
        String str("For example,Yes?Onenight,Isaidittomegirlandnowmegirl'smewifeOh,andalovelythingsheis,tooShe'sSupercalifragilisticexpialidociousSupercalifragilisticexpialidociousSupercalifragilisticexpialidociousPneumonoultramicroscopicsilicovolcanoconiosis");
        char result = str[230];
        char result2 = str[14];
        char result3 = str[100];

        assert(result == 'o');
        assert(result2 == 's');
        assert(result3 == 'i');

        std::cout << str << "\n" << std::endl;
        std::cout << "The subscript of str[230] is: " << result << std::endl;
        std::cout << "The subscript of str[14] is: " << result2 << std::endl;
        std::cout << "The subscript of str[100] is: " << result3 << std::endl;
        std::cout << std::endl;
    }

    {//7
        char Arr[6] = {'a', 'b', 'c', 'd', 'e', 'f'};

        char result = Arr[4];

        assert(result == 'e');

        std::cout << "{'a', 'b', 'c', 'd', 'e', 'f'}" << std::endl;
        std::cout << "Arr[4]: " << result << std::endl;
        std::cout << std::endl;
    }

    {//9 + 1
        char Arr[19] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '!', '@', '#', '$', '%', '^', '&', '*', '(', ')'};

        char result = Arr[3];
        char result2 = Arr[10];

        assert(result == '4');
        assert(result2 == '@');

        std::cout << "{'1', '2', '3', '4', '5', '6', '7', '8', '9', '!', '@', '#', '$', '%', '^', '&', '*', '(', ')'}" << std::endl;
        std::cout << "Arr[3]: " << result << std::endl;
        std::cout << "Arr[10]: " << result2 << std::endl;
        std::cout << std::endl;
    }

    { //10 + 1
        String str("ldhdjdhdjdjdjdjdhdhdjdjjdjdjdjdkdkkdjdhddhdjdjddjdjjdjdjdhjfjjfjffjfjfjjfjkdkkffkkffjjfkkfjfkkfkfjjfkfkkffkfkkkfkfkkfkfkkfjfjrjkrkkkdkkuurkkrkkkfkkkkkfkkkgkkkfkkfkdkiiriiriiroyyjjejcjndjuururujjjfuutuiirruuytjjehyurudhdutufjfjnnfuutuuuutyyeifnfhfutuiira");
        char result = str[230];
        char result2 = str[14];
        char result3 = str[100];
        char result4 = str[252];

        assert(result == 'u');
        assert(result2 == 'j');
        assert(result3 == 'k');
        assert(result4 == 'a');

        std::cout << str << "\n" << std::endl;
        std::cout << "The subscript of str[230] is: " << result << std::endl;
        std::cout << "The subscript of str[14] is: " << result2 << std::endl;
        std::cout << "The subscript of str[100] is: " << result3 << std::endl;
        std::cout << "The subscript of str[252] is: " << result4 << std::endl;
        std::cout << std::endl;
    }

    { //11 + 1
        String str("You know you can say it backwards which is Dociousaliexpisticfragicalirupus But that's going a bit too far, don't you think? Indubitably");
        char result = str[130];
        char result2 = str[38];
        char result3 = str[50];
        char result4 = str[21];

        assert(result == 'i');
        assert(result2 == 'h');
        assert(result3 == 'a');
        assert(result4 == 'i');

        std::cout << str << "\n" << std::endl;
        std::cout << "The subscript of str[130] is: " << result << std::endl;
        std::cout << "The subscript of str[38] is: " << result2 << std::endl;
        std::cout << "The subscript of str[50] is: " << result3 << std::endl;
        std::cout << "The subscript of str[21] is: " << result4 << std::endl;
        std::cout << std::endl;
    }

    { //12 + 1
        String str("Supercalifragilisticexpialidocious Even though the sound of it is something quite atrocious If you say it loud enough you'll always sound precocious Supercalifragilisticexpialidocious Um-dittle-ittl-um-dittle-I Um-dittle-ittl-um-dittle-I");
        char result = str[180];
        char result2 = str[34];
        char result3 = str[123];
        char result4 = str[90];

        // assert(result == 'o');
        // assert(result2 == ' ');
        // assert(result3 == 'l');
        // assert(result4 == 's');

        std::cout << str << "\n" << std::endl;
        std::cout << "The subscript of str[180] is: " << result << std::endl;
        std::cout << "The subscript of str[38] is: " << result2 << std::endl;
        std::cout << "The subscript of str[12390] is: " << result3 << std::endl;
        std::cout << "The subscript of str[21] is: " << result4 << std::endl;
        std::cout << std::endl;
    }

    { //13 + 1
        String str("Don't stop the dance of chasing your heart Is the road ahead still full of thorns? I see sincere dedication Ice and snow condense into rain and dew Don't stop Never give up on your dream One day the sky will be filled with stars to bless me Gained insight");
        char result = str[180];
        char result2 = str[38];
        char result3 = str[123];
        char result4 = str[90];

        assert(result == ' ');
        assert(result2 == 'e');
        assert(result3 == 'n');
        assert(result4 == 'i');

        std::cout << str << "\n" << std::endl;
        std::cout << "The subscript of str[180] is: (space)" << result << std::endl;
        std::cout << "The subscript of str[38] is: " << result2 << std::endl;
        std::cout << "The subscript of str[123] is: " << result3 << std::endl;
        std::cout << "The subscript of str[90] is: " << result4 << std::endl;
        std::cout << std::endl;
    }

    { //14 + 1
        String str("when i break free When I threw away the map when i let go of myself free spin dance When I find where I'm going Start your journey now Suddenly the sky was covered with dark clouds Thunder and lightning strike deep in my heart");
        char result = str[200];
        char result2 = str[132];
        char result3 = str[34];
        char result4 = str[95];
        char result5 = str[64];
        char result6 = str[8];

        assert(result == 'n');
        assert(result2 == 'o');
        assert(result3 == 'y');
        assert(result4 == ' ');
        assert(result5 == 'e');
        assert(result6 == 'r');

        std::cout << str << "\n" << std::endl;
        std::cout << "The subscript of str[200] is: " << result << std::endl;
        std::cout << "The subscript of str[132] is: " << result2 << std::endl;
        std::cout << "The subscript of str[34] is: " << result3 << std::endl;
        std::cout << "The subscript of str[95] is: (space)" << result4 << std::endl;
        std::cout << "The subscript of str[64] is: " << result5 << std::endl;
        std::cout << "The subscript of str[8] is: " << result6 << std::endl;
        std::cout << std::endl;
    }

    { //15 + 1
        String str("It's the best gift from God Take off this burden Every step has its own happiness Don't stop the dance of chasing your heart Is the road ahead still full of thorns? I see sincere dedication Ice and snow condense into rain and dew");
        char result = str[199];
        char result2 = str[147];
        char result3 = str[12];
        char result4 = str[23];
        char result5 = str[55];
        char result6 = str[6];

        assert(result == 'n');
        assert(result2 == 'l');
        assert(result3 == 't');
        assert(result4 == ' ');
        assert(result5 == 's');
        assert(result6 == 'h');

        std::cout << str << "\n" << std::endl;
        std::cout << "The subscript of str[199] is: " << result << std::endl;
        std::cout << "The subscript of str[147] is: " << result2 << std::endl;
        std::cout << "The subscript of str[12] is: " << result3 << std::endl;
        std::cout << "The subscript of str[23] is: (space)" << result4 << std::endl;
        std::cout << "The subscript of str[55] is: " << result5 << std::endl;
        std::cout << "The subscript of str[6] is: " << result6 << std::endl;
        std::cout << std::endl;
    }

    { //16 + 1
        String str("Everyone is asking me what on earth are you waiting for Isn't it enough to wait until spring, summer, autumn and winter are over? Actually it's because there is a gap in my heart Waiting for the person who took it to give it back to me Everyone is saying");
        char result = str[159];
        char result2 = str[253];
        char result3 = str[167];
        char result4 = str[137];
        char result5 = str[41];
        char result6 = str[10];

        assert(result == 's');
        assert(result2 == 'g');
        assert(result3 == 'i');
        assert(result4 == 'y');
        assert(result5 == 'o');
        assert(result6 == 's');

        std::cout << str << "\n" << std::endl;
        std::cout << "The subscript of str[159] is: " << result << std::endl;
        std::cout << "The subscript of str[253] is: " << result2 << std::endl;
        std::cout << "The subscript of str[167] is: " << result3 << std::endl;
        std::cout << "The subscript of str[137] is: " << result4 << std::endl;
        std::cout << "The subscript of str[41] is: " << result5 << std::endl;
        std::cout << "The subscript of str[10] is: " << result6 << std::endl;
        std::cout << std::endl;
    }

    { //17 + 1
        String str("Do you know? Do you know that I waited until the flowers withered? Do you know? Do you know that I waited until the flowers withered? Do you know? Do you know that I waited until the flowers withered? Do you know? Do you know?");
        char result = str[69];
        char result2 = str[124];
        char result3 = str[157];
        char result4 = str[159];
        char result5 = str[168];
        char result6 = str[67];

        assert(result == ' ');
        assert(result2 == 'w');
        assert(result3 == 'w');
        assert(result4 == 't');
        assert(result5 == 'i');
        assert(result6 == 'D');

        std::cout << str << "\n" << std::endl;
        std::cout << "The subscript of str[69] is: " << result << std::endl;
        std::cout << "The subscript of str[124] is: " << result2 << std::endl;
        std::cout << "The subscript of str[157] is: " << result3 << std::endl;
        std::cout << "The subscript of str[159] is: " << result4 << std::endl;
        std::cout << "The subscript of str[168] is: " << result5 << std::endl;
        std::cout << "The subscript of str[67] is: " << result6 << std::endl;
        std::cout << std::endl;
    }

    { //18 + 1
        String str("Will someone stay with me when I can't sleep? When I'm sad, will anyone comfort me? When I want to talk, will anyone understand me? When I can't forget you, will you come to love me? Do you know? Do you know that I waited until the flowers withered?");
        char result = str[78];
        char result2 = str[126];
        char result3 = str[129];
        char result4 = str[165];
        char result5 = str[232];
        char result6 = str[87];

        assert(result == 't');
        assert(result2 == 'd');
        assert(result3 == 'e');
        assert(result4 == ' ');
        assert(result5 == 'f');
        assert(result6 == 'n');

        std::cout << str << "\n" << std::endl;
        std::cout << "The subscript of str[78] is: " << result << std::endl;
        std::cout << "The subscript of str[126] is: " << result2 << std::endl;
        std::cout << "The subscript of str[129] is: " << result3 << std::endl;
        std::cout << "The subscript of str[165] is: " << result4 << std::endl;
        std::cout << "The subscript of str[232] is: " << result5 << std::endl;
        std::cout << "The subscript of str[87] is: " << result6 << std::endl;
        std::cout << std::endl;
    }

    {//19 + 1
        char Arr[20] = {'/', '?', '<', '>', '.', ',', ';', ':', '_', '=', '+', '#', '$', '%', '^', '&', '*', '(', ')', '~'};

        char result = Arr[10];
        char result2 = Arr[4];
        char result3 = Arr[17];
        char result4 = Arr[2];
        char result5 = Arr[14];

        assert(result == '+');
        assert(result2 == '.');
        assert(result3 == '(');
        assert(result4 == '<');
        assert(result5 == '^');

        std::cout << "{'/', '?', '<', '>', '.', ',', ';', ':', '_', '=', '+', '#', '$', '%', '^', '&', '*', '(', ')', '~'}" << std::endl;
        std::cout << "Arr[10]: " << result << std::endl;
        std::cout << "Arr[4]: " << result2 << std::endl;
        std::cout << "Arr[17]: " << result3 << std::endl;
        std::cout << "Arr[2]: " << result4 << std::endl;
        std::cout << "Arr[14]: " << result5 << std::endl;
        std::cout << std::endl;
    }

    {//16
        String str("valylalanylaspartylvalylprolylvalylglutaminylglutamylserylalanylprolylphenylalanylarginylglutaminylalanylalanylleucylarginylhistidylasparaginylvalylalanylprolylisoleucylphenylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamyl");
        char result = str[4526];
        char result2 = str[318];
        char result3 = str[129];
        char result4 = str[103];
        char result5 = str[23];
        char result6 = str[7];


        std::cout << str << "\n" << std::endl;
        std::cout << "The subscript of str[4526] is: " << result << std::endl;
        std::cout << "The subscript of str[318] is: " << result2 << std::endl;
        std::cout << "The subscript of str[129] is: " << result3 << std::endl;
        std::cout << "The subscript of str[103] is: " << result4 << std::endl;
        std::cout << "The subscript of str[23] is: " << result5 << std::endl;
        std::cout << "The subscript of str[7] is: " << result6 << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
    }

    std::cout << "Done Testing Subscript!" << std::endl;
    std::cout << std::endl;
    return 0;
}