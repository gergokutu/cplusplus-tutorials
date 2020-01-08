#include <iostream>

double squared(double x)
{
  return x * x;
}

int main()
{
  // test squared
  if (squared(5) == 25)
  {
    std::cout << "Test passed\n";
  }
  else
  {
    std::cout << "Test failed\n";
  }

  return 0;
}