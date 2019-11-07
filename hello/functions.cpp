#include <iostream>
// separate declaration can be applied
// but not necessary
// declare a return type of the function
// you have to declare the datatype of the parameter too
int multiply(int, int);

int multiply(int x, int y)
  {
    return x * y;
  }

int main()
{
  std::cout << multiply(2, 5) << std::endl;
  // return 0;
}