// String class vs C style strings
#include <iostream>
// get access to the string class
#include <string>

int main()
{ 
  // creating an object from string class
  // string is characters that strand together
  std::string greeting = "Hello";
  std::cout << greeting[0] << std::endl;

  std::string name; // "" >> an empty string is the default value
  std::cout << name << std::endl; // empty string then new line...

  // string concatenation
  std::cout << "Type your name: ";
  // cin grabs only the first word
  // no Gergo Kovacs, just Gergo
  std::cin >> name;
  std::cout << "Hello, " + name + "!" << std::endl;

  std::string complete_greeting = greeting + " there";
  complete_greeting += "!";
  std::cout << complete_greeting << std::endl;

  // members >> there are functions tied to the class (method)
  std::cout << complete_greeting.length() << std::endl;

  // example of a C string
  // more complicated
  // array of characters >> works, but has limitations
  // e.g. string size is not easily changeable
  char car[] = "Lada";
  // error >> Ferrari is longer, needs more memory space...
  // name[] = "Ferrari";
  // nor a shorter string is allowed
  // name[] = "BMW";
  std::cout << car << std::endl;

  std::cout << "Type something!" << std::endl;
  std::string bye;
  std::cin >> bye;
  std::cout << "You typed: " << bye << std::endl;
}