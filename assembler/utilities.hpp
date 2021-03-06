//
// String infix_to_postfix (String infix_expression) -- utilities.cpp and utilities.hpp
//

#ifndef CSII_UTILITIES_HPP
#define CSII_UTILITIES_HPP

#include "stack.hpp"
#include "string.hpp"
#include <vector>
#include <iostream>
#include <fstream>

String postfix_of(String infix);
void getline(std::ifstream& in, String& line);
String eval(String, String, String, int);
String assembly_of(String);

#endif
