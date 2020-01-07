// vectors
// in other languages >> list or array-list
// similar to arrays but the size is dynamic
// dynamic collection
// create a vector
// <, > (carrots) because vectors is part of the standard template library
// the next line is a templatized data structure (<int>)
// ...data_structure<type>...
// std::vector<int> items = {12, 13}
// templetized class in C >> generics in C#
// if you pass vector to a function
// copies the vector into a variable
// !!! and remembers its size
// add data to the vector
// items.push_back(100)
// items[2]
// items.size()
// items[items.size() - 1]
// vectors are part of c++11 so
// g++ file_name.cpp -std=c++11

// C++ Programming Tutorial 51 - Creating a Vector
#include <iostream>
// you have to include the vector
#include <vector>

int main()
{
  // create a vector and assign some values
  std::vector<int> data = {1, 2, 3};
  // add data to the end of vector
  data.push_back(12);
  std::cout << data[3] << std::endl; // 12
  std::cout << data.size() << std::endl; // 4
  std::cout << data[data.size() - 1] << std::endl; // last item in the array

  // remove the last item of the vector
  data.pop_back();
  std::cout << data.size() << std::endl; // 3 again
}