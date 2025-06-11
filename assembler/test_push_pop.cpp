//  Stack class test program
//
//  Tests: push and pop
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
        stack<int> a;
        a.push(3);
        a.push(9);
        a.push(8);
        a.pop();
        a.pop();
        a.pop();

        assert(a.empty() == true);

        std::cout << "Empty for int" << std::endl;
        std::cout << std::endl;
    }

    {//2
        stack<char> a;
        a.push('p');
        a.push('O');
        a.push('1');
        a.push('%');
        a.pop();
        a.pop();
        a.pop();
        a.pop();

        assert(a.full() == false);
        
        std::cout << "Empty for char" << std::endl;
        std::cout << std::endl;
    }

    {//3
        stack<String> a;
        a.push("abcdefghijklmnopqrstuvwxyz");
        a.push("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
        a.push("123456789)0987654321");
        a.push("!@#$%^&*()(*&^%$#@!)");
        a.pop();
        a.pop();
        a.pop();
        a.pop();

        assert(a.empty() == true);
        
        std::cout << "Empty for String" << std::endl;
        std::cout << std::endl;
    }

    {//4
        stack<int> a;
        a.push(789456);
        a.push(378);
        a.push(10000);
        a.push(5755134);
        a.pop();
        a.pop();
        a.pop();
        a.push(38661);

        assert(a.empty() == false);

        assert(a.top() == 38661);

        std::cout << "3866122 == " << a.top() << std::endl;
        std::cout << std::endl;
    }

    {//5
        stack<char> a;
        a.push('-');
        a.push(')');
        a.push('_');
        a.push('#');
        a.pop();
        a.pop();
        a.pop();

        assert(a.empty() == false);
        assert(a.top() == '-');
        
        std::cout << "- == " << a.top() << std::endl;
        std::cout << std::endl;
    }

    {//6
        stack<String> a;
        a.push("abcdefghijklmnopqrstuvwxyz");
        a.push("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
        a.push("123456789)0987654321");
        a.push("!@#$%^&*()(*&^%$#@!)");
        a.pop();
        a.pop();
        a.pop();
        a.push("He had decided to accept his fate of accepting his fate.");

        assert(a.empty() == false);
        assert(a.top() == "He had decided to accept his fate of accepting his fate.");
        
        std::cout << "He had decided to accept his fate of accepting his fate. == " << a.top() << std::endl;
        std::cout << std::endl;
    }

    {//7
        stack<int> a;
        a.push(789456);
        a.push(378);
        a.push(10000);
        a.push(5755134);
        a.push(892551);
        a.pop();
        a.pop();
        a.pop();
        a.push(38661);
        a.push(915884);
        a.pop();
        a.push(994250);

        assert(a.empty() == false);

        assert(a.top() == 994250);

        std::cout << "994250 == " << a.top() << std::endl;
        std::cout << std::endl;
    }

    {//8
        stack<char> a;
        a.push('w');
        a.push('Q');
        a.push('Y');
        a.push('A');
        a.pop();
        a.pop();
        a.pop();
        a.push('x');
        a.push('X');
        a.pop();

        assert(a.empty() == false);
        assert(a.top() == 'x');
        
        std::cout << "x == " << a.top() << std::endl;
        std::cout << std::endl;
    }

    {//9
        stack<String> a;
        a.push("Nobody has encountered an explosive daisy and lived to tell the tale. Peanuts don't grow on trees, but cashews do.");
        a.push("The three-year-old girl ran down the beach as the kite flew behind her. She was disgusted he couldn’t tell the difference between lemonade and limeade.");
        a.push("I honestly find her about as intimidating as a basket of kittens. Lucifer was surprised at the amount of life at Death Valley. The light that burns twice as bright burns half as long.");
        a.push("He picked up trash in his spare time to dump in his neighbor's yard. There can never be too many cherries on an ice cream sundae. No matter how beautiful the sunset, it saddened her knowing she was one day older.");
        a.pop();
        a.pop();
        a.pop();
        a.push("Your girlfriend bought your favorite cookie crisp cereal but forgot to get milk. He enjoys practicing his ballet in the bathroom. He had reached the point where he was paranoid about being paranoid.");
        a.push("You have every right to be angry, but that doesn't give you the right to be mean. He spiked his hair green to support his iguana. The two walked down the slot canyon oblivious to the sound of thunder in the distance. He poured rocks in the dungeon of his mind. It isn't difficult to do a handstand if you just stand on your hands.");

        assert(a.empty() == false);
        assert(a.top() == "You have every right to be angry, but that doesn't give you the right to be mean. He spiked his hair green to support his iguana. The two walked down the slot canyon oblivious to the sound of thunder in the distance. He poured rocks in the dungeon of his mind. It isn't difficult to do a handstand if you just stand on your hands.");
        
        std::cout << "You have every right to be angry, but that doesn't give you the right to be mean. He spiked his hair green to support his iguana. The two walked down the slot canyon oblivious to the sound of thunder in the distance. He poured rocks in the dungeon of his mind. It isn't difficult to do a handstand if you just stand on your hands. \n==\n" << a.top() << std::endl;
        std::cout << std::endl;
    }


    {//10
        stack<int> a;
        a.push(10183);
        a.push(339216);
        a.push(547054);
        a.push(913595);
        a.push(133250);
        a.pop();
        a.pop();
        a.pop();
        a.push(649448);
        a.push(569791);
        a.pop();
        a.push(571907);
        a.pop();
        a.push(865133);

        assert(a.empty() == false);

        assert(a.top() == 865133);

        std::cout << "865133 == " << a.top() << std::endl;
        std::cout << std::endl;
    }

    {//11
        stack<char> a;
        a.push('f');
        a.push('c');
        a.pop();
        a.push('s');
        a.push('l');
        a.pop();
        a.push('[');
        a.push('*');

        assert(a.empty() == false);
        assert(a.top() == '*');
        
        std::cout << "* == " << a.top() << std::endl;
        std::cout << std::endl;
    }

    {//12
        stack<String> a;
        a.push("Nobody has encountered an explosive daisy and lived to tell the tale. Peanuts don't grow on trees, but cashews do.");
        a.push("The three-year-old girl ran down the beach as the kite flew behind her. She was disgusted he couldn’t tell the difference between lemonade and limeade.");
        a.push("I honestly find her about as intimidating as a basket of kittens. Lucifer was surprised at the amount of life at Death Valley. The light that burns twice as bright burns half as long.");
        a.push("He picked up trash in his spare time to dump in his neighbor's yard. There can never be too many cherries on an ice cream sundae. No matter how beautiful the sunset, it saddened her knowing she was one day older.");
        a.pop();
        a.pop();
        a.pop();
        a.push("Your girlfriend bought your favorite cookie crisp cereal but forgot to get milk. He enjoys practicing his ballet in the bathroom. He had reached the point where he was paranoid about being paranoid.");
        a.push("You have every right to be angry, but that doesn't give you the right to be mean. He spiked his hair green to support his iguana. The two walked down the slot canyon oblivious to the sound of thunder in the distance. He poured rocks in the dungeon of his mind. It isn't difficult to do a handstand if you just stand on your hands.");
        a.push("aminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhist");

        assert(a.empty() == false);
        assert(a.top() == "aminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhist");
        
        std::cout << "aminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhist. \n==\n" << a.top() << std::endl;
        std::cout << std::endl;
    }

    std::cout << "Done testing Push and Pop!" << std::endl;
    std::cout << std::endl;
}