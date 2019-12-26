#include <iostream>

void print_array(int array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    std::cout << array[i] << "\t";
  }
  
  std::cout << std::endl;
}

int main()
{
  int guesses[] = {12, 43, 23, 43, 23};
  int size = sizeof(guesses) / sizeof(int);
  print_array(guesses, size);

  return 0;
}