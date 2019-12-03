#include <string>
#include <iostream>

int main()
{
  // create the menu for the game
  // user can select them
  int choice;

  do
  {
    std::cout << "0. Quit" << std::endl << "1. Play Game\n";
    std::cin >> choice;

    // do diff things if chooses 0 or 1
    switch (choice)
    {
      case 0:
        std::cout << "Good bye!\n";
        // return instead of break
        // do not want the code to continue being executed in this case
        // the program will be over
        return 0;
      case 1:
        // later we will change the text to a guess game
        std::cout << "Yo, let's play a\n";
        // the break here is not necessary
        // but good practice
        break;
    }
  } 
  while (choice != 0);
}