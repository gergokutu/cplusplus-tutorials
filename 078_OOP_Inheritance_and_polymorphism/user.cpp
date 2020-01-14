#include <iostream>
#include <string>
#include "user.h"
#include <iostream>

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
  // chain of calling
  // 1: calls the constructor of User
  // 2: calls the constructor of Teacher
  std::cout << "User created\n";
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

  if (user.status == "Gold" || user.status == "Silver" || user.status == "Bronze" || user.status == "Platinum")
  {
    user.status = user.status;
  }
  else
  {
    user.status = "Invalid";
  }

  return input;
}
