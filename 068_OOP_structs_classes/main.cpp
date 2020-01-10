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