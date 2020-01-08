#include <iostream>
#include <fstream>
#include <vector>

int main()
{
  // reading from file is similar to cin
  // we need to create an input object from the fstream
  // file won'b be created if it does not exist
  std::ifstream file ("hello.txt");
  
  // create a vector to store the names
  std::vector<std::string> names;

  // take the names and store them in a vector
  // put the fie into a variable
  std::string input;
  // the while condition evaulates true if the read was successful
  // it returns a stream (now the file)
  while(file >> input)
  {
    names.push_back(input);
  }
  
  for (std::string name : names)
  {
    std::cout << name << "\t";
  }
  std::cout << "\n";

  return 0;
}