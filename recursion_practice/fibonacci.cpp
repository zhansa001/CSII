//Sandy Zhang
//Lab 8
//10/18/24

#include <iostream>

//Recursion
int fib(int);

//Tail Recursion
int fib(int, int, int);

int main() {
    int input;
    std::cout << "Enter a number n: ";
    std::cin >> input;

    std::cout << "Regular: \n";
    for(int n = 0; n < input; ++n) {
        std::cout << fib(n) << " ";
    }

    std::cout << "\nTail Recursion: \n";
    for(int j = 0; j <= input; ++j) {
        std::cout << fib(j, 0, 1) << " ";
    }

    std::cout << "\n";
    return 0;
}

//Recursion
int fib(int n) {
    if(n <= 0) {
        return 0;
    }
    else if(n == 1) {
        return 1;
    }
    else {
        return fib(n - 1) + fib(n - 2); //Then, after all recursive calls, the calculations are done
    }
}

//Tail Recursion
int fib(int n, int n1 = 0, int n2 = 1) {
    if(n <= 0) {
        return n1;
    }

    else if(n == 1) {
        return n2;
    }

    else {
        return fib(n-1, n2, n1 + n2);
    }
}
