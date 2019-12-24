#include <string>
#include <iostream>

int main()
{
  int answer = 11;
  std::cout << "Guess the number: " << std::endl;
  int guess;
  std::cin >> guess;

  // int points;
  // if (guess == answer)
  // {
  //   points = 10;
  // }

  // with ternary (similar to JS) - ver1
  // int points = guess == answer ? 10 : 0;
  // std::cout << points << std::endl;

  // with ternary (similar to JS) - ver1
  guess == answer ? std::cout << "Good job!\n" : std::cout << "Bad job!\n";
} 