#include <iostream>
// to be able to use Math functions
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main()
{
  int base, exponent;
  cout << "What is the base? ";
  cin >> base;
  cout << "What is the exponent? ";
  cin >> exponent;
  // cout << "The result is: " << pow(base, exponent) << "." << std::endl;
  // creat a variable with double type instead the prev line
  double power = pow(base, exponent);
  cout << "The result is: " << power << endl;
}