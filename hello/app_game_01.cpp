#include <string>
#include <iostream>
// include the c standard library and c time
// when you work with random numbers
#include <cstdlib>
#include <ctime>

// create the number guessing game function
void play_game()
{
  // create a random number
  // % 251 >> the randon number is always sg 0-250
  // Caleb has a sepearate video on random numbers in C prog tutorials
  // rand >> creates the same sequence of random numbers every time
  // to fix that we have to seed a random number to
  // change the random number generation input
  int random = rand() % 251;
  // next line just shows the random number
  // std::cout << random << std::endl;
  std::cout << "Guess a random number from 0 to 250: " << std::endl;

  while (true)
  {
    int guess;
    std::cin >> guess;

    if (guess == random)
    {
      std::cout << "\n!!!!!!!!!!!!!!!YOU WIN!!!!!!!!!!!!!!!!\n\n";
      // if it's correct
      // we want to break out from this loop
      break;
    } 
    else if (guess < random)
    {
      std::cout << "Too low\n";
    } 
    else
    {
      std::cout << "Too high\n";
    }
  }
}

int main()
{ 
  // srand >> seed a random number once
  // in the beginning, when the application starts
  // getting that number from the system clock
  // and the system clock is always changing
  // do not use this method for encryption
  srand(time(NULL));
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
        // std::cout << "Yo, let's play a\n";

        play_game();

        // the break here is not necessary
        // but good practice
        break;
    }
  } 
  while (choice != 0);
}