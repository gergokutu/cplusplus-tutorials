// more explaination in 033_...cpp
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

// define the array printing function, counter too
void print_array(int array[], int count)
{
  for (int i = 0; i < count; i++)
  {
    std::cout << array[i] << "\t";
  }
  // new line in 2 separate ways
  std::cout << std::endl;
  std::cout << "\n";
}

void play_game()
{
  // initialize an array and keep track of guesses
  int guesses[250];
  // every time we insert a guess to the array
  // we want to change the counter
  int guess_count = 0;

  int random = rand() % 251;
  // next line just shows the random number
  std::cout << random << std::endl;
  std::cout << "Guess a random number from 0 to 250: " << std::endl;

  while (true)
  {
    int guess;
    std::cin >> guess;

    // guesses[guess_count] = guess;
    // instead of the next line you can put ++
    // into the array parameter too
    // guess_count++;
    // pre vs postfix >> wee need postfix now
    guesses[guess_count++] = guess;
    // next line >> prefix won't work
    // because it's increment the guesses array index first
    // and then assign the value to the guesses array
    // guesses[++guess_count] = guess;

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
  // invoke a function to print the array
  print_array(guesses, guess_count);
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