/*
Encapsulation
- you do not have to expose all the information inside your class
- private and public members
- car example in the video
- driver does not have to understand the inner mechanics of the car (private) like ethe engine...
  - has to understand how to use (drive) the car
  - has to care about only the exposed (public) stuff like pedals, wheel, etc...
  - pedals... > interface
  - you can change the engine > driver can use the car the same way
- abstraction > you do not have to understand the inner things to use the class
- control > what people can see/do with our class
- good > we can ensure that people use our class in a proper way

Achiving encapsulation in 2 ways:
1. access modifiers
  - public, private, protected
2. getters/setters
  - methods that help us fine-tune >
  - how our private data members can be accesses
  - defining for users
    - getter() > how to get that value (e.g > status in earlier example)
    - setter() > how to setthat value (e.g > status in earlier example)
  - use when really strict control is necessary over the class
  - other cases do not pollute your class with them
  - KISS > Keep It Super Simple
*/
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

class User
{
  std::string status = "Gold";

  public:
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
    }

    User(std::string first_name, std::string last_name, std::string status)
    {
      this -> first_name = first_name;
      this -> last_name = last_name;
      this -> status = status;
    }

    ~User()
    {
      std::cout << "Destructor" << std::endl;
    }
}; // do not forget the semi-colon

int main()
{
  User user1;
  user1.set_status("Tacos");
  std::cout << user1.get_status() << std::endl;

  User user2("Gergo", "Kovacs", "Platinum");
  std::cout << user2.first_name << std::endl;
  std::cout << user2.get_status() << std::endl;
}