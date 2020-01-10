// overloading templatized functions
#include <iostream>
#include <string>

template <typename T>
void swap(T &a, T &b)
{
  T temp = a;
  a = b;
  b = temp;
}

// creating a template overload for arrays
// swap each elements
template <typename T>
void swap(T a[], T b[], int size)
{
  for (int i = 0; i < size; i++)
  {
    T temp = a[i];
    a[i] = b[i];
    b[i] = temp;
  }
}

template <typename T>
void print_array(T a[], T b[], int size)
{
  for (int i = 0; i < size; i++)
  {
    std::cout << a[i] << " " << b[i] << "\t";
  }
}

int main()
{
  int a = 1;
  int b = 2;
  swap(a, b);
  std::cout << "a: " << a << "\tb: " << b << "\n";

  std::string first_name = "Gergo";
  std::string last_name = "Kovacs";
  swap(first_name, last_name);
  std::cout << "first_name: " << first_name << "\tlast_name: " << last_name << "\n\n";

  // capitol SIZE because it's a constant
  int SIZE = 3;
  int array_a[] = {1, 2, 3};
  int array_b[] = {4, 5, 6};
  print_array(array_a, array_b, SIZE);
  std::cout << "\n";
  std::cout << "array_a: " << array_a[0] << "\tb: " << array_b[0] << "\n\n";
  // size should be passed
  // because it helps to decide
  // which templetized swap() should be called (which overload)
  swap(array_a, array_b, SIZE);
  print_array(array_a, array_b, SIZE);
  std::cout << "\n";
  std::cout << "array_a: " << array_a[0] << "\tb: " << array_b[0] << "\n\n";

  return 0;
}