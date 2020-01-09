#ifndef MATH_UTILS
#define MATH_UTILS

struct Rectangle
{
  double length;
  double width;
};

// namespace here (not around the struct!)
// and into implementation file
// apply namespace in the usage file (main file)
namespace utilz
{
  double area(double length, double width);
  double area(double length);
  double area(Rectangle rectangle);
  double pow(double base, int pow = 2);
}

#endif