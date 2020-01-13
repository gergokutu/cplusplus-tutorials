#include <iostream>
// only main() statys here
#include "user.h"

int main()
{
  User user1("Gergo", "Kovacs", "Platinum");
  std::cout << user1 << std::endl;

  User user2;
  std::cin >> user2;
  std::cout << user2 << std::endl;
}