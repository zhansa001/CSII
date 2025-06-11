//utilities.hpp
//Sandy Zhang
//11/11/24


#ifndef CS_UTILITIES_HPP
#define CS_UTILITIES_HPP
#include "../string/string.hpp"
#include "../assembler/stack.hpp"
#include <fstream>

String Infix_to_Postfix(const String&);
String Postfix_to_Assembly(const String&, std::ostream&);
String intTostring(int);
String EvaluateFunc(int&, const String&, const String&, const String&, std::ostream&);

#endif