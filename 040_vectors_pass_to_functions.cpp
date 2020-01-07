#include <iostream>
#include <vector>

// the passed data (vector in this case)
// is copied into the data variable (e.g number >> data)
void print_vector(std::vector<int> data)
{
  data.push_back(12);
  for (int i = 0; i < data.size(); i++)
  {
    std::cout << data[i] << "\t";
  }
  std::cout << "\n";
}

// if you want to change the data inside the function
// you can share memory of 'number' vector to data variable
// only you have to pass it by reference (copy the memory location)
// &data
// when to use:
// if you have a huge vector you might not want to copy by value
// because that's going to use a lot of memory...
void print_vector_ref(std::vector<int> &data)
{
  data.push_back(12);
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
  print_vector(numbers);
  print_vector(numbers);
  std::cout << "Passing by reference" << std::endl;
  print_vector_ref(numbers);
  print_vector_ref(numbers);
  print_vector_ref(numbers);
}