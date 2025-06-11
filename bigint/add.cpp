// File: main.cpp
//
// CS 23001 Project 1 bigint 
//
// Basics for openning a file for milestone 2
//
//Sandy Zhang, Milestone 2
//Due date: September 16, 2024

#include <iostream> 
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
    std::ifstream in;            // Define input stream
    in.open("data1-1.txt");      // Open a file
    if(!in) {                    // Make sure file opened correctly
        std::cerr << "File not found: data1-1.txt" << std::endl;
        exit(1);
    }

    //Until end of file
       //Read two bigints
       //Print them out
       //Add them together
       //Print out results

       bigint bi, bi2;
       while(in >> bi && in >> bi2)
       {
        std::cout << "Bigint 1 == " << bi;
        std::cout << "\n Bigint 2 == " << bi2;

        bigint result = bi + bi2;

        std::cout << "\n Result == " << result << std::endl;
        std::cout << std::endl;
       }
 
    in.close();
    return 0;
}

