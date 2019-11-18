// switch statement and enum
#include <iostream>
#include <string>

int main()
{
  int age;
  std::cout << "Your age: ";
  std::cin >> age;
  switch(age)
  {
    case 12:
      std::cout << "Mommy's little boy" << std::endl;
      break;
    case 18:
      std::cout << "Do not forget your driving licence!" << std::endl;
      break;
    case 35:
      std::cout << "Welcome junior developer\n";
      break;
    default:
      std::cout << "No match with this age\n";
      break;
  }
  return 0;
}