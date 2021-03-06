// save scores to an external file
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>

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
  int score = 0;

  std::vector<int> guesses;
  int random = rand() % 251;
  // next line just shows the random number
  std::cout << random << std::endl;
  std::cout << "Guess a random number from 0 to 250: " << std::endl;

  while (true)
  {
    int guess;
    std::cin >> guess;
    score++;
    
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
  // open a file with input stream
  std::ifstream input("best_scores.txt");

  // return to the menu if cannot open
  // you can play, but cannot compare your scores to best score
  if (!input.is_open())
  {
    std::cout << "Unable to read file\n";
    return;
  }

  // get the existing best_score
  int best_score;
  input >> best_score;

  // open an output stream as well
  std::ofstream output("best_scores.txt");

  // return to the menu if cannot open
  if (!output.is_open())
  {
    std::cout << "Unable to write file\n";
    return;
  }

  // write the lowest score into the file
  if (score < best_score)
  {
    output << score;
  }
  else
  {
    // present score is not lower
    // write back the previous best_score to the file
    output << best_score;
  }
  
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
        std::cout << "Yo, let's play a guess game!\n\n";
        play_game();
        break;
    }
  } 
  while (choice != 0);
}