//Sandy Zhang
//
//Test Input
//10/8/24

#include <iostream>
#include <fstream>
#include <cassert> 
#include "string.hpp"

int main() {
    
    std::ifstream file("test_input.txt");

    if(!file.is_open()) {
        String str;

        file >> str;
        assert(str == "here");

        file >> str;
        assert(str == "are");

        file >> str;
        assert(str == "some");

        file >> str;
        assert(str == "texts");

        file >> str;
        assert(str == "I");

        file >> str;
        assert(str == "am");

        file >> str;
        assert(str == "testing");

        file >> str;
        assert(str == "for");

        file >> str;
        assert(str == "my");

        file >> str;
        assert(str == "class");

        file >> str;
        assert(str == "project");

        file >> str;
        assert(str == "two");
    }

    else {
        std::cout << "Unable to open file" << std::endl;
    }

    String str;
    while(!file.eof()) {
        file >> str;
        std::cout << str << std::endl;
    }

    file.close();
    std::cout << "Done testing input operator" << std::endl;
    return 0;
}