//header file for bigint
//Sandy Zhang
//Due date: September 19, 2024

#include <iostream>
#ifndef BIGINT_HPP_
#define BIGINT_HPP_

const int CAPACITY = 200;

class bigint {
    public:
        bigint();
        bigint(int);
        bigint(const char[]);

        void debugPrint(std::ostream&) const;

        bigint operator+(const bigint&) const;
        bigint operator*(const bigint&) const;

        bigint timesDigit(int) const;
        bigint times10(int) const;
        

        int operator[](int) const;
        friend std::ostream& operator<< (std::ostream&, bigint);
        friend std::istream& operator>> (std::istream&, bigint&);

        bool operator== (bigint);

    private:
        int SIZE[CAPACITY];
};

#endif
