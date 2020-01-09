// remove all function bodies
// put ; at the end of each line
// func declarations

// pre-processor directive comes here
// not to include the same file twice
#ifndef MATH_UTILS // if not defined
#define MATH_UTILS

// you want the default value here
double pow(double base, int pow = 2);

// struct stays here as well
struct Rectangle
{
  double length;
  double width;
}; // do not forget the ; from here!

double area(double length, double width);


double area(double length);

double area(Rectangle rectangle);

#endif