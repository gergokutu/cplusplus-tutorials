// more explaination in 033_...cpp
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

void play_game()
{
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
  srand(time(NULL));
  int choice;

  do
  {
    std::cout << "0. Quit" << std::endl << "1. Play Game\n";
    std::cin >> choice;

    switch (choice)
    {
      case 0:
        std::cout << "Good bye!\n";
        return 0;
      case 1:
        // later we will change the text to a guess game
        std::cout << "Yo, let's play a game!\n\n";
        play_game();
        break;
    }
  } 
  while (choice != 0);
}