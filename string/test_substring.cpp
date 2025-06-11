//Sandy Zhang
//
//Test Substring
//10/12/24

#include <iostream> 
#include <cassert>
#include "string.hpp"

int main() {
    std::cout << std::endl;

    {//Edge case for substr
        String str('\0');
        
        assert(str == "");
        std::cout << "Empty" << std::endl;
        std::cout << std::endl;
    }
    {//1
        String str("Hello World");
        String sub = str.substr(0, 4);
        String sub2 = str.substr(2, 0);

        assert(sub == "Hello");
        assert(sub2 == "");

        std::cout << str << "\n" << std::endl;
        std::cout << "The substring from 0 to 4 is: " << sub << std::endl;
        std::cout << "The substring from 2 to 0 is: " << sub2 << std::endl;
        std::cout << std::endl;

    }

    {//2
        String str("12345678910");
        String sub = str.substr(0, 5);
        String sub2 = str.substr(2, 0);
        String sub3 = str.substr(5, 9);

        assert(sub == "123456");
        assert(sub2 == "");
        assert(sub3 == "67891");

        std::cout << str << "\n" << std::endl;
        std::cout << "The substring from 0 to 5 is: " << sub << std::endl;
        std::cout << "The substring from 2 to 0 is: " << sub2 << std::endl;
        std::cout << "The substring from 5 to 9 is: " << sub3 << std::endl;
        std::cout << std::endl;
    }

    {//3
        String str("!@#$%^&*(!)_+{}:<>?,./=-");
        String sub = str.substr(0, 3);
        String sub2 = str.substr(5, 8);
        String sub3 = str.substr(10, 16);

        assert(sub == "!@#$");
        assert(sub2 == "^&*(");
        assert(sub3 == ")_+{}:<");

        std::cout << str << "\n" << std::endl;
        std::cout << "The substring from 0 to 3 is: " << sub << std::endl;
        std::cout << "The substring from 5 to 8 is: " << sub2 << std::endl;
        std::cout << "The substring from 10 to 16 is: "  << sub3 << std::endl;
        std::cout << std::endl;
    }

    {//4
        String str("ABCDefg1234%^&*");
        String sub = str.substr(0, 4);
        String sub2 = str.substr(2, 9);
        String sub3 = str.substr(10, 12);

        assert(sub == "ABCDe");
        assert(sub2 == "CDefg123");
        assert(sub3 == "4%^");

        std::cout << str << "\n" << std::endl;
        std::cout << "The substring from 0 to 4 is: " << sub << std::endl;
        std::cout << "The substring from 2 to 9 is: " << sub2 << std::endl;
        std::cout << "The substring from 10 to 12 is: "  << sub3 << std::endl;
        std::cout << std::endl;
    }

    {//5
        String str("Hello World, how are you? My name is C++! What is your name");
        String sub = str.substr(10, 55);
        assert(sub == "d, how are you? My name is C++! What is your n");


        std::cout << str << "\n" << std::endl;
        std::cout << "The substring from 10 to 5 is: " << sub << std::endl;
        std::cout << std::endl;

    }

    {//6
        String str("He traveled all around the world and everywhere he went. He'd use his word and all would say there goes a clever gent. When dukes or Maharajas pass the time of day with me. I say me special word and then they ask me out to tea (woo)");
        String sub1 = str.substr(0, 10);
        String sub2 = str.substr(19, 54);
        String sub3 = str.substr(57, 130);
        String sub4 = str.substr(131, 200);
        assert(sub1 == "He traveled");
        assert(sub2 == "und the world and everywhere he went");
        assert(sub3 == "He'd use his word and all would say there goes a clever gent. When dukes o");
        assert(sub4 == "r Maharajas pass the time of day with me. I say me special word and th");

        std::cout << str << "\n" << std::endl;
        std::cout << "The substring from 0 to 10 is: " << sub1 << std::endl;
        std::cout << "The substring from 19 to 54 is: " << sub2 << std::endl;
        std::cout << "The substring from 57 to 130 is: " << sub3 << std::endl;
        std::cout << "The substring from 131 to 200 is: " << sub4 << std::endl;

        std::cout << std::endl;
    }

    {//7
        String str("Will someone stay with me when I can't sleep? When I'm sad, will anyone comfort me? When I want to talk, will anyone understand me? When I can't forget you, will you come to love me? Do you know? Do you know that I waited until the flowers withered?");
        String sub1 = str.substr(0, 8);
        String sub2 = str.substr(10, 53);
        String sub3 = str.substr(100, 130);
        String sub4 = str.substr(131, 200);
        String sub5 = str.substr(60, 230); 

        assert(sub1 == "Will some");
        assert(sub2 == "ne stay with me when I can't sleep? When I'm");
        assert(sub3 == "alk, will anyone understand me?");
        assert(sub4 == " When I can't forget you, will you come to love me? Do you know? Do yo");
        assert(sub5 == "will anyone comfort me? When I want to talk, will anyone understand me? When I can't forget you, will you come to love me? Do you know? Do you know that I waited until the");

        std::cout << str << "\n" << std::endl;
        std::cout << "The substring from 0 to 8 is: " << sub1 << std::endl;
        std::cout << "The substring from 10 to 53 is: " << sub2 << std::endl;
        std::cout << "The substring from 100 to 130 is: " << sub3 << std::endl;
        std::cout << "The substring from 131 to 200 is: " << sub4 << std::endl;
        std::cout << "The substring from 60 to 230 is: " << sub5 << std::endl;

        std::cout << std::endl;
    }

    {//8
        String str("ldhdjdhdjdjdjdjdhdhdjdjjdjdjdjdkdkkdjdhddhdjdjddjdjjdjdjdhjfjjfjffjfjfjjfjkdkkffkkffjjfkkfjfkkfkfjjfkfkkffkfkkkfkfkkfkfkkfjfjrjkrkkkdkkuurkkrkkkfkkkkkfkkkgkkkfkkfkdkiiriiriiroyyjjejcjndjuururujjjfuutuiirruuytjjehyurudhdutufjfjnnfuutuuuutyyeifnfhfutuiira");
        String sub1 = str.substr(0, 12);
        String sub2 = str.substr(21, 30);
        String sub3 = str.substr(200, 254); 

        assert(sub1 == "ldhdjdhdjdjdj");
        assert(sub2 == "djjdjdjdjd");
        assert(sub3 == "iirruuytjjehyurudhdutufjfjnnfuutuuuutyyeifnfhfutuiira");
        
        std::cout << str << "\n" << std::endl;
        std::cout << "The substring from 0 to 12 is: " << sub1 << std::endl;
        std::cout << "The substring from 21 to 30 is: " << sub2 << std::endl;
        std::cout << "The substring from 200 to 254 is: " << sub3 << std::endl;

        std::cout << std::endl;
    }

    {//9
        String str("Supercalifragilisticexpialidocious pneumonoultramicroscopicsilicovolcanoconiosis Dociousaliexpisticfragicalirupus");
        String sub1 = str.substr(0, 20);
        String sub2 = str.substr(80, 96);
        String sub3 = str.substr(100, 110); 

        assert(sub1 == "Supercalifragilistice");
        assert(sub2 == " Dociousaliexpist");
        assert(sub3 == "ragicalirup");
        
        std::cout << str << "\n" << std::endl;
        std::cout << "The substring from 0 to 20 is: " << sub1 << std::endl;
        std::cout << "The substring from 80 to 96 is: " << sub2 << std::endl;
        std::cout << "The substring from 100 to 110 is: " << sub3 << std::endl;

        std::cout << std::endl;
    }

    {//10
        String str(")(*&^%$#@!)asshhhsjduduuiooodncnjcjjcjyyyeuuuiieiieiidijjdjdior00r0ododoododo");
        String sub1 = str.substr(0, 20);
        String sub2 = str.substr(25, 70);
        String sub3 = str.substr(11, 28); 

        assert(sub1 == ")(*&^%$#@!)asshhhsjdu");
        assert(sub2 == "ooodncnjcjjcjyyyeuuuiieiieiidijjdjdior00r0odod");
        assert(sub3 == "asshhhsjduduuioood");
        
        std::cout << str << "\n" << std::endl;
        std::cout << "The substring from 0 to 20 is: " << sub1 << std::endl;
        std::cout << "The substring from 25 to 70 is: " << sub2 << std::endl;
        std::cout << "The substring from 11 to 28 is: " << sub3 << std::endl;
        std::cout << std::endl;
    }

    {//11
        String str("vvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicd");
        String sub1 = str.substr(0, 29);
        String sub2 = str.substr(50, 65);
        String sub3 = str.substr(150, 170); 

        assert(sub1 == "vvxjhxvcdcicdvvxjhxvcdcicdvvxj");
        assert(sub2 == "cdvvxjhxvcdcicdv");
        assert(sub3 == "cdcicdvvxjhxvcdcicdvv");
        
        std::cout << str << "\n" << std::endl;
        std::cout << "The substring from 0 to 29 is: " << sub1 << std::endl;
        std::cout << "The substring from 50 to 65 is: " << sub2 << std::endl;
        std::cout << "The substring from 150 to 190 is: " << sub3 << std::endl;
        std::cout << std::endl;
    }

    {//12
        String str("qwsdfgterojzxcbalyqwsdfgterojzxcbalyqwsdfgterojzxcbalyqwsdfgterojzxcbalyqwsdfgterojzxcbalyqwsdfgterojzxcbalyqwsdfgterojzxcbalyqwsdfgterojzxcbalyqwsdfgterojzxcbalyqwsdfgterojzxcbalyqwsdfgterojzxcbalyqwsdfgterojzxcbalyqwsdfgterojzxcbalyqwsdfgterojzxcbaly");
        String sub1 = str.substr(0, 28);
        String sub2 = str.substr(90, 125);
        String sub3 = str.substr(150, 175); 
        String sub4 = str.substr(200, 243);

        assert(sub1 == "qwsdfgterojzxcbalyqwsdfgteroj");
        assert(sub2 == "qwsdfgterojzxcbalyqwsdfgterojzxcbaly");
        assert(sub3 == "terojzxcbalyqwsdfgterojzxc");
        assert(sub4 == "sdfgterojzxcbalyqwsdfgterojzxcbalyqwsdfgtero");
        
        std::cout << str << "\n" << std::endl;
        std::cout << "The substring from 0 to 28 is: " << sub1 << std::endl;
        std::cout << "The substring from 90 to 125 is: " << sub2 << std::endl;
        std::cout << "The substring from 150 to 175 is: " << sub3 << std::endl;
        std::cout << "The substring from 200 to 243 is: " << sub4 << std::endl;
        std::cout << std::endl;
    }

    {//13
        String str("asadasszxdfrecvfreqasfgtcsdxcjgbipasadasszxdfrecvfreqasfgtcsdxcjgbipasadasszxdfrecvfreqasfgtcsdxcjgbipasadasszxdfrecvfreqasfgtcsdxcjgbipasadasszxdfrecvfreqasfgtcsdxcjgbipasadasszxdfrecvfreqasfgtcsdxcjgbipasadasszxdfrecvfreqasfgtcsdxcjgbipasadasszxdfrecvf");
        String sub1 = str.substr(28, 100);
        String sub2 = str.substr(90, 135);
        String sub3 = str.substr(155, 198); 
        String sub4 = str.substr(213, 253);

        assert(sub1 == "cjgbipasadasszxdfrecvfreqasfgtcsdxcjgbipasadasszxdfrecvfreqasfgtcsdxcjgbi");
        assert(sub2 == "gtcsdxcjgbipasadasszxdfrecvfreqasfgtcsdxcjgbip");
        assert(sub3 == "asfgtcsdxcjgbipasadasszxdfrecvfreqasfgtcsdxc");
        assert(sub4 == "dfrecvfreqasfgtcsdxcjgbipasadasszxdfrecvf");
        
        std::cout << str << "\n" << std::endl;
        std::cout << "The substring from 28 to 100 is: " << sub1 << std::endl;
        std::cout << "The substring from 90 to 135 is: " << sub2 << std::endl;
        std::cout << "The substring from 155 to 198 is: " << sub3 << std::endl;
        std::cout << "The substring from 213 to 253 is: " << sub4 << std::endl;
        std::cout << std::endl;
    }

    {//14
        String str("My heart is pounding and my soul is about to leave my body. The temperature is getting higher and higher. What should I do? The eyes are peek-a-boo, the deer is jumping around (jumping into the heart) My mood is swinging, my face is like a red apple");
        String sub1 = str.substr(30, 110);
        String sub2 = str.substr(98, 148);
        String sub3 = str.substr(129, 198); 
        String sub4 = str.substr(213, 246);

        assert(sub1 == "ul is about to leave my body. The temperature is getting higher and higher. What ");
        assert(sub2 == "higher. What should I do? The eyes are peek-a-boo, ");
        assert(sub3 == "yes are peek-a-boo, the deer is jumping around (jumping into the heart");
        assert(sub4 == "winging, my face is like a red app");
        
        std::cout << str << "\n" << std::endl;
        std::cout << "The substring from 30 to 110 is: " << sub1 << std::endl;
        std::cout << "The substring from 98 to 148 is: " << sub2 << std::endl;
        std::cout << "The substring from 129 to 198 is: " << sub3 << std::endl;
        std::cout << "The substring from 213 to 246 is: " << sub4 << std::endl;
        std::cout << std::endl;
    }

    {//15
        String str("Baby~ Who are you? Why did I become a coward? I like you so much but I said I haven’t seen you for a long time. I’ve only seen you once.");
        String sub1 = str.substr(0, 50);
        String sub2 = str.substr(72, 87);
        String sub3 = str.substr(129, 140); 

        assert(sub1 == "Baby~ Who are you? Why did I become a coward? I lik");
        assert(sub2 == "aid I haven’t ");
        assert(sub3 == "n you once.");
        
        std::cout << str << "\n" << std::endl;
        std::cout << "The substring from 0 to 50 is: " << sub1 << std::endl;
        std::cout << "The substring from 72 to 87 is: " << sub2 << std::endl;
        std::cout << "The substring from 129 to 140 is: " << sub3 << std::endl;
        std::cout << std::endl;
    }

    {//16
        String str("valylalanylaspartylvalylprolylvalylglutaminylglutamylserylalanylprolylphenylalanylarginylglutaminylalanylalanylleucylarginylhistidylasparaginylvalylalanylprolylisoleucylphenylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamyl");
        String sub1 = str.substr(1400, 1490);
        String sub2 = str.substr(72, 87);
        String sub3 = str.substr(2129, 2202); 
        String sub4 = str.substr(456, 673);
        String sub5 = str.substr(1, 10);

        assert(sub1 == "phenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalylt");
        assert(sub2 == "enylalanylarginy");
        assert(sub3 == "lthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglut");
        assert(sub4 == "lleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanyliso");
        assert(sub5 == "alylalanyl");
        
        std::cout << str << "\n" << std::endl;
        std::cout << "The substring from 1400 to 1490 is: " << sub1 << std::endl;
        std::cout << "The substring from 72 to 87 is: " << sub2 << std::endl;
        std::cout << "The substring from 2129 to 2202 is: " << sub3 << std::endl;
        std::cout << "The substring from 456 to 673 is: " << sub4 << std::endl;
        std::cout << "The substring from 1 to 10 is: " << sub5 << std::endl;
        std::cout << std::endl;
    }

    {//17
        String str("nylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidyla");
        String sub1 = str.substr(1450, 1498);
        String sub2 = str.substr(72, 87);
        String sub3 = str.substr(2000, 2012); 
        String sub4 = str.substr(951, 987);
        String sub5 = str.substr(30, 50);

        assert(sub1 == "yltitinmethionylglutaminylarginyltyrosylglutamyls");
        assert(sub2 == "ylisoleucylgluta");
        assert(sub3 == "lysylalanylal");
        assert(sub4 == "asparaginylarginylisoleucylisoleucylg");
        assert(sub5 == "lycylserylalanylisole");
        
        std::cout << str << "\n" << std::endl;
        std::cout << "The substring from 1450 to 1498 is: " << sub1 << std::endl;
        std::cout << "The substring from 72 to 87 is: " << sub2 << std::endl;
        std::cout << "The substring from 2000 to 2012 is: " << sub3 << std::endl;
        std::cout << "The substring from 951 to 987 is: " << sub4 << std::endl;
        std::cout << "The substring from 30 to 50 is: " << sub5 << std::endl;
        std::cout << std::endl;
    }

    {//18
        String str("anylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylala");
        String sub1 = str.substr(2211, 2254);
        String sub2 = str.substr(1357, 1992);
        String sub3 = str.substr(2004, 2024); 
        String sub4 = str.substr(3765, 3800);
        String sub5 = str.substr(952, 990);

        assert(sub1 == "leucylprolylleucylasparaginylhistidylleucylv");
        assert(sub2 == "hreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylas");
        assert(sub3 == "tylaspartylleucylleuc");
        assert(sub4 == "reonylglycylleucyltyrosylasparaginyl");
        assert(sub5 == "anylglutaminylthreonylglutaminylglutami");
        
        std::cout << str << "\n" << std::endl;
        std::cout << "The substring from 2211 to 2254 is: " << sub1 << std::endl;
        std::cout << "The substring from 1357 to 1992 is: \n" << sub2 << std::endl;
        std::cout << "The substring from 2004 to 2024 is: " << sub3 << std::endl;
        std::cout << "The substring from 3765 to 3800 is: " << sub4 << std::endl;
        std::cout << "The substring from 952 to 990 is: " << sub5 << std::endl;
        std::cout << std::endl;
    }

    {//19
        String str("sylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylseryl ");
        String sub1 = str.substr(2000, 2063);
        String sub2 = str.substr(1347, 1990);
        String sub3 = str.substr(2014, 2024); 
        String sub4 = str.substr(56, 74);
        String sub5 = str.substr(17, 28);

        // assert(sub1 == "ethionyllysylalanylalanylthreonylarginylacetylseryltyrosylseryl");
        // assert(sub2 == "anylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutamin");
        // assert(sub3 == "lanylalanyl");
        // assert(sub4 == "lalanylvalylphenyla");
        // assert(sub5 == "threonylsery");
        
        std::cout << str << "\n" << std::endl;
        std::cout << "The substring from 2000 to 2063 is: " << sub1 << std::endl;
        std::cout << "The substring from 1347 to 1990 is: \n" << sub2 << std::endl;
        std::cout << "The substring from 2014 to 2024 is: " << sub3 << std::endl;
        std::cout << "The substring from 56 to 74 is: " << sub4 << std::endl;
        std::cout << "The substring from 17 to 28 is: " << sub5 << std::endl;
        std::cout << std::endl;
    }

    {//20
        String str("isoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylmethionylthreonylthreonylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylglutaminylleucyllysylglutamylarginyllysylglutamylglycylalanylphenylalanylvalylprolylphenylalanylvalylthreonylleucylglycylaspartylprolylglycylisoleucylglutamylglutaminylserylleucyllysylisoleucylaspartylthreonylleucylisoleucylglutamylalanylglycylalanylaspartylalanylleucylglutamylleucylglycylisoleucylprolylphenylalanylserylaspartylprolylleucylalanylaspartylglycylprolylthreonylisoleucylglutaminylasparaginylalanylthreonylleucylarginylalanylphenylalanylalanylalanylglycylvalylthreonylprolylalanylglutaminylcysteinylphenylalanylglutamylmethionylleucylalanylleucylisoleucylarginylglutaminyllysylhistidylprolylthreonylisoleucylprolylisoleucylglycylleucylleucylmethionyltyrosylalanylasparaginylleucylvalylphenylalanylasparaginyllysylglycylisoleucylaspartylglutamylphenylalanyltyrosylalanylglutaminylcysteinylglutamyllysylvalylglycylvalylaspartylserylvalylleucylvalylalanylaspartylvalylprolylvalylglutaminylglutamylserylalanylprolylphenylalanylarginylglutaminylalanylalanylleucylarginylhistidylasparaginylvalylalanylprolylisoleucylphenylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylal");
        String sub1 = str.substr(2400, 2460);
        String sub2 = str.substr(1234, 1278);
        String sub3 = str.substr(139, 149); 
        String sub4 = str.substr(55, 78);
        String sub5 = str.substr(20, 32);

        assert(sub1 == "artylaspartylaspartylleucylleucylarginylglutaminylisoleucylal");
        assert(sub2 == "hionylthreonylthreonylglutaminylarginyltyrosy");
        assert(sub3 == "lleucylleuc");
        assert(sub4 == "valylphenylalanylleucyls");
        assert(sub5 == "ylprolylseryl");
        
        std::cout << str << "\n" << std::endl;
        std::cout << "The substring from 2400 to 2460 is: " << sub1 << std::endl;
        std::cout << "The substring from 1234 to 1278 is: " << sub2 << std::endl;
        std::cout << "The substring from 139 to 149 is: " << sub3 << std::endl;
        std::cout << "The substring from 55 to 78 is: " << sub4 << std::endl;
        std::cout << "The substring from 20 to 32 is: " << sub5 << std::endl;
        std::cout << std::endl;
    }

    std::cout << "Done Testing Substring!" << std::endl;
    std::cout << std::endl;
    return 0;

}