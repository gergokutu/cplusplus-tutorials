#include <iostream>

// create a struct (define it)
// convention > all custom types start with capitol letter
// assign values only for instances (objects)
struct User
{
  std::string first_name;
  std::string last_name;
  std::string status;
  // create a method
  // not conventional
  // only for show the usage of private
  std::string get_category()
  {
    return category;
  }
  // create a private
  // it can be accessed only here
  // store information without exposing it to the public word
  // needs > g++ main.cpp -std=c++11
  private:
    std::string category = "inaccessible";
}; // do not forget the semi-colon

int main()
{
  // create an instance of the struct aka object
  User me;
  // assign values
  me.first_name = "Gergo";
  me.last_name = "Kovacs";
  me.status = "Gold";
  // access the values
  // they can be access 
  // because the access modifier of struct
  // is public by default
  std::cout << "First name:\t" << me.first_name << std::endl;
  std::cout << "Last name:\t" << me.last_name << std::endl;
  std::cout << "Status:\t\t" << me.status << std::endl;
  // call the method
  std::string category = me.get_category();
  std::cout << "Category:\t" << category << std::endl;
  // or
  std::cout << "Category2:\t" << me.get_category() << std::endl;

  return 0;
}