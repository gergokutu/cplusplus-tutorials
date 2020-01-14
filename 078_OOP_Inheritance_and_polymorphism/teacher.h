#ifndef TEACHER_H
#define TEACHER_H

#include <vector>
#include <string>

// inherit Teacher class from User
class Teacher : public User
{
  public:
    std::vector<std::string> classes_teaching;
    void output();
};

#endif