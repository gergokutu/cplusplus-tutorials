// check the folder with the same name!!!
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
    
    friend std::ostream& operator << (std::ostream& output, const User user);
    friend std::istream& operator >> (std::istream& input, User &user);
};
int User::user_count = 0;

std::ostream& operator << (std::ostream& output, const User user)
{
  output << "First name:\t" << user.first_name << "\n" 
  << "Last name:\t" << user.last_name;
  std::cout << "\nStatus:\t\t" << user.status;
  return output;
}

std::istream& operator >> (std::istream& input, User &user)
{
  input >> user.first_name >> user.last_name >> user.status;
  return input;
}

int main()
{
  User user1("Gergo", "Kovacs", "Platinum");
  std::cout << user1 << std::endl;

  User user2;
  std::cin >> user2;
  std::cout << user2 << std::endl;
}