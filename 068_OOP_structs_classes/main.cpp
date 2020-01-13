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
}; // do not forget the semi-colon

int add_user_if_not_exists(std::vector<User> &users, User user)
{
  for (int i = 0; i < users.size(); i++)
  {
    if (users[i].first_name == user.first_name &&
        users[i].last_name == user.last_name)
    { 
      return i;
    }
  }
  users.push_back(user);
  return users.size() - 1;
}

void print_vector(std::vector<User> users)
{ 
  for (User user : users)
  {
    std::cout << user.first_name << "\n";
  }
}

int main()
{
  User user1, user2, user3;
  user1.first_name = "Gergo";
  user1.last_name = "Kovacs";

  user2.first_name = "Dora";
  user2.last_name = "Tonka";

  user3.first_name = "Mogyi";
  user3.last_name = "Pocok";

  std::vector<User> users;
  users.push_back(user1);
  users.push_back(user2);
  users.push_back(user3);

  User user;
  user.first_name = "Dora";
  user.last_name = "Tonka";
  std::cout << add_user_if_not_exists(users, user) << std::endl;

  User user4;
  user.first_name = "David";
  user.last_name = "Tonka";
  std::cout << add_user_if_not_exists(users, user4) << std::endl;
  std::cout << users.size() << std::endl;

  std::cout << users[0].first_name << std::endl;

  std::cout << "\nAll first names in the vector:" << std::endl;
  print_vector(users);

  return 0;
}