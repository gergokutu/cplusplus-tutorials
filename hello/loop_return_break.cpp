// return & break keywords
#include <iostream>
#include <string>

int main()
{
  std::string sentence = "Hello, my name is Pocok";

  for (int i = 0; i < sentence.length(); i++)
  {
    std::cout << sentence[i] << std::endl;
    // validate all the char against o
    if (sentence[i] == 'o')
    {
      std::cout << "Found o!\n";
      // break our search
      // stops after hello
      // try without break
      break;
    }
  }
  std::cout << "Done!\n";
}