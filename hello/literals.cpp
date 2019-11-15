// literal  constants are hardcoded values in your code
#include <iostream>
#include <string>

int main()
{
  // quoted constants
  // '' >> char
  // "" >> string
  // char_t, char_16_t, char_32_t

  // program will determine the data type of the variable
  // c++11 standard, so compile with
  // g++ literals.cpp --std=c++11 !!!!!
  auto x = 5ULL; // U means unsigned long long 5
  auto y = 5.0;  // double
  auto z = 5.0F; // float 
  // but DOES NOT that mean the type can be re-assigned
  // won't work
  // x = "this is a string";
  std::cout << "Open literals.cpp to check the codes!!!" << std::endl;
}