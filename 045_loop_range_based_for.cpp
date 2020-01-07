// the range based for-loop
// big help when iterating through vectors
#include <iostream>
#include <vector>
#include <array>

int main()
{
  int data[] = {1, 2, 3, 4, 5, 6};

  std::cout << "With range based for-loop" << std::endl;
  // range based for-loop
  // new variable to store the data of every iteraton (n)
  // tell where the data come from ( : data)
  for (int n : data)
  {
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