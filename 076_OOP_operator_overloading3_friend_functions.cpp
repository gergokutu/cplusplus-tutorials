// operator overloading in context of friend fuctions
// we want them to access private data members of the User class
// Friend fuction?
// we can define a function outside of a class
// but it can access the private data members >
// if we grant access to them!
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

    // define a friend function inside the public section
    // does not have direct access to the objects
    // so we have to pass the user object
    // declaration here
    // put the actual definition outside of the class
    friend void output_status(User user);
    
    friend std::ostream& operator << (std::ostream& output, const User user);
};
int User::user_count = 0;
void output_status(User user)
{
  std::cout << user.status << std::endl;
}

// you can pass getter/setter to the overload >
// it will do the same than friend function >
// access the private data...
std::ostream& operator << (std::ostream& output, const User user)
{
  output << "First name:\t" << user.first_name << "\n" 
  << "Last name:\t" << user.last_name;
  // after
  // std::ostream& operator << (std::ostream& output, const User user)
  // as friend function in the class
  // this overload should be able to access private members (e.g status)
  std::cout << "\nStatus:\t\t" << user.status;
  return output;
}

// you can pass getter/setter to the overload >
// it will do the same than friend function >
// access the private data...
std::istream& operator >> (std::istream& input, User &user)
{
  input >> user.first_name >> user.last_name;
  return input;
}

int main()
{
  User user1;
  // error
  // std::cout << user1.status << std::endl;
  // error too
  // std::cout << user1.output_status() << std::endl;
  // works
  output_status(user1);

  user1.first_name = "Gergo";
  user1.last_name = "Kovacs";
  user1.set_status("Platinum");
  std::cout << user1 << std::endl;
}