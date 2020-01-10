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