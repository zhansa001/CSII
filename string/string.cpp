//Sandy Zhang
//
//Project 2 M3
//
//10/13/24

#include <iostream>
#include <vector>
#include "string.hpp"

//Milestone 2

String::String() {
    stringSize = 1;
    str = new char[stringSize];
    str[0] = '\0';
}

String::String(char ch) {
    if(ch != '\0') {
        stringSize = 2;
        str = new char[stringSize];
        str[0] = ch;
        str[1] = '\0';

    }
    else {
        stringSize = 1;
        str = new char[stringSize];
        str[0] = '\0';
    }
}

String::String(const char ch[]) {
    int i = 0;

    while(ch[i] != '\0') {
        ++i; 
    }

    stringSize = i + 1;
    str = new char[stringSize];

    for(int j = 0; j < stringSize - 1; ++j) {
        str[j] = ch[j];
    }


    str[stringSize-1] = '\0';
}

String::String(const String& rhs) { // Copy Constructor
    stringSize = rhs.stringSize;
    str = new char[stringSize];

    for(int i = 0; i < stringSize; ++i) {
        str[i] = rhs.str[i];
    }
    str[stringSize-1] = '\0';
}

String::~String() { //Destructor
    delete[] str;
}

void String::swap(String& rhs) {
    int temp_size = rhs.stringSize;
    rhs.stringSize = stringSize;
    stringSize = temp_size;

    char* temp_str = rhs.str;
    rhs.str = str;
    str = temp_str;
}

String& String::operator=(String rhs) { // Const swap instead of exact copy
    swap(rhs);
    return *this;
}

int String::capacity() const {
    return stringSize - 1;
}

int String::length() const {
    return stringSize - 1;
}

char& String::operator[] (int num) { //Acessor/Modifier
    return str[num];
}

char String::operator[] (int num) const { //Accessor
    return str[num];
}

//Concatenation
String operator+(String lhs, const String& rhs) {
    return lhs += rhs;
}

String& String::operator+= (const String& rhs) {
    int len = length();
    int rhsLen = rhs.length();
    int newSize = len + rhsLen + 1;


    //Allocate new memory
    char *temp_str = new char[newSize];

    //Copy the current string to the new memory
    for(int i = 0; i < len; ++i) {
        temp_str[i] = str[i];
    }

    //Copy the RHS to the new memory
    for(int i = 0; i < rhsLen; ++i) {
        temp_str[len + i] = rhs.str[i];
    }

    //Null terminate new string
    temp_str[newSize - 1] = '\0';

    //Clean up old string
    delete[] str;

    //Update the member bariable
    str = temp_str;
    stringSize = newSize;
    return *this;
}
//

bool String::operator==(const String& rhs) const {
    int len = 0;

    while(str[len] != '\0' && str[len] == rhs[len]) {
        ++len;
    }


    return str[len] == rhs[len];

}

bool  String::operator< (const String& rhs) const{
    int i = 0;

    while (str[i] != 0 && rhs.str[i] != 0 && str[i] == rhs.str[i]) {
        ++i;
    }

    return str[i] < rhs.str[i];
}

String String::substr(int start, int end) const{
    String result;

    for(int i = start; i <= end; ++i) {
        result += str[i];
    }

    return result;
}

int String::findch (int start, char ch) const { //Location of ch
    for(int i = start; i <= length(); ++i) {
        if(ch == str[i]) {
            return i;
        }
    }

    return -1;
}

int String::findstr(int start, const String& end) const { //Location of str
    for(int i = start; i <= length(); ++i) {
        if(end == substr(i, end.length() - 1 + i)) {
            return i;
        }
    }

    return -1;  
}

std::istream& operator>>(std::istream& in, String& rhs) {
    char result[256];
    in >> result;
    rhs = String(result);
    return in;
}

std::ostream& operator<<(std::ostream& out, const String& string) {
    out << string.str;
    return out;
}

bool operator==(const char lhs[],  const String& rhs) {
    return String(lhs) == rhs;
}

bool operator==(char lhs, const String& rhs) {
    return String(lhs) == rhs;
}

bool  operator< (char lhs, const String& rhs) {
    return String(lhs) < rhs;
}

bool operator< (const char lhs[],  const String& rhs) {
    return String(lhs) < rhs;
}

bool  operator<= (const String& lhs , const String& rhs) {
    return (lhs < rhs) || (lhs == rhs);
}

bool  operator!= (const String& lhs , const String& rhs) {
    return !(lhs == rhs);
}

bool  operator>= (const String& lhs , const String& rhs) {
    return !(lhs < rhs) || (lhs == rhs);
}

bool  operator> (const String& lhs , const String& rhs) {
    return  !(lhs < rhs);
}

//Milestone 3

std::vector<String> String::split(char split) const {
    std::vector<String> result;
    int begin = 0;
    int finale = findch(begin, split);

    while(finale != -1) {
        String sub = substr(begin, finale-1);
        result.push_back(sub);
        begin = finale + 1;
        finale = findch(begin, split);
    }
    String last = substr(begin, length());
    result.push_back(last);

    return result;
}
//