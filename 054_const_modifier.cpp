#include <iostream>
#include <vector>

void do_something(int array[])
{
  // won't compile because of argument violation...
  // const int array[] vs int array[]
  std::cout << array[2] << "\n"; // 3
}

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
// but outside of the function scope
// the variable remains the same >> you can change
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
  // gonna be a problem because of arg violation
  // const int array[] vs int array[]
  // do_something(array);
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

  std::cout << "data2[0] muktiplied by 5 outside the scope of print_array2\n";
  data2[0] *= 5;
  std::cout << data2[0] << std::endl;

  do_something(data2); 

  return 0;
}