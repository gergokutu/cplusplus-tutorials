#ifndef TEACHER_H
#define TEACHER_H

#include <vector>
#include <string>
// include the User class header file
#include "user.h"

// inherit Teacher class from User
class Teacher : public User
{
  public:
    std::vector<std::string> classes_teaching;
    void output();

    // chain of calling
    // create Teacher default constructor
    Teacher();
};

#endif