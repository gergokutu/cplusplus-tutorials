// new file for User class
// all of the definitions here
// declarations to user.h
#include <iostream>
// I think string is not necessary...
// but follow the example...
// with complex and big projects you have to be careful with includes
// include 1x and just what you really need!
#include <string>
// copy the class and move to user.h
// and include user.h
#include "user.h"

// new file for all of the declarations of User class
// definitions to user.cpp
#include <iostream>

// get rid of the class
// do not forget the closing curly brace!
// get rid of the data members
// just keep the functions
// get rid of public keyword too
// get rid of static and friend keywords too
// prefix all the functions, constructors, destructor with User
// leave the operator overloads

    int User::get_user_count()
    {
      return user_count;
    }
    
    std::string User::get_status()
    {
      return status;
    }
    
    void User::set_status(std::string status)
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

    User::User()
    {
      user_count++;
    }

    User::User(std::string first_name, std::string last_name, std::string status)
    {
      this -> first_name = first_name;
      this -> last_name = last_name;
      this -> status = status;
      user_count++;
    }

    User::~User()
    {
      user_count--;
    }
    
    std::ostream& operator << (std::ostream& output, const User user);
    std::istream& operator >> (std::istream& input, User &user);

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