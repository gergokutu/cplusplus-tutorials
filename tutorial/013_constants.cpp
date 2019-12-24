#include <iostream>

using std::cout;
using std::endl;

// macros
// same as const int x = 5; inside main()
// #define X 5 // the capitol X is only convention

int main()
{ 
  // symbolic constant x
  // read-only, cannot reassign
  const int x = 5;

  // and cannot reassign the type
  // const int setting;
  // setting = 3;

  // enum constants
  // cannot reassign the value
  enum { y = 100 };

  // in most scenarios
  // macros, const, enum do the same

  cout << "Open the file and check the codes!" << endl;
}