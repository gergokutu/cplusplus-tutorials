#include <iostream>
#include <string>

int main()
{
  std::string greeting = "Hello";
  std::cout << greeting << std::endl;
  // number of characters in the string
  std::cout << greeting.length() << std::endl;
  // size is the same as length
  std::cout << greeting.size() << std::endl;

  // modifiers
  std::cout << greeting.append(" there") << std::endl;
  // position, what to insert
  std::cout << greeting.insert(3, "   ") << std::endl;
  // position, number of characters to be erased
  std::cout << greeting.erase(3, 3) << std::endl;
  // delete everything after the position
  std::cout << greeting.erase(3) << std::endl; // Hel
  
  // remove the last character
  std::string name = "Pocok";
  std::cout << name << std::endl;
  name.erase(name.length() -1); // Poco
  std::cout << name << std::endl;
  // also remove the last character
  name.pop_back(); // Poc
  std::cout << name << std::endl;

  // changing the string
  // starting index, length, the replacement
  name.replace(0, 2, "ab"); // Po > ab >> Poc > abc
  std::cout << name << std::endl;

}