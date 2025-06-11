//Sandy Zhang
//Test for Split
//10/10/24

#include <iostream>
#include <cassert>
#include <vector>
#include "string.hpp"

int main() {
    std::cout << std::endl;

    {//1
        String str('\0');
        std::vector<String> result;

        result = str.split('\0');
        assert(result[0] == "");

        std::cout << "Empty" << std::endl;
        std::cout << std::endl;
    }

    {//2
        String str("abc ef gh");
        std::vector<String> result;

        result = str.split(' ');

        assert(result.size() == 3);
        assert(result[0] == "abc");
        assert(result[1] == "ef");
        assert(result[2] == "gh");


        std::cout << str << std::endl;
        std::cout << "Size of Vector: " << result.size() << std::endl;
        std::cout << "result[0] is: " << result[0] << std::endl;
        std::cout << "result[1] is: " << result[1] << std::endl;
        std::cout << "result[2] is: " << result[2] << std::endl;
        std::cout << std::endl;
    }

    {//3
        String str = "-a--b-";
        std::vector<String> result;
        
        result = str.split('-');

        assert(result.size() == 5);
        assert(result[0] == "");
        assert(result[1] == "a");
        assert(result[2] == "");
        assert(result[3] == "b");
        assert(result[4] == "");
        
        std::cout << str << std::endl;
        std::cout << "Size of Vector: " << result.size() << std::endl;
        std::cout << "result[0] is: " << result[0] << std::endl;
        std::cout << "result[1] is: " << result[1] << std::endl;
        std::cout << "result[2] is:" << result[2] << std::endl;
        std::cout << "result[3] is: " << result[3] << std::endl;
        std::cout << "result[4] is: " << result[4] << std::endl;
        std::cout << std::endl;
    }

    {
        String str = "I finally figured it out!!!";
        std::vector<String> result = str.split('-');        

        assert(result.size() == 1);
        assert(result[0] == "I finally figured it out!!!");

        std::cout << str << std::endl;
        std::cout << "Size of Vector: " << result.size() << std::endl;
        std::cout << "str[0] is: " << result[0] << std::endl;
        std::cout << std::endl;


    }

    {
        String str = "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
        std::vector<String> result = str.split('!');        

        assert(result.size() == 250);
        assert(result[0] == "");

        std::cout << str << std::endl;
        std::cout << "Size of Vector: " << result.size() << std::endl;
        std::cout << "result All is: " << result[0] << std::endl;

        std::cout << std::endl;


    }

    {
        String str = "....................................";
        std::vector<String> result = str.split('.');        

        assert(result.size() == 37);
        assert(result[0] == "");

        std::cout << str << std::endl;
        std::cout << "Size of Vector: " << result.size() << std::endl;
        std::cout << "result All is: " << result[0] << std::endl;

        std::cout << std::endl;


    }

    {//4
        String str = "Hello-world-!";
        std::vector<String> result;
        
        result = str.split('-');

        assert(result.size() == 3);
        assert(result[0] == "Hello");
        assert(result[1] == "world");
        assert(result[2] == '!');

        
        std::cout << str << std::endl;
        std::cout << "Size of Vector: " << result.size() << std::endl;
        std::cout << "result[0] is: " << result[0] << std::endl;
        std::cout << "result[1] is: " << result[1] << std::endl;
        std::cout << "result[2] is: " << result[2] << std::endl;
        std::cout << std::endl;
    }

    {//5
        String str = "1_2_3_4_5_6_*";
        std::vector<String> result;
        
        result = str.split('_');

        assert(result.size() == 7);
        assert(result[0] == "1");
        assert(result[1] == "2");
        assert(result[2] == '3');
        assert(result[3] == "4");
        assert(result[4] == "5");
        assert(result[5] == '6');
        assert(result[6] == '*');
       
        std::cout << str << std::endl;
        std::cout << "Size of Vector: " << result.size() << std::endl;
        std::cout << "result[0] is: " << result[0] << std::endl;
        std::cout << "result[1] is: " << result[1] << std::endl;
        std::cout << "result[2] is: " << result[2] << std::endl;
        std::cout << "result[3] is: " << result[3] << std::endl;
        std::cout << "result[4] is: " << result[4] << std::endl;
        std::cout << "result[5] is: " << result[5] << std::endl;
        std::cout << "result[6] is: " << result[6] << std::endl;
        std::cout << std::endl;
    }

    {//7
        String str = "12345678910 !@#$%^&*(!) ABCDEFGH";
        std::vector<String> result;
        
        result = str.split(' ');

        assert(result.size() == 3);
        assert(result[0] == "12345678910");
        assert(result[1] == "!@#$%^&*(!)");
        assert(result[2] == "ABCDEFGH");
        
        std::cout << str << std::endl;
        std::cout << "Size of Vector: " << result.size() << std::endl;
        std::cout << "result[0] is: " << result[0] << std::endl;
        std::cout << "result[1] is: " << result[1] << std::endl;
        std::cout << "result[2] is: " << result[2] << std::endl;
        std::cout << std::endl;
    }

    {//8
        String str = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaarrrrrrrrrrrrrrrrrrrrrrrrrreeeeeeeeeeeeeeeey ldhdjdhdjdjdjdjdhdhdjdjjdjdjdjdkdkkdjdhddhdjdjddjdjjdjdjdhjfjjfjffjfjfjjfjkdkkffkkffjjfkkfjfkkfkfjjfkfkkffkfkkkfkfkkfkfkkfjfjrjkrkkkdkkuurkkrkkkfkkkkkfkkkgkkkfkkfkdkiiriiriiroyyjjejcjndjuururujjjfuutuiirruuytjjehyurudhdutufjfjnnfuutuuuutyyeifnfhfutuiira 12345678910 !@#$%^&*(!) ABCDEFGH";
        std::vector<String> result;
        
        result = str.split(' ');

        assert(result.size() == 5);
        assert(result[0] == "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaarrrrrrrrrrrrrrrrrrrrrrrrrreeeeeeeeeeeeeeeey");
        assert(result[1] == "ldhdjdhdjdjdjdjdhdhdjdjjdjdjdjdkdkkdjdhddhdjdjddjdjjdjdjdhjfjjfjffjfjfjjfjkdkkffkkffjjfkkfjfkkfkfjjfkfkkffkfkkkfkfkkfkfkkfjfjrjkrkkkdkkuurkkrkkkfkkkkkfkkkgkkkfkkfkdkiiriiriiroyyjjejcjndjuururujjjfuutuiirruuytjjehyurudhdutufjfjnnfuutuuuutyyeifnfhfutuiira");
        assert(result[2] == "12345678910");
        assert(result[3] == "!@#$%^&*(!)");
        assert(result[4] == "ABCDEFGH");

        std::cout << str << std::endl;
        std::cout << std::endl;
        std::cout << "Size of Vector: " << result.size() << std::endl;
        std::cout << "result[0] is: " << result[0] << std::endl;
        std::cout << "result[1] is: " << result[1] << std::endl;
        std::cout << "result[2] is: " << result[2] << std::endl;
        std::cout << "result[3] is: " << result[3] << std::endl;
        std::cout << "result[4] is: " << result[4] << std::endl;
        std::cout << std::endl;
    }

    {//9
        String str = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaarrrrrrrrrrrrrrrrrrrrrrrrrreeeeeeeeeeeeeeeey-ldhdjdhdjdjdjdjdhdhdjdjjdjdjdjdkdkkdjdhddhdjdjddjdjjdjdjdhjfjjfjffjfjfjjfjkdkkffkkffjjfkkfjfkkfkfjjfkfkkffkfkkkfkfkkfkfkkfjfjrjkrkkkdkkuurkkrkkkfkkkkkfkkkgkkkfkkfkdkiiriiriiroyyjjejcjndjuururujjjfuutuiirruuytjjehyurudhdutufjfjnnfuutuuuutyyeifnfhfutuiira-12345678910-!@#$%^&*(!)-ABCDEFGH-edcdyucvducdccdcudccduccucoirrviivivgvrir8gbxvssicofitobgbogobgbghbihbfvvvfbfuvvhvihtihtibibtibobpbjgobgpbgjbgbgbjogpbjgobjgbjgbpgbjgbjgbgjbpgbjpbjfpbfbjhhvht8hthgh8h8gh9tvbvbuvviuvfvvbfvbfuvbfvbfufbubiuvbfuvbuvbubvufbvfuvbvhccvdiucdjdiddbvfbvfvfuvbfvfbv";
        std::vector<String> result;
        
        result = str.split('-');

        assert(result.size() == 6);
        assert(result[0] == "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaarrrrrrrrrrrrrrrrrrrrrrrrrreeeeeeeeeeeeeeeey");
        assert(result[1] == "ldhdjdhdjdjdjdjdhdhdjdjjdjdjdjdkdkkdjdhddhdjdjddjdjjdjdjdhjfjjfjffjfjfjjfjkdkkffkkffjjfkkfjfkkfkfjjfkfkkffkfkkkfkfkkfkfkkfjfjrjkrkkkdkkuurkkrkkkfkkkkkfkkkgkkkfkkfkdkiiriiriiroyyjjejcjndjuururujjjfuutuiirruuytjjehyurudhdutufjfjnnfuutuuuutyyeifnfhfutuiira");
        assert(result[2] == "12345678910");
        assert(result[3] == "!@#$%^&*(!)");
        assert(result[4] == "ABCDEFGH");
        assert(result[5] == "edcdyucvducdccdcudccduccucoirrviivivgvrir8gbxvssicofitobgbogobgbghbihbfvvvfbfuvvhvihtihtibibtibobpbjgobgpbgjbgbgbjogpbjgobjgbjgbpgbjgbjgbgjbpgbjpbjfpbfbjhhvht8hthgh8h8gh9tvbvbuvviuvfvvbfvbfuvbfvbfufbubiuvbfuvbuvbubvufbvfuvbvhccvdiucdjdiddbvfbvfvfuvbfvfbv");

        std::cout << str << std::endl;
        std::cout << std::endl;
        std::cout << "Size of Vector: " << result.size() << std::endl;
        std::cout << "result[0] is: " << result[0] << std::endl;
        std::cout << "result[1] is: " << result[1] << std::endl;
        std::cout << "result[2] is: " << result[2] << std::endl;
        std::cout << "result[3] is: " << result[3] << std::endl;
        std::cout << "result[4] is: " << result[4] << std::endl;
        std::cout << "result[5] is: " << result[5] << std::endl;
        std::cout << std::endl;
    }

    {//10
        String str = "bbbfbvfvfbvrugbugbrgbgubgubgubgtgugtigugbugbgutbgtbutugbiutjvbvbiubruburbbrubrgbugbrgugbrugurbgrugbrgurgbefghij-aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaarrrrrrrrrrrrrrrrrrrrrrrrrreeeeeeeeeeeeeeeey-ldhdjdhdjdjdjdjdhdhdjdjjdjdjdjdkdkkdjdhddhdjdjddjdjjdjdjdhjfjjfjffjfjfjjfjkdkkffkkffjjfkkfjfkkfkfjjfkfkkffkfkkkfkfkkfkfkkfjfjrjkrkkkdkkuurkkrkkkfkkkkkfkkkgkkkfkkfkdkiiriiriiroyyjjejcjndjuururujjjfuutuiirruuytjjehyurudhdutufjfjnnfuutuuuutyyeifnfhfutuiira-12345678910-!@#$%^&*(!)-ABCDEFGH-edcdyucvducdccdcudccduccucoirrviivivgvrir8gbxvssicofitobgbogobgbghbihbfvvvfbfuvvhvihtihtibibtibobpbjgobgpbgjbgbgbjogpbjgobjgbjgbpgbjgbjgbgjbpgbjpbjfpbfbjhhvht8hthgh8h8gh9tvbvbuvviuvfvvbfvbfuvbfvbfufbubiuvbfuvbuvbubvufbvfuvbvhccvdiucdjdiddbvfbvfvfuvbfvfbv";
        std::vector<String> result;
    
        result = str.split('-');

        assert(result.size() == 7);
        assert(result[0] == "bbbfbvfvfbvrugbugbrgbgubgubgubgtgugtigugbugbgutbgtbutugbiutjvbvbiubruburbbrubrgbugbrgugbrugurbgrugbrgurgbefghij");
        assert(result[1] == "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaarrrrrrrrrrrrrrrrrrrrrrrrrreeeeeeeeeeeeeeeey");
        assert(result[2] == "ldhdjdhdjdjdjdjdhdhdjdjjdjdjdjdkdkkdjdhddhdjdjddjdjjdjdjdhjfjjfjffjfjfjjfjkdkkffkkffjjfkkfjfkkfkfjjfkfkkffkfkkkfkfkkfkfkkfjfjrjkrkkkdkkuurkkrkkkfkkkkkfkkkgkkkfkkfkdkiiriiriiroyyjjejcjndjuururujjjfuutuiirruuytjjehyurudhdutufjfjnnfuutuuuutyyeifnfhfutuiira");
        assert(result[3] == "12345678910");
        assert(result[4] == "!@#$%^&*(!)");
        assert(result[5] == "ABCDEFGH");
        assert(result[6] == "edcdyucvducdccdcudccduccucoirrviivivgvrir8gbxvssicofitobgbogobgbghbihbfvvvfbfuvvhvihtihtibibtibobpbjgobgpbgjbgbgbjogpbjgobjgbjgbpgbjgbjgbgjbpgbjpbjfpbfbjhhvht8hthgh8h8gh9tvbvbuvviuvfvvbfvbfuvbfvbfufbubiuvbfuvbuvbubvufbvfuvbvhccvdiucdjdiddbvfbvfvfuvbfvfbv");
      
        std::cout << str << std::endl;
        std::cout << std::endl;
        std::cout << "Size of Vector: " << result.size() << std::endl;
        std::cout << "result[0] is: " << result[0] << std::endl;
        std::cout << "result[1] is: " << result[1] << std::endl;
        std::cout << "result[2] is: " << result[2] << std::endl;
        std::cout << "result[3] is: " << result[3] << std::endl;
        std::cout << "result[4] is: " << result[4] << std::endl;
        std::cout << "result[5] is: " << result[5] << std::endl;
        std::cout << "result[6] is: " << result[6] << std::endl;
        std::cout << std::endl;
    }

    {//11
        String str = "decjbdcdbcdbcdjcbdjccdcbdjkcvjcvdkjcdcjkdvcdcvdccvdkcjdvkcjdvckjvcdjcvdkjcvdjcbdjdvcjkdmcoolbbbfbvfvfbvrugbugbrgbgubgubgubgtgugtigugbugbgutbgtbutugbiutjvbvbiubruburbbrubrgbugbrgugbrugurbgrugbrgurgbefghij?aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaarrrrrrrrrrrrrrrrrrrrrrrrrreeeeeeeeeeeeeeeey?ldhdjdhdjdjdjdjdhdhdjdjjdjdjdjdkdkkdjdhddhdjdjddjdjjdjdjdhjfjjfjffjfjfjjfjkdkkffkkffjjfkkfjfkkfkfjjfkfkkffkfkkkfkfkkfkfkkfjfjrjkrkkkdkkuurkkrkkkfkkkkkfkkkgkkkfkkfkdkiiriiriiroyyjjejcjndjuururujjjfuutuiirruuytjjehyurudhdutufjfjnnfuutuuuutyyeifnfhfutuiira?decjbdcdbcdbcdjcbdjccdcbdjkcvjcvdkjcdcjkdvcdcvdccvdkcjdvkcjdvckjvcdjcvdkjcvdjcbdjdvcjkdm12345678910!@#$%^&*(!)ABCDEFGH?edcdyucvducdccdcudccduccucoirrviivivgvrir8gbxvssicofitobgbogobgbghbihbfvvvfbfuvvhvihtihtibibtibobpbjgobgpbgjbgbgbjogpbjgobjgbjgbpgbjgbjgbgjbpgbjpbjfpbfbjhhvht8hthgh8h8gh9tvbvbuvviuvfvvbfvbfuvbfvbfufbubiuvbfuvbuvbubvufbvfuvbvhccvdiucdjdiddbvfbvfvfuvbfvfbvbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb";
        std::vector<String> result;
    
        result = str.split('?');

        assert(result.size() == 5);
        assert(result[0] == "decjbdcdbcdbcdjcbdjccdcbdjkcvjcvdkjcdcjkdvcdcvdccvdkcjdvkcjdvckjvcdjcvdkjcvdjcbdjdvcjkdmcoolbbbfbvfvfbvrugbugbrgbgubgubgubgtgugtigugbugbgutbgtbutugbiutjvbvbiubruburbbrubrgbugbrgugbrugurbgrugbrgurgbefghij");
        assert(result[1] == "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaarrrrrrrrrrrrrrrrrrrrrrrrrreeeeeeeeeeeeeeeey");
        assert(result[2] == "ldhdjdhdjdjdjdjdhdhdjdjjdjdjdjdkdkkdjdhddhdjdjddjdjjdjdjdhjfjjfjffjfjfjjfjkdkkffkkffjjfkkfjfkkfkfjjfkfkkffkfkkkfkfkkfkfkkfjfjrjkrkkkdkkuurkkrkkkfkkkkkfkkkgkkkfkkfkdkiiriiriiroyyjjejcjndjuururujjjfuutuiirruuytjjehyurudhdutufjfjnnfuutuuuutyyeifnfhfutuiira");
        assert(result[3] == "decjbdcdbcdbcdjcbdjccdcbdjkcvjcvdkjcdcjkdvcdcvdccvdkcjdvkcjdvckjvcdjcvdkjcvdjcbdjdvcjkdm12345678910!@#$%^&*(!)ABCDEFGH");
        assert(result[4] == "edcdyucvducdccdcudccduccucoirrviivivgvrir8gbxvssicofitobgbogobgbghbihbfvvvfbfuvvhvihtihtibibtibobpbjgobgpbgjbgbgbjogpbjgobjgbjgbpgbjgbjgbgjbpgbjpbjfpbfbjhhvht8hthgh8h8gh9tvbvbuvviuvfvvbfvbfuvbfvbfufbubiuvbfuvbuvbubvufbvfuvbvhccvdiucdjdiddbvfbvfvfuvbfvfbvbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb");
      
        std::cout << str << std::endl;
        std::cout << std::endl;
        std::cout << "Size of Vector: " << result.size() << std::endl;
        std::cout << "result[0] is: " << result[0] << std::endl;
        std::cout << "result[1] is: " << result[1] << std::endl;
        std::cout << "result[2] is: " << result[2] << std::endl;
        std::cout << "result[3] is: " << result[3] << std::endl;
        std::cout << "result[4] is: " << result[4] << std::endl;
        std::cout << std::endl;
    }    

    {//12
        String str = "Can you continue to cry to me, smile to me and be kind to me? Continue to let me think about you, be crazy about you, and grow old with you I’ve given you a good one. Do you still want it? I don't dare to reveal the answer I just need you by my side to quarrel with me, to quarrel with me Don't teach me by leaving. The people you lose are the most important. Don't say you once loved me Let's go back to that second How are you? Can you continue to cry to me, smile to me and be kind to me? Continue to let me think about you, be crazy about you, and grow old with you Are you okay? I really want to know Don't throw away my love in a hurry I just need you by my side to quarrel with me, to quarrel with me Don't teach me by leaving. The people you lose are the most important. Don't say you once loved me Let's go back to that second How are you?";
        std::vector<String> result;
    
        result = str.split('?');

        assert(result.size() == 7);
        assert(result[0] == "Can you continue to cry to me, smile to me and be kind to me");
        assert(result[1] == " Continue to let me think about you, be crazy about you, and grow old with you I’ve given you a good one. Do you still want it");
        assert(result[2] == " I don't dare to reveal the answer I just need you by my side to quarrel with me, to quarrel with me Don't teach me by leaving. The people you lose are the most important. Don't say you once loved me Let's go back to that second How are you");
        assert(result[3] == " Can you continue to cry to me, smile to me and be kind to me");
        assert(result[4] == " Continue to let me think about you, be crazy about you, and grow old with you Are you okay");
        assert(result[5] == " I really want to know Don't throw away my love in a hurry I just need you by my side to quarrel with me, to quarrel with me Don't teach me by leaving. The people you lose are the most important. Don't say you once loved me Let's go back to that second How are you");
        assert(result[6] == "");
      
        std::cout << str << std::endl;
        std::cout << std::endl;
        std::cout << "Size of Vector: " << result.size() << std::endl;
        std::cout << "result[0] is: " << result[0] << std::endl;
        std::cout << "result[1] is: " << result[1] << std::endl;
        std::cout << "result[2] is: " << result[2] << std::endl;
        std::cout << "result[3] is: " << result[3] << std::endl;
        std::cout << "result[4] is: " << result[4] << std::endl;
        std::cout << "result[5] is: " << result[5] << std::endl;
        std::cout << "result[6] is: " << result[6] <<std::endl;
        std::cout << std::endl;
    }  

    {//13
        String str = "With disheveled hair and many scars, you don’t recognize my words. However, the sprouts are smiling and the belly is getting bigger and bigger Thinking that the person you see is the same as you are a deliberate fool.Finally scared of what I believe I'm a little sad and God always says that singing would be much better. He is more deceptive than cruel by nature. The skirt dances lightly, it's not her fault that she's lonely and beautiful Who can love and care about the world even if their throat is exhausted? If you would have mercy on me Why catch me Forgive the devil Gritting teeth, timidity and loneliness Why don't you ask me Humans did it on purpose why impartiality Choose me Will it break me, break me, break me Will you pity me, pity me, pity me? Just for a while, I will be cowardly and quietly cowardly Finally broke through the eggshell But I saw something darker";
        std::vector<String> result;
    
        result = str.split('.');

        assert(result.size() == 5);
        assert(result[0] == "With disheveled hair and many scars, you don’t recognize my words");
        assert(result[1] == " However, the sprouts are smiling and the belly is getting bigger and bigger Thinking that the person you see is the same as you are a deliberate fool");
        assert(result[2] == "Finally scared of what I believe I'm a little sad and God always says that singing would be much better");
        assert(result[3] == " He is more deceptive than cruel by nature");
        assert(result[4] == " The skirt dances lightly, it's not her fault that she's lonely and beautiful Who can love and care about the world even if their throat is exhausted? If you would have mercy on me Why catch me Forgive the devil Gritting teeth, timidity and loneliness Why don't you ask me Humans did it on purpose why impartiality Choose me Will it break me, break me, break me Will you pity me, pity me, pity me? Just for a while, I will be cowardly and quietly cowardly Finally broke through the eggshell But I saw something darker");
          
        std::cout << str << std::endl;
        std::cout << std::endl;
        std::cout << "Size of Vector: " << result.size() << std::endl;
        std::cout << "result[0] is: " << result[0] << std::endl;
        std::cout << "result[1] is: " << result[1] << std::endl;
        std::cout << "result[2] is: " << result[2] << std::endl;
        std::cout << "result[3] is: " << result[3] << std::endl;
        std::cout << "result[4] is: " << result[4] << std::endl;
        std::cout << std::endl;
    } 

    {//14+2
        String str = "With disheveled hair and many scars, you don’t recognize my words. However, the sprouts are smiling and the belly is getting bigger and bigger Thinking that the person you see is the same as you are a deliberate fool.Finally scared of what I believe I'm a little sad and God always says that singing would be much better. He is more deceptive than cruel by nature. The skirt dances lightly, it's not her fault that she's lonely and beautiful Who can love and care about the world even if their throat is exhausted? If you would have mercy on me Why catch me Forgive the devil Gritting teeth, timidity and loneliness Why don't you ask me Humans did it on purpose why impartiality Choose me Will it break me, break me, break me Will you pity me, pity me, pity me? Just for a while, I will be cowardly and quietly cowardly Finally broke through the eggshell But I saw something darker";
        std::vector<String> result;
    
        result = str.split('1');

        assert(result.size() == 1);
        assert(result[0] == "With disheveled hair and many scars, you don’t recognize my words. However, the sprouts are smiling and the belly is getting bigger and bigger Thinking that the person you see is the same as you are a deliberate fool.Finally scared of what I believe I'm a little sad and God always says that singing would be much better. He is more deceptive than cruel by nature. The skirt dances lightly, it's not her fault that she's lonely and beautiful Who can love and care about the world even if their throat is exhausted? If you would have mercy on me Why catch me Forgive the devil Gritting teeth, timidity and loneliness Why don't you ask me Humans did it on purpose why impartiality Choose me Will it break me, break me, break me Will you pity me, pity me, pity me? Just for a while, I will be cowardly and quietly cowardly Finally broke through the eggshell But I saw something darker");
    
          
        std::cout << str << std::endl;
        std::cout << std::endl;
        std::cout << "Size of Vector: " << result.size() << std::endl;
        std::cout << "result[0] is: " << result[0] << std::endl;
        std::cout << std::endl;
    } 

    {//14+2
        String str = "With disheveled hair and many scars, you don’t recognize my words. However, the sprouts are smiling and the belly is getting bigger and bigger Thinking that the person you see is the same as you are a deliberate fool.Finally scared of what I believe I'm a little sad and God always says that singing would be much better. He is more deceptive than cruel by nature. The skirt dances lightly, it's not her fault that she's lonely and beautiful Who can love and care about the world even if their throat is exhausted? If you would have mercy on me Why catch me Forgive the devil Gritting teeth, timidity and loneliness Why don't you ask me Humans did it on purpose why impartiality Choose me Will it break me, break me, break me Will you pity me, pity me, pity me? Just for a while, I will be cowardly and quietly cowardly Finally broke through the eggshell But I saw something darker";
        std::vector<String> result;
    
        result = str.split('1');

        assert(result.size() == 1);
        assert(result[0] == "With disheveled hair and many scars, you don’t recognize my words. However, the sprouts are smiling and the belly is getting bigger and bigger Thinking that the person you see is the same as you are a deliberate fool.Finally scared of what I believe I'm a little sad and God always says that singing would be much better. He is more deceptive than cruel by nature. The skirt dances lightly, it's not her fault that she's lonely and beautiful Who can love and care about the world even if their throat is exhausted? If you would have mercy on me Why catch me Forgive the devil Gritting teeth, timidity and loneliness Why don't you ask me Humans did it on purpose why impartiality Choose me Will it break me, break me, break me Will you pity me, pity me, pity me? Just for a while, I will be cowardly and quietly cowardly Finally broke through the eggshell But I saw something darker");
    
          
        std::cout << str << std::endl;
        std::cout << std::endl;
        std::cout << "Size of Vector: " << result.size() << std::endl;
        std::cout << "result[0] is: " << result[0] << std::endl;
        std::cout << std::endl;
    } 

    std::cout << "Done Testing Split!" << std::endl;
    std::cout << std::endl;
}

