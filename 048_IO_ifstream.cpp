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
    std::cout << name << "\n";
  }

  // try with char as well
  std::ifstream file2 ("hello.txt");
  std::vector<char> names2;
  char input2;
  
  while(file2 >> input2)
  {
    names2.push_back(input2);
  }
  
  for (char name2 : names2)
  {
    std::cout << name2 << "\n";
  }

  // use get() method
  std::ifstream file3 ("hello.txt");

  // get() returns a character
  // so store it in a char variable
  // returns only the very first character >> h
  char temp = file3.get();
  std::cout << temp << std::endl;

  // use getline function
  std::ifstream file4 ("hello.txt");

  // 2 arguments >> (stream, variable-to-store)
  // returns the first line
  // if the first line is 'hey you'
  // with first version it is
  // hey
  // you
  // with getline it is
  // hey you...
  std::string line;
  getline(file4, line);
  std::cout << line << std::endl;

  return 0;
}