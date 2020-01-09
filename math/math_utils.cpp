double pow(double base, int pow = 2)
{
  int total = 1;

  for (int i = 0; i < pow; i++)
  {
    total *= base;
  }
  return total;
}

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