//Sandy Zhang
//
//Test Find String
//10/13/24

#include <iostream> 
#include <cassert>
#include "string.hpp"

int main() {
    std::cout << std::endl;

    {
        String str;
        assert(str == "");

        std::cout << "Empty" << std::endl;
        std::cout << std::endl;
    }
    {//1
        String str = "HelloWorld";

        int result = str.findstr(0, "Hello");
        assert(result == 0);

        std::cout << str << std::endl;
        std::cout << "Hello: " << result << std::endl;
        std::cout << std::endl;
    }

    {//2
        String str = "tyisuuhmyuio";

        int result = str.findstr(2, "is");
        int result2 = str.findstr(1, "yisu");
        int result3 = str.findstr(3, "suuh");

        assert(result == 2);
        assert(result2 == 1);
        assert(result3 == 3);

        std::cout << str << std::endl;
        std::cout << "is: " << result << std::endl;
        std::cout << "tyis: " << result2 << std::endl;
        std::cout << "suuh: " << result3 << std::endl;
        std::cout << std::endl;
    }

    {//3
        String str = "IamAlmostDoneIcanDoThisJiaYouJiaYouGanbatteGanbatteMeYaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";

        int result = str.findstr(19, "This");
        int result2 = str.findstr(23, "JiaYou");
        int result3 = str.findstr(1, "amAlmostDone");
        
        assert(result == 19);
        assert(result2 == 23);
        assert(result3 == 1);

        std::cout << str << std::endl;
        std::cout << "This: " << result << std::endl;
        std::cout << "JiaYou: " << result2 << std::endl;
        std::cout << "amAlmostDone: " << result3 << std::endl;
        std::cout << std::endl;
    }

    {//4
        String str = "SoWhentheCathasGotYourTongueTheresNoNeedForDismayhereyeJustSummonUpThisWordAndThenYouveGotaLottoSayButbetterUseItCarefullyOrItCouldChangeYourLifeSupercalifragilisticexpialidociousSupercalifragilisticexpialidociousSupercalifragilisticexpialidocious";

        int result = str.findstr(9, "CathasGot");
        int result2 = str.findstr(18, "YourTongueThere");
        int result3 = str.findstr(213, "Supercalifragilisticexpialidocious");
        
        assert(result == 9);
        assert(result2 == 18);
        assert(result3 == 213);

        std::cout << str << "\n" << std::endl;
        std::cout << "CathasGot: " << result << std::endl;
        std::cout << "YourTongueThere: " << result2 << std::endl;
        std::cout << "Last Supercalifragilisticexpialidocious: " << result3 << std::endl;
        std::cout << std::endl;
    }

    {//5
        String str = "1234567891077889944556611223300";

        int result = str.findstr(9, "10778899");
        int result2 = str.findstr(18, "45566112");
        
        assert(result == 9);
        assert(result2 == 18);

        std::cout << str << "\n" << std::endl;
        std::cout << "10778899: " << result << std::endl;
        std::cout << "45566112: " << result2 << std::endl;
        std::cout << std::endl;
    }

    {//6
        String str = "!@#$%^&*()12345678910!@#$%^&*()12345678910!@#$%^&*()12345678910!@#$%^&*()12345678910!@#$%^&*()12345678910!@#$%^&*()12345678910!@#$%^&*()12345678910!@#$%^&*()12345678910!@#$%^&*()12345678910!@#$%^&*()12345678910!@#$%^&*()12345678910";

        int result = str.findstr(7, "*()12345678910!");
        int result2 = str.findstr(17, "8910!@#$%^&*()123456789");
        int result3 = str.findstr(0, "!@#$%^&*()12345678910");
        
        assert(result == 7);
        assert(result2 == 17);
        assert(result3 == 0);

        std::cout << str << "\n" << std::endl;
        std::cout << "()12345678910!: " << result << std::endl;
        std::cout << "8910!@#$%^&*()123456789: " << result2 << std::endl;
        std::cout << "!@#$%^&*()12345678910: " << result3 <<std::endl;
        std::cout << std::endl;
    }

    {//7
        String str = "13uht776oi788?";

        int result = str.findstr(0, "13");
        int result2 = str.findstr(1, "3uht");
        int result3 = str.findstr(5, "776");
        
        assert(result == 0);
        assert(result2 == 1);
        assert(result3 == 5);

        std::cout << str << "\n" << std::endl;
        std::cout << "13: " << result << std::endl;
        std::cout << "3uht: " << result2 << std::endl;
        std::cout << "776: " << result3 <<std::endl;
        std::cout << std::endl;
    }

    {//8
        String str = "Because I was afraid to speak when I was just a lad. Me father gave me nose a tweak, told me I was bad. But then one day I learned a word that saved me achin' nose. The biggest word you ever heard and this is how it goes";

        int result = str.findstr(8, "I was afraid to speak when I was just a lad");
        int result2 = str.findstr(1, "ecause I was");
        int result3 = str.findstr(41, "just a lad. Me father gave me nose a tweak");
        
        assert(result == 8);
        assert(result2 == 1);
        assert(result3 == 41);

        std::cout << str << "\n" << std::endl;
        std::cout << "I was afraid to speak when I was just a lad: " << result << std::endl;
        std::cout << "ecause I was: " << result2 << std::endl;
        std::cout << "just a lad. Me father gave me nose a tweak: " << result3 <<std::endl;
        std::cout << std::endl;
    }

    {//9
        String str = "Pneumonoultramicroscopicsilicovolcanoconiosis Supercalifragilisticexpialidocious";

        int result = str.findstr(46, "Supercalifragilisticexpialidocious");
        int result2 = str.findstr(0, "Pneumonoultramicros");
        int result3 = str.findstr(50, "rcalifragilisticexpialidocious");
        
        assert(result == 46);
        assert(result2 == 0);
        assert(result3 == 50);

        std::cout << str << "\n" << std::endl;
        std::cout << "Supercalifragilisticexpialidocious: " << result << std::endl;
        std::cout << "Pneumonoultramicros: " << result2 << std::endl;
        std::cout << "rcalifragilisticexpialidocious: " << result3 <<std::endl;
        std::cout << std::endl;
    }

    {//10
        String str = "12345bcdefghqsdfhbvmjuoptlahmjbo2easc1rqhejbc2ejc1ejhejbc2ejc1ej";

        int result = str.findstr(6, "cdefghqsdfhbvmj");
        int result2 = str.findstr(10, "ghqsdfhbvmjuopt");
        int result3 = str.findstr(60, "c1ej");
        
        assert(result == 6);
        assert(result2 == 10);
        assert(result3 == 60);

        std::cout << str << "\n" << std::endl;
        std::cout << "cdefghqsdfhbvmj: " << result << std::endl;
        std::cout << "ghqsdfhbvmjuopt: " << result2 << std::endl;
        std::cout << "c1ej: " << result3 <<std::endl;
        std::cout << std::endl;
    }

    {//11
        String str = "The eyelashes are curved and the eyes are blinking. Your smile is like a crescent moon. The atmosphere is so romantic. I need your company. The eyelashes are curved and the eyes are blinking, and the heart-beating world becomes fun.";

        int result = str.findstr(119, "I need your company. ");
        int result2 = str.findstr(42, "blinking. Your smile is like a crescent moon.");
        int result3 = str.findstr(1, "he eyelashes are curved and the eyes are blinking.");
        
        assert(result == 119);
        assert(result2 == 42);
        assert(result3 == 1);

        std::cout << str << "\n" << std::endl;
        std::cout << "I need your company. : " << result << std::endl;
        std::cout << "blinking. Your smile is like a crescent moon.: " << result2 << std::endl;
        std::cout << "he eyelashes are curved and the eyes are blinking.: " << result3 <<std::endl;
        std::cout << std::endl;
    }

    {//12
        String str = "qsdfhbvmjuoptlaqsdfhbvmjuoptlaqsdfhbvmjuoptla12345bcdefgh12345bcdefgh12345bcdefghhejbc2ejc1ejhejbc2ejc1ej";

        int result = str.findstr(55, "gh12345bcdefgh12345b");
        int result3 = str.findstr(1, "sdfhbvmj");
        
        assert(result == 55);
        assert(result3 == 1);

        std::cout << str << "\n" << std::endl;
        std::cout << "gh12345bcdefgh12345b: " << result << std::endl;
        std::cout << "sdfhbvmj: " << result3 <<std::endl;
        std::cout << std::endl;
    }

    {//13
        String str = "DociousaliexpisticfragicalirupusDociousaliexpisticfragicalirupusDociousaliexpisticfragicalirupusDociousaliexpisticfragicalirupusDociousaliexpisticfragicalirupusDociousaliexpisticfragicalirupusDociousaliexpisticfragicalirupusDociousaliexpisticfragicalirupu";

        int result = str.findstr(5, "usaliexpisticfragi");
        int result2 = str.findstr(12, "pisticfragicalir");
        
        assert(result == 5);
        assert(result2 == 12);

        std::cout << str << "\n" << std::endl;
        std::cout << "usaliexpisticfragi: " << result << std::endl;
        std::cout << "pisticfragicalir: " << result2 <<std::endl;
        std::cout << std::endl;
    }

    {//14
        String str = "Maybe one day I can cure myself Thinking about it again, how should I laugh? The person you love for the first time is both good and bad But like a chest tattoo, it is an eternal mark Follow my breathing until my heart stops";

        int result = str.findstr(14, "I can cure myself Thinking about it again");
        int result2 = str.findstr(12, "? The person you love for the first time");
        int result3 = str.findstr(0, "Maybe one day");
        
        assert(result == 14);
        assert(result2 == 75);
        assert(result3 == 0);

        std::cout << str << "\n" << std::endl;
        std::cout << "I can cure myself Thinking about it again: " << result << std::endl;
        std::cout << "? The person you love for the first time: " << result2 <<std::endl;
        std::cout << "Maybe one day: " << result3 << std::endl;
        std::cout << std::endl;
    }

    {//15
        String str = "errdhjiikerrdhjiik!@#$%^&*()12345678910!@#$%^&*()12345678910!@#$%^&*()12345678910!@#$%^&*()12345678910!@#$%^&*()12345678910!@#$%^&*()12345678910!@#$%^&*()12345678910!@#$%^&*()12345678910!@#$%^&*()12345678910!@#$%^&*()12345678910!@#$%^&*()12345678910";

        int result = str.findstr(1, "rrdhjiikerrdhjiik!@#");
        int result3 = str.findstr(0, "errdhjiike");
        
        assert(result == 1);
        assert(result3 == 0);

        std::cout << str << "\n" << std::endl;
        std::cout << "rrdhjiikerrdhjiik!@#: " << result << std::endl;
        std::cout << "errdhjiike: " << result3 << std::endl;
        std::cout << std::endl;
    }

    {//16
        String str("Methionylthreonylthreonylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylglutaminylleucyllysylglutamylarginyllysylglutamylglycylalanylphenylalanylvalylprolylphenylalanylvalylthreonylleucylglycylaspartylprolylglycylisoleucylglutamylglutaminylserylleucyllysylisoleucylaspartylthreonylleucylisoleucylglutamylalanylglycylalanylaspartylalanylleucylglutamylleucylglycylisoleucylprolylphenylalanylserylaspartylprolylleucylalanylaspartylglycylprolylthreonylisoleucylglutaminylasparaginylalanylthreonylleucylarginylalanylphenylalanylalanylalanylglycylvalylthreonylprolylalanylglutaminylcysteinylphenylalanylglutamylmethionylleucylalanylleucylisoleucylarginylglutaminyllysylhistidylprolylthreonylisoleucylprolylisoleucylglycylleucylleucylmethionyltyrosylalanylasparaginylleucylvalylphenylalanylasparaginyllysylglycylisoleucylaspartylglutamylphenylalanyltyrosylalanylglutaminylcysteinylglutamyllysylvalylglycylvalylaspartylserylvalylleucylvalylalanylaspartylvalylprolylvalylglutaminylglutamylserylalanylprolylphenylalanylarginylglutaminylalanylalanylleucylarginylhistidylasparaginylvalylalanylprolylisoleucylphenylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylseryl");

        int result1 = str.findstr(0, "serylleucylpheny");
        int result2 = str.findstr(1000, "prolylleucylasparaginy");
        int result3 = str.findstr(1690, "threonylthreonylglutaminylarginyltyros");
        int result4 = str.findstr(64, "henylalanylalanylglutaminylleucy");
        int result5 = str.findstr(480, "ylleucyllysylglutamyltyrosylasp");
        int result6 = str.findstr(570, "prolylphenylalanylprolyl");

        assert(result1 == 57);
        assert(result2 == 1392);
        assert(result3 == -1);
        assert(result4 == 69);
        assert(result5 == 1443);
        assert(result6 == 2335);

        std::cout << str << std::endl;
        std::cout << "serylleucylpheny starting at 0: " << result1 << std::endl;
        std::cout << "prolylleucylasparaginy starting at 1000: " << result2 << std::endl;
        std::cout << "threonylthreonylglutaminylarginyltyros starting at 1690 " << result3 << std::endl;
        std::cout << "henylalanylalanylglutaminylleucy starting at 64: " << result4 << std::endl;
        std::cout << "ylleucyllysylglutamyltyrosylasp starting at 480: " << result5 << std::endl;
        std::cout << "prolylphenylalanylprolyl tsrting at 570: " << result6 << std::endl;
        std::cout << std::endl;
    }

    {//17
        String str("threonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylal");

        int result1 = str.findstr(50, "threonylvalylarginyl");
        int result2 = str.findstr(1234, "ltyrosyllysylvalyltyrosylarginyltyro");
        int result3 = str.findstr(2000, "phenylalanylprolylg");
        int result4 = str.findstr(132, "leucylaspartylalanylth");
        int result5 = str.findstr(689, "tyrosyl");
        int result6 = str.findstr(789, "prolylglycylaspartylvalyltyrosyllysylvalyltyro");

        assert(result1 == 2055);
        assert(result2 == 2111);
        assert(result3 == 2022);
        assert(result4 == 364);
        assert(result5 == 759);
        assert(result6 == 2087);

        std::cout << str << std::endl;
        std::cout << "threonylvalylarginyl starting at 50: " << result1 << std::endl;
        std::cout << "ltyrosyllysylvalyltyrosylarginyltyro starting at 1234: " << result2 << std::endl;
        std::cout << "phenylalanylprolylg starting at 2000: " << result3 << std::endl;
        std::cout << "leucylaspartylalanylth starting at 132: " << result4 << std::endl;
        std::cout << "tyrosyl starting at 689: " << result5 << std::endl;
        std::cout << "prolylglycylaspartylvalyltyrosyllysylvalyltyro starting at 789: " << result6 << std::endl;
        std::cout << std::endl;
    }

    {//18
        String str("eucylglutamylleucylglycylisoleucylprolylphenylalanylserylaspartylprolylleucylalanylaspartylglycylprolylthreonylisoleucylglutaminylasparaginylalanylthreonylleucylarginylalanylphenylalanylalanylalanylglycylvalylthreonylprolylalanylglutaminylcysteinylphenylalanylglutamylmethionylleucylalanylleucylisoleucylarginylglutaminyllysylhistidylprolylthreonylisoleucylprolylisoleucylglycylleucylleucylmethionyltyrosylalanylasparaginylleucylvalylphenylalanylasparaginyllysylglycylisoleucylaspartylglutamylphenylalanyltyrosylalanylglutaminylcysteinylglutamyllysylvalylglycylvalylaspartylserylvalylleucylvalylalanylaspartylvalylprolylvalylglutaminylglutamylserylalanylprolylphenylalanylarginylglutaminylalanylalanylleucylarginylhistidylasparaginylvalylalanylprolylisoleucylphenylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanyliso");

        int result1 = str.findstr(4341, "laspartylalanylthreonylvalylalanyliso");
        int result2 = str.findstr(236, "aspartylalanylthre");
        int result3 = str.findstr(1596, "pheny");
        int result4 = str.findstr(0, "glutamylleucylglycy");
        int result5 = str.findstr(3, "lleucylalanylaspartylg");
        int result6 = str.findstr(400, "soleucylprolylphenylalanylseryl");

        assert(result1 == 4496);
        assert(result2 == 2393);
        assert(result3 == 1638);
        assert(result4 == 5);
        assert(result5 == 70);
        assert(result6 == -1);

        std::cout << str << std::endl;
        std::cout << "laspartylalanylthreonylvalylalanyliso starting at 4341: " << result1 << std::endl;
        std::cout << "aspartylalanylthre starting at 236: " << result2 << std::endl;
        std::cout << "pheny starting at 1596: " << result3 << std::endl;
        std::cout << "glutamylleucylglycy starting at 0: " << result4 << std::endl;
        std::cout << "lleucylalanylaspartylg starting at 3: " << result5 << std::endl;
        std::cout << "soleucylprolylphenylalanylseryl startig at: 400 " << result6 << std::endl;
        std::cout << std::endl;
    }

    {//19
        String str("ylleucylisoleucylarginylglutaminyllysylhistidylprolylthreonylisoleucylprolylisoleucylglycylleucylleucylmethionyltyrosylalanylasparaginylleucylvalylphenylalanylasparaginyllysylglycylisoleucylaspartylglutamylphenylalanyltyrosylalanylglutaminylcysteinylglutamyllysylvalylglycylvalylaspartylserylvalylleucylvalylalanylaspartylvalylprolylvalylglutaminylglutamylserylalanylprolylphenylalanylarginylglutaminylalanylalanylleucylarginylhistidylasparaginylvalylalanylprolylisoleucylphenylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphnylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspar");

        int result1 = str.findstr(56, "sylvalyltyrosylarginylty");
        int result2 = str.findstr(987, "tryptophyla");
        int result3 = str.findstr(1596, "glutaminylthreon");
        int result4 = str.findstr(2145, "anylprolylglutam");
        int result5 = str.findstr(0, "phenyl");
        int result6 = str.findstr(3910, "aspar");

        assert(result1 == 1801);
        assert(result2 == 1401);
        assert(result3 == 3602);
        assert(result4 == 3765);
        assert(result5 == 147);
        assert(result6 == 3913);

        std::cout << str << std::endl;
        std::cout << "sylvalyltyrosylarginylty starting at 56: " << result1 << std::endl;
        std::cout << "tryptophyla starting at 987: " << result2 << std::endl;
        std::cout << "glutaminylthreon starting at 1569: " << result3 << std::endl;
        std::cout << "anylprolylglutam starting at 2145: " << result4 << std::endl;
        std::cout << "phenyl starting at 0: " << result5 << std::endl;
        std::cout << "aspar starting at 3910: " << result6 << std::endl;
        std::cout << std::endl;
    }

    {//20
        String str("asparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylalanylprolylaspartylglutaminylvalyllysylalanylalanylisoleucylaspartylalanylglycylalanylalanylglycylalanylisoleucylserylglycylserylalanylisoleucylvalyllysylisoleucylisoleucylglutamylglutaminylhistidylasparaginylisoleucylglutamylprolylglutamyllysylmethionylleucylalanylalanylleucyllysylvalylphenylalanylvalylglutaminylprolylmethionyllysylalanylalanylthreonylarginylacetylseryltyrosylserylisoleucylthreonylserylprolylserylglutaminylphenylalanylvalylphenylalanylleucylserylserylvalyltryptophylalanylaspartylprolylisoleucylglutamylleucylleucylasparaginylvalylcysteinylthreonylserylserylleucylglycylasparaginylglutaminylphenylalanylglutaminylthreonylglutaminylglutaminylalanylarginylthreonylthreonylglutaminylvalylglutaminylglutaminylphenylalanylserylglutaminylvalyltryptophyllysylprolylphenylalanylprolylglutaminylserylthreonylvalylarginylphenylalanylprolylglycylaspartylvalyltyrosyllysylvalyltyrosylarginyltyrosylasparaginylalanylvalylleucylaspartylprolylleucylisoleucylthreonylalanylleucylleucylglycylthreonylphenylalanylaspartylthreonylarginylasparaginylarginylisoleucylisoleucylglutamylvalylglutamylasparaginylglutaminylglutaminylserylprolylthreonylthreonylalanylglutamylthreonylleucylaspartylalanylthreonylarginylarginylvalylaspartylaspartylalanylthreonylvalylalanylisoleucylarginylserylalanylasparaginylisoleucylasparaginylleucylvalylasparaginylglutamylleucylvalylarginylglycylthreonylglycylleucyltyrosylasparaginylglutaminylasparaginylthreonylphenylalanylglutamylserylmethionylserylglycylleucylvalyltryptophylthreonylserylalanylprolylalanyltitinmethionylglutaminylarginyltyrosylglutamylserylleucylphenylalanylalanylisoleucylcysteinylprolylprolylaspartylalanylaspartylaspartylaspartylleucylleucylarginylglutaminylisoleucylalanylseryltyrosylglycylarginylglycyltyrosylthreonyltyrosylleucylleucylserylarginylalanylglycylvalylthreonylglycylalanylglutamylasparaginylarginylalanylalanylleucylprolylleucylasparaginylhistidylleucylvalylalanyllysylleucyllysylglutamyltyrosylasparaginylalanylalanylprolylprolylleucylglutaminylglycylphenylalanylglycylisoleucylserylala");

        int result1 = str.findstr(357, "glutaminylglycylphenyl");
        int result2 = str.findstr(159, "tyrosylasparaginy");
        int result3 = str.findstr(1357, "prolylleucylglutaminylglycylphenylalanylglycylisoleucylserylala");
        int result4 = str.findstr(39, "histidylleucylvalyl");
        int result5 = str.findstr(9, "inylalanylalanylleucylp");
        int result6 = str.findstr(2200, "serylala");

        assert(result1 == 2211);
        assert(result2 == 1106);
        assert(result3 == 2199);
        assert(result4 == 59);
        assert(result5 == 14);
        assert(result6 == 2254);

        std::cout << str << std::endl;
        std::cout << "glutaminylglycylphenyl starting at 357: " << result1 << std::endl;
        std::cout << "tyrosylasparaginy starting at 159: " << result2 << std::endl;
        std::cout << "prolylleucylglutaminylglycylphenylalanylglycylisoleucylserylala starting at 1357: " << result3 << std::endl;
        std::cout << "histidylleucylvalyl starting at 39: " << result4 << std::endl;
        std::cout << "inylalanylalanylleucylp starting at 9: " << result5 << std::endl;
        std::cout << "serylala starting at 2200: " << result6 << std::endl;
        std::cout << std::endl;
    }

    std::cout << "Done Testing Find String!" << std::endl;
    std::cout << std::endl;
    return 0;

}