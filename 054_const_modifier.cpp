#include <iostream>
#include <vector>

void print_array(int array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    // modify the array
    // add 1 to each item
    array[i]++;
    std::cout << array[i] << "\t";
  }
  std::cout << std::endl;
}

// you can pass a non-const variable as const argument
// and you cannot change the data
void print_array2(const int array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    // cannot modify
    // because of const
    // array[i]++;
    std::cout << array[i] << "\t";
  }
  std::cout << std::endl;
}

int main()
{
  int size = 3;
  int data[] = {1, 2, 3};
  int data2[] = {1, 2, 3};

  print_array(data, size);
  // the array is modified here as well
  std::cout << data[0] << std::endl;

  print_array2(data2, size);
  std::cout << data2[0] << std::endl;

  return 0;
}