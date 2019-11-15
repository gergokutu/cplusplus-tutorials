#include <iostream>
// to be able to use Math functions
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

// 0. CREATE a custom function
// 1. DECLARE the function
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
  cout << "The result is: " << pow(base, exponent) << " with built in <cmath> pow." << std::endl;
  // creat a variable with double type instead the prev line
  double power_b = pow(base, exponent);
  cout << "The result is: " << power_b << " with built in <cmath> pow - ver2." << endl;

  // 3. CALL/INVOKE the function
  // use my own power function!!!
  double myPower = power(base, exponent);
  cout << "The result is: " << myPower << " with my own power function." << endl;
}

// 2. DEFINE the function
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
