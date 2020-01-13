// static data member is not assocoated with the object but the class
// use when something describes the whole population instead of a single entity
// e.g. number of users
// because > each individual user does not need that info (just the class)
// when you label a data member as static >
// you can only access other static data members
// ?they cannot be both public and private
#include <iostream>

class User
{
  // create a static data member (variable)
  static int user_count;
  std::string status = "Gold";

  public:
    static int get_user_count()
    {
      return user_count;
      // error
      // return first_name;
    }

    std::string first_name;
    std::string last_name;
    // getter
    // can access the private members
    std::string get_status()
    {
      return status;
    }
    // setter
    // can access the private members
    void set_status(std::string status)
    {
      if (status == "Gold" || status == "Silver" || status == "Bronze" || status == "Platinum")
      {
        this -> status = status;
      }
      else
      {
        this -> status = "Invalid";
      }
    }

    User()
    {
      std::cout << "Constructor" << std::endl;
      // modify user_count here
      user_count++;
    }

    User(std::string first_name, std::string last_name, std::string status)
    {
      this -> first_name = first_name;
      this -> last_name = last_name;
      this -> status = status;

      // and modify user_count here
      user_count++;
    }

    ~User()
    {
      std::cout << "Destructor" << std::endl;
      // and modify user_count here
      user_count--;
    }
}; // do not forget the semi-colon

int main()
{
  User user1;
  user1.set_status("Tacos");
  std::cout << user1.get_status() << std::endl;

  User user2("Gergo", "Kovacs", "Platinum");
  std::cout << user2.first_name << std::endl;
  std::cout << user2.get_status() << std::endl;
}