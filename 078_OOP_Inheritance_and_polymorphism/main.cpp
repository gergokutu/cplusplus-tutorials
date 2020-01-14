#include <iostream>
#include "user.h"
// include teacher.h
#include "teacher.h"

int main()
{
  User user1("Gergo", "Kovacs", "Platinum");
  std::cout << user1 << std::endl;

  User user2;
  std::cin >> user2;
  std::cout << user2 << std::endl;

  // instantiate a teacher
  Teacher teacher;
  teacher.first_name = "Teacher";
  teacher.last_name = "Grinch";
  teacher.set_status("Silver");
  std::cout << teacher << std::endl;
  teacher.output();
}