// function overloading >> creating multiple versions of a function
#include <iostream>

void swap(int &a, int &b)
{
  int temporary = a;
  a = b;
  b = temporary;

  std::cout << "Inside\t>> a: " << a << "\tb: " << b << "\n";
}

// compile without error
void swap(std::string &a, std::string &b)
{
  std::string temp = a;
  a = b;
  b = temp;
}

// error >> ambiguous
// void swap(int x, int y)
// {
//   //
// }

// error >> redefinition
// void swap(int &x, int &y)
// {
//   //
// }

int main()
{
  int a = 1;
  int b = 2;

  std::string first_name = "Gergo";
  std::string last_name = "Kovacs";

  swap(a, b);
  std::cout << "Outside\t>> a: " << a << "\tb: " << b << "\n";
  std::cout << "\n";

  swap(first_name, last_name);
  std::cout << "First: " << first_name << " Last: " << last_name << " (HUN order)" << std::endl;

  return 0;
}