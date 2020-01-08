#include <iostream>

void swap_ref(int &a, int &b)
{
  int temporary = a;
  a = b;
  b = temporary;

  std::cout << "Inside >> a: " << a << "\tb: " << b << "\n";
}
void swap(int a, int b)
{
  // with this both gonna be b
  // no swap
  // a = b;
  // b = a;

  // try this
  // inside the func >> swapped
  // outside the func >> not swapped
  int temporary = a;
  a = b;
  b = temporary;

  std::cout << "Inside >> a: " << a << "\tb: " << b << "\n";
}

int main()
{
  int a = 1;
  int b = 2;

  std::string note1 = "With swap:";
  std::cout << note1 << std::endl;
  swap(a, b);
  std::cout << "Outside >> a: " << a << "\tb: " << b << "\n";
  std::cout << "\n";

  std::string note2 = "With swap_ref:";
  std::cout << note2 << std::endl;
  swap_ref(a, b);
  std::cout << "Outside >> a: " << a << "\tb: " << b << "\n";

  return 0;
}