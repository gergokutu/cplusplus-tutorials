#include <iostream>
#include <vector>

// the passed data (vector in this case)
// is copied into the data variable (e.g number >> data)
void print_vector(std::vector<int> data)
{
  for (int i = 0; i < data.size(); i++)
  {
    std::cout << data[i] << "\t";
  }
  std::cout << "\n";
}

int main()
{
  std::vector<int> numbers = {1, 2, 3};
  print_vector(numbers);
}