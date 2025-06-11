//Sandy Zhang
//Lab 7
//10/14/24


#include <iostream>
#include <cassert>
#include "string.hpp"

int main (){

	std::cout << std::endl;
	{//1
		String str;
		String str2;

		assert(str <= str2);

		std::cout << "Empty <= Empty" << std::endl;
		std::cout << std::endl;

	}

	{//2
		String str("Hi There");
		String str2;

		assert(str2 < str);

		std::cout << "Empty < " << str << std::endl;
		std::cout << std::endl;
	}

	{//3
		String str("12345 6789 10");
		String str2("ABCD EFGH I");

		assert(str <= str2);

		std::cout << str << " <= " << str2 << std::endl;
		std::cout << std::endl;
	}

	{//4
		String str("!@#$ %^&*( !)");
		String str2("ABCD EFGH I");

		assert(str < str2);

		std::cout << str << " < " << str2 << std::endl;
		std::cout << std::endl;
	}

	{//5
		String str("abcd efgh i");
		String str2("ABCD EFGH I");

		assert(str2 <= str);

		std::cout << str2 << " <= " << str << std::endl;
		std::cout << std::endl;
	}

	{//6
		char str[8] = {'1', 'm', '*', ',', '+', 'A', 'e', ' '};

		assert(str[0] < str[5]);
		assert(str[2] <= str[6]);
		assert(str[7] < str[3]);
		assert(str[6] <= str[1]);
		assert(str[2] < str[4]);

		std::cout << "{'1', 'm', '*', ',', '+', 'A', 'e', ' '}" << std::endl;
		std::cout << str[0] << " < " << str[5] << std::endl;
		std::cout << str[2] << " <= " << str[6] << std::endl;
		std::cout << "Empty < " << str[3] << std::endl;
		std::cout << str[6] << " <= " << str[1] << std::endl;
		std::cout << str[2] << " < " << str[4] << std::endl;
		std::cout << std::endl;
	}

	{//7
        String str("Sz@#$%^&*(!)12345678910abcdefghijklmnopqrstuvwxyzzyxwvutsrqponmlkjhgifedcba01987654321)!(*&^%$#@!)!@#$%^&*(!)12345678910abcdefghijklmnopqrstuvwxyzzyxwvutsrqponmlkjhgifedcba01987654321)!(*&^%$#@!)!@#$%^&*(!)12345678910abcdefghijklmnopqrstuvwxyzzyxwvuts");
        String str2("z@#$%^&*(!)12345678910abcdefghijklmnopqrstuvwxyzzyxwvutsrqponmlkjhgifedcba01987654321)!(*&^%$#@!)!@#$%^&*(!)12345678910abcdefghijklmnopqrstuvwxyzzyxwvutsrqponmlkjhgifedcba01987654321)!(*&^%$#@!)!@#$%^&*(!)12345678910abcdefghijklmnopqrstuvwxyzzyxwvuts");

        assert(str <= str2);

        std::cout << str << "\n <= \n" << str2 << std::endl;
        std::cout << std::endl;
	}

	{//8
        String str("Oh, supercalifragilisticexpialidocious Even though the sound of it is something quite atrocious If you say it loud enough you'll always sound precocious Supercalifragilisticexpialidocious Um-dittle-ittl-um-dittle-I Um-dittle-ittl-um-dittle-I");
        String str2("oh, supercalifragilisticexpialidocious Even though the sound of it is something quite atrocious If you say it loud enough you'll always sound precocious Supercalifragilisticexpialidocious Um-dittle-ittl-um-dittle-I Um-dittle-ittl-um-dittle-I");

        assert(str < str2);

        std::cout << str << "\n < \n" << str2 << std::endl;
        std::cout << std::endl;
	}

	{//9
        String str("ldhdjdhdjdjdjdjdhdhdjdjjdjdjdjdkdkkdjdhddhdjdjddjdjjdjdjdhjfjjfjffjfjfjjfjkdkkffkkffjjfkkfjfkkfkfjjfkfkkffkfkkkfkfkkfkfkkfjfjrjkrkkkdkkuurkkrkkkfkkkkkfkkkgkkkfkkfkdkiiriiriiroyyjjejcjndjuururujjjfuutuiirruuytjjehyurudhdutufjfjnnfuutuuuutyyeifnfhfutuiira");
        String str2("ldhdjdhdjdjdjdjdhdhdjdjjdjdjdjdkdkkdjdhddhdjdjddjdjjdjdjdhjfjjfjffjfjfjjfjkdkkffkkffjjfkkfjfkkfkfjjfkfkkffkfkkkfkfkkfkfkkfjfjrjkrkkkdkkuurkkrkkkfkkkkkfkkkgkkkfkkfkdkiiriiriiroyyjjejcjndjuururujjjfuutuiirruuytjjehyurudhdutufjfjnnfuutuuuutyyeifnfhfutuiira");

        assert(str <= str2);

        std::cout << str << "\n <= \n" << str2 << std::endl;
        std::cout << std::endl;
	}

	{//10
        String str("Unknowingly, you have left me Unknowingly, I followed this rhythm With hindsight, another autumn has passed I realized later that I should live a good life and leave silently On the verge of danger Baby~ My world is in a storm Wu~~~~");
        String str2("ldhdjdhdjdjdjdjdhdhdjdjjdjdjdjdkdkkdjdhddhdjdjddjdjjdjdjdhjfjjfjffjfjfjjfjkdkkffkkffjjfkkfjfkkfkfjjfkfkkffkfkkkfkfkkfkfkkfjfjrjkrkkkdkkuurkkrkkkfkkkkkfkkkgkkkfkkfkdkiiriiriiroyyjjejcjndjuururujjjfuutuiirruuytjjehyurudhdutufjfjnnfuutuuuutyyeifnfhfutuiira");

        assert(str < str2);

        std::cout << str << "\n < \n" << str2 << std::endl;
        std::cout << std::endl;
	}

	{//10
        String str("Unknowingly, you have left me Unknowingly, I followed this rhythm With hindsight, another autumn has passed I realized later that I should live a good life and leave silently On the verge of danger Baby~ My world is in a storm Wu~~~~");
        String str2("It's supercalifragilisticexpialidocious Even though the sound of it is something quite atrocious If you say it loud enough you'll always sound precocious Supercalifragilisticexpialidocious Um-dittle-ittl-um-dittle-I Um-dittle-ittl-um-dittle-I");

        assert(str2 <= str);

        std::cout << str2 << "\n <= \n" << str << std::endl;
        std::cout << std::endl;
	}

	{//11
        String str("11223344556677889900+ Unknowingly, you have left me Unknowingly, I followed this rhythm With hindsight, another autumn has passed I realized later that I should live a good life and leave silently On the verge of danger Baby~ My world is in a storm Wu~~~~");
        String str2("12345678900- It's supercalifragilisticexpialidocious Even though the sound of it is something quite atrocious If you say it loud enough you'll always sound precocious Supercalifragilisticexpialidocious Um-dittle-ittl-um-dittle-I Um-dittle-ittl-um-dittle-I");

        assert(str < str2);

        std::cout << str << "\n < \n" << str2 << std::endl;
        std::cout << std::endl;
	}

	{//12
        String str("When we lose love, we have to die little by little. The second I lost you, my heart suddenly became old The Day You Went Away The noisy street didn’t notice my tears, they were forgotten on the street corner");
        String str2("When we lose love, we have to die little by little. The second I lost you, my heart suddenly became old The Day You Went Away The noisy street didn’t notice my tears, they were forgotten on the street corner");

        assert(str <= str2);

        std::cout << str << "\n <= \n" << str2 << std::endl;
        std::cout << std::endl;
	}

	{//13
        String str("Are you still so late? Stay up late working and can’t sleep well Give up the habit of sho It's all my fault for putting my self-esteem too high Didn't take good care of you Pride is a fragile appearance I'm most afraid of my heart, but you don't want it");
        String str2("When we lose love, we have to die little by little. The second I lost you, my heart suddenly became old The Day You Went Away The noisy street didn’t notice my tears, they were forgotten on the street corner");

        assert(str < str2);

        std::cout << str << "\n < \n" << str2 << std::endl;
        std::cout << std::endl;
	}

	{//14
        String str("Love is like a gust of wind, it blows away and then goes away No one can do anything about this rhythm Without you, my soul is out of control The black cloud is falling and I'm being dragged along by it Love is like a gust of wind, it blows away and then");
        String str2("Love is like a gust of wind, it blows away and then goes away No one can do anything about this rhythm Without you, my soul is out of control The black cloud is falling and I'm being dragged along by it Love is like a gust of wind, it blows away and then");

        assert(str <= str2);

        std::cout << str << "\n <= \n" << str2 << std::endl;
        std::cout << std::endl;
	}

	{//15
        String str("It's a pity that I can't go back to that second How are you? God knows I can't take it anymore Regret burns in my heart Just one more hug I can do whatever you want Continue to let me think about you, be crazy about you, and grow old with you.");
        String str2("Love is like a gust of wind, it blows away and then goes away No one can do anything about this rhythm Without you, my soul is out of control The black cloud is falling and I'm being dragged along by it Love is like a gust of wind, it blows away and then");

        assert(str < str2);

        std::cout << str << "\n < \n" << str2 << std::endl;
        std::cout << std::endl;
	}

    std::cout << "Done testing Less Than (or Equal to)!" << std::endl;
    std::cout << std::endl;
    return 0;
}
