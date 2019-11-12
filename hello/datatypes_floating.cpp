#include <iostream>
// how many significant digits a datatype is trustworthy to
#include <float.h>

using std::cout;
using std::endl;

int main()
{
  // 3 types of floating-point numbers in c++
  // use at least 1 place the floating-point number
  // not to have integer division
  // 2.5 instead of 2!!!
  float a = 10.0 / 4;
  float a2 = 10 / 4;
  float a3 = a * 10000000000;

  // you can trust more significant digits
  // with double than float
  // 2.499999948...
  double b = 7.7E4; // 7.7E4 >> scientific, 7.7 x 10^4, 77000
  long double c;

  // 7.7 * 10000 needs less memory space
  // than >> 77000
  cout << a << endl;
  cout << a2 << endl;
  cout << a3 << endl;
  // not to have the scientific notation
  cout << std::fixed << a3 << endl;
  
  cout << endl << b << endl; // 77000

  // because of <float.h> I can use FLT_DIG
  cout << FLT_DIG << endl;
  cout << DBL_DIG << endl;
  cout << LDBL_DIG << endl;

  // e.g you work with money
  // there is libraries to work with exact precesion
  // you can trust the whole number...

  // tips for money
  // dollar vs cent
  int cents = 100;
  // more precise
  double cents_precise = 100;

  // use float instead of double if you need to spare memory
}