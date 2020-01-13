/*
Intro to constructors
- special method when a class intantiated into a object
- User user1;
- invoked automatically
- so implicitly defined User() method is the bare minimum > no arg
- you can make custom constructors

User(std::string first, std::string last)
{
  first_name = first;
  last_name = last;
};
User user1 ("Gergo", "Kovacs");

destructor:
- automatically called when the object deleted
- you can overwrite it

~User()
{
  // code > e.g. a message, log sth...
}
*/
#include <iostream>
#include <vector>

class User
{
  std::string status = "Gold";

  public:
    std::string first_name;
    std::string last_name;
    std::string get_status()
    {
      return status;
    }

    // modify constructor to see what's happening
    // default constructor because it has no parameters
    // called everytime when a new user is created
    User()
    {
      std::cout << "Constructor" << std::endl;
    }

    // create additional constructors
    // what take parameters
    // overloading
    User(std::string first_name, std::string last_name)
    {
      // use the this keyword to specify the class data member
      // simple first_name > the argument
      this -> first_name = first_name;
      this -> last_name = last_name;
    }
}; // do not forget the semi-colon

int main()
{
  User user1;

  User user2("Gergo", "Kovacs");
  std::cout << user2.first_name << std::endl;
}