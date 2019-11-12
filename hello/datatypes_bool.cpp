#include <iostream>

using std::cout;
using std::endl;

// int main()
// {
//   bool pizza_is_good = false;
//   // true / false >> 1/0
//   // but -1 is also 1, anything but not zero is one...
//   // bool pizza_is_good = 1;
//   // use boolean as a flag
//   // search algorithm >> if found, found = true;
//   if (pizza_is_good)
//   {
//     cout << "There is a pizza" << endl;
//   }
//   else
//   {
//     cout << "No pizza, sorry." << endl;
//     // write out the boolean (false/true)
//     cout << std::boolalpha << pizza_is_good << endl;
//   }
// }

// another solution
int main()
{
  bool pizza_is_good = false;
  cout << std::boolalpha << pizza_is_good << endl;
  // if (pizza_is_good) cout << "There is a pizza" << endl;
}
