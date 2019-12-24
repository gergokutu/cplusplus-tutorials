#include <iostream>

using std::cout;
using std::endl;

int main()
{
  // char to store small numbers or characters
  // storing characters
  // 8bits, the smallest
  // use single quotes ''
  char x = 'A';
  cout << x << endl; // A
  // you can print it as an int
  cout << (int) x << endl; // 65 » based on the Ascii table

  char y = 'a';
  cout << y << endl; // a
  // you can print it as an int
  cout << (int) y << endl; // 97

  char z = 55;
  cout << z << endl; // 7 » 55 is the ascii character of 7
  // you can print it as an int
  cout << (int) z << endl; 

  char max_value = 127;
  cout << max_value << endl; // 127 >> ascii code for space ' '
  // char max_value2 = 128; // gonna be a problem because 127 is the max in ascii table
  // you can print it as an int
  cout << (int) max_value << endl; // 127
}

// to build apps for different languages
// use 'unicode' instead of ascii...