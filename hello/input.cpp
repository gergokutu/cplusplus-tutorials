// include the file iostream as preprocessed codes...
#include <iostream>

using std::cout;
using std::cin;

int main()
{
  int slices = 10;
  cout << "How many slice(s) of pizza do you want? ";
  // consol in
  /* 
    cin is an instance of istream
    cout is an instance of ostream
  */
  cin >> slices;
  cout << "You have " << slices << " slice(s) of pizza." << std::endl;
  // return 0;
}