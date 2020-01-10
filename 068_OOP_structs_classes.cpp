/*
Intro to structs
- the following concepts can be applied for classes as well
- in other languages the diff between class & struct is much bigger...
- diff between structs and classes is conventional >
- people use struct for smaller and classes for bigger structures
- usually use structs for Plain Old Data Structs (PODS) >
  - inside the struct definition there is only data structs (variables)
  - you can put methods but it's usually avoided by convention
  - very simple variable based things...
- transition is really easy between structs and classes

Access modifiers:
- public
- private
- protected (come up with inheritance)
- members get access modifiers
- you can change default access modifiers

Public:
- when creating an object (an instance)
- public members can be accessed on that object
- structs are members of public by default

Private:
- cannot be accessed on the object (instance)
- but can be accessed on the class/struct
- classes are members of pivate by default
*/

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
  private:
    // because of inline assignment >
    // needs > g++ main.cpp -std=c++11
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