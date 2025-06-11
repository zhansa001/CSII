//Sandy Zhang
//
//Test Length and Capacity
//10/6/24


#include <iostream> 
#include <cassert>
#include "string.hpp"

int main() {
    std::cout << std::endl;

    {//1
        String str;

        assert(str == "");

        std::cout << "str is Empty" << std::endl;
        std::cout << std::endl;
    }

    {//2
        String str = "hithere";
        
        int result1 = str.length();
        int result2 = str.capacity();

        assert(result1 == 7);
        assert(result2 == 7);

        std::cout << str << std::endl;
        std::cout << "Length: " << result1 << std::endl;
        std::cout << "Capacity: " << result2 << std::endl;
        std::cout << std::endl;

    }

    {//3
        String str = "Supercalifragilisticexpialidocious";
        
        int result1 = str.length();
        int result2 = str.capacity();

        assert(result1 == 34);
        assert(result2 == 34);

        std::cout << str << std::endl;
        std::cout << "Length: " << result1 << std::endl;
        std::cout << "Capacity: " << result2 << std::endl;
        std::cout << std::endl;

    }

    {//4
        String str = "Pneumonoultramicroscopicsilicovolcanoconiosis Supercalifragilisticexpialidocious";
        
        int result1 = str.length();
        int result2 = str.capacity();

        assert(result1 == 80);
        assert(result2 == 80);

        std::cout << str << std::endl;
        std::cout << "Length: " << result1 << std::endl;
        std::cout << "Capacity: " << result2 << std::endl;
        std::cout << std::endl;

    }

    {//5
        String str = "12345 Once I caught a fish alive. 678910 then I let it go again. Why did you let it go. Cuz it bit my finger so. Which finger did it bite? This little finger on my right.";
        
        int result1 = str.length();
        int result2 = str.capacity();

        assert(result1 == 170);
        assert(result2 == 170);

        std::cout << str << std::endl;
        std::cout << "Length: " << result1 << std::endl;
        std::cout << "Capacity: " << result2 << std::endl;
        std::cout << std::endl;

    }

    {//6
        String str = "It's supercalifragilisticexpialidocious. Even though the sound of it is something quite atrocious. If you say it loud enough you'll always sound precocious. Supercalifragilisticexpialidocious Um-dittle-ittl-um-dittle-I Um-dittle-ittl-um-dittle-I Um-dittle";
        
        int result1 = str.length();
        int result2 = str.capacity();

        assert(result1 == 255);
        assert(result2 == 255);

        std::cout << str << std::endl;
        std::cout << "Length: " << result1 << std::endl;
        std::cout << "Capacity: " << result2 << std::endl;
        std::cout << std::endl;

    }

    {//7
        String str = "12345678910121314151617181920ABCDEFGHIJKLMNOPQRSTUVWXYandZ0099887766554433221112345678910ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        
        int result1 = str.length();
        int result2 = str.capacity();

        assert(result1 == 115);
        assert(result2 == 115);

        std::cout << str << std::endl;
        std::cout << "Length: " << result1 << std::endl;
        std::cout << "Capacity: " << result2 << std::endl;
        std::cout << std::endl;

    }

    {//8
        String str = "ldhdjdhdjdjdjdjdhdhdjdjjdjdjdjdkdkkdjdhddhdjdjddjdjjdjdjdhjfjjfjffjfjfjjfjkdkkffkkffjjfkkfjfkkfkfjjfkfkkffkfkkkfkfkkfkfkkfjfjrjkrkkkdkkuurkkrkkkfkkkkkfkkkgkkkfkkfkdkiiriiriiroyyjjejcjndjuururujjjfuutuiirruuytjjehyurudhdutufjfjnnfuutuuuutyyeifnfhfutuiira";
        
        int result1 = str.length();
        int result2 = str.capacity();

        assert(result1 == 253);
        assert(result2 == 253);

        std::cout << str << std::endl;
        std::cout << "Length: " << result1 << std::endl;
        std::cout << "Capacity: " << result2 << std::endl;
        std::cout << std::endl;

    }

    {//9
        String str = "12345678910!@#$%^&*(!)";
        
        int result1 = str.length();
        int result2 = str.capacity();

        assert(result1 == 22);
        assert(result2 == 22);

        std::cout << str << std::endl;
        std::cout << "Length: " << result1 << std::endl;
        std::cout << "Capacity: " << result2 << std::endl;
        std::cout << std::endl;

    }

    {//10
        String str = "12345678910121314151617181920ABCDEFGHIJKLMNOPQRSTUVWXYandZ0099887766554433221112345678910ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        
        int result1 = str.length();
        int result2 = str.capacity();

        assert(result1 == 115);
        assert(result2 == 115);

        std::cout << str << std::endl;
        std::cout << "Length: " << result1 << std::endl;
        std::cout << "Capacity: " << result2 << std::endl;
        std::cout << std::endl;

    }

    {//11
        String str = "!@#$%^&*()12345678910ZYXWUTSRQPONMLKJIHGFEDCBA01987654321112233445566778899ZdnaYXWUTSRQPONMLKJIHGFEDCBA02918171615141312110987654321";
        
        int result1 = str.length();
        int result2 = str.capacity();

        assert(result1 == 132);
        assert(result2 == 132);

        std::cout << str << std::endl;
        std::cout << "Length: " << result1 << std::endl;
        std::cout << "Capacity: " << result2 << std::endl;
        std::cout << std::endl;

    }

    {//12
        String str = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaahhhhhhhhhhhhhhhhhh";
        
        int result1 = str.length();
        int result2 = str.capacity();

        assert(result1 == 254);
        assert(result2 == 254);

        std::cout << str << std::endl;
        std::cout << "Length: " << result1 << std::endl;
        std::cout << "Capacity: " << result2 << std::endl;
        std::cout << std::endl;

    }

    {//13
        String str = "decjbdcdbcdbcdjcbdjccdcbdjkcvjcvdkjcdcjkdvcdcvdccvdkcjdvkcjdvckjvcdjcvdkjcvdjcbdjdvcjkdmcooldecjbdcdbcdbcdjcbdjccdcbdjkcvjcvdkjcdcjkdvcdcvdccvdkcjdvkcjdvckjvcdjcvdkjcvdjcbdjdvcjkdmcooldecjbdcdbcdbcdjcbdjccdcbdjkcvjcvdkjcdcjkdvcdcvdccvdkcjdvkcjdvckjvcdjcvd";
        
        int result1 = str.length();
        int result2 = str.capacity();

        assert(result1 == 255);
        assert(result2 == 255);

        std::cout << str << std::endl;
        std::cout << "Length: " << result1 << std::endl;
        std::cout << "Capacity: " << result2 << std::endl;
        std::cout << std::endl;

    }

    {//14
        String str = "Gray sky, your face. Loved, cried, laughed, suffered, and all that was left was goodbye. My tears wet my face, This is how it feels to lose the person you loved for the first time. I always thought that love was all the heartbeats.";
        
        int result1 = str.length();
        int result2 = str.capacity();

        assert(result1 == 231);
        assert(result2 == 231);

        std::cout << str << std::endl;
        std::cout << "Length: " << result1 << std::endl;
        std::cout << "Capacity: " << result2 << std::endl;
        std::cout << std::endl;

    }

    {//15
        String str = "Maybe one day I can cure myself Thinking about it again, how should I laugh? The person you love for the first time is both good and bad But like a chest tattoo, it is an eternal mark Follow my breathing until my heart stops";
        
        int result1 = str.length();
        int result2 = str.capacity();

        assert(result1 == 224);
        assert(result2 == 224);

        std::cout << str << std::endl;
        std::cout << "Length: " << result1 << std::endl;
        std::cout << "Capacity: " << result2 << std::endl;
        std::cout << std::endl;

    }

    {//16
        String str = "aaavsvvhshvcdcvdcdcivuiveuvrucvbfivovbvbfvfivbfivbfvbfvifvfivbf bfbvfivfvifvhvhfvfhvfivhfvhvivrorhorrhopvhvhvhrghh9hh9ihththggvbfbfcvddycycydvcdcvdbfvvohthgtth9itpjbbpbgpbgbbhfbhfhfivhfifuvgvuuvuvbbvbtgthgt8ghgghtightt9hgt9gt9t9gtgtgy8gt8ggt9bpbhbbffophf";
        
        int result1 = str.length();
        int result2 = str.capacity();

        assert(result1 == 254);
        assert(result2 == 254);

        std::cout << str << std::endl;
        std::cout << "Length: " << result1 << std::endl;
        std::cout << "Capacity: " << result2 << std::endl;
        std::cout << std::endl;

    }

    {//17
        String str = "When we lose love, we have to die little by little. The second I lost you, my heart suddenly became old. The Day You Went Away. The noisy street didn’t notice my tears, they were forgotten on the street corner. The Day You Went Away";
        
        int result1 = str.length();
        int result2 = str.capacity();

        assert(result1 == 234);
        assert(result2 == 234);

        std::cout << str << std::endl;
        std::cout << "Length: " << result1 << std::endl;
        std::cout << "Capacity: " << result2 << std::endl;
        std::cout << std::endl;

    }

    {//18
        String str = "01234567891011121314151617181920PneumonoultramicroscopicsilicovolcanoconiosisSupercalifragilisticexpialidociousIamTiredIWantToGoToSleepAHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHLETMEGOOOOOOOOOOOOOOOOOOEventhoughthesoundofitissomethingquiteatrocious";
        
        int result1 = str.length();
        int result2 = str.capacity();

        assert(result1 == 249);
        assert(result2 == 249);

        std::cout << str << std::endl;
        std::cout << "Length: " << result1 << std::endl;
        std::cout << "Capacity: " << result2 << std::endl;
        std::cout << std::endl;

    }

    {//18
        String str = "Give me a love that I never want to lose contact with in my whole life. Believe that the journey of love is the stars and the sea. Beautiful plot will not change, It's the best arrangement of fate. You are my love that I never want to lose contact with in";
        
        int result1 = str.length();
        int result2 = str.capacity();

        assert(result1 == 255);
        assert(result2 == 255);

        std::cout << str << std::endl;
        std::cout << "Length: " << result1 << std::endl;
        std::cout << "Capacity: " << result2 << std::endl;
        std::cout << std::endl;

    }

    {//19
        String str = "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbaaa";
        
        int result1 = str.length();
        int result2 = str.capacity();

        assert(result1 == 203);
        assert(result2 == 203);

        std::cout << str << std::endl;
        std::cout << "Length: " << result1 << std::endl;
        std::cout << "Capacity: " << result2 << std::endl;
        std::cout << std::endl;

    }

    {//20
        String str = "Our love will never come back after it has passed! Until now I am still waiting silently, I understand our love has become your burden. It’s just that I can never let go of the last warmth, The warmth you gave me~~~";
        
        int result1 = str.length();
        int result2 = str.capacity();

        assert(result1 == 217);
        assert(result2 == 217);

        std::cout << str << std::endl;
        std::cout << "Length: " << result1 << std::endl;
        std::cout << "Capacity: " << result2 << std::endl;
        std::cout << std::endl;

    }

    {//21
        String str = "lglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyros ";
        
        int result1 = str.length();
        int result2 = str.capacity();

        assert(result1 == 3178);
        assert(result2 == 3178);

        std::cout << str << std::endl;
        std::cout << "Length: " << result1 << std::endl;
        std::cout << "Capacity: " << result2 << std::endl;
        std::cout << std::endl;

    }

    {//22
        String str = "sparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphen";
        
        int result1 = str.length();
        int result2 = str.capacity();

        assert(result1 == 2576);
        assert(result2 == 2576);

        std::cout << str << std::endl;
        std::cout << "Length: " << result1 << std::endl;
        std::cout << "Capacity: " << result2 << std::endl;
        std::cout << std::endl;

    }

    {//23
        String str = "Methionylthreonylthreonylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylglutaminylleucyllysylglutamylarginyllysylglutamylglycylalanylphenylalanylvalylprolylphenylalanylvalylthreonylleucylglycylaspartylprolylglycylisoleucylglutamylglutaminylserylleucyllysylisoleucylaspartylthreonylleucylisoleucylglutamylalanylglycylalanylaspartylalanylleucylglutamylleucylglycylisoleucylprolylphenylalanylserylaspartylprolylleucylalanylaspartylglycylprolylthreonylisoleucylglutaminylasparaginylalanylthreonylleucylarginylalanylphenylalanylalanylalanylglycylvalylthreonylprolylalanylglutaminylcysteinylphenylalanylglutamylmethionylleucylalanylleucylisoleucylarginylglutaminyllysylhistidylprolylthreonylisoleucylprolylisoleucylglycylleucylleucylmethionyltyrosylalanylasparaginylleucylvalylphenylalanylasparaginyllysylglycylisoleucylaspartylglutamylphenylalanyltyrosylalanylglutaminylcysteinylglutamyllysylvalylglycylvalylaspartylserylvalylleucylvalylalanylaspartylvalylprolylvalylglutaminylglutamylserylalanylprolylphenylalanylarginylglutaminylalanylalanylleucylarginylhistidylasparaginylvalylalanylprolylisoleucylphenylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglyclisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisole";
        
        int result1 = str.length();
        int result2 = str.capacity();

        assert(result1 == 3605);
        assert(result2 == 3605);

        std::cout << str << std::endl;
        std::cout << "Length: " << result1 << std::endl;
        std::cout << "Capacity: " << result2 << std::endl;
        std::cout << std::endl;

    }

    {//24
        String str = "threonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolyl";
        
        int result1 = str.length();
        int result2 = str.capacity();

        assert(result1 == 3710);
        assert(result2 == 3710);

        std::cout << str << std::endl;
        std::cout << "Length: " << result1 << std::endl;
        std::cout << "Capacity: " << result2 << std::endl;
        std::cout << std::endl;

    }

    {//25
        String str = "dylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylaspar";
        
        int result1 = str.length();
        int result2 = str.capacity();

        assert(result1 == 3298);
        assert(result2 == 3298);

        std::cout << str << std::endl;
        std::cout << "Length: " << result1 << std::endl;
        std::cout << "Capacity: " << result2 << std::endl;
        std::cout << std::endl;

    }

    std::cout << "Done Testing Length and Capacity!" << std::endl;
    std::cout << std::endl;
    return 0;
}