#include <iostream>

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