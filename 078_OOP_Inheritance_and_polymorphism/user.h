#include <iostream>

#ifndef USER_H
#define USER_H
class User
{
  static int user_count;
  std::string status = "Gold";

  public:
    static int get_user_count();

    std::string first_name;
    std::string last_name;

    std::string get_status();
    void set_status(std::string status);

    User();
    User(std::string first_name, std::string last_name, std::string status);
    ~User();
    
    friend std::ostream& operator << (std::ostream& output, const User user);
    friend std::istream& operator >> (std::istream& input, User &user);

    // virtual > you can overwrite it in the subclasses
    // without virtual >
    // Teacher subclass cannot overwrite it
    // although we referenced user to teacher
    // it user.output() will print "I am a user"
    // instead of Teacher's class > 'I am a teacher"
    virtual void output();
};

#endif