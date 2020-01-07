// STL >> Standard Template Library
// templetized arrays
// halfway between arrays and vectors
// std::array<int, 5> ages = {1, 2, 3};
// ages[0];
// ages.size() >> method of the ages object which wrappes the ages array..
// STL arrays are statically sized
// But they remember their length(size) when being passed to functions
// Arrays passed to functions as pointers
// Vectors passed to functions as values(being copied) >> STL arrays too
// STL array is an array wrapped in an object
// has all the abilities of an array + some extra comes from the object
// we have an extra layer of capabilities like remembering the size

// STL arrays in practice
#include <iostream>
// include array
#include <array>

// you will get the 0s
void print_array(std::array<int, 20> data)
{
  for (int i = 0; i < data.size(); i++)
  {
    std::cout << data[i] << "\t";
  }
  std::cout << "\n";
}

// without 0s >> plus argument needed
void print_array_2(std::array<int, 20> data, int size)
{
  for (int i = 0; i < size; i++)
  {
    std::cout << data[i] << "\t";
  }
  std::cout << "\n";
}

int main()
{
  // create an STL array
  // <type, size>
  std::array<int, 20> numbers = {1, 2, 3};
  std::cout << "print_array:\t";
  print_array(numbers);
  std::cout << "print_array_2:\t";
  print_array_2(numbers, 3);
}