// operator Precedence and Associativity
#include <iostream>

int main()
{
  // integer division pitfall...
  int x = 10 / 4;
  double y = 10. / 4;
  std::cout << x << std::endl; // 2
  std::cout << y << std::endl; // 2.5

  int z = 10 % 4;
  std::cout << z << std::endl; // 2

  // precedence >> operator evaluation order
  // associativity >> evaluation direction, on same level
  // usually left-to-right
  // example for right-to-left
  double num1;
  double num2;
  double num_x;
  num1 = 10;
  num_x = 20;
  num2 = num_x = num1 = 100; // num2 = (num1 = 100)
  std::cout << num1 << "\t" << num_x << "\t" << num2 << std::endl; // 100 100 100
  
  // force the same to left-to-right evaluaton order
  double num3;
  double num4;
  double num5;
  num3 = 10;
  num5 = 20;
  ((num4 = num5) = num3) = 100;
  std::cout << num3 << "\t" << num5 << "\t" << num4 << std::endl; // 10 20 100
}