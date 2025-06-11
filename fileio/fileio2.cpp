// File: fileio2.cpp
//
// CS II: File IO lab
//
// Compile: clang++ -Wall fileio2.cpp -o fileio
// Usage:   ./fileio FILENAME

//Sandy Zhang, CS23001
//Due: 9/19/24

#include <iostream>
#include <fstream>

//Part 5 
//Read in a integer that is the number of lines to read
//Each line has only one word on it.
//Use data3.txt

int main(int argc, char *argv[]) {
    std::ifstream inFile(argv[1]);
    if (!inFile.is_open()) {
        std::cout << "Unable to open file: " << argv[1] << std::endl;
        exit(1);
    }

    int count = 1;
    char word[200];
    int linesToRead = 0;

    if(!inFile.eof()) inFile >> linesToRead;
        if(!inFile.eof()) inFile >> word;
            while(!inFile.eof() && count < linesToRead) {
                std::cout << count << ": " << word << std::endl;
                inFile >> (word);
                count++;
            }

    std::cout << "Total: " << count - 1 << std::endl;

    std::cout << "Done with Part 5" << std::endl << std::endl;
    inFile.close();
    return 0;
}
