#include <iostream>
using std::cout;

int main()
{ 
  // declaration and initialization
  // int slices;
  // slices = 5;
  int slices = 5 + 2; // int is the datatype
  int children = slices;
  slices = 1000; // children remain the same

  cout << "HELLOOOO\n";
  cout << children << "\n";
  cout << slices;
  // << std::endl » new line like << "\n"
  cout << "You have " << slices << " slices of pizza." << std::endl;

  // printf() comes from C language
  // you have to say what format it has
  // this is a integer
  // and put a new line after it
  printf("%i\n", slices); // alternative for cout, but cout is easier to use
  // return 0; // optional line
}