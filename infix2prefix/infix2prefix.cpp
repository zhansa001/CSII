//infix2prefix.cpp
//Sandy Zhang
//11/1/24


#include <iostream>
#include <fstream>
#include <vector>
#include "../string/string.cpp"
#include "../assembler/stack.hpp"

String Infix_to_Prefix(const String& expr) {
    stack<String> line;
    std::vector<String> split = expr.split(' ');
    int i = 0;


    while(i < split.size()) { 
        String token = split[i];
        if(token == ")") {
            String rhs = line.pop();
            String oper = line.pop();
            String lhs = line.pop();
            line.push(oper + ' ' + lhs + ' ' + rhs);
        }
        else {
            if(token != "(") {
                line.push(token);
            }
        }
        ++i;
    }
    line.pop();
    return line.top();
}

int main() {
    std::ifstream inFile("data3-1.txt");
    if(!inFile.is_open()) {
        std::cout << "Error Opening File!";
        exit(1);
    }

    String infix;
    char size[256];

    while(inFile.getline(size, 256)) {
            infix = String(size);

            String prefix(Infix_to_Prefix(infix));
            std::cout << "The Infix Expressionn is: " << infix << std::endl;
            std::cout << "The Prefix Expression is: " << prefix << std::endl;
            std::cout << std::endl;
    }
    inFile.close();
}