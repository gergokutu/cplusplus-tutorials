#include <iostream>
#include <string>

int main()
{
  std::string greeting = "What the hell?";
  // build a replacement system
  // use .find()
  // it will return an index
  // greeting.find("hell");
  // starting index, number of char to change, new chars
  greeting.replace(greeting.find("hell"), 4, "****"); // What the ****?
  std::cout << greeting << std::endl;

  // substring » substr
  // starting index, length
  std::string greeting_2 = "What is up?";
  std::cout << greeting_2.substr(5, 2) << std::endl; // is
  
  // find_first_of()
  // finds any of the passed values
  std::cout << greeting_2.find_first_of("aeiou") << std::endl; // 2 >> index of 'a'
  std::cout << greeting_2.find_first_of("eiou") << std::endl; // 5 >> index of 'e'
  // returns a huge number
  // the huge number is equivalent of npos
  // means cannot be found >> "!"
  // the value of npos >> npos == -1
  // unsigned long x = -1; is not possible
  // lower the max number by 1 and gives that back (f... big num)
  std::cout << "Function result: " << greeting_2.find_first_of("!") << std::endl; // f... big num >> 18.........
  unsigned long x = -1;
  std::cout << "unsigned long x = -1; will result: " << x << std::endl;
  if(greeting.find_first_of("!") == -1 ) std::cout << "NOT FOUND!" << std::endl;

  // compare strings 1
  if(greeting_2 == "What is up?") 
  {
    std::cout << "Equals" << std::endl;
  }

  // compare strings 2
  // do it with compare method
  // returns 0 if it's true (equals)
  // yeah, a bit confusing...
  if(greeting_2.compare("What is up?") == 0) std::cout << "Equals too" << std::endl;
}