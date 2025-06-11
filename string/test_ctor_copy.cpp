//Sandy Zhang
//
//Test ctor Copy
//10/6/24

#include <iostream>
#include <cassert>
#include "string.hpp"

int main() {
    std::cout << std::endl;

    {//1
        String str;
        String str2(str);

        assert(str == "" && str2 == "");
        assert(str.length() == 0);
        assert(str.capacity() == 0);
        assert(str2.length() == 0);
        assert(str2.capacity() == 0);

        std::cout << "Empty" << std::endl;
        std::cout << "Capacity of string: " << str.capacity() << std::endl;
        std::cout << "Length of string: " << str.length() << std::endl;
        std::cout << std::endl;
    }

    {//2
        String str("12345678910");
        String str2(str);

        assert(str == "12345678910" && str2 == "12345678910");
        assert(str.length() == 11);
        assert(str.capacity() == 11);
        assert(str2.length() == 11);
        assert(str2.capacity() == 11);

        std::cout << str << " == " << str2 << " after copy" << std::endl;
        std::cout << "Capacity of string: " << str.capacity() << std::endl;
        std::cout << "Length of string: " << str.length() << std::endl;
        std::cout << std::endl;
    }

    {//3
        String str("!@#$%^&*()_+");
        String str2(str);

        assert(str == "!@#$%^&*()_+" && str2 == "!@#$%^&*()_+");
        assert(str.length() == 12);
        assert(str.capacity() == 12);
        assert(str2.length() == 12);
        assert(str2.capacity() == 12);

        std::cout << str << " == " << str2 << " after copy" << std::endl;
        std::cout << "Capacity of string: " << str.capacity() << std::endl;
        std::cout << "Length of string: " << str.length() << std::endl;
        std::cout << std::endl;
    }

    {//4
        String str("!@#$%^&*()_+11245678910");
        String str2(str);

        assert(str == "!@#$%^&*()_+11245678910" && str2 == "!@#$%^&*()_+11245678910");
        assert(str.length() == 23);
        assert(str.capacity() == 23);
        assert(str2.length() == 23);
        assert(str2.capacity() == 23);

        std::cout << str << " == " << str2 << " after copy" << std::endl;
        std::cout << "Capacity of string: " << str.capacity() << std::endl;
        std::cout << "Length of string: " << str.length() << std::endl;
        std::cout << std::endl;
    }

    {//5
        String str("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
        String str2(str);

        assert(str == "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz" && str2 == "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
        assert(str.length() == 52);
        assert(str.capacity() == 52);
        assert(str2.length() == 52);
        assert(str2.capacity() == 52);

        std::cout << str << " == " << str2 << " after copy" << std::endl;
        std::cout << "Capacity of string: " << str.capacity() << std::endl;
        std::cout << "Length of string: " << str.length() << std::endl;
        std::cout << std::endl;
    }

    {//6
        String str("11245678910ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!@#$%^&*()_+");
        String str2(str);

        assert(str == "11245678910ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!@#$%^&*()_+" && str2 == "11245678910ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!@#$%^&*()_+");
        assert(str.length() == 75);
        assert(str.capacity() == 75);
        assert(str2.length() == 75);
        assert(str2.capacity() == 75);

        std::cout << str << " == " << str2 << " after copy" << std::endl;
        std::cout << "Capacity of string: " << str.capacity() << std::endl;
        std::cout << "Length of string: " << str.length() << std::endl;
        std::cout << std::endl;
    }

    {//7
        String str("Baby~ Who are you? Why did I become a coward? I like you so much but I said I haven’t seen you for a long time. I’ve only seen you once. The eyelashes are curved and the eyes are blinking. Why do they turn when the words come to my mouth?");
        String str2(str);

        assert(str == "Baby~ Who are you? Why did I become a coward? I like you so much but I said I haven’t seen you for a long time. I’ve only seen you once. The eyelashes are curved and the eyes are blinking. Why do they turn when the words come to my mouth?" && str2 == "Baby~ Who are you? Why did I become a coward? I like you so much but I said I haven’t seen you for a long time. I’ve only seen you once. The eyelashes are curved and the eyes are blinking. Why do they turn when the words come to my mouth?");
        assert(str.length() == 242);
        assert(str.capacity() == 242);
        assert(str2.length() == 242);
        assert(str2.capacity() == 242);

        std::cout << str << "\n == \n" << str2 << " after copy" << std::endl;
        std::cout << "Capacity of string: " << str.capacity() << std::endl;
        std::cout << "Length of string: " << str.length() << std::endl;
        std::cout << std::endl;
    }

    {//8
        String str("My heart is pounding and my soul is about to leave my body. It feels so good. Oh~ You smile at me. The temperature is getting higher and higher. What should I do? The eyes are peek-a-boo, the deer is jumping around (jumping into the heart) My mood is swin");
        String str2(str);

        assert(str == "My heart is pounding and my soul is about to leave my body. It feels so good. Oh~ You smile at me. The temperature is getting higher and higher. What should I do? The eyes are peek-a-boo, the deer is jumping around (jumping into the heart) My mood is swin" && str2 == "My heart is pounding and my soul is about to leave my body. It feels so good. Oh~ You smile at me. The temperature is getting higher and higher. What should I do? The eyes are peek-a-boo, the deer is jumping around (jumping into the heart) My mood is swin");
        assert(str.length() == 255);
        assert(str.capacity() == 255);
        assert(str2.length() == 255);
        assert(str2.capacity() == 255);
       
        std::cout << str << "\n == \n" << str2 << " after copy" << std::endl;
        std::cout << "Capacity of string: " << str.capacity() << std::endl;
        std::cout << "Length of string: " << str.length() << std::endl;
        std::cout << std::endl;
    }

    {//9
        String str("SupercalifragilisticexpialidociousSupercalifragilisticexpialidociousSupercalifragilisticexpialidociousSupercalifragilisticexpialidociousSupercalifragilisticexpialidocious");
        String str2(str);

        assert(str == "SupercalifragilisticexpialidociousSupercalifragilisticexpialidociousSupercalifragilisticexpialidociousSupercalifragilisticexpialidociousSupercalifragilisticexpialidocious" && str2 == "SupercalifragilisticexpialidociousSupercalifragilisticexpialidociousSupercalifragilisticexpialidociousSupercalifragilisticexpialidociousSupercalifragilisticexpialidocious");
        assert(str.length() == 170);
        assert(str.capacity() == 170);
        assert(str2.length() == 170);
        assert(str2.capacity() == 170);
 
        std::cout << str << "\n == \n" << str2 << " after copy" << std::endl;
        std::cout << "Capacity of string: " << str.capacity() << std::endl;
        std::cout << "Length of string: " << str.length() << std::endl;
        std::cout << std::endl;
    }

    {//10
        String str("vvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicd");
        String str2(str);

        assert(str == "vvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicd" && str2 == "vvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicdvvxjhxvcdcicd");
        assert(str.length() == 195);
        assert(str.capacity() == 195);
        assert(str2.length() == 195);
        assert(str2.capacity() == 195);

        std::cout << str << "\n == \n" << str2 << " after copy" << std::endl;
        std::cout << "Capacity of string: " << str.capacity() << std::endl;
        std::cout << "Length of string: " << str.length() << std::endl;
        std::cout << std::endl;
    }

    {//11
        String str("aaavsvvhshvcdcvdcdcivuiveuvrucvbfivovbvbfvfivbfivbfvbfvifvfivbf bfbvfivfvifvhvhfvfhvfivhfvhvivrorhorrhopvhvhvhrghh9hh9ihththggvbfbfcvddycycydvcdcvdbfvvohthgtth9itpjbbpbgpbgbbhfbhfhfivhfifuvgvuuvuvbbvbtgthgt8ghgghtightt9hgt9gt9t9gtgtgy8gt8ggt9bpbhbbffophf");
        String str2(str);

        assert(str == "aaavsvvhshvcdcvdcdcivuiveuvrucvbfivovbvbfvfivbfivbfvbfvifvfivbf bfbvfivfvifvhvhfvfhvfivhfvhvivrorhorrhopvhvhvhrghh9hh9ihththggvbfbfcvddycycydvcdcvdbfvvohthgtth9itpjbbpbgpbgbbhfbhfhfivhfifuvgvuuvuvbbvbtgthgt8ghgghtightt9hgt9gt9t9gtgtgy8gt8ggt9bpbhbbffophf" && str2 == "aaavsvvhshvcdcvdcdcivuiveuvrucvbfivovbvbfvfivbfivbfvbfvifvfivbf bfbvfivfvifvhvhfvfhvfivhfvhvivrorhorrhopvhvhvhrghh9hh9ihththggvbfbfcvddycycydvcdcvdbfvvohthgtth9itpjbbpbgpbgbbhfbhfhfivhfifuvgvuuvuvbbvbtgthgt8ghgghtightt9hgt9gt9t9gtgtgy8gt8ggt9bpbhbbffophf");
        assert(str.length() == 254);
        assert(str.capacity() == 254);
        assert(str2.length() == 254);
        assert(str2.capacity() == 254);

        std::cout << str << "\n == \n" << str2 << " after copy" << std::endl;
        std::cout << "Capacity of string: " << str.capacity() << std::endl;
        std::cout << "Length of string: " << str.length() << std::endl;
        std::cout << std::endl;
    }

    {//11
        String str("If you say it loud enough you'll always sound precocious Supercalifragilisticexpialidocious Um-dittle-ittl-um-dittle-I Um-dittle-ittl-um-dittle-I Um-dittle-ittl-um-dittle-I Um-dittle-ittl-um-dittle-I");
        String str2(str);

        assert(str == "If you say it loud enough you'll always sound precocious Supercalifragilisticexpialidocious Um-dittle-ittl-um-dittle-I Um-dittle-ittl-um-dittle-I Um-dittle-ittl-um-dittle-I Um-dittle-ittl-um-dittle-I" && str2 == "If you say it loud enough you'll always sound precocious Supercalifragilisticexpialidocious Um-dittle-ittl-um-dittle-I Um-dittle-ittl-um-dittle-I Um-dittle-ittl-um-dittle-I Um-dittle-ittl-um-dittle-I");
        assert(str.length() == 199);
        assert(str.capacity() == 199);
        assert(str2.length() == 199);
        assert(str2.capacity() == 199);

        std::cout << str << "\n == \n" << str2 << " after copy" << std::endl;
        std::cout << "Capacity of string: " << str.capacity() << std::endl;
        std::cout << "Length of string: " << str.length() << std::endl;
        std::cout << std::endl;
    }

    {//12
        String str("If you say it loud enough you'll always sound precocious Supercalifragilisticexpialidocious Um-dittle-ittl-um-dittle-I Um-dittle-ittl-um-dittle-I Um-dittle-ittl-um-dittle-I Um-dittle-ittl-um-dittle-I");
        String str2(str);

        assert(str == "If you say it loud enough you'll always sound precocious Supercalifragilisticexpialidocious Um-dittle-ittl-um-dittle-I Um-dittle-ittl-um-dittle-I Um-dittle-ittl-um-dittle-I Um-dittle-ittl-um-dittle-I" && str2 == "If you say it loud enough you'll always sound precocious Supercalifragilisticexpialidocious Um-dittle-ittl-um-dittle-I Um-dittle-ittl-um-dittle-I Um-dittle-ittl-um-dittle-I Um-dittle-ittl-um-dittle-I");
        assert(str.length() == 199);
        assert(str.capacity() == 199);
        assert(str2.length() == 199);
        assert(str2.capacity() == 199);

        std::cout << str << "\n == \n" << str2 << " after copy" << std::endl;
        std::cout << "Capacity of string: " << str.capacity() << std::endl;
        std::cout << "Length of string: " << str.length() << std::endl;
        std::cout << std::endl;
    }

    {//14
        String str("Supercalifragilisticexpialidocious Dociousaliexpisticfragicalirupus Supercalifragilisticexpialidocious Dociousaliexpisticfragicalirupus Supercalifragilisticexpialidocious Dociousaliexpisticfragicalirupus");
        String str2(str);

        assert(str == "Supercalifragilisticexpialidocious Dociousaliexpisticfragicalirupus Supercalifragilisticexpialidocious Dociousaliexpisticfragicalirupus Supercalifragilisticexpialidocious Dociousaliexpisticfragicalirupus" && str2 == "Supercalifragilisticexpialidocious Dociousaliexpisticfragicalirupus Supercalifragilisticexpialidocious Dociousaliexpisticfragicalirupus Supercalifragilisticexpialidocious Dociousaliexpisticfragicalirupus");
        assert(str.length() == 203);
        assert(str.capacity() == 203);
        assert(str2.length() == 203);
        assert(str2.capacity() == 203);

        std::cout << str << "\n == \n" << str2 << " after copy" << std::endl;
        std::cout << "Capacity of string: " << str.capacity() << std::endl;
        std::cout << "Length of string: " << str.length() << std::endl;
        std::cout << std::endl;
    }

    {//15
        String str("Everyone is asking me what on earth are you waiting for Isn't it enough to wait until spring, summer, autumn and winter are over? Actually it's because there is a gap in my heart Waiting for the person who took it to give it back to me");
        String str2(str);

        assert(str == "Everyone is asking me what on earth are you waiting for Isn't it enough to wait until spring, summer, autumn and winter are over? Actually it's because there is a gap in my heart Waiting for the person who took it to give it back to me" && str2 == "Everyone is asking me what on earth are you waiting for Isn't it enough to wait until spring, summer, autumn and winter are over? Actually it's because there is a gap in my heart Waiting for the person who took it to give it back to me");
        assert(str.length() == 235);
        assert(str.capacity() == 235);
        assert(str2.length() == 235);
        assert(str2.capacity() == 235);

        std::cout << str << "\n == \n" << str2 << " after copy" << std::endl;
        std::cout << "Capacity of string: " << str.capacity() << std::endl;
        std::cout << "Length of string: " << str.length() << std::endl;
        std::cout << std::endl;
    }

    {//16
        String str("Are you still so late? Stay up late working and can’t sleep well Waiting for you to achieve your goal Give up the habit of showing off one's strength It's all my fault for putting my self-esteem too high Didn't take good care of you Pride is a fragile appearance I'm most afraid of my heart, but you don't want it");
        String str2(str);

        assert(str == "Are you still so late? Stay up late working and can’t sleep well Waiting for you to achieve your goal Give up the habit of showing off one's strength It's all my fault for putting my self-esteem too high Didn't take good care of you Pride is a fragile appearance I'm most afraid of my heart, but you don't want it");
        assert(str.length() == 315);
        assert(str.capacity() == 315);
        assert(str2.length() == 315);
        assert(str2.capacity() == 315);

        std::cout << str << "\n == \n" << str2 << " after copy" << std::endl;
        std::cout << "Capacity of string: " << str.capacity() << std::endl;
        std::cout << "Length of string: " << str.length() << std::endl;
        std::cout << std::endl;
    }

    {//16
        String str("Can you continue to cry to me, smile to me and be kind to me? Continue to let me think about you, be crazy about you, and grow old with you Are you okay? I really want to know Don't throw away all the memories in a hurry I just need you by my side to quarrel with me, to quarrel with me Use the good me and replace the bad me in the past I really want to hear you say you love me firmly");
        String str2(str);

        assert(str == "Can you continue to cry to me, smile to me and be kind to me? Continue to let me think about you, be crazy about you, and grow old with you Are you okay? I really want to know Don't throw away all the memories in a hurry I just need you by my side to quarrel with me, to quarrel with me Use the good me and replace the bad me in the past I really want to hear you say you love me firmly");
        assert(str.length() == 386);
        assert(str.capacity() == 386);
        assert(str2.length() == 386);
        assert(str2.capacity() == 386);

        std::cout << str << "\n == \n" << str2 << " after copy" << std::endl;
        std::cout << "Capacity of string: " << str.capacity() << std::endl;
        std::cout << "Length of string: " << str.length() << std::endl;
        std::cout << std::endl;
    }

    {//17
        String str("Use the good me and replace the bad me in the past I really want to hear you say you love me firmly It's a pity that I can't go back to that second How are you? God knows I can't take it anymore Regret burns in my heart Just one more hug. I can do whatever you want Can you continue to cry to me, smile to me and be kind to me? Continue to let me think about you, be crazy about you, and grow old with you I've given you a good one. Do you still want it?");
        String str2(str);

        assert(str == "Use the good me and replace the bad me in the past I really want to hear you say you love me firmly It's a pity that I can't go back to that second How are you? God knows I can't take it anymore Regret burns in my heart Just one more hug. I can do whatever you want Can you continue to cry to me, smile to me and be kind to me? Continue to let me think about you, be crazy about you, and grow old with you I've given you a good one. Do you still want it?");
        assert(str.length() == 454);
        assert(str.capacity() == 454);
        assert(str2.length() == 454);
        assert(str2.capacity() == 454);

        std::cout << str << "\n == \n" << str2 << " after copy" << std::endl;
        std::cout << "Capacity of string: " << str.capacity() << std::endl;
        std::cout << "Length of string: " << str.length() << std::endl;
        std::cout << std::endl;
    }

    {//18
        String str("I've given you a good one. Do you still want it? I don't dare to reveal the answer I just need you by my side to quarrel with me, to quarrel with me Don't teach me by leaving. The people you lose are the most important. Don't say you once loved me I've given you a good one. Do you still want it? I don't dare to reveal the answer I just need you by my side to quarrel with me, to quarrel with me Don't teach me by leaving. The people you lose are the most important. Don't say you once loved me");
        String str2(str);

        assert(str == "I've given you a good one. Do you still want it? I don't dare to reveal the answer I just need you by my side to quarrel with me, to quarrel with me Don't teach me by leaving. The people you lose are the most important. Don't say you once loved me I've given you a good one. Do you still want it? I don't dare to reveal the answer I just need you by my side to quarrel with me, to quarrel with me Don't teach me by leaving. The people you lose are the most important. Don't say you once loved me");
        assert(str.length() == 495);
        assert(str.capacity() == 495);
        assert(str2.length() == 495);
        assert(str2.capacity() == 495);

        std::cout << str << "\n == \n" << str2 << " after copy" << std::endl;
        std::cout << "Capacity of string: " << str.capacity() << std::endl;
        std::cout << "Length of string: " << str.length() << std::endl;
        std::cout << std::endl;
    }

    {//19
        String str("You are the love that I never want to lose contact with in my whole life Why bother forcing me to let go of my hand so cruelly? Please come back soon. I want to hear what you have to say. Say you are still there Walk past the rooftop where you can watch the shooting stars Get through the long wait of losing you I'm so worried that no one understands your helplessness If you leave me, who will treat you as a child? I guess you will miss me too I’m also afraid that I’ll get lost in the vast sea of ​​people It doesn't matter as long as you are willing to look back You will find that I am always there Give me a love that I don’t want to lose contact with in my whole life Every message from you is a heartbeat I want to hold you in my arms every second You are the cutest in the world You are the love that I never want to lose contact with in my whole life Even if your breath is thousands of mountains away Please believe in the love I give you worthy of your love Woo oh ah");
        String str2(str);

        assert(str == "You are the love that I never want to lose contact with in my whole life Why bother forcing me to let go of my hand so cruelly? Please come back soon. I want to hear what you have to say. Say you are still there Walk past the rooftop where you can watch the shooting stars Get through the long wait of losing you I'm so worried that no one understands your helplessness If you leave me, who will treat you as a child? I guess you will miss me too I’m also afraid that I’ll get lost in the vast sea of ​​people It doesn't matter as long as you are willing to look back You will find that I am always there Give me a love that I don’t want to lose contact with in my whole life Every message from you is a heartbeat I want to hold you in my arms every second You are the cutest in the world You are the love that I never want to lose contact with in my whole life Even if your breath is thousands of mountains away Please believe in the love I give you worthy of your love Woo oh ah");
        assert(str.length() == 990);
        assert(str.capacity() == 990);
        assert(str2.length() == 990);
        assert(str2.capacity() == 990);

        std::cout << str << "\n == \n" << str2 << " after copy" << std::endl;
        std::cout << "Capacity of string: " << str.capacity() << std::endl;
        std::cout << "Length of string: " << str.length() << std::endl;
        std::cout << std::endl;
    }

    {//20
        String str("hreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylsparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylg");
        String str2(str);

        assert(str == "hreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylsparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylg");
        assert(str.length() == 2741);
        assert(str.capacity() == 2741);
        assert(str2.length() == 2741);
        assert(str2.capacity() == 2741);

        std::cout << str << "\n == \n" << str2 << " after copy" << std::endl;
        std::cout << "Capacity of string: " << str.capacity() << std::endl;
        std::cout << "Length of string: " << str.length() << std::endl;
        std::cout << std::endl;
    }

    {//21
        String str("ylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparag");
        String str2(str);

        assert(str == "ylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparag");
        assert(str.length() == 3398);
        assert(str.capacity() == 3398);
        assert(str2.length() == 3398);
        assert(str2.capacity() == 3398);

        std::cout << str << "\n == \n" << str2 << " after copy" << std::endl;
        std::cout << "Capacity of string: " << str.capacity() << std::endl;
        std::cout << "Length of string: " << str.length() << std::endl;
        std::cout << std::endl;
    }

    {//22
        String str("utamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylmethionylthreonylthreonylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylglutaminylleucyllysylglutamylarginyllysylglutamylglycylalanylphenylalanylvalylprolylphenylalanylvalylthreonylleucylglycylaspartylprolylglycylisoleucylglutamylglutaminylserylleucyllysylisoleucylaspartylthreonylleucylisoleucylglutamylalanylglycylalanylaspartylalanylleucylglutamylleucylglycylisoleucylprolylphenylalanylserylaspartylprolylleucylalanylaspartylglycylprolylthreonylisoleucylglutaminylasparaginylalanylthreonylleucylarginylalanylphenylalanylalanylalanylglycylvalylthreonylprolylalanylglutaminylcysteinylphenylalanylglutamylmethionylleucylalanylleucylisoleucylarginylglutaminyllysylhistidylprolylthreonylisoleucylprolylisoleucylglycylleucylleucylmethionyltyrosylalanylasparaginylleucylvalylphenylalanylasparaginyllysylglycylisoleucylaspartylglutamylphenylalanyltyrosylalanylglutaminylcysteinylglutamyllysylvalylglycylvalylaspartylserylvalylleucylvalylalanylaspartylvalylprolylvalylglutaminylglutamylserylalanylprolylphenylalanylarginylglutaminylalanylalanylleucylarginylhistidylasparaginylvalylalanylprolylisoleucylphenylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleuc");
        String str2(str);

        assert(str == "utamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylmethionylthreonylthreonylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylglutaminylleucyllysylglutamylarginyllysylglutamylglycylalanylphenylalanylvalylprolylphenylalanylvalylthreonylleucylglycylaspartylprolylglycylisoleucylglutamylglutaminylserylleucyllysylisoleucylaspartylthreonylleucylisoleucylglutamylalanylglycylalanylaspartylalanylleucylglutamylleucylglycylisoleucylprolylphenylalanylserylaspartylprolylleucylalanylaspartylglycylprolylthreonylisoleucylglutaminylasparaginylalanylthreonylleucylarginylalanylphenylalanylalanylalanylglycylvalylthreonylprolylalanylglutaminylcysteinylphenylalanylglutamylmethionylleucylalanylleucylisoleucylarginylglutaminyllysylhistidylprolylthreonylisoleucylprolylisoleucylglycylleucylleucylmethionyltyrosylalanylasparaginylleucylvalylphenylalanylasparaginyllysylglycylisoleucylaspartylglutamylphenylalanyltyrosylalanylglutaminylcysteinylglutamyllysylvalylglycylvalylaspartylserylvalylleucylvalylalanylaspartylvalylprolylvalylglutaminylglutamylserylalanylprolylphenylalanylarginylglutaminylalanylalanylleucylarginylhistidylasparaginylvalylalanylprolylisoleucylphenylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleuc");
        assert(str.length() == 3187);
        assert(str.capacity() == 3187);
        assert(str2.length() == 3187);
        assert(str2.capacity() == 3187);

        std::cout << str << "\n == \n" << str2 << " after copy" << std::endl;
        std::cout << "Capacity of string: " << str.capacity() << std::endl;
        std::cout << "Length of string: " << str.length() << std::endl;
        std::cout << std::endl;
    }

    {//23
        String str("minylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylmethionylthreonylthreonylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylglutaminylleucyllysylglutamylarginyllysylglutamylglycylalanylphenylalanylvalylprolylphenylalanylvalylthreonylleucylglycylaspartylprolylglycylisoleucylglutamylglutaminylserylleucyllysylisoleucylaspartylthreonylleucylisoleucylglutamylalanylglycylalanylaspartylalanylleucylglutamylleucylglycylisoleucylprolylphenylalanylserylaspartylprolylleucylalanylaspartylglycylprolylthreonylisoleucylglutaminylasparaginylalanylthreonylleucylarginylalanylphenylalanylalanylalanylglycylvalylthreonylprolylalanylglutaminylcysteinylphenylalanylglutamylmethionylleucylalanylleucylisoleucylarginylglutaminyllysylhistidylprolylthreonylisoleucylprolylisoleucylglycylleucylleucylmethionyltyrosylalanylasparaginylleucylvalylphenylalanylasparaginyllysylglycylisoleucylaspartylglutamylphenylalanyltyrosylalanylglutaminylcysteinylglutamyllysylvalylglycylvalylaspartylserylvalylleucylvalylalanylaspartylvalylprolylvalylglutaminylglutamylserylalanylprolylphenylalanylarginylglutaminylalanylalanylleucylarginylhistidylasparaginylvalylalanylprolylisoleucylphenylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylmethionylthreonylthreonylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylglutaminylleucyllysylglutamylarginyllysylglutamylglycylalanylphenylalanylvalylprolylphenylalanylvalylthreonylleucylglycylaspartylprolylglycylisoleucylglutamylglutaminylserylleucyllysylisoleucylaspartylthreonylleucylisoleucylglutamylalanylglycylalanylaspartylalanylleucylglutamylleucylglycylisoleucylprolylphenylalanylserylaspartylprolylleucylalanylaspartylglycylprolylthreonylisoleucylglutaminylasparaginylalanylthreonylleucylarginylalanylphenylalanylalanylalanylglycylvalylthreonylprolylalanylglutaminylcysteinylphenylalanylglutamylmethionylleucylalanylleucylisoleucylarginylglutaminyllysylhistidylprolylthreonylisoleucylprolylisoleucylglycylleucylleucylmethionyltyrosylalanylasparaginylleucylvalylphenylalanylasparaginyllysylglycylisoleucylaspartylglutamylphenylalanyltyrosylalanylglutaminylcysteinylglutamyllysylvalylglycylvalylaspartylserylvalylleucylvalylalanylaspartylvalylprolylvalylglutaminylglutamylserylalanylprolylphenylalanylarginylglutaminylalanylalanylleucylarginylhistidylasparaginylvalylalanylprolylisoleucylphenylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleuc");
        String str2(str);

        assert(str == "minylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylmethionylthreonylthreonylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylglutaminylleucyllysylglutamylarginyllysylglutamylglycylalanylphenylalanylvalylprolylphenylalanylvalylthreonylleucylglycylaspartylprolylglycylisoleucylglutamylglutaminylserylleucyllysylisoleucylaspartylthreonylleucylisoleucylglutamylalanylglycylalanylaspartylalanylleucylglutamylleucylglycylisoleucylprolylphenylalanylserylaspartylprolylleucylalanylaspartylglycylprolylthreonylisoleucylglutaminylasparaginylalanylthreonylleucylarginylalanylphenylalanylalanylalanylglycylvalylthreonylprolylalanylglutaminylcysteinylphenylalanylglutamylmethionylleucylalanylleucylisoleucylarginylglutaminyllysylhistidylprolylthreonylisoleucylprolylisoleucylglycylleucylleucylmethionyltyrosylalanylasparaginylleucylvalylphenylalanylasparaginyllysylglycylisoleucylaspartylglutamylphenylalanyltyrosylalanylglutaminylcysteinylglutamyllysylvalylglycylvalylaspartylserylvalylleucylvalylalanylaspartylvalylprolylvalylglutaminylglutamylserylalanylprolylphenylalanylarginylglutaminylalanylalanylleucylarginylhistidylasparaginylvalylalanylprolylisoleucylphenylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylmethionylthreonylthreonylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylglutaminylleucyllysylglutamylarginyllysylglutamylglycylalanylphenylalanylvalylprolylphenylalanylvalylthreonylleucylglycylaspartylprolylglycylisoleucylglutamylglutaminylserylleucyllysylisoleucylaspartylthreonylleucylisoleucylglutamylalanylglycylalanylaspartylalanylleucylglutamylleucylglycylisoleucylprolylphenylalanylserylaspartylprolylleucylalanylaspartylglycylprolylthreonylisoleucylglutaminylasparaginylalanylthreonylleucylarginylalanylphenylalanylalanylalanylglycylvalylthreonylprolylalanylglutaminylcysteinylphenylalanylglutamylmethionylleucylalanylleucylisoleucylarginylglutaminyllysylhistidylprolylthreonylisoleucylprolylisoleucylglycylleucylleucylmethionyltyrosylalanylasparaginylleucylvalylphenylalanylasparaginyllysylglycylisoleucylaspartylglutamylphenylalanyltyrosylalanylglutaminylcysteinylglutamyllysylvalylglycylvalylaspartylserylvalylleucylvalylalanylaspartylvalylprolylvalylglutaminylglutamylserylalanylprolylphenylalanylarginylglutaminylalanylalanylleucylarginylhistidylasparaginylvalylalanylprolylisoleucylphenylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleuc");
        assert(str.length() == 5960);
        assert(str.capacity() == 5960);
        assert(str2.length() == 5960);
        assert(str2.capacity() == 5960);

        std::cout << str << "\n == \n" << str2 << " after copy" << std::endl;
        std::cout << "Capacity of string: " << str.capacity() << std::endl;
        std::cout << "Length of string: " << str.length() << std::endl;
        std::cout << std::endl;
    }

    {//24
        String str("eucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonyll");
        String str2(str);

        assert(str == "eucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonyll");
        assert(str.length() == 3287);
        assert(str.capacity() == 3287);
        assert(str2.length() == 3287);
        assert(str2.capacity() == 3287);

        std::cout << str << "\n == \n" << str2 << " after copy" << std::endl;
        std::cout << "Capacity of string: " << str.capacity() << std::endl;
        std::cout << "Length of string: " << str.length() << std::endl;
        std::cout << std::endl;
    }

    {//25
        String str("hreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylsparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylgeucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonyll");
        String str2(str);

        assert(str == "hreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylsparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylgeucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonyll");
        assert(str.length() == 6028);
        assert(str.capacity() == 6028);
        assert(str2.length() == 6028);
        assert(str2.capacity() == 6028);

        std::cout << str << "\n == \n" << str2 << " after copy" << std::endl;
        std::cout << "Capacity of string: " << str.capacity() << std::endl;
        std::cout << "Length of string: " << str.length() << std::endl;
        std::cout << std::endl;
    }

    std::cout << "Done Testing ctor Copy!" << std::endl;
    std::cout << std::endl;
}