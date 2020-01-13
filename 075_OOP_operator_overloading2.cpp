// insertion and extraction operator overloading
// e.g you want to output user1...
#include <iostream>

class User
{
  static int user_count;
  std::string status = "Gold";

  public:
    static int get_user_count()
    {
      return user_count;
    }

    std::string first_name;
    std::string last_name;
    
    std::string get_status()
    {
      return status;
    }
    
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
      user_count++;
    }

    User(std::string first_name, std::string last_name, std::string status)
    {
      this -> first_name = first_name;
      this -> last_name = last_name;
      this -> status = status;
      user_count++;
    }

    ~User()
    {
      user_count--;
    }
};
int User::user_count = 0;

// insertion operator overload
// we have 2 diff types
// std::cout and user1...
// we do not define it inside the class but here

// it returns an ostream becuase cout has the type of ostream
// this way we can return multiple operators ( std::cout << user1 << std::endl; )
// we can connect the <<
// & > because we do not want to copy the object every time
// we want to return a reference to the same object
std::ostream& operator << (std::ostream& output, User user)
{
  output << "First name:\t" << user.first_name << std::endl;
  output << "Last name:\t" << user.last_name << std::endl;
  // do not put the final std::endl; here
  // because we handle it the regular way
  // in the main() > std::cout << user1 << std::endl; 
  output << "Status:\t\t" << user.get_status();
  return output;
}

int main()
{
  User user1("Gergo", "Kovacs", "Platinum");
  std::cout << user1 << std::endl;
}