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
  cout << x << endl;
  // you can print it as an int
  cout << (int) x << endl; // 65 » based on the Ascii table

  char y = 'a';
  cout << y << endl;
  // you can print it as an int
  cout << (int) y << endl; // 97

  char z = 55;
  cout << z << endl;
  // you can print it as an int
  cout << (int) z << endl; // 7 » 55 is the ascii character of 7

  char max_value = 127;
  // char max_value2 = 128; // gonna be a problem
  cout << (int) max_value << endl;
}

// to build apps for different languages
// use 'unicode' instead of ascii