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
  // you have to assign a value
  // won't work
  // static int user_count = 0;
  // has to be initialized out of line
  // do it outside of the class
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

// initialize a value for static member
// it's a bit wierd...
// but > usable when we allocate memory for it
// and it happens not when creating the class
// but intantiating a object of it
int User::user_count = 0;

int main()
{
  User user1;
  std::cout << User::get_user_count() << std::endl;

  User user2, user3, user4;
  std::cout << User::get_user_count() << std::endl;

  // call the destructor
  user1.~User();
  std::cout << User::get_user_count() << std::endl;
}