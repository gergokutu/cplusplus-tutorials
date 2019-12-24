// solve the cin grabbing only the first word problem
// Type Gergo Kovacs
#include <iostream>
#include <string>

int main()
{
  // std::cout << "Type your first name!" << std::endl;
  // std::string first_name;
  // // store the input inside the first_name variable
  // std::cin >> first_name;

  // std::cout << "Type your family name!" << std::endl;
  // std::string family_name;
  // std::cin >> family_name;

  // std::cout << first_name << std::endl;
  // std::cout << family_name << std::endl;

  // better solution with get line
  std::cout << "Type your full name!" << std::endl;
  std::string full_name;
  getline(std::cin, full_name);
  std::cout << full_name << std::endl;
}