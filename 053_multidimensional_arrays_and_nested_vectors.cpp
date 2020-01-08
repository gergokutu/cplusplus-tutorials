#include <iostream>
#include <vector>

int main()
{ 
  // single array
  int grades[] = {1, 2, 3};

  std::cout << "2D array: set_of_grades\n";
  // multidimensional
  // won't work because the outer array has to know the size...
  // how many sets we have
  // int set_of_grades[][] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int set_of_grades[][3] = 
  {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  // iterate over with for >> should be nested as well
  for (int row = 0; row < 3; row++)
  {
    for (int column = 0; column < 3; column++ )
    {
      std::cout << set_of_grades[row][column] << "\t";
    }
    std::cout << "\n";
  }

  std::cout << "2D vector: set_of_numbers\n";
  std::vector<std::vector<int>> set_of_numbers = 
  {
    {10, 20, 30},
    {40, 50, 60},
    {70, 80, 90}
  };

  for (int row = 0; row < 3; row++)
  {
    for (int column = 0; column < 3; column++ )
    {
      std::cout << set_of_numbers[row][column] << "\t";
    }
    std::cout << "\n";
  }
  
  return 0;
}