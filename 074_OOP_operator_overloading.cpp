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