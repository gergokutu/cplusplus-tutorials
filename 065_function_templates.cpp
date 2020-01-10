/*
Function templates
- templatizing > generics in other programming languages
- can be tied to functions or classes

Concept:
- create a function > have to decide the type of the arguments
- if you want to accept different types > issue > overloading comes in
- alternative to overloading >
- come up with different signatures for the functions
- we have a lot of overloads which are really similar >
- good example > earlier swap function (for int, double, string, objects...)
- easily can add up to a lot of version... > templatize

template <typename T>
void swap (T &x, T &y)
{
  T temp = x;
}

- T can be any type (placeholder), template
- the 2 Ts should be the same type
- also have to tell the computer that T is a template
*/

#include <iostream>
#include <string>

template <typename T>
void swap(T &a, T &b)
{
  T temp = a;
  a = b;
  b = temp;

  // do not output it
  // templatized (generic) functions only should do
  // what they are for >
  // in this case the swap
  // std::cout << "a: " << a << "\tb: " << b << "\n";
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
  std::cout << "first_name: " << first_name << "\tlast_name: " << last_name << "\n";

  return 0;
}