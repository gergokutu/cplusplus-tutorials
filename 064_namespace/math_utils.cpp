#include "math_utils.h"

// namespace here
// and into header file
// apply namespace in the usage file (main file)
namespace utilz
{
  double pow(double base, int pow)
  {
    int total = 1;
    for (int i = 0; i < pow; i++)
    {
      total *= base;
    }
    return total;
  }

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
}
