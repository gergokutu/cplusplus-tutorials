#include <iostream>
#include <string>
#include "user.h"
// include teacher.h
#include "teacher.h"
#include "student.h"

// function requires a User type
void do_something(User& user)
{
  user.output();
}

int main()
{
  // commented out to see clearly > chain of calling
  // 1: calls the constructor of User
  // 2: calls the constructor of Teacher
  // User user1("Gergo", "Kovacs", "Platinum");
  // std::cout << user1 << std::endl;

  // User user2;
  // std::cin >> user2;
  // std::cout << user2 << std::endl;

  // instantiate a teacher
  Teacher teacher;
  teacher.first_name = "Teacher";
  teacher.last_name = "Grinch";
  teacher.set_status("Silver");
  std::cout << teacher << std::endl;
  teacher.output();

  // Polymorphism
  // Teacheer is also a User
  // we can make a reference to the Teacher
  // we can use reference parameters
  User& user = teacher; 
  // this is a User but acts like a Teacher
  // you have to put output in the user.h and user.cpp too
  // this user method will outputs "I am a teacher" 
  // instead of "I am a user" because of the reference
  user.output();

  // create a student and reference it
  Student student;
  User& user2 = student;
  // this user2 is acts like as a student
  // "I am a student"
  user2.output();

  // passing a teacher to the func
  // func needs User
  // both User and Teacher
  // "I am a Teacher"
  // NOT "I am a user" !!!
  do_something(user);
  // passing a student to the func
  // func needs User
  // both User and Teacher
  // "I am a Student"
  // NOT "I am a user" !!!
  do_something(user2);
}