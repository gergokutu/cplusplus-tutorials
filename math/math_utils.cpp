// functions come here from math_stuff.cpp
// func definitions

// you do not want default value for func def
// you want it in the declaration
double pow(double base, int pow)
{
  int total = 1;

  for (int i = 0; i < pow; i++)
  {
    total *= base;
  }
  return total;
}

// get rid of struct
// struct Rectangle
// {
//   double length;
//   double width;
// }; // do not forget the ; from here!

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