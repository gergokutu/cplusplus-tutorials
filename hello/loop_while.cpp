#include <string>
#include <iostream>

int main()
{ 
  // int i = 0;
  // while (i < 10)
  // {
  //   std::cout << i << std::endl;
  //   i++;
  // }

  // int i = 9;
  // while (i >= 0)
  // {
  //   std::cout << i << "\t";
  //   i--;
  // }
  // std::cout << "\n";

  // for (int i = 0; i < 10; i++)
  // {
  //   std::cout << i << std::endl;
  // }

  int facto = 5;
  int factorial = facto;
  for (int i = factorial - 1; i > 1; i--)
  { 
    factorial = factorial * i;
  }
  std::cout << "factorial of " << facto << " is: " << factorial << std::endl;
  // return 0;

  // calculating factorials
  int fact = 5;
  int i = fact - 1;

  while (i > 1)
  {
    // fact = fact * i;
    fact *= i;
    i--;
  }
  std::cout << fact << " (with while loop)" << std::endl;
}