#include <iostream>
// to be able to use Math functions
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

// create a custom function
// declaring the function
// declarations always on top!! » because of compiling
// declaring and defining can be 1 step
double power(double, int);

int main()
{
  int base, exponent;
  cout << "What is the base? ";
  cin >> base;
  cout << "What is the exponent? ";
  cin >> exponent;

  // use the built-in cmath pow
  // cout << "The result is: " << pow(base, exponent) << "." << std::endl;
  // creat a variable with double type instead the prev line
  // double power = pow(base, exponent);
  // cout << "The result is: " << power << endl;

  // use my own power function!!!
  double myPower = power(base, exponent);
  cout << "The result is: " << myPower << endl;
}

// defining the function
// you can declare and define in 1 step
// but in this case you have to move 
// the following definition to the top
// declarations always on top!! » because of compiling
double power(double base, int exponent)
{
  double result = 1;
  for (int i = 0; i < exponent; i++)
  {
    result = result * base;
  }
  return result;
}
