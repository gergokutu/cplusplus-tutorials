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
}; // do not forget the semi-colon

int add_user_if_not_exists(std::vector<User> &users, User user)
{
  // iterate over all the elements of the vector
  // and check if the passed data exists
  for (int i = 0; i < users.size(); i++)
  {
    // if match
    // we decide it
    // e.g if the first_name and last_name equals, than they are the same
    if (users[i].first_name == user.first_name &&
        users[i].last_name == user.last_name)
    { 
      // return the index of the user
      return i;
    }
  }
  users.push_back(user);
  // for the return type int
  // return the lenght of the vector - 1
  return users.size() - 1;
}

void print_vector(std::vector<User> users)
{ 
  // try with range based for loop
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

  // create a vector of the users
  // the type is User!
  std::vector<User> users;
  // add a user
  users.push_back(user1);
  // add a user
  // intantiate to the default state
  // users.push_back(User());
  users.push_back(user2);
  users.push_back(user3);

  User user;
  user.first_name = "Dora";
  user.last_name = "Tonka";
  // call the function
  // it should not be added
  // user index should be returned instead > 1
  std::cout << add_user_if_not_exists(users, user) << std::endl;

  User user4;
  user.first_name = "David";
  user.last_name = "Tonka";
  // call the function
  // it should be added
  // its index should be returned > 3 (4th element... 0 index)
  std::cout << add_user_if_not_exists(users, user4) << std::endl;
  std::cout << users.size() << std::endl;

  std::cout << users[0].first_name << std::endl;
  // std::cout << users[1].first_name << std::endl; // gonna be empty string

  std::cout << "\nAll first names in the vector:" << std::endl;
  print_vector(users);

  return 0;
}