#include <iostream>
#include <string>

int main()
{
  // build a guess game
  std::string my_name = "Pocok";
  int my_age = 99;

  std::cout << "Guess my name: ";
  std::string name_guess;
  std::cin >> name_guess;

  std::cout << "Guess my age: ";
  int age_guess;
  std::cin >> age_guess;

  if(my_name == name_guess && my_age == age_guess) // and
  {
    std::cout << "Both age and name correct\n";
  } 
  // else if (my_name == name_guess || my_age == age_guess) // or
  // {
  //   std::cout << "Age or name correct\n";
  // }
  else if (my_name == name_guess && my_age != age_guess)
  {
    std::cout << "Only the name is correct\n";
  }
  // else if (my_name != name_guess && my_age == age_guess) // not equal
  else if (!(my_name == name_guess) && my_age == age_guess) // negate
  {
    std::cout << "Only the age is correct\n";
  } else
  {
    std::cout << "Missed both age and name.\n";
  }
  // return 0;

  // logical
  // &&  ||  !

  // comparioson
  // ==  !=  < >   <= >=

  // with nested if statements
  std::string color = "blue";
  int number = 1;

  std::cout << "My favorite color: " << std::endl;
  std::string color_guess;
  std::cin >> color_guess;

  std::cout << "My favorite number: ";
  int number_guess;
  std::cin >> number_guess;

  if (color == color_guess)
  {
    if(number == number_guess)
    {
      std::cout << "Wooww, correct." << std::endl;
    }
    std::cout << "Wrong number" << std::endl;
  }
  else
  {
    std::cout << "Something wrong." << std::endl;
  }
  std::cout << "Always see this!!!\n";
}