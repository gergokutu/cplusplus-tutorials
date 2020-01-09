// remove all function definitions
// place it in math_utils.cpp
#include <iostream>
// include the custom header file
#include "math_utils.h"

int main()
{
  Rectangle rectangle;
  rectangle.length = 10;
  rectangle.width = 20;

  std::cout << area(rectangle.length, rectangle.width) << std::endl;
  std::cout << area(rectangle.length) << std::endl;
  std::cout << area(rectangle) << std::endl;

  std::cout << pow(3, 3) << std::endl;
  std::cout << pow(3) << std::endl;

  return 0;
}