//  Stack class test program
//
//  Tests: assign
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
        a.push(0);

        stack<int> b = a;

        assert(a.top() == 0);
        assert(b.top() == 0);
        assert(a.top() == b.top());

        std::cout << a.top() << " == " << b.top() << std::endl;
        std::cout << std::endl;
    }

    {//2
        stack<String> a;
        a.push("");

        stack<String> b = a;

        assert(a.top() == "");
        assert(b.top() == "");
        assert(a.top() == b.top());

        std::cout << a.top() << "Empty" << b.top() << std::endl;
        std::cout << std::endl;
    }

    {//3
        stack<char> a;
        a.push('0');

        stack<char> b = a;

        assert(a.top() == '0');
        assert(b.top() == '0');
        assert(a.top() == b.top());

        std::cout << a.top() << " == " << b.top() << " for char" << std::endl;
        std::cout << std::endl;
    }

    {//4
        stack<int> a;
        a.push(123);
        a.push(321);

        stack<int> b = a;

        assert(a.top() == 321);
        assert(b.top() == 321);
        assert(a.top() == b.top());

        std::cout << a.top() << " == " << b.top() << std::endl;
        std::cout << std::endl;
    }

    {//5
        stack<String> a;
        a.push("Life is Great!");
        a.push("Life is Awesome!");
        a.pop();
        a.push("I love you, is it wrong?");

        stack<String> b = a;

        assert(a.top() == "I love you, is it wrong?");
        assert(b.top() == "I love you, is it wrong?");
        assert(b.top() == a.top());
        assert(a.empty() == false);
        assert(b.empty() == false);

        std::cout << a.top() << " == " << b.top() << std::endl;
        std::cout << std::endl;
    }

    {//6
        stack<char> a;
        a.push('#');
        a.push(';');

        stack<char> b = a;

        assert(a.top() == ';');
        assert(b.top() == ';');
        assert(a.top() == b.top());
        assert(b.empty() == false);
        assert(a.empty() == false);

        std::cout << a.top() << " == " << b.top() << std::endl;
        std::cout << std::endl;
    }

    {//7
        stack<int> a;
        a.push(123456789);
        a.push(183675);
        a.pop();
        a.pop();
        a.push(598355);

        stack<int> b = a;

        assert(a.top() == 598355);
        assert(b.top() == 598355);
        assert(a.top() == b.top());
        assert(b.empty() == false);
        assert(a.empty() == false);

        std::cout << a.top() << " == " << b.top() << std::endl;
        std::cout << std::endl;
    }

    {//8
        stack<String> a;
        a.push("I am Hungry I am Tired I want to go to Sleep!!!!");
        a.pop();
        a.push("You have every right to be angry, but that doesn't give you the right to be mean. He spiked his hair green to support his iguana. The two walked down the slot canyon oblivious to the sound of thunder in the distance. He poured rocks in the dungeon of his mind. It isn't difficult to do a handstand if you just stand on your hands.");

        stack<String> b = a;

        assert(a.top() == "You have every right to be angry, but that doesn't give you the right to be mean. He spiked his hair green to support his iguana. The two walked down the slot canyon oblivious to the sound of thunder in the distance. He poured rocks in the dungeon of his mind. It isn't difficult to do a handstand if you just stand on your hands.");
        assert(b.top() == "You have every right to be angry, but that doesn't give you the right to be mean. He spiked his hair green to support his iguana. The two walked down the slot canyon oblivious to the sound of thunder in the distance. He poured rocks in the dungeon of his mind. It isn't difficult to do a handstand if you just stand on your hands.");
        assert(a.top() == b.top());
        assert(b.empty() == false);
        assert(a.empty() == false);

        std::cout << a.top() << " == " << b.top() << std::endl;
        std::cout << std::endl;
    }

    {//9
        stack<char> a;
        a.push('}');
        a.push('{');
        a.pop();
        a.push('[');
        a.push(']');
        a.pop();

        stack<char> b = a;

        assert(a.top() == '[');
        assert(b.top() == '[');
        assert(a.top() == b.top());
        assert(b.empty() == false);
        assert(a.empty() == false);

        std::cout << a.top() << " == " << b.top() << std::endl;
        std::cout << std::endl;
    }

    {//10
        stack<int> a;
        a.push(2233445);
        a.push(440750);
        a.pop();
        a.push(5436);
        a.pop();
        a.push(259882);
        a.pop();
        a.push(63273);

        stack<int> b = a;

        assert(a.top() == 63273);
        assert(b.top() == 63273);
        assert(a.top() == b.top());
        assert(b.empty() == false);
        assert(a.empty() == false);

        std::cout << a.top() << " == " << b.top() << std::endl;
        std::cout << std::endl;
    }

    {//11
        stack<String> a;
        a.push("Supercalifragilisticexpialidocious Supercalifragilisticexpialidocious DociousaliexpisticfragicalirupusDociousaliexpisticfragicalirupus");
        a.push("aminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanyllycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhist");
        a.push("My dear, where are you hiding in a daze? Is there something on my mind that I still can’t let go of? We always think too bad about life Like others not allowing us to be weird Every cloud is unique We all need to find the sky to exist We are all used to lingering in the same place But can't get used to being relied on Give me a love that I never want to lose contact with in my whole life. Believe that the journey of love is the stars and the sea. Beautiful plot will not change. It's the best arrangement of fate. You are the love that I never want to lose contact with in my whole life. Why bother forcing me to let go of my hand so cruelly? Please come back soon. I want to hear what you have to say. Say you are still there");
        a.push("Walk past the rooftop where you can watch the shooting stars Get through the long wait of losing you I'm so worried that no one understands your helplessness If you leave me, who will treat you as a child? I guess you will miss me too I’m also afraid that I’ll get lost in the vast sea of ​​people It doesn't matter as long as you are willing to look back You will find that I am always there Give me a love that I never want to lose contact with in my whole life Every message from you is a heartbeat I want to hold you in my arms every second You are the cutest in the world You are the love that I never want to lose contact with in my whole life Even if your breath is thousands of mountains away Please believe in the love I give you worthy of your love Woo oh ah");
        a.push("Are you still so late? Stay up late working and can’t sleep well Waiting for you to achieve your goal Give up the habit of showing off one's strength It's all my fault for putting my self-esteem too high Didn't take good care of you Pride is a fragile appearance I'm most afraid of my heart, but you don't want it Can you continue to cry to me, smile to me and be kind to me? Continue to let me think about you, be crazy about you, and grow old with you Are you okay? I really want to know Don't throw away all the memories in a hurry I just need you by my side to quarrel with me, to quarrel with me Use the good me and replace the bad me in the past I really want to hear you say you love me firmly It's a pity that I can't go back to that second How are you?");
        a.pop();
        a.pop();
        a.pop();
        a.push("God knows I can't take it anymore Regret burns in my heart Just one more hug. I can do whatever you want Can you continue to cry to me, smile to me and be kind to me? Continue to let me think about you, be crazy about you, and grow old with you I've given you a good one. Do you still want it? I don't dare to reveal the answer I just need you by my side to quarrel with me, to quarrel with me Don't teach me by leaving. The people you lose are the most important. Don't say you once loved me Let's go back to that second How are you? Can you continue to cry to me, smile to me and be kind to me? Continue to let me think about you, be crazy about you, and grow old with you Are you okay? I really want to know Don't throw away my love in a hurry I just need you by my side to quarrel with me, to quarrel with me Don't teach me by leaving. The people you lose are the most important. Don't say you once loved me Let's go back to that second How are you?");

        stack<String> b = a;

        assert(a.top() == "God knows I can't take it anymore Regret burns in my heart Just one more hug. I can do whatever you want Can you continue to cry to me, smile to me and be kind to me? Continue to let me think about you, be crazy about you, and grow old with you I've given you a good one. Do you still want it? I don't dare to reveal the answer I just need you by my side to quarrel with me, to quarrel with me Don't teach me by leaving. The people you lose are the most important. Don't say you once loved me Let's go back to that second How are you? Can you continue to cry to me, smile to me and be kind to me? Continue to let me think about you, be crazy about you, and grow old with you Are you okay? I really want to know Don't throw away my love in a hurry I just need you by my side to quarrel with me, to quarrel with me Don't teach me by leaving. The people you lose are the most important. Don't say you once loved me Let's go back to that second How are you?");
        assert(b.top() == "God knows I can't take it anymore Regret burns in my heart Just one more hug. I can do whatever you want Can you continue to cry to me, smile to me and be kind to me? Continue to let me think about you, be crazy about you, and grow old with you I've given you a good one. Do you still want it? I don't dare to reveal the answer I just need you by my side to quarrel with me, to quarrel with me Don't teach me by leaving. The people you lose are the most important. Don't say you once loved me Let's go back to that second How are you? Can you continue to cry to me, smile to me and be kind to me? Continue to let me think about you, be crazy about you, and grow old with you Are you okay? I really want to know Don't throw away my love in a hurry I just need you by my side to quarrel with me, to quarrel with me Don't teach me by leaving. The people you lose are the most important. Don't say you once loved me Let's go back to that second How are you?");
        assert(b.top() == a.top());
        assert(b.empty() == false);
        assert(a.empty() == false);

        std::cout << a.top() << "\n==\n" << b.top() << std::endl;
        std::cout << std::endl;
    }

    {//12
        stack<char> a;
        a.push('+');
        a.push('J');
        a.pop();
        a.push('L');
        a.push('Z');
        a.push('5');
        a.pop();
        a.pop();
        a.push('8');
        a.push('!');

        stack<char> b = a;

        assert(a.top() == '!');
        assert(b.top() == '!');
        assert(b.top() == a.top());
        assert(b.empty() == false);
        assert(a.empty() == false);

        std::cout << a.top() << " == " << b.top() << std::endl;
        std::cout << std::endl;
    }

    {//13
        stack<int> a;
        a.push(2233445);
        a.push(789654);
        a.push(413637);
        a.push(39548);
        a.push(281273);
        a.pop();
        a.pop();
        a.push(683734);

        stack<int> b = a;

        assert(a.top() == 683734);
        assert(b.top() == 683734);
        assert(a.top() == b.top());
        assert(b.empty() == false);
        assert(a.empty() == false);

        std::cout << a.top() << " == " << b.top() << std::endl;
        std::cout << std::endl;
    }

    {//14
        stack<String> a;
        a.push("Supercalifragilisticexpialidocious Supercalifragilisticexpialidocious DociousaliexpisticfragicalirupusDociousaliexpisticfragicalirupus");
        a.push("Dociousaliexpisticfragicalirupus Dociousaliexpisticfragicalirupus Supercalifragilisticexpialidocious Supercalifragilisticexpialidocious");
        a.pop();
        a.pop();
        a.push("The wind on the river bank mixes the sun and your smile Mistakes made while practicing on the rooftop, play softly Don't let time go Counting down the dreams, the memories are imprinted in my heart When the love of beauty lies in making mistakes, they have a beginning and an end That’s why you don’t mean what you say I want to know what you are thinking I don’t want you to disappear from my life Don't tell me, it's my tenderness Seeing you well is better than owning you I want to know what you are thinking Duplicity, saying I'm not sad Can't find the best moment Afraid of losing, so I didn’t say love The wind of that year held you in my arms instead of me The hands closest to the heartbeat play gently don't forget me Counting down the dreams, the memories are imprinted in my heart It turns out that saying goodbye to someone can be so painful let me start over I want to know what you are thinking Duplicity, saying I'm not sad Can't find the best moment Afraid of losing, so I didn’t say love");
        a.push("I always have to wait until the minute we separate to realize that I can't look back as I walk. I always have to laugh until I cry before I realize that loneliness means that I will never be there again. You will be with me. I want to know what is going on in your heart, and I don't want you to disappear. There is no telling in life. It's my tenderness. I never thought about missing it. I want to know what you are thinking in your heart. Love never fulfills who is free. True love. Speak out bravely. You need me. I am behind you.");
        a.pop();

        stack<String> b = a;

        assert(a.top() == "The wind on the river bank mixes the sun and your smile Mistakes made while practicing on the rooftop, play softly Don't let time go Counting down the dreams, the memories are imprinted in my heart When the love of beauty lies in making mistakes, they have a beginning and an end That’s why you don’t mean what you say I want to know what you are thinking I don’t want you to disappear from my life Don't tell me, it's my tenderness Seeing you well is better than owning you I want to know what you are thinking Duplicity, saying I'm not sad Can't find the best moment Afraid of losing, so I didn’t say love The wind of that year held you in my arms instead of me The hands closest to the heartbeat play gently don't forget me Counting down the dreams, the memories are imprinted in my heart It turns out that saying goodbye to someone can be so painful let me start over I want to know what you are thinking Duplicity, saying I'm not sad Can't find the best moment Afraid of losing, so I didn’t say love");
        assert(b.top() == "The wind on the river bank mixes the sun and your smile Mistakes made while practicing on the rooftop, play softly Don't let time go Counting down the dreams, the memories are imprinted in my heart When the love of beauty lies in making mistakes, they have a beginning and an end That’s why you don’t mean what you say I want to know what you are thinking I don’t want you to disappear from my life Don't tell me, it's my tenderness Seeing you well is better than owning you I want to know what you are thinking Duplicity, saying I'm not sad Can't find the best moment Afraid of losing, so I didn’t say love The wind of that year held you in my arms instead of me The hands closest to the heartbeat play gently don't forget me Counting down the dreams, the memories are imprinted in my heart It turns out that saying goodbye to someone can be so painful let me start over I want to know what you are thinking Duplicity, saying I'm not sad Can't find the best moment Afraid of losing, so I didn’t say love");
        assert(a.top() == b.top());
        assert(a.empty() == false);
        assert(b.empty() == false);

        std::cout << a.top() << "\n==\n" << b.top() << std::endl;
        std::cout << std::endl;
    }

    {//15
        stack<char> a;
        a.push('+');
        a.push('1');
        a.push('%');
        a.push('4');
        a.push('{');
        a.pop();
        a.pop();
        a.push('#');
        a.push('2');
        a.push('_');
        a.pop();
        a.push('G');

        stack<char> b = a;

        assert(a.top() == 'G');
        assert(b.top() == 'G');
        assert(b.top() == a.top());
        assert(b.empty() == false);
        assert(a.empty() == false);

        std::cout << a.top() << " == " << b.top() << std::endl;
        std::cout << std::endl;
    }

    {//16
        stack<int> a;
        a.push(2233445);
        a.push(789654);
        a.push(3216547);
        a.pop();
        a.pop();
        a.push(327889);
        a.push(587783);
        a.push(3248);
        a.pop();
        a.pop();
        a.push(459861);

        stack<int> b = a;

        assert(a.top() == 459861);
        assert(b.top() == 459861);
        assert(a.top() == b.top());
        assert(b.empty() == false);
        assert(a.empty() == false);

        std::cout << a.top() << " == " << b.top() << std::endl;
        std::cout << std::endl;
    }

    {//17
        stack<String> a;
        a.push("Supercalifragilisticexpialidocious Supercalifragilisticexpialidocious DociousaliexpisticfragicalirupusDociousaliexpisticfragicalirupus");
        a.push("Dociousaliexpisticfragicalirupus Dociousaliexpisticfragicalirupus Supercalifragilisticexpialidocious Supercalifragilisticexpialidocious");
        a.pop();
        a.pop();
        a.push("eucylglutamylleucylglycylisoleucylprolylphenylalanylserylaspartylprolylleucylalanylaspartylglycylprolylthreonylisoleucylglutaminylasparaginylalanylthreonylleucylarginylalanylphenylalanylalanylalanylglycylvalylthreonylprolylalanylglutaminylcysteinylphenylalanylglutamylmethionylleucylalanylleucylisoleucylarginylglutaminyllysylhistidylprolylthreonylisoleucylprolylisoleucylglycylleucylleucylmethionyltyrosylalanylasparaginylleucylvalylphenylalanylasparaginyllysylglycylisoleucylaspartylglutamylphenylalanyltyrosylalanylglutaminylcysteinylglutamyllysylvalylglycylvalylaspartylserylvalylleucylvalylalanylaspartylvalylprolylvalylglutaminylglutamylserylalanylprolylphenylalanylarginylglutaminylalanylalanylleucylarginylhistidylasparaginylvalylalanylprolylisoleucylphenylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanyliso");
        a.push("Green should have smelled more tranquil, but somehow it just tasted rotten. The elderly neighborhood became enraged over the coyotes who had been blamed for the poodle’s disappearance. Tom got a small piece of pie. The furnace repairman indicated the heating system was acting as an air conditioner. It's much more difficult to play tennis with a bowling ball than it is to bowl with a tennis ball. As the rental car rolled to a stop on the dark road, her fear increased by the moment. He played the game as if his life depended on it and the truth was that it did. Be careful with that butter knife. The two walked down the slot canyon oblivious to the sound of thunder in the distance. The light that burns twice as bright burns half as long.");
        a.pop();
        a.push("David proudly graduated from high school top of his class at age 97. The anaconda was the greatest criminal mastermind in this part of the neighborhood. She says she has the ability to hear the soundtrack of your life. We're careful about orange ping pong balls because people might think they're fruit. We have a lot of rain in June. A purple pig and a green donkey flew a kite in the middle of the night and ended up sunburnt. The fox in the tophat whispered into the ear of the rabbit. He was so preoccupied with whether or not he could that he failed to stop to consider if he should. I like to leave work after my eight-hour tea-break. I thought red would have felt warmer in summer but I didn't think about the equator.");
        a.push("She folded her handkerchief neatly. He waited for the stop sign to turn to a go sign. Karen realized the only way she was getting into heaven was to cheat. I know many children ask for a pony, but I wanted a bicycle with rockets strapped to it. I would be delighted if the sea were full of cucumber juice. He didn't heed the warning and it had turned out surprisingly well. She discovered van life is difficult with 2 cats and a dog. The secret ingredient to his wonderful life was crime. The swirled lollipop had issues with the pop rock candy. We should play with legos at camp. I covered my friend in baby oil. The lake is a long way from here. There are over 500 starfish in the bathroom drawer. Mary plays the piano. Lightning Paradise was the local hangout joint where the group usually ended up spending the night.");
        a.push("There are few things better in life than a slice of pie. I just wanted to tell you I could see the love you have for your child by the way you look at her. Mary realized if her calculator had a history, it would be more embarrassing than her computer browser history. He set out for a short walk, but now all he could see were mangroves and water were for miles. The teenage boy was accused of breaking his arm simply to get out of the test. She was too short to see over the fence. The external scars tell only part of the story. She moved forward only because she trusted that the ending she now was going through must be followed by a new beginning. I honestly find her about as intimidating as a basket of kittens. He would only survive if he kept the fire going and he could hear thunder in the distance. It was difficult for Mary to admit that most of her workout consisted of exercising poor judgment. People keep telling me 'orange' but I still prefer 'pink'. He walked into the basement with the horror movie from the night before playing in his head. This is a Japanese doll. I hear that Nancy is very pretty.");

        stack<String> b = a;

        assert(a.top() == "There are few things better in life than a slice of pie. I just wanted to tell you I could see the love you have for your child by the way you look at her. Mary realized if her calculator had a history, it would be more embarrassing than her computer browser history. He set out for a short walk, but now all he could see were mangroves and water were for miles. The teenage boy was accused of breaking his arm simply to get out of the test. She was too short to see over the fence. The external scars tell only part of the story. She moved forward only because she trusted that the ending she now was going through must be followed by a new beginning. I honestly find her about as intimidating as a basket of kittens. He would only survive if he kept the fire going and he could hear thunder in the distance. It was difficult for Mary to admit that most of her workout consisted of exercising poor judgment. People keep telling me 'orange' but I still prefer 'pink'. He walked into the basement with the horror movie from the night before playing in his head. This is a Japanese doll. I hear that Nancy is very pretty.");
        assert(b.top() == "There are few things better in life than a slice of pie. I just wanted to tell you I could see the love you have for your child by the way you look at her. Mary realized if her calculator had a history, it would be more embarrassing than her computer browser history. He set out for a short walk, but now all he could see were mangroves and water were for miles. The teenage boy was accused of breaking his arm simply to get out of the test. She was too short to see over the fence. The external scars tell only part of the story. She moved forward only because she trusted that the ending she now was going through must be followed by a new beginning. I honestly find her about as intimidating as a basket of kittens. He would only survive if he kept the fire going and he could hear thunder in the distance. It was difficult for Mary to admit that most of her workout consisted of exercising poor judgment. People keep telling me 'orange' but I still prefer 'pink'. He walked into the basement with the horror movie from the night before playing in his head. This is a Japanese doll. I hear that Nancy is very pretty.");
        assert(b.top() == a.top());
        assert(a.empty() == false);
        assert(b.empty() == false);

        std::cout << a.top() << "\n==\n" << b.top() << std::endl;
        std::cout << std::endl;
    }

    {//18
        stack<char> a;
        a.push('+');
        a.push('1');
        a.push('$');
        a.pop();
        a.push('H');
        a.push('h');
        a.push('d');
        a.pop();
        a.push('u');
        a.pop();
        a.push('I');

        stack<char> b = a;

        assert(a.top() == 'I');
        assert(b.top() == 'I');
        assert(b.top() == a.top());
        assert(b.empty() == false);
        assert(a.empty() == false);

        std::cout << a.top() << " == " << b.top() << std::endl;
        std::cout << std::endl;
    }

    std::cout << "Finished Testing for Assign!" << std::endl;
    std::cout << std::endl;
}