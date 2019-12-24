// literal constants are hardcoded values in your code
#include <iostream>
#include <string>

int main()
{
  // quoted constants
  // '' >> char
  // "" >> string
  // char_t, char_16_t, char_32_t...

  // program will determine the data type of the variable
  // it is a c++11 standard, so compile it with
  // g++ literals.cpp --std=c++11 !!!!!
  // without the --std=c++11 >> error
  auto x = 5ULL; // ULL means unsigned long long
  auto y = 5.0;  // double >> automatic type
  auto z = 5.0F; // float 
  // but DOES NOT mean that the type can be re-assigned
  // that won't work
  // x = "this is a string"; // error
  std::cout << "Open literals.cpp to check the codes!!!" << std::endl;
}