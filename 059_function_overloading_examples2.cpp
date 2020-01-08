#include <iostream>

// struct is a custom datatype
struct Rectangle
{
  double length;
  double width;
}; // do not forget the ; from here!

double area(double length, double width)
{
  return length * width;
}

int main()
{
  // create a rectangle
  Rectangle rectangle;
  rectangle.length = 10;
  rectangle.width = 10;

  std::cout << area(rectangle.length, rectangle.width) << std::endl;

  return 0;
}