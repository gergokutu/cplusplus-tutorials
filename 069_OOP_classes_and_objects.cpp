/*
OOP - Classes and objects
- very similar to structs

Class:
- blueprint
- defines the shape of a data structure
- cookie cutter example in the video...
- process of going from a class to an object > instatiation
- User eample in the video... User user1;
- User the type (with class > building your own custom type)
- constructor > spec function (method) wich creates a new user
- inside the class with the same name > User()
- automatically called everytime when a new user instantiated
- do not have to do it like in JS > new User() > !!!NO-NO-NO!!!
- we can define our own methods inside the class
- data members (variable)
- operator overloading (user1 == user2) > any other operator can be overloaded
- static members
  - describe the class in general
  - stay associated with the class
  - e.g number of users intatiated
*/

#include <iostream>

// create a class
// everything is automatically private
// encapsulation > hide diff variables inside the User (same with struct)
class User
{
  std::string status = "Gold";

  // create public members
  public:
    std::string first_name;
    std::string last_name;
    std::string get_status()
    {
      return status;
    }
  
 
  
}; // do not forget the semi-colon

int main()
{
  User me;
  me.first_name = "Gergo";
  me.last_name = "Kovacs";
  
  std::cout << "First name:\t" << me.first_name << std::endl;
  std::cout << "Last name:\t" << me.last_name << std::endl;
  std::cout << "Status:\t" << me.get_status() << std::endl;

  return 0;
}