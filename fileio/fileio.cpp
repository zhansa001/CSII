// File: fileio.cpp
//
// CS II: File IO lab
//
// Compile: clang++ -Wall fileio.cpp -o fileio
// Usage:   ./fileio FILENAME

//Sandy Zhang, cs23001
//Due: 9/19/24


#include <iostream>
#include <fstream>


int main(int argc, char *argv[]) {


    { //Part 1 Count every character in file
        std::ifstream inFile(argv[1]);
        if (!inFile.is_open()) {
            std::cout << "Unable to open file: " << argv[1] << std::endl;
            exit(1);
        }
        char ch = ' ';


        if (!inFile.eof()) inFile.get(ch);
        int count = 0;
        while (!inFile.eof()) {
            std::cout << ++count << ": " << ch << std::endl;
            inFile.get(ch);
        }
        std::cout << ++count << ": " << ch << std::endl;
        std::cout << "Total: " << count << std::endl;
        std::cout << "Done with Part 1" << std::endl << std::endl;
        inFile.close();
    }




    { //Part 2 Count non white space character in a file; s didn't print
        std::ifstream inFile(argv[1]);
        if (!inFile.is_open()) {
            std::cout << "Unable to open file: " << argv[1] << std::endl;
            exit(1);
        }

        char ch = ' ';
        int count = 0;

        if(!inFile.eof()) {
            while(inFile >> ch) {
                ++count;
                std::cout << count << ": " << ch << std::endl;
            }
        }

        std::cout << "Total: " << count << std::endl;
        std::cout << "Done with Part 2" << std::endl << std::endl;
        inFile.close();
    }




    { //Part 3 Count number of words in a file
        std::ifstream inFile(argv[1]);
        if (!inFile.is_open()) {
            std::cout << "Unable to open file: " << argv[1] << std::endl;
            exit(1);
        }

        char word[200];
        int count = 0;

        if(!inFile.eof()) {
            while(inFile >> word) {
                std::cout << ++count << ": " << word << std::endl;
            }
        }      
           
        
        std::cout << "Total: " << count << std::endl;
        std::cout << "Done with Part 3" << std::endl << std::endl;
        inFile.close();
    }



    { //Part 4 Count number lines in a file
        std::ifstream inFile(argv[1]);
        if (!inFile.is_open()) {
            std::cout << "Unable to open file: " << argv[1] << std::endl;
            exit(1);
        }
        char word[200];
        int count = 0;

        if(!inFile.eof()) {
            while(inFile.getline(word, 200)) {
                std::cout << ++count << ": " << word << std::endl;
            }
        }      
           
        
        std::cout << "Total: " << count << std::endl;

        std::cout << "Done with Part 4" << std::endl << std::endl;
        inFile.close();
    }


    return 0;
}

