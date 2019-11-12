#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main()
{
  // there is chars that are interpreted before being printed
  // e.g. new line » "\n", tab » "\t"...
  cout << "Hello\tThere\n";
  cout << "Hello\bThere\n";
  cout << "Hello\vThere\n";
  // \a not works in vs code but terminal » beep sound...
  cout << "Hello\a\a\a\a\a\aThere\n";
  // null terminating character » indicate the end of a C-style string
  // There... ignored
  cout << "Hello\0There\n";
  cout << "\n";
  cout << "Hello \"there\"\n";
  // for char
  char single_quote = '\'';
  cout << single_quote << endl;
  // backslash backslash
  cout << "\\" << endl;
}