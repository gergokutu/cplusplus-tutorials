/*
Pass By Reference and Pass By Value
>> passing arguments to functions

Pass by value:

void do_stuff(int x) // arg x
{
  x = 13; // arg x
}
int x = 5; // outside x
do_stuff(x);

- outside x = 5 is copied into x variable (func argument) and be used inside the function body
- both outside x and argument x equals to 5
- after calling do_stuff >> outside x = 5 and arg x = 13

arrays are exception >> Pass by pointer (decay to pointer):
- inside the memory we have an array
- and it has some data
- when pass it to a function
- the function gets a pointer
- which points at the memory location of the array
- decays to a pointer >>
- just points at the first element
- and lose the type info ( e.g the array length)

Pass by reference:
- similar to the way how arrays decay to a pointer
- we have to say it explicitly that we want to do it
- difference >> 
- doing it manually (&data)
- not losing type info

void do_stuff(int &x) // arg x
{
  x = 13; // arg x
}
int x = 5; // outside x
do_stuff(x);

- if we want to change outside x >> 13
- we have to pass it by reference (&x) // it could be anything else than x, e.g pista...
- because in this case the outside x and arg x
- refer to the same memory location

Conclusion:
- only array can be changed inside a function
- anything else (e.g. vector) should be passed by reference to do so
*/
#include <iostream>

void do_stuff(int &pista) // arg x = arg pista
{
  pista = 13; // arg x = arg pista
}

int main()
{
  int x = 5; // outside x
  do_stuff(x);

  std::cout << x << "\n"; // 13

  return 0;
}
