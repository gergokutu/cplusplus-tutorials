#include <iostream>
// include file stream
#include <fstream>

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
  std::ofstream file ("hello.txt");

  // when you are done with the file
  // actually it is not always necessary
  // but it explicitly closes the files 
  file.close();
  return 0;
}