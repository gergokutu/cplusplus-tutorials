// hexadecimal and octo numbers
#include <iostream>
#include <string>

int main()
{
  // Hex >> base 16, 0-15 (0-9-A-F)
  // 0 >> 0
  // 16 >> 10
  // 31 >> 1F

  // Octo >> base 8, 0-7 (0-7)
  // 0 >> 000
  // 1 >> 001
  // 7 >> 007
  // 9 >> 011
  // 24 >> 030

  std::cout << "Lesson in comments.\n Open\nhex_octo.cpp\n            !!!" << std::endl;
  std::cout << "New std::cout... line in the codes." << std::endl;

  // base 10
  int number = 30; // 10
  // to show it in hexadecimal
  int number_hex = 0x30; // 48
  // to show it in octo
  int number_octo = 030; // 24
  std::cout << number << std::endl;
  std::cout << number_hex << std::endl;
  std::cout << number_octo << std::endl;

  // exchange decimal to hexadecimal
  int number_exchange = 30;
  std::cout << std::hex << number_exchange << std::endl;
  // decimal to octo
  std::cout << std::oct << number_exchange << std::endl;
}