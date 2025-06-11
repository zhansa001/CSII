//utilities.cpp
//Sandy Zhang
//11/11/24

#include <iostream>
#include <vector>
#include <fstream>
#include "utilities.hpp"
#include "../string/string.hpp"
#include "../assembler/stack.hpp"

String Infix_to_Postfix(const String& expr) {
    stack<String> line;
    std::vector<String> split = expr.split(' ');
    size_t i = 0;

    while(i < split.size()) { 
        String token = split[i];
        if(token == ')') {
                String rhs = line.pop();
                String oper = line.pop();
                String lhs = line.pop();
                line.push(lhs + ' ' + rhs + ' ' + oper);
        }
        else {
            if(token != '(') {
                line.push(token);
            }
        }
        ++i;
    }
    line.pop();
    return line.top();
}

String Postfix_to_Assembly(const String& expr, std::ostream& output) {
    stack<String> line;
    size_t i = 0;
    std::vector<String> split = expr.split(' ');
    int tempVar = 0;

    while(i < split.size()) {
        String token = split[i];
        if((token != '+') && (token != '-') && (token != '/') && (token != '*')) {
            line.push(token);
        }
        else {
            String rhs = line.pop();
            String lhs = line.pop();

            String tempVarNum = EvaluateFunc(tempVar, lhs, token, rhs, output);
            line.push(tempVarNum);
        }
        ++i;
    }
    return line.top();
}

String intTostring(int size) {
    if(size == 0) {
        return "0";
    }

    String result;
    while(size > 0) {
        char value = '0' + (size % 10);
        result = result + value;
        size = size / 10;
    }
    return result;

}

String EvaluateFunc(int& tempVar, const String& lhs, const String& oper, const String& rhs, std::ostream& output) {
    String tempVarNum = "TMP" + intTostring(++tempVar);

    output << "\n   LD     " << lhs << "\n";

    if(oper == '+') {
        output << "   AD     " << rhs << "\n";
    }

    else if(oper == '-') {
        output << "   SB     " << rhs << "\n";
    }

    else if(oper == '*') {
        output << "   MU     " << rhs << "\n";
    }
    
    else if(oper == '/') {
        output << "   DV     " << rhs << "\n";
    }

    output << "   ST     " << tempVarNum;
    return tempVarNum;
    
}