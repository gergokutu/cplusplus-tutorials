// default arguments sometimes called
// default parameter values
// default parameters
// it helps to make parameters optional
#include <iostream>

struct Rectangle
{
  double length;
  double width;
}; // do not forget the ; from here!

double area(double length, double width)
{
  return length * width;
}

double area(double length)
{
  return length * length;
}

double area(Rectangle rectangle)
{
  return rectangle.length * rectangle.width;
}

double pow(double base, int pow)
{
  int total = 1;

  for (int i = 0; i < pow; i++)
  {
    // total = total * base;
    total *= base;
  }
  return total;
}

int main()
{
  Rectangle rectangle;
  rectangle.length = 10;
  rectangle.width = 20;

  std::cout << area(rectangle.length, rectangle.width) << std::endl;
  std::cout << area(rectangle.length) << std::endl;
  std::cout << area(rectangle) << std::endl;

  std::cout << pow(3, 3) << std::endl;

  return 0;
}