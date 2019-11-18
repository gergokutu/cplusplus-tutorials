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
}