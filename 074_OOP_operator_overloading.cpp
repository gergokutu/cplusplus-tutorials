/*
Operator overloading
- with operator overloading we can define >
- what the operator does
- in case of our custom types
- e.g coordinates > Point class > Point1(x, y) + Point2(x, y)...
- we have to teach the computer for it inside the class
- a different way of writing functions

e.g. > adding Points > coordinates

Point operator + (Point position)
{
  Point point;
  point x = x + position.x;
  point y = y + position.y;
  return point;
}
*/

// operator overloading == and +
#include <iostream>

class Position
{
  public:
    int x = 10;
    int y = 20;

    // teach the compiler how to add 2 Position to each other
    Position operator + (Position pos)
    {
      Position new_pos;
      // x > the respective objects x (e.g pos1.x, public x, now > 10)
      // this instances x
      // pos.x > this operator overloads pos argument x
      // the parameter's x
      new_pos.x = x + pos.x;
      new_pos.y = y + pos.y;
      return new_pos;
    }
};

int main()
{
  Position pos1, pos2;
  Position pos3 = pos1 + pos2;
  std::cout << pos3.x << " " << pos3.y << std::endl; // 20 40

  return 0;
}