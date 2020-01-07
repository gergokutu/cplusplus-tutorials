// refactor guessing game to use vectors
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
// include vector
#include <vector>

// void print_array(int array[], int count)
// {
//   for (int i = 0; i < count; i++)
//   {
//     std::cout << array[i] << "\t";
//   }
//   std::cout << std::endl;
//   std::cout << "\n";
// }

void print_vector(std::vector<int> vector)
{
  for (int i = 0; i < vector.size(); i++)
  {
    std::cout << vector[i] << "\t";
  }
  std::cout << std::endl;
  std::cout << "\n";
}

void play_game()
{
  // int guesses[250];
  // int guess_count = 0;
  std::vector<int> guesses;

  int random = rand() % 251;
  // next line just shows the random number
  std::cout << random << std::endl;
  std::cout << "Guess a random number from 0 to 250: " << std::endl;

  while (true)
  {
    int guess;
    std::cin >> guess;

    // comment out the next line
    // because vectors know their size >> 
    // do not have to keep track of it manually
    // guesses[guess_count++] = guess;
    guesses.push_back(guess);

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
  
  // print_array(guesses, guess_count);
  print_vector(guesses);
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