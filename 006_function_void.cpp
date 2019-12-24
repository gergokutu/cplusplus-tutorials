#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

double power(double base, int exponent)
{
  double result = 1;
  for (int i = 0; i < exponent; i++)
  {
    result = result * base;
  }
  return result;
}

// print the result to the consol
// void >> no return value is necessary...
void print_pow(double base, int exponent)
{
  double myPower = power(base, exponent);
  cout << base <<  " raised to the " << exponent << " power is " << myPower << ".\n";
}

int main()
{ 
  double base;
  int exponent;
  cout << "What is the base? ";
  cin >> base;
  cout << "What is the exponent? ";
  cin >> exponent;
  print_pow(base, exponent);
  // benefit » do not have to repeat the codes just call
  // if you want to change e.g output formatting
  // enough to do it only 1 place » print_pow function
  cout << "Invoking print_pow(3, 3) returns: " << std::endl;
  print_pow(3, 3);
}
