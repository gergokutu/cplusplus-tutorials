/*
Intro to function overloading

- when you create a function its defined in your program

Concept of overloading:

void do_stuff(int x)
void do_stuff(std::string x)

- not a problem, when you call do_stuff()
- which do_stuff to call will be decided by the passed argument
- overloaded funcionality
- it's not universal across all programming languages
- in C++ the return type is not part of determining if a function is unique
- Unique function? >>
- is this a valid overload is known as the method signature
- each of the do_stuff functions has a unique method signature
- but the return type is not part of that signature
- so >>
  int do_stuff(int x)
  void do_stuff(int x)
  (NOT OK!!! they are not unique functions)

  OK:
  double area (int length)
  double area (int length, int width)
  double area (Rectangle rectangle)
  (but better not to design this way your application...)
...
*/