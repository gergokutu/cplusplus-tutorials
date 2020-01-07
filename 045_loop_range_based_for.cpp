// the range based for-loop
// big help when iterating through vectors
#include <iostream>
#include <vector>
#include <array>

// range based for-loop won't work with C style array inside a function
// void test(int data[])
// {
//   for (int n : data)
//   {
//     std::cout << n << "\t";
//   }
//   std::cout << "\n";
// }

int main()
{
  // you can do it with C style array
  // int data[] = {1, 2, 3, 4, 5, 6};
  // you can do it with vector
  // std::vector<int> data = {1, 2, 3, 4, 5, 6};
  // you can do it with templetized array
  std::array<int, 6> data = {1, 2, 3, 4, 5, 6};

  std::cout << "With range based for-loop" << std::endl;
  // range based for-loop
  // handy when you want to iterate over each and every element
  // new variable to store the data of every iteraton (n)
  // tell where the data come from ( : data)
  for (int n : data)
  {
    // do not have to use an index to get a particular element
    std::cout << n << "\t";
  }
  std::cout << "\n";

  std::cout << "With normal for-loop" << std::endl;
  // normal for-loop
  for (int i = 0; i < 6; i++)
  {
    std::cout << data[i] << "\t";
  }
  std::cout << "\n";
}