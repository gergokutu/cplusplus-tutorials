#include <iostream>
#include <vector>

void print_array(const int data[], int size)
{
  for (int i = 0; i < size; i++)
  {
    std::cout << data[i] << "\t";
  }
  std::cout << "\n";
}

int main()
{
  int data[] = {1, 2, 3};
  int size = 3;

  print_array(data, size);
  std::cout << data[0] << std::endl;

  return 0;
}