//bigint functions
//Sandy Zhang
//Due date: September 16, 2024

#include <iostream>
#include "bigint.hpp"

//Milestone 1
bigint::bigint() {
    for(int i = 0; i < CAPACITY; ++i) {
        SIZE[i] = 0;
    }
}

bigint::bigint(int value) :bigint() {
    int number, i = 0;

    while(value != 0){
        if(i == CAPACITY) {
            break;
        }
        number = value % 10;
        SIZE[i] = number;
        value = value / 10;
        ++i;
    }
    for(int j = i; j < CAPACITY; j++) {
        SIZE[j] = 0;
    }
}

bigint::bigint(const char value[]) :bigint() {
    int length = 0;
    while(value[length] != '\0') {
        ++length;
    }
    int i = length;

    for(int j = 0; j < i; j++) {
         SIZE[j] = int(value[i-j-1]) - int('0');
        --length;
   }
}
 
void bigint::debugPrint(std::ostream& stream) const {
    for(int i = CAPACITY - 1; i >= 0; i--) {
        stream << SIZE[i] << "|";
    }
}

bool bigint::operator==(bigint rhs) {
    for(int i = 0; i < CAPACITY; ++i) {
        if(SIZE[i] != rhs.SIZE[i]) {
            return false;
        }
    }
   
    return true;
}

std::ostream& operator<< (std::ostream& stream, bigint value) {
    int i = CAPACITY;
    while(value.SIZE[i-1] == 0) {
        --i;
    }

    int iCap = i - 80;
    if(i <= 0) {
        stream << "0";
    }
    if(i > 80) {
        for(int j = i - 1; j > iCap; --j) {
            stream << value.SIZE[j];
        } 

        for(int j = iCap; j >= 0; --j) {
            stream << value.SIZE[j];
        }
    }
    else {
        for(int j = i - 1; j >= 0; --j) {
            stream << value.SIZE[j];
        }
    }

    return stream;
}
//Milestone 2

std::istream& operator>> (std::istream& stream, bigint& value) {
    value = bigint();
    char s[CAPACITY] = {0};
    char ch = 0;

    int length = 0;
    
    while(stream >> ch) {
            if(ch == ';'){
                break;
            }
            s[length] = ch;
            ++length;
    }

    value = bigint(s);

    return stream;
}

bigint bigint::operator+(const bigint& rhs) const {
    bigint result;
    int carry = 0;
    for(int i = 0; i < CAPACITY; ++i) {
        result.SIZE[i] = SIZE[i] + rhs.SIZE[i] + carry;
        if(result.SIZE[i] > 9) {
            result.SIZE[i] = result.SIZE[i] % 10;
            carry = 1;
        }
        else {
            carry = 0;
        }

    }
    return result;
}

int bigint::operator[](int digit) const {
    if(digit >= 0 && digit < CAPACITY) {
        return SIZE[digit];
    }
    else {
        return 0;
    }
}

//Milestone 3

bigint bigint::timesDigit(int rhs) const {
    bigint result;
    int carry = 0;

    for(int i = 0; i < CAPACITY; ++i) {
        result.SIZE[i] = SIZE[i] * rhs + carry;
        carry = result.SIZE[i] / 10; 
        if(result.SIZE[i] > 9) {
            result.SIZE[i] = result.SIZE[i] % 10;
        }
        else {
            carry = 0;
        }
    }
    return result;
}

bigint bigint::times10(int rhs) const {
    bigint result;

    for(int i = CAPACITY - 1; i >= 0; --i) {
        result.SIZE[i] = SIZE[i - rhs];
    }

    for(int j = 0; j < rhs; ++j) {
        result.SIZE[j] = 0;
    }

    return result;

}

bigint bigint::operator*(const bigint& rhs) const {
    bigint temp = 0;
    bigint product = 0;

    for(int i = 0; i < CAPACITY - 1; ++i) {
        temp = rhs.timesDigit(SIZE[i]);
        product = product + temp.times10(i);
    }
    return product;
}
