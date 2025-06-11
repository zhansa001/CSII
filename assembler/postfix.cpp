//postfix.cpp
//Sandy Zhang
//11/11/24

#include <iostream>
#include <fstream>
#include <vector>
#include "utilities.hpp"
#include "../string/string.hpp"
#include "../assembler/stack.hpp"

int main(int argc, char *argv[]) {
    if(argc < 2) {
        std::cerr << "Not Enough Arguments!\n" << std::endl;
        exit(1);
    }

	std::ifstream inFile(argv[1]);
	if (!inFile) {
		std::cerr << "Could not open file\n";
		exit(1);
	}

    String infix, postfix, takes_in;

    std::ofstream outFile(argv[2]);

    inFile >> takes_in;
    while(!inFile.eof()) {
        if(takes_in != ';') {
            infix = infix + takes_in + " ";
        }
        else { 
            if(!outFile) {
                postfix = Infix_to_Postfix(infix);

                std::cout << std::endl;
                std::cout << "The Infix Expression is: " << infix << std::endl;
                infix = infix + ";";
                std::cout << "The Postfix Expression is: " << postfix << std::endl;
                infix = "";
            }
            else {
                postfix = Infix_to_Postfix(infix);

                outFile << "The; Infix Expression is: " << infix << std::endl;
                infix = infix + ";";
                outFile << "The Postfix Expression is: " << postfix << std::endl;
                infix = "";
            }
        }
        inFile >> takes_in;
    }

    if(infix != "") {
        if(takes_in != ';') {
            infix = infix + takes_in + " ";
        }
        else {
            if(!outFile) {
                postfix = Infix_to_Postfix(infix);

                std::cout << std::endl;
                std::cout << "The Infix Expression is: " << infix << std::endl;
                infix = infix + ";";
                std::cout << "The Postfix Expression is: " << postfix << std::endl;
                infix = "";

            }   

            else {
                postfix = Infix_to_Postfix(infix);

                outFile << "The Infix Expression is: " << infix << std::endl;
                infix = infix + ";";
                outFile << "The Postfix Expression is: " << postfix << std::endl;
                infix = "";
                std::cout << std::endl;
            }
        }

    }
    inFile.close();
    outFile.close();
}