#include <iostream>

// void print_array(int array[])
// {
//   std::cout << sizeof(array) << std::endl;
// }

// you can correct the size losing with a separate variable
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
  std::cout << sizeof(guesses) << std::endl; // 20 >> size of the array
  // when passing the array to the function
  // it loses the sense of the size
  // print_array(guesses); // 8 >> size of a pointer
  // print_array(guesses, 5);

  int size = sizeof(guesses) / sizeof(int);
  std::cout << sizeof(int) << std::endl;
  print_array(guesses, size);

  return 0;
}