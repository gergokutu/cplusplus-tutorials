#include <iostream>
// include another header file 
// to check the actual numbers and not the bytes
#include <climits>

using std::cout;

int main()
{ 
  // returns the size of the datatype in bytes
  // short is 2 bytes » 16 bits
  cout << "Size of datatype: " << sizeof(short) << "\n";

  // integral datatypes
  short a;
  int b; 
  long c;
  long long d;
  // also negative values, but half of the max size...
  unsigned short aa;
  unsigned int bb;
  unsigned long cc;
  unsigned long long dd;

  cout << SHRT_MAX << std::endl;
  // sometimes just this format works...
  // cout <<SHRT_MAX<< std::endl;
  cout << SHRT_MIN << std::endl;
  cout << USHRT_MAX << std::endl;
  cout << ULLONG_MAX << std::endl;
}