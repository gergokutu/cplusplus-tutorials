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

// 2nd overload
double area(double length)
{
  return length * length;
}

// 3rd overload
// take a Rectangle which name is rectangle
double area(Rectangle rectangle)
{
  return rectangle.length * rectangle.width;
}

// pass the rectangle itself
int main()
{
  // create a rectangle
  Rectangle rectangle;
  rectangle.length = 10;
  rectangle.width = 20;

  std::cout << area(rectangle.length, rectangle.width) << std::endl;
  std::cout << area(rectangle.length) << std::endl;
  std::cout << area(rectangle) << std::endl;

  return 0;
}