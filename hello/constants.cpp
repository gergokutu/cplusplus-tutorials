#include <iostream>

using std::cout;
using std::endl;

// macros
// same as const int x = 5;
// #define X 10

int main()
{ 
  // symbolic constant
  // read-only
  const int x = 5;

  // won't work
  // const int setting;
  // setting = 3;

  // enum constants
  // cannot reassign the value
  enum { y = 100 };

  // in most scenarios
  // macros, const, enum do the same
}