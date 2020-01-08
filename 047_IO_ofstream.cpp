#include <iostream>
// include file stream
#include <fstream>
#include <vector>

int main()
{
  // create an object coming from ofstream class >>
  // instantiate an object from a class (ofstream)
  // name it file
  // std::ofstream file;
  // .txt is a naming convention for text files
  // on Linux/MAC you do not really need the extension
  // with Windows its a bit different
  // because the extension determines how the file is compiled
  // file.open("hello.txt");
  // same but shorter
  // if the file does not exist
  // it is automatically created
  // with these methods the file is overwritten
  // every time when running the executable
  // not repeating e.g the names...
  // std::ofstream file ("hello.txt");

  // if you do not want to overwrite it
  // use the append
  // std::ofstream file ("hello.txt", std::ios::app);

  // instead of hardcoded filename (hello.txt)
  // ask it from user through console
  std::cout << "Enter a file name with .txt extension!\n";
  std::string filename;
  std::cin >> filename;
  std::ofstream file (filename.c_str(), std::ios::app);

  //check if the file has been successfully opened
  if (file.is_open())
  {
    std::cout << "success n00b\n";
  }

  // write into the file
  // just use the peviously created 'file' oject
  // as the std::cout...
  file << "hey\n";

  // write several names into the file
  std::vector<std::string> names;
  names.push_back("Mogyi");
  names.push_back("Pocok");
  names.push_back("Duplex");

  // use a range based for-loop
  // to add the names
  for (std::string name : names)
  {
    file << name << std::endl;
  }

  // when you are done with the file >> close
  // actually it is not always necessary
  // but it explicitly closes the files 
  file.close();
  return 0;
}