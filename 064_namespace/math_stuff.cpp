#include <iostream>
#include "math_utils.h"
// apply namespace in the usage file (main file)
// using namespace utilz;

int main()
{
  Rectangle rectangle;
  rectangle.length = 10;
  rectangle.width = 20;

  std::cout << utilz::area(rectangle.length, rectangle.width) << std::endl;
  std::cout << utilz::area(rectangle.length) << std::endl;
  std::cout << utilz::area(rectangle) << std::endl;

  std::cout << utilz::pow(3, 3) << std::endl;
  std::cout << utilz::pow(3) << std::endl;

  return 0;
}