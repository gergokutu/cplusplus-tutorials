#include <iostream>

int main()
{
  // single
  int grades[] = {1, 2, 3};

  // multi
  // won't work because the outer array has to know the size...
  // how many sets we have
  // int set_of_grades[][] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int set_of_grades[][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}};

  // iterate over with for >> should be nested as well
  for (int row = 0; row < 3; row++)
  {
    for (int column = 0; column < 3; column++ )
    {
      std::cout << set_of_grades[row][column] << "\t";
    }
    std::cout << "\n";
  }

  return 0;
}