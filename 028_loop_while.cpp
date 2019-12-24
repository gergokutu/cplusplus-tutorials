#include <string>
#include <iostream>

int main()
{ 
  int index = 0;
  while (index < 10)
  {
    std::cout << index << std::endl;
    index++;
  }

  int inde = 9;
  while (inde >= 0)
  {
    std::cout << inde << "\t";
    inde--;
  }
  std::cout << "\n";

  for (int ind = 0; ind < 10; ind++)
  {
    std::cout << ind << std::endl;
  }

  int facto = 5;
  int factorial = facto;
  for (int in = factorial - 1; in > 1; in--)
  { 
    factorial = factorial * in;
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