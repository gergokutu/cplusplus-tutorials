#include "teacher.h"
#include <iostream>

void Teacher::output()
{
  std::cout << "I am a teacher\n";
}

// chain of calling
// 1: calls the constructor of User
// 2: calls the constructor of Teacher
Teacher::Teacher()
{
  std::cout << "Teacher created\n";
}