#include <iostream>

int main()
{
  std::cout << "How old are you: ";
  int age;
  std::cin >> age;
  if(age < 13)
  {
    std::cout << "You are not old enough.\n";
    return -1; // end the program >> -1
  }
  else if(age == 18)
  {
    std::cout << "You are 18 years old.\n";
    // return -1;
  }
  else
  {
    std::cout << "False\n";
    // return -1;
  }
  // always seen if ther is no return -1; earlier
  std::cout << "Always\n"; 
  return 0;
}