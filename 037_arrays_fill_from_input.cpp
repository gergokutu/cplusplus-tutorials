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
  // if just declare but not initialize the array
  // you get undifined instead of 0s
  // undefined results in crazy values...
  // int guesses[100];
  // to get 100 pcs of 0 >> initialize a empty array
  int guesses[100] = {};
  // int guesses[] = {12, 43, 23, 43, 23};
  int size = sizeof(guesses) / sizeof(int);
  print_array(guesses, size);

  return 0;
}