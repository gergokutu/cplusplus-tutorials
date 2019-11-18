// continue keyword
#include <iostream>
#include <string>

int main()
{
  std::string sentence = "Hello, my name is Pocok";

  for (int i = 0; i < sentence.length(); i++)
  { 
    // get rid of spaces
    // if (sentence[i] == ' ')
    // print all of the chars except o
    if (sentence[i] == 'o')
    {
      // stop the current iteration and go to the next iteration
      continue;
    }
    std::cout << sentence[i] << std::endl;
  }
  std::cout << "Done!\n";
}