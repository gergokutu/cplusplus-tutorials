#include <iostream>
// to use sqrt and the other functions
#include <cmath>

using std::cout;
using std::endl;

int main()
{ 
  cout << endl << "Calculated values:" << endl;
  // square root
  cout << sqrt(25) << endl;
  // returns Nan >> not a number
  cout << sqrt(-25) << endl;
  // returns inf >> infinity
  cout << pow(9, 9999) << endl;
  // returns -inf >> negative infinity
  cout << pow(-9, 9999) << endl;

  // not calculate just print them
  cout << endl << "Printed values:" << endl;
  cout << NAN << endl;
  cout << INFINITY << endl;
  cout << -INFINITY << endl;

  // remainder function
  // it can give us a floating point value
  // modulus operator is similar but gives back an integer
  cout << endl << "OTHER" << endl;
  cout << remainder(10, 3) << endl;
  cout << 10 % 3 << endl;
  cout << remainder(10, 3.25) << endl;
  // compile with error
  // cout << 10 % 3.25 << endl;
  // fmod is similar to remainder
  // diff in rounding and truncation...
  cout << fmod(10, 3.25) << endl;

  // fmax gives back the highest of the passed arguments
  cout << fmax(10, 3.25) << endl; 
  cout << fmin(10, 3.25) << endl;

  // floor, ceil
  cout << ceil(3.25) << endl;
  cout << floor(fmin(10, 3.25)) << endl;

  // trunc vs floor
  // trunc just crop off the value
  cout << trunc(fmin(10, 3.25)) << endl;
  cout << trunc(-1.5) << endl; // -1
  cout << floor(-1.5) << endl; // -2

  // round >> 0.5 is the turning point
  cout << round(1.49) << endl;
  cout << round(1.50) << endl;

  // if standard round is not enough
  // you can use nearbyint function...
}
