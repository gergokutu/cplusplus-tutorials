// how to calculate a factorial
#include <string>
#include <iostream>

int main()
{ 
  int fact = 5;
  int factorial = fact;
  std::cout << "Type the factorial: ";
  std::cin >> factorial;
  // works only with small numbers...
  // I can get negative result...
  // Because of int type? 

  for (int i = factorial - 1; i > 1; i--)
  { 
    factorial = factorial * i;
  }
  std::cout << "factorial of " << fact << " is: " << factorial << std::endl;
  return 0;
}