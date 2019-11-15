#include <iostream>

using std::cout;
using std::endl;

int main()
{
  bool pizza_is_good = true;
  // true / false >> 1/0
  // but -1 is also 1, anything but not zero is one...
  // bool pizza_is_good = 1;
  // use boolean as a flag
  // search algorithm >> if found, found = true;
  if (pizza_is_good)
  {
    cout << std::boolalpha << pizza_is_good << endl;
    cout << "There is a pizza" << endl;
  }
  else
  {
    cout << "No pizza, sorry." << endl;
    // write out the boolean (false/true)
    cout << std::boolalpha << pizza_is_good << endl;
  }

  // another version
  bool pizza_is_good_b = false;
  cout << std::boolalpha << pizza_is_good_b << endl; // false
  if (!pizza_is_good_b) cout << "There is no pizza." << endl; // false >> There is no pizza.
}
