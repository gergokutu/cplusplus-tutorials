#include <iostream>
#include <string>

int main()
{
  // do-while loop is used for
  // different purposes than while loop
  // at lest 1 execution
  // guess game app
  std::string password = "password123";
  std::string guess;
  
  do 
  {
    std::cout << "Guess the password: ";
    std::cin >> guess;
  } while (guess != password);
  // } while (false);
}