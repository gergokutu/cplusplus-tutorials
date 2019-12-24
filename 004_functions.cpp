#include <iostream>
// separate declaration can be applied
// but not necessary
// declare a return type of the function
// you have to declare the datatype of the parameter too
int multiply(int, int); // declaration

int multiply(int x, int y) // definition
  {
    return x * y;
  }

int main()
{
  std::cout << multiply(2, 5) << std::endl; // calling
  // return 0; // optional
}